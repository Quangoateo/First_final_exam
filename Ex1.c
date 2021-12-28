#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double implement_function(double x)
{
	return (pow(x,2)/2)*(1+pow(x,2)+0.1*pow(x,3));
}
int main()
{
	printf("f(0.5):%f\n",implement_function(0.5));
	printf("f(1.5):%f",implement_function(1.5));
}