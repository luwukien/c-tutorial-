#include <stdio.h>
#include <stdlib.h>

// viết hàm tính tổng của các con số từ 1 .. 100

void sumIntegerList();

int main(int argc, char *argv[]) {
	sumIntegerList();
	return 0;
}

void sumIntegerList()
{
	int acc = 0; // PHẢI LƯU Ý RẰNG TRƯỚC KHI CỘNG DỒN THÌ PHẢI ĐỂ Ý CHO GIÁ
					// TRỊ GÁN BAN ĐẦU PHẢI BẰNG 0, TRÁNH ĐỂ GIÁ TRỊ RÁC THÌ TOANG VÃI L
	for (int i = 1; i <= 100; i++)
		acc += i;
	printf("The sum of 1 to 100 is %d", acc);
	
	//DONE
}
