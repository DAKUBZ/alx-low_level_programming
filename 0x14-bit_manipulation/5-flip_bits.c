#include "main.h"

/**
* flip_bits -  function that returns the number of bits you would need
* to flip to get from one number to another
*@n: number
*@m: number
*Return: bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int XOR = n ^ m;

int i = 0;
while (XOR != 0)
{
i++;
XOR &= XOR - 1;
}
return (i);
}
