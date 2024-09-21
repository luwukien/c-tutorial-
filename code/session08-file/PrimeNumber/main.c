#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Ghi vào file prime.txt các số nguyên tố từ 1 tới 200, mỗi dòng tối đa 10 số

//Ví dụ 2 : Đọc mảng số nguyên từ file input.txt và ghi vào file output.txt các số nguyên tố trong dãy
//
//File input.txt có khuôn mẫu : Dòng đầu tiên là số lượng phần tử trong mảng, dòng thứ 2 là các số trong mảng
//
//10
int getPrimeNumber(int num);

int main(int argc, char *argv[]) {
	int acc;
	FILE *f1, *f2;
	f1 = fopen("prime.txt", "r");
	
	if (f1 == NULL) 
		printf("Cannot this file!!");
	else {
		int n;
		f2 = fopen("primeOUTPUT.txt", "w");
		fscanf(f2, "%d", &n);
		
		for (int i = 1; i <= n; i++)
			if (getPrimeNumber(i) == 1) {
				acc++;
				fprintf(f2, "%d ", i);
			if (acc % 10 == 0) 
				fprintf(f2, "\n");			
		}
	
	}
	fclose(f2);
	return 0;
}

int getPrimeNumber(int num) {
	if (num < 2)
		return 0;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)
			return 0; 
	}
	return 1;
}