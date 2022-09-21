#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double w;
    puts("введите символ");
    scanf("%c", &c);
    printf("введён символ %c", c);
    puts("\nвведите целое число");
    scanf("%d", &i);                              
    printf("введено число %d", i);
    puts("\nвведите дробное число");
    scanf("%g", &f);
    printf("введено дробное число %g", f);
    puts("\nвведите дробное число c e");
    scanf("%le", &w);
    printf("введено дробное число с е %le", w);
    //1a
    printf("\nцелая часть вещественного числа - это %d", (int)f);
    printf("\nдроьная часть вещественного числа - это %.2lf", f - (int)f);
    //1b
    printf("\nкод введённого символа - это %d", (int)c);
    //1v
    printf("\nдесятичное число %.2f",(float)1/i);

    //2
    int a = 11, b = 3;
    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("\n%d %f %lf\n", x, y, z);
    printf("преобразование (float)a/b = %f\n преобразование (double)a/b = %lf", (float)a/b, (double)a/b);

    //3
    int e;
    puts("\nвведите трёхзначное число");
    scanf("%d", &e);
    printf("Первая цифра - это %d\n Последняя цифра - это %d\n сумма цифр - это %d", e/100, e%10, (e/100)+(e%10)+((e%100)/10));
}