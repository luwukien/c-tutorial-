#include <stdio.h>
#include <stdlib.h>

// viết hàm tính n!
// IPO
// I: Nhập vào n
// P: 1.2.3.4.5.6..n ->> nhồi kiểu nhân, không phải cộng
// O: kết quả nhân dồn!!!!
// chọn hàm loại mấy 
// viết thử cả 4

void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n); // soái ca, y = f(x) = x^2...


int main(int argc, char *argv[]) {
//	getFactorialV1();
//	getFactorialV2(6);
//	printf("%d", getFactorialV3());
//	printf("result = %d", getFactorialV3());

//	getFactorialV4(5); // ngầm trả về 120, éo thèm in
						// nếu in không reuse là tốt nhất
	printf("result = %d", getFactorialV4(5));
	return 0;
}
// ** GHI CHÚ QUAN TRỌNG VỀ LỆNH RETURN:
// - Nếu CPU chạm được vào lệnh return, thì nó sẽ kết thúc hàm ngay và luôn 
// không care các lệnh sau đó
// - Một hàm được quyền có bn lệnh return? 
// có hai style thiết kế hàm có trả về giá trị
// + hàm chỉ có duy nhất một lệnh return đặt ở cuối hàm. Để kiểm soát một value ở đầu ra.
// để cho nó nhất quán - Nhà 1 cửa EXIT (chuẩn mực)
// + (thực dụng)- hàm có nhiều lệnh RETURN có nhiều cửa thoat!!!! 
// chỗ nào đã được xđ được value của hàm, thì dùng luôn. không cần chờ đến cuối mới RETURN có
// được value trong bất kì tình huống nào thì dừng!!! Vì hàm cần value có thì dừng
// RETURN mạnh hơn BREAK, BREAK CHỈ THOÁT LẶP
// RETURN LÀ THOÁT LUÔN CÁI HÀM LUÔN.

int getFactorialV4(int n)
{
	int acc = 1; // 0 dành cho tổng cộng dồn; tích thì ban đầu tệ nhất là 1
	
//	printf("Input a number (>= 0) to get the factorial: ");
	
	if (n == 0 || n == 1)
		acc = 1;
	else
		for (int i = 2; i <= n; i++)
			 acc *= i;
	return acc;

int getFactorialV3()
{
	int n, acc = 1; // 0 dành cho tổng cộng dồn; tích thì ban đầu tệ nhất là 1
	
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); // có khả năng nhập cà chớn !! validation đã từng học
	
	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0
		// coi như tạm chấp nhận n = 2 3 4  5 6  7 
		for (int i = 2; i <= n; i++)
			 acc *= i;
	
//return acc; //od hàm không return, thì phải in ra chhứ!!!!!!!!!
//	printf("%d! = %d\n", n, acc);
	return acc;		
}

void getFactorialV2(int n)
{
	int acc = 1; // 0 dành cho tổng cộng dồn; tích thì ban đầu tệ nhất là 1
	
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); // có khả năng nhập cà chớn !! validation đã từng học
	
	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0
		// coi như tạm chấp nhận n = 2 3 4  5 6  7 
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	 //od hàm không return, thì phải in ra chhứ!!!!!!!!!
	printf("%d! = %d\n", n, acc);	
	return acc;	
}


void getFactorialV1()
{
	int n, acc = 1; // 0 dành cho tổng cộng dồn; tích thì ban đầu tệ nhất là 1
	
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); // có khả năng nhập cà chớn !! validation đã từng học
	
	if (n == 0 || n == 1)
		acc = 1;
	else // tạm thời chưa chặn n < 0
		// coi như tạm chấp nhận n = 2 3 4  5 6  7 
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	// return acc; od hàm không return, thì phải in ra chhứ!!!!!!!!!
	printf("%d! = %d\n", n, acc);		
	
}
}




	