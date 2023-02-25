#include <stdio.h>
#include "main.h"
/**
* is_leap_year - checks if a year is a leap year
* @year: year to check
* Return: 1 if leap year, 0 otherwise
*/

int is_leap_year(int year)
{
int 0, 1;

if (year % 4 == 0)
{
if (year % 100 == 0)
{
if (year % 400 == 0)
{
return (1);
}
else
{
return (0);
}
}
else
{
return (1);
}
}
else
{
return (0);
}
}
