#include<stdio.h>
#include<unistd.h>

int main(){

	int val =fork();
	if(val==-1){
		printf("ERROR: Process can be created\n");	
	}
	
	else{
		if(val>1){
			printf("Parent: PID= %d, Child: PPID= %d\n",getpid(),getppid());
			sleep(10);		
		}
		else{
			printf("Parent: PID= %d, Child: PPID= %d\n",getpid(),getppid());	
			sleep(10);	
		}	
	}
	return 0;
}
