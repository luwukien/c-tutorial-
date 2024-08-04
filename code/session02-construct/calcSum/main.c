#include <stdio.h>
#include <stdlib.h>

//Tính tổng 1 + 2 + 3 + 4 + 5 + ..  +n
//IPO
// I: nhập số n đầu vào
// P: tính tổng các số từ 1 -> n
// O: In ra màn hình kết quả của bài toán

//done
int main(int argc, char *argv[]) {
	
	printf("Welcome to MathHelper application! We can calc sum a list 1 -> n\n");
 	int n, result;

 	printf("Please input n (n>=1) = ");
 	scanf("%d", &n);
 	
 	if (n < 1)
 		printf("Please input again! (n>=1)");
 	
 	for (int i = 1; i <= n; i++)
		result += i;
		
	printf("Sum a list 1 -> %d is %d", n, result);

	

	 
	 
	 
	 
	 
	 	
	
	return 0;
}