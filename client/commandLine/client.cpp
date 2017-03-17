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


const int MYPORT = 8000; 	//开放的端口号

int main(int argc, char *argv[])
{
	
    int client_sockfd;
    struct sockaddr_in server_addr;


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

	char receiveStr[BUFSIZ];
	char sendStr[BUFSIZ];
	int len;
	while((len = read(client_sockfd,receiveStr,BUFSIZ)) > 0)
	{
		printf("server say: %s\n",receiveStr);
		fgets(sendStr,BUFSIZ,stdin);
		write(client_sockfd,sendStr,strlen(sendStr));
		printf("client say: %s\n",sendStr);

		memset(receiveStr,'\0',BUFSIZ);
		memset(sendStr,'\0',BUFSIZ);
	}

	printf("close\n");
	close(client_sockfd);
}
