#include <stdio.h>
#include <stdlib.h>

// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
//Test Data :
//Input the 10 numbers :
//Number-1 :2
//...
//Number-10 :2
//Expected Output :
//The sum of 10 no is : 55
//The Average is : 5.500000


//IPO
//I: 10 var + 1 sum + 1 avarage
//P: Calc( Sum + avarage )
//O: display

int main(int argc, char *argv[]) {
	
	
	int num, acc = 0;
	float avg;
	printf("Welcome my programming! This programming helps sum of 10 numbers, inputted from keyboard and average\n");
	printf("Please input 10 numbers: ");
	
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &i);
		acc += i;	
	}
	
	avg = acc / 10.0; // notes: / 10.0 ->> display số thập phân
	printf("Sum of 10 number which is inputted from keyboard: %d\n", acc);
	printf("Average of 10 number which is inputted from keyboard: %.2f", avg);
	
	
	// done
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

