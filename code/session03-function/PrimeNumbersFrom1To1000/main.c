#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Pirnt Prime Numbers From 1 To 1000
//IPO
//I: đéo cần gì cả
//P: cho vòng for chạy từ 1... 1000: 
// 								 	viết hàm tìm đâu là số nguyên cái đã
// 									sau đó mình cho vòng for chạy từ 1  -> 1000
//									in ra cái số mà thỏa mãn điều kiện: thì bố mày in ra thôi :))) nghe đơn giản vl
//O: in ra thôi :))))))))keke

int printPrimeNumbers(int num);

int main(int argc, char *argv[]) {
	
	for (int i = 1; i <= 1000; i++)
	{
		printf("%d\t", printPrimeNumbers(i));		
	}
	
	return 0;
}

int printPrimeNumbers(int num)
{

	if (num == 0 || num == 1)
		return ;
	if else (num == 2)
	else
	{
		for (int i = 2; i * i <= num; i++)
			if (num % i == 0)
			{
				flag = 0;
				break;		
			}
	}
	
	if (flag != 0)
		return num;

}