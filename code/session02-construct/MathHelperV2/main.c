#include <stdio.h>
#include <stdlib.h>

// viết app hỗ trợ bé làm phép toán cơ bản
// app cung cấp tính năng menu 1, 2, 3, 4, ...
// ai muốn chơi tính năng nào, chọn con số đó

// 1. tính diện tích hình tròn IPO : r
// 2. tính diện tích hình cn IPO : length, width
// 3. tính.. IPO cooming soon !
// 4. Quit

// IPO của cả bài.....
// cần gì bài menu này tổng quát?
// cho tao cái lựa chọn của m?
// I: cho cái lựa chọn của mày, mày chọn mấy?
//				biến trung gian/menuItem: y_choice 
// P: xử lí, tùy choice là gì ta hành xử tương ứng menu
// 		có nhiều choice 1 2 3 4 5 - > switch case / if else
// O: tùy chọn thì có O tương ứng 
int main(int argc, char *argv[]) {
	
	int choice;
	float length, width, area, radius, pi = 3.14;
	
	do
	{
		printf("Welcome to MathHelper for children :)\n");
		printf("MathHelper can be used for calculating retangle, disk,...\n");
		printf("1. Calc a retangle\n2. Calc a disk\n3. Coming soon!\n");
		printf("4. Quit\n");
		printf("Input a area which need calc or quit, please: ");
		scanf("%d", &choice);	
		
		switch(choice)
	{
		
		case 1:
			printf("Input length, please: ");
			scanf("%f", &length);

			printf("Input width, please: ");
			scanf("%f", &width);
				
			area = length * width;
			printf("The area of retangle is %.2f\n", area);
			break;
		
		case 2:
			printf("Input your radius: ");
			scanf("%f", &radius);
			
			area = pi * radius * radius;
			printf("The area of disk is %.2f\n", area);
			break;
		
		case 3:
			printf("Bye bye, see you next time\n");
			break;
		
		default:
			printf("Please choose 1 .. 4\n");
			break;		
	}
		
	} while (choice !=3); // chừng nào còn chưa chọn 4, thì ăn/chơi tiếp đi mày
						  // đúng là choice chưa bằng 4 thì chơi tiếp trong do  
	return 0;
}