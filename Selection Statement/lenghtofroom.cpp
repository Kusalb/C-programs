//WAP to read length and breadth of a room and print area and print
//auditorium if area>2500
//hall if 500<=area>2500
//big room if 150<area<500
//small room if area<=150
#include <stdio.h>
int main() {
	int length, breadth, area;
	printf("enter length");
	scanf("%d",&length);
	printf("enter breadth");
	scanf("%d",&breadth);
	area=length*breadth;
	if (area>2500){
		printf("auditorium");
	}
	else if(500<area && area<=2500){
		printf("hall");
	}
	else if(150<area&& area<=500){
		printf("big room");
	}
	else if(area<=150){
		printf("small room");
	}
	
}

