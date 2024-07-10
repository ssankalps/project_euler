#include<stdio.h>

int main()
{
    int upper_bound, i=1, sum=0;
    printf("Enter the number till which you want sum of all the multiples of 3 or 5: ");
    scanf("%d",&upper_bound);
    while(i<upper_bound)
    {
	if(i%3==0 || i%5==0)
	    sum += i;
	++i;
    }
    printf("Sum: %d\n",sum);
    return 0;
}
