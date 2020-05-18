//An organization is dealing in Two items say A and B and provides the commission on of sale of these
//items according to the following policies:
//i) Commission rate for item A is 5% up to a sale of Rs. 2,000. If the sale of item A above 2000 then the
//commission is 6% on the extra sale.
//ii) For B, 10% up to sale of Rs 4,000 if the sale is above 4,000 commission rate is 12% on extra sale:
//Given the sales of both the items, write a program to compute net commission.

#include<stdio.h>

int main(){
	float sale_of_itemA= 3000, sale_of_itemB=4000, earningA = 0.0	, earningB=0, remaining =0 ;


	if(sale_of_itemA <= 2000){
		printf("here");
		earningA = (5/(double)100)*sale_of_itemA;

	}
	else if(sale_of_itemA > 2000);
	{
		remaining = sale_of_itemA - 2000;
		earningA = ((5/(double)100)*2000) + ((6/(double)100)*remaining);
	}

	
	
	if(sale_of_itemB <= 4000){
		earningB = (10/(double)100)*sale_of_itemB;
	}
	else if(sale_of_itemA > 4000);
	{
		remaining = sale_of_itemA - 4000;
		earningB = ((5/(double)100)*4000) + ((6/100)*remaining);
	}
		printf("Earning A: %f",earningA );

	printf("Earning B: %f", earningB);
	
}
