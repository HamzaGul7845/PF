/*	Body Mass Index (BMI) Calculator and Category: Write a program that takes two float inputs, weight (in kilograms) and height (in feet and inches), and calculates the BMI (Body Mass Index) of a person. The program should then output the BMI value and the BMI category according to the following classifications:
"	Underweight: BMI < 18.5
"	Normal weight: 18.5 <= BMI < 24.9
"	Overweight: 24.9 <= BMI < 29.9
"	Obesity (Class 1): 29.9 <= BMI < 34.9
"	Obesity (Class 2): 34.9 <= BMI < 39.9
"	Extreme obesity (Class 3): BMI >= 39.9
BMI Formula: weight (kg) / [height (m)]2
1 meter = 39.37 inches.*/
#include<stdio.h>
main()
{
	float weight, height, BMI,height_meter;
	printf("enter your weight in kilogram");
	scanf("%f", & weight);
	printf("enter your height in inches  ");
	scanf("%f",&height);
height_meter=height/39.37;
BMI=weight/height_meter;
printf("BMI=%f\n",BMI);
  if(BMI<18.5)
   {
   	printf("under weight");
   }else if(18.5<=BMI&& BMI>24.9)
    {
    	printf("normal weight");
	}else if(24.9<=BMI && BMI>29.9)
	{
		printf("overweight");
	}else if(29.9<=BMI && BMI>34.9)
	 {
	 	printf("obesity (class 1)");
	 }else if(34.9<=BMI&& BMI>39.9)
	  {
	  	printf("obesity (class 2)");
	  }else  
	  
	{
	  	printf("extreme obesity (class 3)");
	  }
	  
	  
}

