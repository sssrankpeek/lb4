#include <stdio.h>
#include <locale.h>
#include <math.h>
#define massaegg 58
#define kolvoegg 253
double schr(double x)
{
	double raznitsa = ((massaegg * kolvoegg) / 1000) / x;
	return raznitsa;
}


void main(void)
{
	setlocale(LC_ALL, "RUS");
	double x,res;
	puts("������� ����� ������");
	scanf("%lf", &x);
	res = schr(x);
	printf("��������� ����������� ����� ������ � %.2lf ���", res);
}