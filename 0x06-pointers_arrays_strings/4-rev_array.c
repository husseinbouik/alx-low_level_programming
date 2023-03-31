#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: input
 * @n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
int swap, begin, end;

begin = 0;
end = n - 1;
while (begin < end)
{
swap = *(a + begin);
*(a + begin) = *(a + end);
*(a + end) = swap;
begin++;
end--;
}
}
