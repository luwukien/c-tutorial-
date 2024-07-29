#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
	
	char fL;
	printf("Welcome to Lenovo diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	scanf("%c", &fL);	
	
	fL = toupper(fL); 
							
	if (fL == 'A')
		printf("Never joke");
		 // ngược lại Aa sẽ không là Aa, hay nói thằng là BbCcDd%^^*(
		 // trong đám else này có cả BbCcĐ.., mình lại chặn
		 // if tiếp vì có quá nhiều thư kí tự trong ELSE
		 // SURE KHÔNG PHẢI là Aa, còn quá nhiều kí tự 		
	else 
	{ //fL = BbCcDd... $%%^
		if (fL == 'B')// hỏi hẹp hơn, biết m khác Aa rồi
					  // nhưng có phải là Bb hem?				  
			printf("Introvert");		
		// ngược lại của không bàng Bb sẽ là gì??
		else //fL = không phải là AaBb
			 //fL = CcDdEeFf@#$%^&*
		{
			if (fL == 'C')
				printf("Friendly");	
			
			else	
				//fL được hiểu là gì?? fL = 'Cooming soon!'		
				printf("Comming soon!!!!\n");
		} 
			 
					
	}
		 	
				
	return 0;
}