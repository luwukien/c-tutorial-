#include <stdio.h>
#include <stdlib.h>

// Tính n! = 1.2.3.4.5.6.7....n (n >= 0)
// IPO
// I: input n
// P: n = 1.2.3....
// O: print result factorial n! = ?
int main(int argc, char *argv[]) {
	
	printf("Welcome MathHelper. This program helps you calc a random factorial n\n");
	
	int n, result = 1; 
	printf("Please input n = "); 
	scanf("%d", &n);
	

	for (int i = 1; i <= n; i++)
		result *= i;
	printf("The factorial of %d is %d", n, result);
	
	if (n < 0)
		printf("Please input input again n >= 0");
	
	else if (n == 0)
		printf("The factorial of 0 is 1");
	
// chưa hoàn thành xong c2
//		for (int i = n; i = 1; i--)			
//			result = i * (i - 1);		
//	printf("%d",result);					
			
	return 0;
}