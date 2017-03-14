#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<pthread.h>

const static int DengLu = 0;  //登录
const static int ZhuChe = 1;  //注册
const static int ChuShiLiaoTian = 2; //初始聊天
const static int FaSongChengGong = 3; //聊天消息发送成功
const static int FaSongShiBai = 4; //聊天消息发送失败，使用服务器中转
const static int quit = 5; //退出


struct Message
{
	int type;
	char _message[255];
};

//处理注册事物
void handleRegister(char* info)

//for connect handling
void * 
handleConnect(void * clientSockfd)
{

}



int main(int argc, char * argv[])
{
	int server_sockfd;
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
		
	}
}
