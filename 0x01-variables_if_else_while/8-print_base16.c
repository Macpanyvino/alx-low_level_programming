#include <stdio.h>

/**
 * main - Begin Here
 *
 * print 0-9 using putchar
 *
 * Return: Value 0 (true)
 */

int main(void)

{
	char ch;

       	int n;

       		for (n = 48; n <= 57; n++)

        {

		putchar(n);

	}

		for (ch = 'a'; ch <= 'f'; ch++)

	{

	       	putchar(ch);

	}
       

		putchar(10);

		return (0);

}
