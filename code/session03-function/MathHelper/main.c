#include <stdio.h>
#include <stdlib.h>

// tư duy viết hàm bài MathHelper
// IPO:
// I:choice: bạn chọn gì thì tớ mới tính tiếp được
// 


void printMenu();
float AreaOfDisk(float radius);
float AreaOfRectangle(float length, float width);
float AreaOfTriangle(float side1, float side2, float side3);

int main(int argc, char *argv[]) {
	
	int choice;
	float radius, length, width; // phải tránh khai báo trong vòng lặp nếu không sẽ bị	
			// SIDE EFFECT vì đôi khi quay lại vòng lặp sẽ bị reset về giá trị mới
			
	
	do {
		printMenu();
		printf("Input your choice: ");
		scanf("%d", &choice);
		
		
		switch (choice) 
		{  // if choice thì làm gì
			case 1:
				printf("You choose to compute the disk area\n");
				printf("Please input a radius (>0): ");
				scanf("%f", &radius);
				printf("The area of the disk area with radius %.2f is: %.2f", radius, (3.14 * radius * radius));
				break;
			case 2:
				printf("You choose to compute the rectangle area\n");
				printf("Please input length (>0): ");
				scanf("%f", &length);
				printf("Please input width (>0): ");
				scanf("%f", &width);
				printf("The area of the rectangle area with length: %.2f and width: %.2f is %.2f", length, width, (length * width));
				
				break;
			case 3:
				printf("You choose to compute the triangle area\n"); 
				break;
			case 4:
				printf("Bye bye. See you next time!!!!\n");
				break; 
		}
		
	} while (choice != 4); // chưa bằng 5 thì chưa cho thoát
	
	return 0;
}

void printMenu() {
	printf("\n=================================================================================\n");
	printf("Welcome my MathHelper, we will show you result when you input argument!!!\n");
	printf("Below a menu list. Please choose 1 to 4\n");
	printf("1. Calc area of disk\n");
	printf("2. Calc area of rectangle\n");
	printf("3. Calc area of triangle\n");
	printf("4. Exit\n");
	
}
	
/*
float AreaOfDisk(float radius)
{
	float pi = 3.14;
	
	printf("The area of disk with r: %f is %f", radius, (radius * 3.14));
}

float AreaOfRectangle(float length, float width)
{
	printf("The area of rectangle with %f and %f is %f");
}
*/