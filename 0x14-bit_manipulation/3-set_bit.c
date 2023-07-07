#include "main.h"

/**
* set_bit  -  a function that sets the value of a bit to 1 at a given index
*@n: pointer
*@index: index of a bit
*Return: 1 (success) -1 (fails)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
