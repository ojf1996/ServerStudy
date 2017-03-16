#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <unistd.h>

const int MYPORT = 8000; 	/*开放的端口号*/
const int BACKLOG = 5;  	/*指定套接字可以接受的最大未接受客户机请求的数目*/

int main(int argc, char *argv[])
{
    int server_sockfd;
    int client_cockfd;
    struct sockaddr_in my_addr;
    struct sockaddr_in new_addr;
    unsigned int sin_size;

    char buf[BUFSIZ];
	int len;

	//  socket
    if ((server_sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
		printf("error: create socket fail");
		exit(1);
    }

    memset(&my_addr, 0, sizeof(my_addr));
    my_addr.sin_family = AF_INET;	 //IPV4
    my_addr.sin_addr.s_addr = INADDR_ANY; //允许连接到所有本地地址上
    my_addr.sin_port = htons(MYPORT);


	// bind
    if (bind(server_sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr)) < 0)
    {
		printf("error: bind fail");
		exit(1);
    }

	// listen
    if (listen(server_sockfd, BACKLOG) < 0)
    {
		printf("error: listen fail");
		exit(1);
    }


    while (1)
    {

		// accept
		sin_size = sizeof(struct sockaddr_in);
		if ((client_cockfd = accept(server_sockfd, (struct sockaddr *)& new_addr, &sin_size) ) == -1)
		{
		    printf("error: accpet fail");
			continue;
		   // exit(1);
		}

	// 接受请求，自定义操作

	
		// recv
		len = recv(client_cockfd,buf,BUFSIZ,0);
		buf[len] = '\0';
		printf("recv message: %s \n",buf);
		close(client_cockfd);

    }


	close(server_sockfd);
}
