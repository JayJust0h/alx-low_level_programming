#include "main.h"

/**
 * _pow_recursion - return value of x to power y.
 * @x: number to raise.
 * @y: power to raise to.
 * Return: result of power.
 */

int _pow_recursion(int x, int y)

{
        if (y < 0)
        {
                return (-1);
        }
        else if (y == 0)
        {
                return (1);
        }
        return (x * _pow_recursion(x, y - 1));
}
