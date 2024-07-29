#include <stdio.h>
#include <stdlib.h>

// write a program to calc a random rectangle 


int main(int argc, char *argv[]) {
	
	int width, length, area; // use integer
	
	printf("You are required to input the size of rectangle\n");
	printf("Input the width: ");
	scanf("%d", &width);
	
	printf("Input the length: ");
	scanf("%d", &length);
	
	area = width * length;
	
	printf("the area of a rectangle (%d, %d) is %d\n", width, length, area);


	
	
	return 0;
}