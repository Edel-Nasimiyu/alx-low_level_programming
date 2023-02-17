#include <stdio.h>
/**
 * main - Entry point
 * Return: 0.
 */
int main(void)
{
char abc;
for (abc = '0'; abc <= 'g'; abc++)
putchar(abc);
for (abc = 'a'; abc <= 'f'; abc++)
putchar(abc);
putchar('\n');
return (0);
}
