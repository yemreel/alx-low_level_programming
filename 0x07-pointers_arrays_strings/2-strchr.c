#include "main.h"

/**
* _strchr - function that locates a character in a string
*
* @s: string to be searched
*
* @c: character to search for
*
* Return: returns pointer to first occurence of c if it's there or NULL
*/
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
<<<<<<< HEAD

} while (*s++);
whi
=======
		}
} while (*s++);
>>>>>>> 161098fc82ea7d529365632dfc0115664d8cd06c
return (NULL);
}
