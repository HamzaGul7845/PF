#include<stdio.h>
main(){
   int choice;
   float area,base,radius,length,width,height;
   printf("enter your choice\n");
   printf("Press 1 for area of circle\n");
   printf("press 2 for area of rectangle\n");
   printf("press 3 for area of triangle\n");
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:
   		printf("enter radius of circle");
   		scanf("%f",&radius);
   		area=3.14*radius*radius;
   		printf("the area of circle is %f",area);
   		break;
   	case 2:
   		printf("enter length of rectangle");
   		scanf("%f",&length);
   		printf("enter width of rectangle");
   		scanf("%f",&width);
   		area=length*width;
   		printf("the area of rectangle is %f",area);
   		break;
   	case 3:
   		printf("enter base of triangle");
   		scanf("%f",&base);
   		printf("enter height of triangle");
   		scanf("%f",&height);
   		area=0.5*height*base;
   		printf("area of triangle is %f",area);
   		break;
   	default:
   		printf("invalid choice!");
   }
}

