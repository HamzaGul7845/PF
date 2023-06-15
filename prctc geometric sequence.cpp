#include<stdio.h>
main()
{
	 int n, i=1;
	 float a,r;
	 printf("enter first term and common ratio");
	 scanf("%f %f",&a,&r);
	 printf("enter the number of terms you want to find out");
	 scanf("%d",&n);
	 while(i<=n)
	  {
	  	printf("%f\t",a);
	  	a=a*r;
	  	i++;
	  }
	 // printf("%f",a);
}
