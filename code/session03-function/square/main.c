#include <stdio.h>
#include <stdlib.h>

// viết app mô phỏng lại hàm toán học y = f(x)= x^2 
// viết hàm nhận vào một số nguyên, trả về bình phương của số đó
//IPO:
//I: x
//P: x^2
//O: in ra x^2, gọi là y = x^2

//void fV1(); // liên quan đến vào và ra cho nên có 4 loại hàm
		   // toán học ta chỉ nói hàm y = f() =

void fV2(int x);

int main(int argc, char *argv[]) {  // hàm main là nơi mà cuộc chơi bắt đầu
//	fV1(); // xài hàm kiểu như f(5) = 25

//	fV1();
	
	//tính 10 lần cái bình phương
	//for (int i = 1; i <= 10; i++)
		//fV1(); //re-use
		
		// thử nghiệm hàm loại 2, có đầu vào giống toán
		//ở ngay tên hàm!, xài như toán
	fV2(5); 
	// có mùi của hard-code, cứng value đi vào
	// không linh hoạt từ bàn phím
	// xài trực tiếp là như hiện nay
	// xét bản chất, tao cần 1 con số; tao không nói
	// con số đố đến từ đâu; nay m đưa luôn
	// con số đó đi qua bằng cách qua bàn phím, gán vule cho x từ bàn phím 
		
	return 0;
}
// tạo ra quy tắc biến đổi ở đây 
// hàm là một nhóm các câu lệnh làm một việc gì đó và được đặt 1 cái tên
// VERSION 1: không ra không vào trên tên hàm       void f()
// VERSION 2: không ra có vào trên tên hàm       	void f(x)


//void fV1()
//{
//	
//	//quy tắc biến đổi xử lí đầu vào ra của hàm ở đây
//	int x, y;	
//	printf("Input x: ");
//	scanf("%d", &x);
//	
//	y = x * x;
//	
//	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
//	
//}
//XÀI HÀM: fV2(-5) khi xài ~~~ toán học, cần đầu vào thì đưa giá trị đối số vào
void fV2(int x) // x coi như đã có value rồi
{
	//~~~~ f(x) bên toán học f(5) ~~ x = 5
	// xài hàm thì chỉ việc đưa thẳng value cho x
	// không cần scanf() vì đại diện cho 1 con số đầu vao
	// CHỈ CÓ THẰNG NGÁO MỚI LÀM LỆNH scanf(x)ở đây!!!!!!!
	// COI NHƯ X ĐÃ CÓ CALUE, XÀI LUÔN
	int y = x * x; // éo có scanf()
	
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
}


