#include"function.h"
#include<stdio.h>
int main(){
	int a=1;
	while(a){
	//the mune of this project
	printf("========= menu ============\n");
	printf("(1). Draw Triangle\n");
	printf("(2). Draw Circle\n");
	printf("(3). Draw Rectangle\n");
	printf("(4). Draw Square\n");
	printf("(5). Draw Horizontal Line\n");
	printf("(6). Draw Intersecting Line\n");
	printf("(0). Exit\n");
	printf("===========================\n");
	printf("Enter your choice Please:\n");
	scanf("%d",&a);
	switch (a){
		case 1:drawTriangle();
		break;
		case 2:drawCircle();
		break;
		case 3:drawRectangle();
		break;
		case 4:drawSquare();
		break;
		case 5:drawLine();
		break;
		case 6:drawIntersectingLine();
		break;
		case 0:
		break;
		default:printf("Error! Please input your choice!\n");
		break;
		}//switch
	}//while
		return 0;
}//main
