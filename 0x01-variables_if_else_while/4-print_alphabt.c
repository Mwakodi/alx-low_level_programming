#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)

{
char low, e, q;
e = 'e';
q = 'q';

for (low = 'e'; low <= 'q'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');

return (0);
}
