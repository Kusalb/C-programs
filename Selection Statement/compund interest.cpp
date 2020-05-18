// wap to calculate and print compound interest amount (f) when p,n,r are given formula:
//f= p x(l+r)n, r should be in decimal(r=0.15)
#include <stdio.h>
#include <math.h>
int main() {
	float f, p, l, n;
	float r;
	
	printf("enter principle");
	scanf("%f",&p);
	printf("enter rate");
	scanf("%f",&r);
	printf("enter time");
	scanf("%f",&n);
		
	f=p*(pow(1+r,n));
	printf("%f",f);
}

