#include <stdio.h>
#include <string.h>

int main (void)
{
	int n, k;
	int fac, mod;
	char input[21];
	
	for (k=0;k<21;k++) input[k]='\0';
	while (scanf ("%d %s",&n, input) != EOF)
	{

		fac = 1;
		k = strlen(input);
		mod = n%k;
		
		if (mod == 0) {
			while (n!=k) {
				fac*=n;
				n-=k;
			}
			fac*=n;
			printf ("%d\n",fac);
		} else {
			while(n>=mod) {
				fac*=n;
				n-=k;
			}
			printf ("%d\n",fac);
		}

		for (k=0;k<21;k++) input[k]='\0';
	}

	return 0;

	
}
