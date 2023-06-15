/*#include<stdio.h>
main -()
{
	int num,s=0;
	printf("enter a number to which you find sum of all even numbers : ");
	scanf("%d", & num);
    int count=2;
    while(count<=num)
    {
    	s=s+count;
    	count=count+2;
	}
	printf("sum is : %d", s);
}*/
#include <stdio.h>
int main()
{
    int num, s = 0;
    printf("Enter a number to find the sum of all even numbers: ");
    scanf("%d", &num);
    int count = 2;
    while (count <= num)
    {
        s = s + count;
        count = count + 2;
    }
    printf("Sum of even numbers: %d", s);
    return 0;
}

