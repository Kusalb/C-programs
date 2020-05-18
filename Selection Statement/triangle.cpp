//Write a program to read three sides of triangle and print area for valid data and to print "Invalid data" if either one side of the triangle is greater or equals to the sum of other two sides.
#include <stdio.h>
int main() {
	int a,b,c, area, perimeter;
	printf("enter the length of side 'a'");
	scanf("%d",&a);
	printf("enter the length of side 'b'");
	scanf("%d",&b);
	printf("enter the length of side 'c'");
	scanf("%d",&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b)){
		printf("invalid data");
	}
	else{
		perimeter=(a+b+c)/c;
		area=perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c);
		printf("area is %d",area);
	}
}

