#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>


const int MYPORT = 8000; 	/*开放的端口号*/
const int BACKLOG = 5;  	/*指定套接字可以接受的最大未接受客户机请求的数目*/

int main(int argc, char *argv[])
{
    //int server_sockfd;
    int client_sockfd;
    struct sockaddr_in server_addr;

    char buf[BUFSIZ] = "hello world from client";
	int len;


	if(argc != 2)
	{
		printf("usage: ./client <ipaddress>\n");
		exit(1);
	}

	//  socket
	printf("socket\n");
    if ((client_sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
		printf("error: create socket fail");
		exit(1);
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;	 //IPV4
//    server_addr.sin_addr.s_addr = INADDR_ANY; //允许连接到所有本地地址上
    server_addr.sin_port = htons(MYPORT);

	printf("inet_pton\n");
	printf("%s\n",argv[1]);
	if(inet_pton(AF_INET,argv[1],&server_addr.sin_addr) <= 0)
	{

		printf("inet_pton failed!\n");
		exit(1);
	}


	// connect
	printf("connect\n");
	if( connect(client_sockfd,(struct sockaddr *)&server_addr,sizeof(server_addr)) < 0)
	{
			printf("connect error!Error:%s(error:%d)\n",strerror(errno),errno);
			exit(1);
	}

	// 连接成功了，下面开始发送消息

	
	// send
	printf("send\n");
	if( send(client_sockfd,buf,strlen(buf), 0) < 0)
	{
		printf("send msg error\n");
		exit(0);
	}


	printf("close\n");
	close(client_sockfd);
}
