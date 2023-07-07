#include "main.h"

/**
*get_bit -  a function that returns the value of a bit at a given index
*@n: integerr
* @index: index of a bit starts from 0
* Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
int val;

if (index > 63)
return (-1);
val = (n >> index) & 1;
return (val);
}
