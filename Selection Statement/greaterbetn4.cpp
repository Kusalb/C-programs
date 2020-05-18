//6.	Write a program to read four integer numbers and print the maximum.
#include <stdio.h>
int main() {
	int a[3],i, temp=0;
	printf("Enter any 4 numbers:\n");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++){
		if (a[i]>temp){
			temp=a[i];
		}
	}
	printf("the greatest number is %d",temp);
}

