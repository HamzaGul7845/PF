#include<stdio.h>
main(){

int side1,side2,side3;
printf("enter first side of triangle");
scanf("%d",& side1);
printf("enter second side of a triangle");
scanf("%d",& side2);
printf("enter third side of triangle");
scanf("%d",& side3);
if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
{
	printf("triangle is valid");
}else {
	printf("triangle is not valid");
}
}
