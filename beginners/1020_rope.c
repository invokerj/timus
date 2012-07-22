#include <stdio.h>
#include <math.h>

#define pi 3.1415926

double x[101],y[101];

double distance (double x1, double y1, double x2, double y2)
{
	double x3=pow((x1-x2),2);
	double y3=pow((y1-y2),2);
	return sqrt(x3+y3);

}

int main (void) 
{
	int n, i;
	double r, dist;
	dist = 0.0;
	
	scanf ("%d %lf",&n,&r);

	for (i=0;i<n;i++) scanf ("%lf %lf", &x[i], &y[i]);
	for (i=0;i<n-1;i++)
		dist+=distance(x[i],y[i],x[i+1],y[i+1]);
	dist+=distance(x[n-1],y[n-1],x[0],y[0]);
	dist+=2*pi*r;

	printf ("%.2lf\n", dist);

	return 0;
}


