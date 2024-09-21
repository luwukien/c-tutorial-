#include <stdio.h>
#include <stdlib.h>

void printArray1(); // hàm này sẽ in ra 1 mảng các số nguyên

void printArrayHEAP();

void inputArray();

void inputArray2(); /// version linh hoạt số phần tử nhập

void inputArrayHEAP();


int main(int argc, char *argv[]) {
//	printArrayHEAP();
//	inputArray();
//	inputArray2();
	inputArrayHEAP();
	return 0;
}
void inputArrayHEAP() {
	int n;
	printf("How many numbers do you want to input?(HEAP)\n");
	scanf("%d", &n); // mày muốn bao nhiêu phần tử thì nhập vào
	
	int* hari = malloc(n * 4); //bội số của 4 vì lát hồi nhảy 4 - biến int
	//mảng n phần tử rồi
	printf("You are required to input n numbers\n");
	for (int i = 0; i < n; i++) {
		printf("Input a[%d]: ", (i + 1));
//		scanf("%d", &a[i]);
		scanf("%d", (hari + i));
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++)
		printf("%d ", hari[i]);
}

void inputArray2() {
	// mời nhập mảng từ bàn phím, kích thước mảng là bao nhiêu
	// sau khi hỏi bạn muốn mấy biến??
	int n;
	printf("How many numbers do you want to input?\n");
	scanf("%d", &n); // mầy muốn bao nhiêu phần tử thì nhập vào
	
	int a[n]; // tùy n mấy, mảng là mấy!!
	printf("You are required to input n numbers\n");
	for (int i = 0; i < n; i++) {
		printf("Input a[%d]: ", (i + 1));
//		scanf("%d", &a[i]);
		scanf("%d", (a + i));
	}
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

// nhập từ 1 mảng từ bàn phím
void inputArray() {
	int a[50];
	//mảng khai báo 50 vậy thì mình nên nhập bao nhiêu số? thích nhiêu thì nhiêu
	printf("You are required to input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input a[%d]: ", (i + 1));
//		scanf("%d", &a[i]);
		scanf("%d", (a + i));
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
}

// vùng nhớ oanh tạc tự do
void printArrayHEAP() {
	int* hari; // cần lắm luôn 1 địa chỉ, có thể là trỏ 1 biến int&ttt &td
				// cần lắm luôn 1 địa chỉ, có thể là đầu magnr a[] = {...}
				// con trỏ có thể trỏ biến đơn, biến đầu mảng
	hari = malloc(20); // xin 20 byte / 4 = 5 biến int
	
	hari[0] = 5;
	hari[1] = 43;
	hari[2] = 3;
	hari[3] = 4;
	hari[4] = 55;
	
	printf("The array has values of (dynamic array)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
		//printf("%d ", hari[i]);
	// CÂU LỆNH CỰC KÌ QUAN TRỌNG LÀ TRẢ LẠI VÙNG RAM CHO WIN SAU KHI CHẠY XONG
	free(hari); // trả lại vùng ram đang trỏ cho win sau khi chạy xong
				// HEAP trả lại cho win
				// hari nằm trong stack, win chủ động thu lại vùng ram này
	//NẾU KHÔNG FREE VÙNG MALLOC, mà cứ chạy app chạy hàm nhiều lần, vùng HEAP này sẽ cứ tăng dần
	// win nó sẽ không lấy lại được vùng ram đó sẽ dẫn tới hiện tượng leak memory
}

void printArray1() {
	int a[] = {5, -10, 25, 15, -15};
	printf("The array has values of(using [i])\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	

	// tên mảng còn là con trỏ, bắt buộc hốt/trỏ vào &a[0]
	// không cho trỏ lung tung chỗ khác như con trỏ khai báo *
	// a = &a[0]
	
	printf("\nThe array has values of (using *)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(a + i));
		
	int* p; //p = &của-ai-đó = địa chỉ/con số tọa dộ của biến int nào đó
	p = a;  // không ai cấm a = &a[0]
	//p = &a[0]; như nhau
	// a là con trỏ thuần chủng
	printf("\n");
	printf("The array has values of(using *p)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);	
		
	// con trỏ thuẩn chủng ngon hơn con trỏ tên mảng một  chút, nó được quyền
	//++ - -
	printf("\nThe array has values of (using *p v3)\n");
	for (int i = 0; i < 5; i++) {
		printf("%d", *p);	// p -> a[0]
		p++;			// p -> a[1] đi 1 căn p++ căn kế [2]
	}
	
	//kiểm tra địa chỉ
	printf("Checking addr\n");
	printf("The addr of all var in the arr\n");
	for (int i = 0; i < 5; i++)
		printf("addr of a[i]: %u\n", &a[i]);

	printf("\nFinally; p points to %u\n", p); 
	//kiểm tra thử coi có đúng p có đang dời trỏ
}