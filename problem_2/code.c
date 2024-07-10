#include<stdio.h>
int main()
{
    unsigned sum=0, previous=1, current=1, next=0;
    next = current + previous;
    while (next <= 4000000)
    {
	if(next % 2 == 0)
	    sum += next;
	previous = current;
	current = next;
	next = current + previous;
    }
    printf("Sum of even valued Fibonacci sequence terms which are less than 4 million): %d\n",sum);
    return 0;
}
