#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <unistd.h>

const int MYPORT = 8000; 	//开放的端口号
const int BACKLOG = 5;  	//指定套接字可以接受的最大未接受客户机请求的数目

int main(int argc, char *argv[])
{
    int server_sockfd;
    int client_sockfd;
    struct sockaddr_in my_addr;
    struct sockaddr_in new_addr;
    

	//  socket
	printf("socket\n");
    if ((server_sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
		printf("error: create socket fail");
		exit(1);
    }

	// 允许端口立即重用
	int on = 1;
	setsockopt(server_sockfd,SOL_SOCKET,SO_REUSEADDR,&on,sizeof(on));

    memset(&my_addr, 0, sizeof(my_addr));
    my_addr.sin_family = AF_INET;	 //IPV4
    my_addr.sin_addr.s_addr = htonl(INADDR_ANY); //允许连接到所有本地地址上
    my_addr.sin_port = htons(MYPORT);


	// bind
	printf("bind\n");
    if (bind(server_sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr)) < 0)
    {
		printf("error: bind fail");
		exit(1);
    }

	// listen
	printf("listen\n");
    if (listen(server_sockfd, BACKLOG) < 0)
    {
		printf("error: listen fail");
		exit(1);
    }


    while (1)
    {

		// accept
		unsigned int sin_size = sizeof(struct sockaddr_in);
		printf("accept---\n");
		if ((client_sockfd = accept(server_sockfd, (struct sockaddr *)& new_addr, &sin_size))  == -1)
		{
		    printf("error: accpet fail");
			continue;
		   // exit(1);
		}

		// 接受请求，自定义操作
		pid_t pid = fork();

		if(pid == 0) // 子进程
		{

			close(server_sockfd);//只是减少引用值
			
	     	char receiveStr[BUFSIZ];
	     	char sendStr[BUFSIZ];
			int len;

			write(client_sockfd,"connected! I am server.",23);
			while((len = read(client_sockfd,receiveStr,BUFSIZ)) > 0)
			{
				printf("client say: %s\n",receiveStr);
				fgets(sendStr,BUFSIZ,stdin);
				write(client_sockfd,sendStr,strlen(sendStr));
				printf("server say: %s\n",sendStr);

				memset(receiveStr,'\0',BUFSIZ);
				memset(sendStr,'\0',BUFSIZ);

			}
			exit(0);

		}
		else if(pid > 0) // 父进程
		{
			printf("I am the father\n");

		}
		else
		{
				printf("fork error!!\n");
		}
	
		close(client_sockfd);

    }


	close(server_sockfd);
}
