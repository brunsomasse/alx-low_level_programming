#include "main.h"
/**
 *  *_memcpy -   copy number bytes form adress "from" to adress "to"
 *   *@dest: content is to be copied
 *    *@src: Source of data to be copied
 *     *@n: bytes of the memory
 *      *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
<<<<<<< HEAD
<<<<<<< HEAD
char a;
=======

>>>>>>> 9006691becb7862b963b165610847d9bc3a88e19
=======

>>>>>>> 0bed8a3a23aeccf1bbee21a77c5399bdc1e9529a
{
unsigned int i;

i = 0;
while (i < n)  /*Delacring WHILE*/
{
*(dest + i) = *(src + i); /*add 1 position dest and src*/
i++;

} /*END WHILE*/


return (dest);
}
