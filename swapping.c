#include <stdio.h>
int main()
{
//declare the variables to be used
int x,y;
//print to enter the values
printf("enter x,y values\n");
//read the values from the user
scanf("%d%d",&x,&y);
//apply logic
x=x+y;
y=x-y;
x=x-y;
//print the output on the screen and end the program
printf("after swapping x is %d and y is %d",x,y");
return 0;
}
