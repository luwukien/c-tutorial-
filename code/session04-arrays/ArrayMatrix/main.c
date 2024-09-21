#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	// dataTypes ArrayName[x][y];
	int n, m;
	
	printf("Nhap so luong hang va cot cho mang 2 chieu");
	scanf("%d%d", &n, &m);
	
	int a[n][m];
	
	// nhập phần tử cho từng hàng từng cột
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Nhap gia tri cho tung phan tu o hang %d. cot %d :", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	// in ra mảng hai chiều
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
	
	
//	long long a[2][3] = {{1, 2, 3}, {4, 5, 6}};
//	for (int i = 0; i < 2; i++)	{
//		for (int j = 0; j < 3; j++) {
//			printf("%lld ", a[i][j]);
//		}
//		printf("\n");
//	}
	return 0;
}