#include <stdio.h>
#include <stdlib.h>

// app nhỏ tìm giá trị lớn nhất trong 3 con số 

int main(int argc, char *argv[]) {
	
	
	
	int a, b, c, max;
	printf("Find max btw threee num\n");
	printf("Input three integers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	max = a; // có thể đúng, hoặc sai khi nói max là a
	// sai thì sửa, phát flag, sự lại suy đoán
	if (b > max)
		max = b;
	if (c > max)
		max = c;
		
	printf("Max number btw %d %d %d is %d\n", a, b, c, max);
	
	
	
	
	
	
	
	
	

	return 0;
}