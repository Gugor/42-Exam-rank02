#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *range;
	int len;

	len = end - start + 1;

	range = malloc(len * sizeof(int));
	if (!range)
		return (0);

	while (--len >= 0)
	{
		range[len] = start;
		start++;
	}
	return (range);
}


int main(void)
{
	int start = -2;
	int end	= 4;
	int iter;

	int *result = ft_rrange(start, end);
	iter = -1;
	while ( ++iter < 7)
		printf("%d ", result[iter]);
	printf("\n");
	return(0);
}
