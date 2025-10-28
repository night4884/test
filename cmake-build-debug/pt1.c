#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double add(double a, double b, double c, double d)
{
	double x, y, num;
	x = c - a;
	y = d - b;
//	printf("%.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n", a, b, c, d, x, y);
	return sqrt(num = x * x + y * y);
}

double main(){
    double c, v, n, m, result;
    while (1) {
		scanf("%lf %lf %lf %lf", &c, &v, &n, &m);
		result = add(c, v, n, m);
		printf("%.2lf\n", result);
		system("pause");
	}
}