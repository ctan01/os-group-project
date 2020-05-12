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


void printLastFourCommands(char* cmdHistory[]){
	printf("\n Last four commands : ");

	for(int i = 0; i < 4; i++){
			printf("%s\n", cmdHistory[i]);
	}

	printf("\n");
}



int main(int argc, char* argv[]){

	printLastFourCommands(argv);
	
	//list all content in current directory
	printf("\n List of content in cur dir : ");

	system("ls -l");

	return 0;
}




/*#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	// print last 4 commmands
		printf("\nargument: %s, %s, %s", argv[0], argv[1], argv[2]);
   	printf("\n Last four commands : ");

   	system("history 4");
   		
   	printf("\n");
  
	//list all content in current directory
	printf("\n List of content in cur dir : ");

	system("ls -l");

	return 0;
}*/








