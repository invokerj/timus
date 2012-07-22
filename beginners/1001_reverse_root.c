#include <stdio.h>
#include <math.h>

int main (void)
{
	double *k = (double *)malloc(sizeof (double)*10000000);
	int i = 0;

	while (scanf ("%lf",&k[i]) !=EOF) i++;
	i--;
	while (i>=0)
	{
		printf ("%.4lf\n",sqrt(k[i]));
		i--;
	}
	free (k);
	return 0;
}
