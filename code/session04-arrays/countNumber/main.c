#include <stdio.h>
#include <stdlib.h>

// đếm số lần số 10 xuất hiện trong dãy do người dùng nhập 10 số nguyên

int main(int argc, char *argv[]) {
	int arrNum[10], acc = 0;
	printf("The programming will count number 10 existed!!!\n");
	
	//Input n
	for (int i = 0; i < 10; i++) {
	printf("Input your numbers #%d: ", (i + 1));
	scanf("%d", &arrNum[i]);		
	}
	
	//count n
	for (int i = 0; i < 10; i++)
		if (arrNum[i] == 10)
			acc++;
	printf("There are %d numbers 10 in the list integer from user inputted\n", acc);
	
	
	return 0;
}
//DONE




