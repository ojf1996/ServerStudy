#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int main(int argc, char * argv[])
{
	int server_sockfd;
	int client_cockfd;
	int len;
	struct sockaddr_in my_addr;
	struct sockaddr_in remote_addr;
	int sin_size;
	char buf[BUFSIZ];
	memset[&my_addr,0,sizeof(my_addr)];
	my_addr.sin_family = AT_INET; //IPV4
	my_addr.sin_addr.s_addr = INADDR_ANY; //允许连接到所有本地地址上
	my_addr.sin_port =htons(8000);

	int server_sock = 0;
	if( (server_sockfd = socket(AF_INET,SOCKET_STREAM,0)) < 0 )
	{
		printf("error: create socket fail");
		exit(1);
	}

	if( bind(server_sockfd,(struct sockaddr *)&my_addr,sizeof(struct sockaddr)) < 0)
	{	
		printf("error: bind fail");
		exit(1);
	}

	//实验性队列容量只有5个
	if( listen(server_sockfd,5) < 0 )
	{
		printf("error: listen fail");
		exit(1);
	}

	while(true){
		if(client_cockfd = accept(server_sockfd, (struct sockaddr* )&remote_addr, sizeof(remote_addr)) < 0)
		{
			printf("error: accpet fail");
			exit(1);
		}
		// 自定义
	}
}
