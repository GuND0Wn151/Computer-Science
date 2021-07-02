#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main(){
	int pid;
	pid=fork();
	if(pid<0)
	printf("Fork Funtion failed");
	else if (pid>0){
		printf("Parent process\n");
		printf("parend id %d\n",getpid());
		wait(NULL);
		printf("Child completed\n");
	}
	else{
		printf("Child process running\n");
		printf("Child id is %d and parent id is %d\n",getpid(),getppid());
		execlp("bin/ls","ls",NULL);
	}


}
