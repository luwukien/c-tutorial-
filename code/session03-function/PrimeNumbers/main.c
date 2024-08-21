#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// check prime numbers

void CheckPrimeNumber(int num);

int main(int argc, char *argv[]) {
	int RandomNumber;
	printf("My program will help you check a prime number!!!\n");
	printf("Input a random number > 1: ");
	scanf("%d", &RandomNumber);
	CheckPrimeNumber(RandomNumber);
	
	return 0;
}

void CheckPrimeNumber(int num)
{
	int flag = 0; // flag variable
	 
	if (num == 0 || num == 1)
		flag = 1;
	else 
	{
		for (int i = 2; i <= sqrt(num); i += 2) // bỏ qua các số chẵn	
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("The number %d is a prime number!!", num);
	else
		printf("The number %d isn't a prime number!", num);		
}

//DONE
