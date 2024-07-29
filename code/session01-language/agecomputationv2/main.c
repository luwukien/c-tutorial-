#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// write a small app to calc yob
// formula to calc yob: age=  year now -yob 
int main(int argc, char *argv[]) {
	
	int yob, age;
	// a variable assign non-value is a radom value such as 0, 12, ... ---> GARBAGE VALUE
	// cause risk for app because falsue value
	// diff btw c and java. declare a var is none in Java, so program error
	// test
	// printf("your yob is %d\n", 	&yob);
	
	printf("Please input your yob: ");
	scanf("%d", &yob);
	// %d is a format specifier in C programing which act as a placeholder 
	
	age = 2024 - yob;
	
	printf("As I guess, your are %d years old\n", age);
	
	return 0;
}