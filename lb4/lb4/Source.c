#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double w;
    puts("������� ������");
    scanf("%c", &c);
    printf("����� ������ %c", c);
    puts("\n������� ����� �����");
    scanf("%d", &i);                              
    printf("������� ����� %d", i);
    puts("\n������� ������� �����");
    scanf("%g", &f);
    printf("������� ������� ����� %g", f);
    puts("\n������� ������� ����� c e");
    scanf("%le", &w);
    printf("������� ������� ����� � � %le", w);
    //1a
    printf("\n����� ����� ������������� ����� - ��� %d", (int)f);
    printf("\n������� ����� ������������� ����� - ��� %.2lf", f - (int)f);
    //1b
    printf("\n��� ��������� ������� - ��� %d", (int)c);
    //1v
    printf("\n���������� ����� %.2f",(float)1/i);

    //2
    int a = 11, b = 3;
    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("\n%d %f %lf\n", x, y, z);
    printf("�������������� (float)a/b = %f\n �������������� (double)a/b = %lf", (float)a/b, (double)a/b);

    //3
    int e;
    puts("\n������� ���������� �����");
    scanf("%d", &e);
    printf("������ ����� - ��� %d\n ��������� ����� - ��� %d\n ����� ���� - ��� %d", e/100, e%10, (e/100)+(e%10)+((e%100)/10));
}