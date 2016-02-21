#include <stdio.h>
#include <iostream>

int main()
{
	int i = 1; //intialising counter for loop
	int f, b, w;

	for (i = 1; i < 51; i++) //Loop from 1 to 20
	{
		f = i % 3;
		b = i % 5;
		w = i % 7;

		if ( f + b + w == 0)
			printf("%d => Fizz Buzz Woof\n",i);
		else if (f + b  == 0)
			printf("%d => Fizz Buzz\n", i);
		else if (f + w == 0)
			printf("%d => Fizz Woof\n", i);
		else if (b + w == 0)
			printf("%d => Buzz Woof\n", i);
		else if (f == 0)
			printf("%d => Fizz\n", i);
		else if (b == 0)
			printf("%d => Buzz\n", i);
		else if (w == 0)
			printf("%d => Woof\n", i);	
	}
	return 0;
}