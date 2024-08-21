#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// tư duy viết hàm bài MathHelper
// IPO:
// I:choice: bạn chọn gì thì tớ mới tính tiếp được
// 

const float PI = 3.14; // global variable

void printMenu();
void computeDiskArea();
void computeRectangleArea();
void computeTriangleArea();

int main(int argc, char *argv[]) {
	
	int choice;
	 // phải tránh khai báo trong vòng lặp nếu không sẽ bị	
			// SIDE EFFECT vì đôi khi quay lại vòng lặp sẽ bị reset về giá trị mới
	do {
		printMenu();
		
		printf("Input your choice: ");
		scanf("%d", &choice);
		
		switch (choice) 
		{  // if choice thì làm gì
			case 1:
				computeDiskArea();
				break;
			case 2:
				computeRectangleArea();
				break;
			case 3:
				computeTriangleArea();
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

void computeDiskArea() {
	float radius;
	printf("You choose to compute the disk area\n");
	printf("Please input a radius (>0): ");
	scanf("%f", &radius);
//	printf("The area of the disk area with radius %.2f is: %.2f", radius, (3.14 * pow(radius, 2)));
	printf("The area of the disk area with radius %.2f is: %.2f", radius, (PI * pow(radius, 2)));	
}

void computeRectangleArea() {
	float length, width;
	printf("You choose to compute the rectangle area\n");
	printf("Please input length, width (>0): ");
	scanf("%f%f", &length, &width);
	printf("The area of the rectangle area with length: %.2f and width: %.2f is %.2f", length, width, (length * width));
}

void computeTriangleArea() {
	float side1, side2, side3, theHalfPerimeter;
	printf("You choose to compute the triangle area\n"); 
	printf("Input three sides of a triangle: ");
	scanf("%f%f%f", &side1, &side2, &side3);
	theHalfPerimeter = (side1 + side2 + side3) / 2;
	printf("The area of the triangle area with side 1 is %.2f, side 2 is %.2f, side 3 is %.2f is %.2f", side1, side2, side3, sqrt((theHalfPerimeter * (theHalfPerimeter - side1) * (theHalfPerimeter - side2) *(theHalfPerimeter - side3))));
}	
//DONE		