//10.	Write a program to read 3-digits number and test whether it is a Armstrong number or not Armstrong.
#include <stdio.h>
int main() {
	int n,r,sum=0,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum){
		printf("Armstrong number");
	}
	else{
		printf("not armstrong");	
	}
	
	
}

