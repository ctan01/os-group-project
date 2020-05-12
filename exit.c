#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <string.h>
#include <sys/wait.h>

void printLastFourCommands(int argc, char *argv[])
{
	int count = 0;
	for (int i = argc - 2; i >= 0; i--) {
		if (count < 4) {
			printf("%s\n", argv[i]);
			++count;
		}
		else {
			break;
		}
	}
}

void terminate(){
	printf("\n press return key to terminate shell \n");

	while(1){
		char c = getchar();
		if(c == '\n'){
			break;
		}

	}

	pid_t parent = getppid();
	kill(parent,2);
}



int main(int argc, char* argv[]){

	printf("\n Last 4 commands : \n");

	printLastFourCommands(argc, argv);

	//list all content in current directory

	system("ls -l");

	terminate();

	return 0;
}








