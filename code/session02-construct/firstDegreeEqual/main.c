#include <stdio.h>
#include <stdlib.h>

// giải phương trình bậc nhất ax + b = 0 (dk a != 0)
//IPO
// I: 2 biến a, b (a != 0) (cần 3 biến a, b, x)
// P: giải x
// O: in ra màn hình x

int main(int argc, char *argv[]) {
	
	float a,b;
	float x;
	printf("Hello, we can help you calc a fDE\n");
	printf("Pls input a,b:");
	scanf("%d%d", &a, &b);
	
	if (a != 0)
	{
		x = -b / a;	// nguyên chia nguyên ra nguyên || thập phân chia số nguyên ra thập phân
		printf("The result of first degree equal is %.2f", x);	
	
	}
	else if (b == 0)
		printf("There are  infinity solution");
			
	else
		printf("Error. false condition");
		
	//
	return 0;
}