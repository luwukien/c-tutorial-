#include <stdio.h>
#include <stdlib.h>

//tìm phần tử lớn nhất trong mảng hai chiều này
//nhập một phần tử gồm 3 hàng và 4 cột rồi tìm phần tử lớn nhất
//3 4 

//1 2 3 4 
//6 5 44 3
//10 5 13 7

int checkPrime(int n);

int main(int argc, char *argv[]) {
	int n, m;
	printf("Input rows and columns: ");
	scanf("%d%d", &n, &m);
	int a[n][m];
	
	//nhập phần tử trong cái mảng này
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("input row %d and column %d: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	int res = INT_MIN;
	int count;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
//			printf("%d ", a[i][j]);
			if (checkPrime(a[i][j]))
				count++;	
		}
//		printf("\n");
	}
	
//	printf("%d", res);
	printf("%d", count);
	
	
	return 0;
}

int checkPrime(int n) {
	for (int i = 2; i < sqrt(n); i++)
		if (n % i == 0) return 0;
	return n > 1;
	
}

