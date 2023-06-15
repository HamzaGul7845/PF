#include <stdio.h>

int main() {
   int a, b, c, largest;
   printf("Enter three numbers: ");
   scanf("%d %d %d", &a, &b, &c);

   largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
/*if (a>b)
{
	if(a>c)
	{
		largest=a;
	}
	else
	{
		largest=c;
	}
}
else
{
	if(b>c)
	{
		largest=b;
	}
	else
	{
		
	largest=c;
	}
}*/
   printf("The largest number is %d.", largest);
   
}

