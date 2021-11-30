#IFNDEF AOM
#define AOM

int socket_desc;
struct sockaddr_in server;

struct app {
	int uid;
	const char* pkg;
};

socket_desc = socket(AF_INET , SOCK_STREAM , 0);
	if (socket_desc == -1)
	{
		ALOGD("Socket creation failed");
	}

server.sin_addr.s_addr = inet_addr("localhost");
server.sin_family = AF_INET;
server.sin_port = htons(6969);

int connect_socket() {
  if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
	{
		ALOGD("Socket connection failed");
		return 1;
	}
}

int request(struct app application) {
	send(socket_desc , application, sizeof(application), 0);
}
