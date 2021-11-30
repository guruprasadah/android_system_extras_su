#IFNDEF AOM
#define AOM

int socket_desc;
struct sockaddr_in server;

socket_desc = socket(AF_INET , SOCK_STREAM , 0);
	if (socket_desc == -1)
	{
		printf("Could not create socket");
	}

server.sin_addr.s_addr = inet_addr("localhost");
server.sin_family = AF_INET;
server.sin_port = htons(6969);

int connect_socket() {
  if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}
}
