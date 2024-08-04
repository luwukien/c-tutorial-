#include <stdio.h>
#include <stdlib.h>

// tính tổng của dãy số 1 + 2 + 3 ... + n
// tính tổng các số của 1-> n (các số nguyên) (n > 1)
// IPO
// I: nhập n
// P: tính tổng cộng dồn 1 -> n
// O: in ra tổng, cần một biến value 
int main(int argc, char *argv[]) {
	
	printf("We will calc sum from 1 to n, and print result\n");
	
	int acc = 0, n;// accumulation -  tích lũy, gom góp, cộng dồn // CỰC KÌ QUAN TRỌNG NẾU KHÔNG 
	// KHAI BÁO VÀ GÁN BIẾN = 0 THÌ SẼ THÀNH GARBAGE VALUE sẽ vỡ con mẹ mồm
	
	for (;;)
	{
		printf("Please input n > 1: ");
		scanf("%d", &n);
		
		if (n <= 1)
			printf("Do you know how to input an integer >1?\n");
		else
			break;
	}	//valiadation: đảm bảo tính hợp lệ 
	// nếu n cà chớn, bảo nhập > 1, gõ -5, 0, chửi !!!
	for (int i = 1; i <= n; i++) //nhớ đừng nhầm lẫn giữa python và C ở phần cuối của biến for
		acc += i;		
	printf("Sum from 1 to n is %d", acc);


	return 0;
}