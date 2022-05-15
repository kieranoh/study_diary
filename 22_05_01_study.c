#include <stdio.h>
#include <string.h>

int main(){
	
	// Chapter 1 
	printf("Hello \rno\n");
	/* 
	\r -> move to the first (carriage return)
	printf("Hello \rno");  -> nollo
	*/
	printf("Woww\b \n");
	/* 
	\b -> move to the previous one (back space)
	printf("Woww \b ");  -> "Wow "
	*/
	
	printf("He\tllo\n");
	printf("Hel\tlo\n");
	/* 
	\t -> move to next tab (Tab != space*4) good for line up
	printf("He\tllo\n");
	printf("Hel\tlo\n");
	->
	He	llo
	Hel	lo
	*/	
	
	printf("____________\n");
	// Chapter 2
	
	printf("%d\n",12);
	printf("%d\n",014);
	printf("%d\n",0xc);
	
	/*
	decimal number
	octal number  -> put 0 at the first for distinguish octal number from others
	hexadecimal number -> put 0x at the first for distinguish hexadeciaml number from others
	
	decimal number 		octal number		hexadeciaml number
	0					00					0x0
	1					01					0x1
	2					02					0x2
	3					03					0x3
	4					04					0x4
	5					05					0x5	
	6					06					0x6
	7					07					0x7
	8					010					0x8
	9					011					0x9
	10					012					0xa
	11					013					0xb
	12					014					0xc
	13					015					0xd
	14					016					0xe
	15 					017					0xf
	
	*/
	
	printf("%.1lf\n",1e6);
	printf("%.7lf\n",3.14e-5);
	
	/*
	1e6 -> 1*10*6   (normalization)
	*/
	
	printf("_________\n");
	
	// Chapter 3
	
	int a;
	int b = 21;
	printf("%d\n\n",a);
	
	/*
	int a;
	int b = 21;
	printf("%d\n",a);
	a get the garbage number 
	*/
	
	char ch1 = 'A';
	char ch2 = 65;
	printf("Char %c's ASCII number : %d\n",ch1,ch1);
	printf("The Char that ASCII code is %d : %c\n",ch2,ch2);
	
	
	
	unsigned int un;
	un = 4294967295;
	printf("\nun = 4294967295 	-> print %d\n",un);
	un = 4294967296;
	printf("un = 4294967296 	-> print %u\n",un);
	un = -1;
	printf("un = -1 	 	-> print %u\n\n",un);
	
	/*
	unsigned ->  get positive number only
	
	un = 4294967295;
	printf("%d\n",un);  	-> use %u to print 
	un = 4294967296;   		-> unsigned int is for 0~ 4294967295, should use unsigned long and %lu  
	printf("%u\n",un);
	un = -1;  				-> not for negative number
	printf("%u\n",un);
	*/
	int num1 = -1;
	unsigned int num2 = 1;
	printf("num1 = %d, num2 = %u\n",num1,num2);
	if(num1<num2)
	{
		printf("num1 < num2\n");
	}
	else
	{
		printf("num1 > num2 -> %u > %u\n",num1,num2);
	}
	/*
	num1 - > signed become unsigned when compare unsigned with signed
	*/
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;
	printf("number : 	1.234567890123456789\n");
	printf("float  : 	%.20f\n",ft);
	printf("double : 	%.20lf\n\n",db);
	/*
	float : 9 significant digit
	double : 18 significant digit
	*/
	
	char fruit[20] = "strawberry";
	printf("%s\n",fruit);
	strcpy(fruit,"banana");
	printf("%s\n",fruit);
	/*
	can chang the string array by using strcpy in string.h libary
	*/
	
	const double PIE = 3.1415926;
	/*
	set the contant number -> cannot change the number
	*/
	
	/*
	short 		->	%hd		2 Byte
	int			-> 	%d		4 Byte
	long		-> 	%ld		4 Byte
	long long	-> 	%lld	8 Byte
	______________________________
	float		->	%f		4 Byte
	double		-> 	%lf		8 Byte
	long double ->	%Lf		8,10,12,16 Byte
	______________________________
	char		->	%c		1 Byte
	char array 	-> 	%s		changeable
	*/
	
	return 0;
}
