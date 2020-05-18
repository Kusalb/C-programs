//8.	Write a program to read a character and to test whether it is an alphabet or a number or a special character. 
#include <stdio.h>
int main() {
	char ch;
	printf("enter any charcter\t");
	scanf("%s",&ch);
	if((ch>='a' && ch <='z')|| (ch>='A'&&ch<='Z')){
		printf("%s is an alphabet");
	}
	else if(ch>='0'&&ch<='9'){
		printf("%s is a number");
	}
	else{
		printf("%s is a special ch");
	}
	return 0;
}

