#include "main.h"

/**
* clear_bit - a function that sets the value of a bit to 0 at a given index
*@n: poimter
*@index: index ofa bit
*Return: 1 (success) -1(fails)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
