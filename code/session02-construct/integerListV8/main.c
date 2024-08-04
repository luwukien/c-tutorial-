#include <stdio.h>
#include <stdlib.h>

// tính tổng của dãy số 1 + 2 + 3 ... + 100
// tính tổng các số của 1-> 100 các số nguyên
// IPO
// I: đéo cần đầu vào
// P: tính tổng cộng dồn 1 -> 100
// O: in ra tổng, cần một biến value 
int main(int argc, char *argv[]) {
	
	printf("We will calc sum from 1 to 100, and print result\n");
	
	int acc = 0;// accumulation -  tích lũy, gom góp, cộng dồn // CỰC KÌ QUAN TRỌNG NẾU KHÔNG 
	// KHAI BÁO VÀ GÁN BIẾN = 0 THÌ SẼ THÀNH GARBAGE VALUE sẽ vỡ con mẹ mồm
	
	for (int i = 1; i <= 100; i++) //nhớ đừng nhầm lẫn giữa python và C ở phần cuối của biến for
		acc += i;
		
	printf("Sum from 1 to 100 is %d", acc);
	
	
	
	
	return 0;
}