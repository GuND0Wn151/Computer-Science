#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
void main(){
	int n,pf1[2],pf2[2];
	pid_t pid;
	char msg[100];
	if(pipe(pf1)==-1)
	printf("pipe creation failed \n");
	if(pipe(pf2)==-1)
	printf("Pipe creation failed\n");
	pid = fork();
	
	if(pid>0){
		close(pf1[0]);
		close(pf2[1]);
		printf("Enter message (Client)--->Parent\n");
		scanf("%s",msg);
		write(pf1[1],msg,strlen(msg)+1);
		sleep(5);
		read(pf2[0],msg,100);
		printf("Data from other side %s\n",msg);
	}
	else{
		close(pf2[0]);
		close(pf1[1]);
		sleep(3);
		read(pf1[0],msg,100);
		printf("Data recieved %s\n",msg);
		sleep(3);
		printf("Enter msg to server\n");
		scanf("%s",msg);
		printf("enter the msg to parent (Server) --->child\n");
		scanf("%s",msg);
		write(pf2[1],msg,strlen(msg)+1);
	
	}


}
