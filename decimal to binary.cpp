#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,p=0;
	printf("enter a number ");
	scanf("%d",&num);
	while(num>0)
	{
		int d=num%2;
		num=num/2;
		sum=sum+d*pow(10,p);
		p++;
	}
	printf("%d",sum);
}
/*#include <stdio.h>
#include <math.h>

int main() {
    int decimal, binary = 0, i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        binary += (decimal % 2) * pow(10, i);
        decimal /= 2;
        i++;
    }

    printf("The binary form is: %d\n", binary);

    return 0;
}*/

