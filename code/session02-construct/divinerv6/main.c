#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
	
	char fL;
	printf("Welcome to Lenovo diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	scanf("%c", &fL);		
	fL = toupper(fL); 							
	if (fL == 'A')
		printf("Never joke");

	else 
		if (fL == 'B')			  
			printf("Introvert");			
		else 
			if (fL == 'C')
				printf("Friendly");				
			else				
				printf("Comming soon!!!!\n");									
	return 0;
}