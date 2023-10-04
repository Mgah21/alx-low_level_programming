#include "main.h"
/**
 * argstostr - print arg
 * @ac: takes in the  width of grid
 * @av: heights of grids
 * Return: the args one lines at on a time
 */

char *argstostr(int ac, char **av)
{
char *str;
int cou = 0, t = 0, y = 0, c = 0;

if (ac == 0 || av == NULL)
return (NULL);
while (t < ac)
{
y = 0;
while (av[t][y] != '\0')
{
cou++;
y++;
}
t++;
}
cou = cou + ac + 1;
str = malloc(sizeof(char) * count);
if (str == NULL)
{
return (NULL);
}
for (t = 0; t < ac; t++)
{
for (y = 0; av[t][y] != '\0'; y++)
{
str[c] = av[t][y];
c++;
}
str[c] = '\n';
c++;
}
return (str);
}
