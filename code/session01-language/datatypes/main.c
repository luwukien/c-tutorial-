#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 10, b = 3;
	
//	printf("The number a is %d\n",a);
//	printf("The number b is %d\n",b);
//	
//	printf("addr of a: %u; addr of b: %u", &a, &b);

//	int a = 69; // var a is duplicated
//	printf("Print a:", a);

//	print("c = %.1lf; d = %.3lf\n", c, d);
 	printf("addr of a: %u; addr of b: %u", &a, &b);

// C cung cấp một lênh để hỏi CPU rằng,một data type bất kì chiếm mấy byte
	printf("The number of bytes allocated of an int: %d\n", sizeof(int));
	int size = sizeof(int); // this is a function 
	printf("the number of bytes allocated of an double: %d\n", sizeof(double)); 

	//Using long
	int m = -2200000000; //%d
	int money = 3000000000; //%ld
	printf("The amount 1: %d\n", m);
	printf("The amount 2: %d\n", money);
	
	
	
	
	return 0;
}