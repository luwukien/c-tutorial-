#include <stdio.h>
#include <stdlib.h>

//Viết app nho nhỏ in ra các số chẵn từ 1...100
//IPO
//I: đưa vào các con số từ 1 ... 100
//P: số nào %2 == 0 >> số chẵn
//O: in ra màn hình các con số ấy
int main(int argc, char *argv[]) {
	printf("The list of even numbers from 1...100\n");
	for (int i = 1; i <= 100; i++)

		printf("%d", i%2 == 0);
	
	printf("\n");
	
	for (int i = 1; i <= 100; i++)
		if (i % 2 == 0) // nếu đúng là i chia hết cho 2
						// thì in ra i này
			printf("%d\t", i);	

	return 0;
}