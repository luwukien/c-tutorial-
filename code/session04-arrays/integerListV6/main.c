#include <stdio.h>
#include <stdlib.h>

// nhập từ bàn phím mảng 10 số nguyên bất kì. Hỏi rằng có bao nhiêu số chẵn || tính tổng các số lẻ
// IPO

// 5 10 15 20 25 30 35 40
// IPO
// I: in mảng
// P: duyệt mảng, [i] mày chẵn không
// O: số con số chẵn, có ấy chẵn count

int main(int argc, char *argv[]) {
	int n[10], sumOdd = 0, evenCount = 0; // VIP

	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1)); // lừa đảo số thứ tự với user
		scanf("%d", &n[i]);
		
	}
	// in mảng
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", n[i]);
	printf("\n");
	// quét mảng, cùng lúc làm nhiều việc, đếm số chẵn, tính tổng lẻ,..
	// vì mỗi lần quét mảng là ta có value của thứ [i], và ta có quyền làm gì với biến [i] này mà
	for (int i = 0; i < 10; i++) {
		// hỏi từng [i] một coi mày là gì??
		if (n[i] % 2 == 0)
			evenCount++; // gặp một thằng chẵn cộng lên vào
		else
			sumOdd += n[i]; // nếu mày gặp thằng lẻ, + luôn value thằng lẻ
	}						// nhồi heo đất
	
	printf("there is/are %d even number(s) in this array\n", evenCount);
	printf("The sum of odd number(s) in this array is: %d\n", sumOdd);

	
	return 0;
}