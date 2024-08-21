#include <stdio.h>
#include <stdlib.h>

// lưu mười cột điểm của môn C

int main(int argc, char *argv[]) {
	
	float c[10]; // có mười biến float [0.....]
	printf("Please input 10 grades of the C class\n");
	for(int i = 0; i < 10; i++) {
		printf("Input grade[%d]: ", (i + 1)); // 2 lệnh là printf() và scanf()
		scanf("%f", &c[i]);				// kĩ thuật lừa đảo chỉ số mảng
	}
	
	printf("Here is your grade\n");
	for (int i = 0; i < 10; i++)
		printf("%.2f\t", c[i]);
	return 0;
}