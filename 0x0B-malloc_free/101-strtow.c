#include <stdlib.h>
#include "main.h"

/**
 * count_word - helpe functions to count the number of words in  strings
 * @s: string to evaluation
 *
 * Return: number of words
 */
int count_word(char *s)
{
int f, v, w;

f = 0;
w = 0;

for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == ' ')
f = 0;
else if (f == 0)
{
f = 1;
w++;
}
}

return (w);
}
/**
 * **strtow - splits  strings into words
 * @str: strings for splits
 *
 * Return: pointers to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, h = 0, l = 0, words, c = 0, start, end;

while (*(str + l))
l++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= l; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[h] = tmp - c;
h++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

matrix[h] = NULL;

return (matrix);
}
