//7.	Write a program to read three numbers and display the following menu. 
//Menu:
//1.	Summation
//2.	Sum of squares
//3.	Sum of cubes
//4.	Product 
//and perform tasks as per user's choice. (use switch statements) 

#include <stdio.h>
int main() {
	int a,b,c,decision;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	printf("Enter third number");
	scanf("%d",&c);
	int summation, sumofsquares, sumofcubes, product;
	printf("\n1 for summation \n2 for sum of squares \n3 for sum of cube \n4 for product\n");
	scanf("%d",&decision);
	switch(decision){
		case 1:
			summation=a+b+c;
			printf("the summation is %d",summation);
			break;
		case 2:
			sumofsquares=a*a+b*b+c*c;
			printf("the sum of square is %d",sumofsquares);
			break;
		case 3:
			sumofcubes=a*a*a+b*b*b+c*c*c;
			printf("the sum of cube is %d",sumofcubes);
			break;
		case 4:
			product=a+b+c;
			printf("the product is %d",product);
			break;
		default:
			printf("error");
		break;
	}
}

