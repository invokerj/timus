#include <stdio.h>
#include <math.h>

int main (void)
{
	int i,n,tmp;
	double xx;
	scanf ("%d",&n);

	for (i=0;i<n;i++) {
		scanf ("%d", &tmp);
		xx=(sqrt(8.0*(tmp-1)+1)-1)/2;
		if (xx==(int )(xx)) printf ("1 ");
		else printf ("0 ");
	}

	return 0;

}
