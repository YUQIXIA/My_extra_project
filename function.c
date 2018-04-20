#include<stdio.h>
#include<math.h>
#include"function.h"
/*fucntion definition of drawSquare()
this funciton is to draw a rectangle according to the user input of the sisde
length of the rectangle.
	input argument:none
	output argumennt:none
*/
void drawSquare(){// Print rectangle
	// declare variables
	int i,j,n;
	printf("please input a integer number for the side length of the square(>1): \n");
	// Get an integer number from the keyboard to count the side length
	scanf("%d",&n);
	if(n>1){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				printf("* ");
			}
			printf("\n");
		}
	}
	else	printf("Error! \n");
}

/*fuction definition of  drawTriangle()
	this function is to darw a isoscekes triangle according to the user input
of the hight of the triangle.
	input argument:none
	output argumrnt:none
*/
void drawTriangle(){// Print isosceles triangle
	int line;
	int i,j,k;
    // declare a variable, define the number of rows
	printf("plaese input a integer number for the hight of the triangle(>1): \n");
    //Get an integer number from the keyboard and assign it to line
	scanf("%d",&line);
	//Loop for "line" times, then get "line" lines
	if(line>1){
		for(i=1;i<=line;i++){
			//Print spaces before each line
			for(j=1;j<=line-i;j++){
				printf(" ");
			}
		 	//Print each row of *
			for(k=1;k<=2*i-1;k++){
				printf("*");
			}
		printf("\n");
		}
	}
	else	printf("Error! \n");
}

/*function definition of darwCircle()
	this function is to draw a crcle according to the user input of the radius
of the circle.
	inout aargument:none
	output argument:none
*/
void drawCircle(){
	int r,x;
	double y,m;
	printf("The radius of following circle is 10 \n");
	for(y=10;y>=-10;y--) //the radius is 10
	{
		m = 2.5*sqrt(100-y*y);
//Calculate the column coordinate m corresponding to row y. 2.5 is the screen
//aspect ratio adjustment factor.
//The line spacing of the screen is greater than the column spacing, and if 
//don't make adjustment it will be an ellipse
	for(x=1;x<30-m;x++)
	{
		//Blank control on the left side of the graph
		printf(" ");
	}
	//The left side of the circle
	printf("*");
	for(;x<30+m;x++)
	{
		printf(" ");
	}
	//The left side of the circle
	printf(" * \n");
	}
}


/*function definition of drawRectangle()
	this fuction is to draw a rectangle according to the user input of the length and width of the
rectangle.
	inout argument:none
	ouput argumetn:none

*/
void drawRectangle(){
	// declare variables, define the length and width variables
	int i,j,n,m;
	printf("To make the graph is ractangle,the length should not equals to width \n");
	printf("please input the length of the rectangle: \n");
    // Get an integer number from the keyboard to count the length
	scanf("%d",&n);
	printf("please input the width of the rectangle: \n");
	//Get and integer number from the keybor to count the width
	scanf("%d",&m);
	if((n>1 || m>1) && m!=n){
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				printf("* ");
			}
			printf("\n");
		}
	}
	else	printf("Error! \n");
}

/*function definitio of drawLine()
	this funciotn is to draw a line according to the user input of the legnth of
the line.
	input argument:none
	input argument:none
*/
void drawLine(){
  // declare variables
	int i,n;
	printf("please input a integer number of the length of the line(>1): \n");
    // Get an integer number from the keyboard to count the length
	scanf("%d",&n);
	if(n>1){
		for(i=1;i<=n;i++){
			printf("* ");
		}
			printf("\n");
	}
	else	printf("Error! \n");
}

/*fuction definition of drawIntersectinLine()
	this function is to draw a intersecting line .
	input argument:none
	output argument:none
*/
void drawIntersectingLine(){
	int i,j,n;
	printf("plese input a integer number the length of line(>1): \n");
	scanf("%d",&n);
	if(n>1){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
				if(j==n-i+1 || j==i)	printf("*");
				else	printf(" ");
				printf("\n");
		}
	}
	else	printf("Error! \n");
}
