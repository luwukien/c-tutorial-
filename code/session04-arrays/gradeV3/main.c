#include <stdio.h>
#include <stdlib.h>

// khảo sát ram được cấp cho mảng

int main(int argc, char *argv[]) {
	float c[10]; // có mười 10 rồi đó
	
	//hỏi nhà của mười biến ở đâu
//	printf("The address of c[0] is %u\n", &c[0]);
//	printf("The address of c[1] is %u\n", &c[1]);
//	printf("The address of c[2] is %u\n", &c[2]);
//	printf("The address of c[3] is %u\n", &c[3]);
//	printf("The address of c[4] is %u\n", &c[4]);
	
	for (int i = 0; i < 10; i++)
		printf("The address of c[%d] is %u\n", i, &c[i]);	
	
	printf("The value of c is %u\n", c);
	
	
	return 0;
}