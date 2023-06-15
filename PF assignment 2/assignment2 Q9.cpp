#include<stdio.h>
main()
{
	float hours;
	printf("enter the time(in hours) taken by workers to complete the task");
	scanf("%f",&hours);
	if(hours>=2&&hours<=3)
	{
		printf("highly efficient");
	}else if(hours>3&&hours<=4)
	 {
	 	printf("need to improve speed");
	 }else if(hours>4&&hours<=5)
	 {
	 	printf("need training to improve speed");
	 }else if(hours>5)
	 {
	 	printf("worker has to leave the company");
	 }
}
