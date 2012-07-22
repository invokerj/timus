#include <stdio.h>
#include <stdlib.h>

int num[102];
int cmp (const void *a, const void *b)
{
	return *(int *)a-*(int *)b;
}
int cmp2 (const void *a, const void *b)
{
	int ia=*(int *)a;
	int ib=*(int *)b;
	if (ia>ib) return 1;
	else return -1;

}

int main (void)
{
	int i,k;
	int sum=0;
	scanf ("%d", &k);
	for (i=1;i<=k;i++) scanf ("%d",&num[i]);
	qsort(&num[1],k,sizeof(int),cmp2);
	for (i=1;i<=k;i++)
		printf ("num[%d] is %d\n",i,num[i]);
	for (i=1;i<=(k+1)/2;i++) sum=sum+num[i]/2+1;
	printf ("%d\n",sum);

	return 0;
}
