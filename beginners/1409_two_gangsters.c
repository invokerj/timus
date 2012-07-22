#include <stdio.h>

int main (void)
{
	int a, b;
	while (scanf ("%d %d", &a, &b) != EOF)
		printf ("%d %d\n",(b-1),(a-1));

	return 0;
}
