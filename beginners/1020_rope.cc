//problem 1020

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
	double x3=pow((x1-x2),2);
	double y3=pow((y1-y2),2);
	return sqrt(x3+y3);
}

int main()
{
	int N;
	double R;
	cin>>N>>R;


	double *x=new double[N];
	double *y=new double[N];
	
	for(int i=0;i<N;++i)
		cin>>x[i]>>y[i];

	double answer=0,pi=3.1415926;
	for(int i=0;i<N-1;++i)
		answer+=distance(x[i],y[i],x[i+1],y[i+1]);
	answer+=distance(x[N-1],y[N-1],x[0],y[0]);
	answer+=2*pi*R;

	cout<<answer<<endl;
	cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(2)<<answer; 
	
	return 0;
}
