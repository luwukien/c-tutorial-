#include <stdio.h>
#include <stdlib.h>

//

int main(int argc, char *argv[]) {
	
	int a[5] = {5, -10, -15, 20, -25};
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; addr: %u\n", i, a[i], &a[i]);
	// tên mảng là biến/ biến con trỏ/ chốt số nhà thằng đầu mảng
	// hỏi hari có gì, em có ví, có tọa độ ví. Xem ví có gì
	printf("A stores/holds the value: %u\n", a);
	
	// khi tôi biết tên mảng là con trỏ, trỏ thằng đầu dãy
	// tui có thể vào nhà thằng đầu dãy *hari
	printf("a[0] = %d\n", *a); //5
	printf("a[1] = %d\n", *(a + 1));
	
	// sửa value mảng được không, được, sờ được biến thì dư sức sửa
	// a[1] = 69;
	
	*(a + 1) = 69; // từ đầu mảng, +1 địa chỉ. vào địa chỉ đó
					// sử value, a[1] = 69;
	
	printf("Array after 69\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; addr: %u\n", i, a[i], &a[i]);	
	//a++ không được phép và ctrinh báo lỗi
	
	//chơi thử với Hari cái coi
	
	int* hari;		
	
	//hari = &a[0]; &a[1];
	
	hari = a;
	// in thử mảng cái coi
	printf("\nThe array has values (via Hari):\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", *(hari + i)); // hari vẫn chốt đầu mảng như a
		//printf("%d\t", *(hari++)); // hari trỏ lần lượt đến đáy mảng thì dừng
		//printf("%d\t", *(a++));
		
	printf("Believe or not? Hari now points to: %u\n", --hari);
	printf("Believe or not? The last element of array: %d\n", *hari);
	return 0;
}