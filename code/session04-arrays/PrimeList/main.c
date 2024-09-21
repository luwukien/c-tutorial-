#include <stdio.h>
#include <stdlib.h>

// cho một mảng các số tự nhiên (nguyên dương)
/// in ra những số nguyên tố xuất hiện trong mảng
// ví du: cho mảng: 5, 10, 15, 20, 3, 45, -12, 23, 13, 7

// nguyên tố: 5, 7, 11, 13, 23
// duyệt mảng là đi qua phần tử thứ i của mảng
// đều hỏi đi hỏi lại, [i] có phải là số nguyên tố hay không
// vấn đề lớn:tim và in các ố nguyên tố
// vấn đề nhỏ: tìm 1 số có phải là số nguyên tố hay  không?
// HÀM KIỂM TRA 1 SỐ CÓ PHẢI SỐ NGUYÊN TỐ HAY KHÔNG
// IPO
// I: đầu vào
// P:
// O: có là số nguyên tố hem> return value

int isPrime(int n); // hàm loại 4, reuse cực tốt
// mày đưa n ta trả về 1 con số int 
// quy ước 0: éo là số nguyên tố
// quy ước 1: là số nguyên tố
// y = isPrime(5) = 1
// y = isPrime(10) = 0


// hàm nhận vào một mảng số +. và kích thước mảng
// hàm in ra  các số nguyên tố trong mảng
void printPrimeList(int a[], int size);

int main(int argc, char *argv[]) {
	
//	printf("23? 5d\n", isPrime(23));
//	printf("101? %d\n", isPrime(101));
//	printf("99? %d\n", isPrime(99));	
	
	int a[] ={5, 10, 15, 20, 3, 45, -12, 23, 13, 7};
	printPrimeList(a, 8);	
	return 0;
}


// n là số nguyên tố nếu: nó Chỉ có 2 ước số: chỉ 1 và chính nó
// thuật toán đếm số ước số!!!
// if n chia 1, chia 1 dư 0, %1 == 0, thì 1 US heng
// if n chia 2, chia 2 dư 0, %2 == 0, thì 1 US heng
// ...

int isPrime(int n) {
	int divisorCount = 0; // số các ước số ban đầu là 0, nhồ con heo đất
	
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			divisorCount++;
	// ngoài for 
	if (divisorCount == 2)
		return 1;
//	else 
	return 0;
		
}

void printPrimeList(int a[], int size) {
	printf("The array has values of\n");
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
	
	// quét từng mảng lôi từng thằng ra hỏi
	printf("\nThe list of prime numbers in this array is\n");
	for (int i = 0; i < size; i++)
		if (isPrime(a[i]) == 1)	
			printf("%d ", a[i]);
}