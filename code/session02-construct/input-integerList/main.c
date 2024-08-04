#include <stdio.h>
#include <stdlib.h>

// - Nhập 1 dãy số 1, 10, 45, -5, 100, ....
//	+ đếm xem đã nhập bao nhiêu số // 
//	+ đếm xem đã nhập bao nhiêu số chẵn, bao nhiêu số lẻ
//	+ hỏi xem đã có nhập mấy số 5
//	+ tổng của đám dãy số chẵn
//	+ tổng của đám chia hết cho 3
//	+ có số 10 xuất hiện trong đám đã nhập hay không?

// IPO
// I: nhập n dãy số nguyên(cách nhau một line), vô hạn số lần dùng biến count 
// P: để đếm được số nguyên đã nhập thì ta dùng count++
//   -
// O:
int main(int argc, char *argv[]) {
	
	int count, numbers; 
	
	printf("Welcome my application> Please input a integer list(enter a non-integer to stop program!!!)\n");
	
	
	while (scanf("%d", &numbers) == 1) //rarely address  == 1 in programming	
		{	
		count++;
		}
		
	printf("The integer numbers is  %d\n", count);
	



	
	
	
	
	
	
	return 0;
}