#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// hãy lưu một kí tự rồi in ra màn hình 
	
	//char firstChar = 'K'; // nháy đơn lưu 1 kí tự 
	
	unsigned char firstChar = 'A' ; 
	// một kí tự có thể chơi theo 2 cách
		//chơi theo mã số chống lưng
	// một byte trong RAM được ON OFF thành kí tự V
	// dùng %c để chỉ cho CPU biết cách ON - OFF
	// mò vào chip BIOS//UEFI trên mainboard để tìm cách
	// ánh xạ thành kí tự trên màn
	// đây là sự phối hợp của CPU + RAM + Keyboard 
	//                        + VGA Card + Printer + Monitor
	// 						   + HDD/SDD + BIOS/UEFI   
	
	//printf("The 1st letter in your name is %c\n", firstChar);
	// %c có ý nghĩa là mày show hình dạng nguyên con của kí tự đấy cho to xem  =)))) đcm oai vcl
	// %c -> lấy tất cả các bit convert thành số +, map vào bảng mã ASCII, tìm Omega
	// %d -> hiểu là số nguyên, thì chỉ lấy 7 bit giá trị, trù bit đầu dành cho dấu
	// unsigned là gì? 

	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	firstChar += 32; // đổi ra thường
	printf("After converting to lower case ... \n");
	printf("The 1st letter in tour name now is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	return 0;
}