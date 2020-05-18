//9.	Write a program to read average temperature of a day in Fahrenheit to print.
//"Nice day" if temperature is greater than 60 but less than 80.
//"Cold day" if temperature is 60 or lower. 
//"Hot day" if temperature is 80 higher
#include <stdio.h>
int main() {
	float t;
	printf("enter temperature in fahrenheit");
	scanf("%f",&t);
	if(t>60&&t<80){
		printf("Its a nice day");
	}
	else if(t<=60){
		printf("Its a cold day");
	}
	else if(t>=80){
		printf("Its a hot day");
	}
}

