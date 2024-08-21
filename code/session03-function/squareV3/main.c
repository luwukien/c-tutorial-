#include <stdio.h>
#include <stdlib.h>

// viết hàm tính bình phương của một con số nguyên

int fV3();  // int fV4(int x) 100% hàm toán học y = f(x) = ................
void fV1(); // hàm này không có trả về một giá trị 

int main(int argc, char *argv[]) {
	//fV3(); // để chạy chơi vậy đó
	// vì hàm là một giá trị nên muốn biết một giá trị thì cần phải in
	//int result = fV3(); // hứng cái value, để in value!!!
	//printf("The result: %d\n", result);
	// vì hàm là một value int gì đó. Cho nên ta có thể xài m ở trong các biểu thức
	// khác, trong các câu lệnh khác 
	
	// định luật bắc cầu ~ tương đương value ~ đổ ngang giá trị
	
	printf("The result: %d\n", fV3()); // result - vì hàm là một giá trị
	return 0;
}
void fV1(){
	printf("This function returns no value. It is a void function.\n")
}
int fV3() 
{
	/// vì hàm không có đầu vào sẵn nên ta phải tự tạo
	int x, y;

	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	
	// hàm đã RETURN thì không nên có lệnh printf(in kết quả xử lí)
	// vì nếu làm thế, tính re-use/tái sử dụng sẽ được thu hẹp
	// printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
	
	return y;  // đọc là tên hàm là giá trị của y
				// y được ném ra ngoài tên hàm để dùng tiếp
				// tên hàm được xem là biến vì nó có kiểu dữ liệu - khai báo như biến
				// tên hàm từ nay về sau xem như 1 value, dùng tới bến luôn
}


/*int fV3() 
{
	/// vì hàm không có đầu vào sẵn nên ta phải tự tạo
	int x,y;
	
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);

}*/