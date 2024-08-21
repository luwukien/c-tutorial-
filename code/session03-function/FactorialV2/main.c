#include <stdio.h>
#include <stdlib.h>

// viết hàm tính n!
// IPO
// I: Nhập vào n
// P: 1.2.3.4.5.6..n ->> nhồi kiểu nhân, không phải cộng
// O: kết quả nhân dồn!!!!
// chọn hàm loại mấy 
// viết thử cả 4

int getFactorialV4(int n); 


int main(int argc, char *argv[]) {

	printf("6! = %d\n", getFactorialV4(6));
	
	printf("0! = %d\n", getFactorialV4(0));
						// mày là một value, nên khỏi cần gán biến khác
	return 0;
}

int getFactorialVWrong(int n)
{
	// Phải kiểm soát lúc nào thì return, và lúc nào thì cần trả lại một giá trị.Phải kiểm soát được nó
	int acc = 1; 
	

	if (n == 0 || n == 1)
		acc = 1; //biết ngay 0! = 1, thoát luôn
		
	// chưa chặn n âm
	
	// nếu code có if-else, và trong if-else đều có return 
	for (int i = 2; i <= n; i++)
		acc *= i;
			
	//printf("%d! = %d\n", n, acc);

	// câu lẹnh này CPU không thể chạm tới vì do có lệnh return ở trên mất rồi	 
	return acc;
}

int getFactorialV4(int n)
{
	// Phải kiểm soát lúc nào thì return, và lúc nào thì cần trả lại một giá trị.Phải kiểm soát được nó
	int acc = 1; 
	

	if (n == 0 || n == 1)
		return 1; //biết ngay 0! = 1, thoát luôn
		
	// chưa chặn n âm
	
	// nếu code có if-else, và trong if-else đều có return 
	for (int i = 2; i <= n; i++)
		acc *= i;
			
	//printf("%d! = %d\n", n, acc);

	// câu lẹnh này CPU không thể chạm tới vì do có lệnh return ở trên mất rồi	 
	return acc;
}



/*
int getFactorialV4(int n)
{
	// Phải kiểm soát lúc nào thì return, và lúc nào thì cần trả lại một giá trị.Phải kiểm soát được nó
	int acc = 1; 
	
	return 0;
	if (n == 0 || n == 1)
		return 1; //biết ngay 0! = 1, thoát luôn
	else
	{
		for (int i = 2; i <= n; i++)
			acc *= i;
			
		//printf("%d! = %d\n", n, acc);
		return acc;
	}
	printf("Hello World 123!\n");
	// câu lẹnh này CPU không thể chạm tới vì do có lệnh return ở trên mất rồi	 
	return acc;
}
*/

//int getFactorialV4(int n)
//{
//	int acc = 1; 
//	
//
//	if (n == 0 || n == 1)
//		acc = 1;
//	else
//		for (int i = 2; i <= n; i++)
//			 acc *= i;
//			 
//	return acc;
//}





