#include <stdio.h>
#include <stdlib.h>

//Viết app nhỏ để xếp loại tốt nghiệp đại học bằng tiếng anh
//IPO
//I: Input your average score - 1 biến
//P:  dùng lệnh if so sánh
//O: In ra kết loại tốt nghiệp gì
int main(int argc, char *argv[]) {
	
	float averageScore;
	printf("Welcome sort of your graduation score program\n");
	printf("Please input your graduation score: ");
	scanf("%f", &averageScore);
	
	if (8.5 < averageScore && averageScore <= 10)
		printf("Sort of your graduation score %.2f: EXCELLENT(A)", averageScore);		
	else if (7.0 < averageScore && averageScore <= 8.4)
		printf("Sort of your graduation score %.2f: GOOD(B)", averageScore);
	else if (5.5 < averageScore && averageScore <= 6.9)
		printf("Sort of your graduation score %.2f: AVERAGE(C)", averageScore);
	else if (4.0 < averageScore && averageScore <= 5.4)
		printf("Sort of your graduation score %.2f: BELOW AVARAGE(D)", averageScore);
	else
		printf("Sort of your graduation score %.2f: WEAK(F)", averageScore);	

	return 0;
}