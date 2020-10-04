#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    for(int i = 0; i < 10000;i = a + b)
    {
	a = b;
	b = i;
	if(i < 1)
	    printf("%i", b);
	else
	    printf(",%i", b);
    }

}
