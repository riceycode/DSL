#include <stdio.h>
#include <stdlib.h>

struct complex
{
	int img, real;
};

int main()
{
	struct complex a, b, c;
	printf("Enter a and b where a + ib is the first complex number:");
    printf("\na = ");
    scanf("%d", &a.real);
    printf("b = ");
    scanf("%d", &a.img);
    printf("Enter c and d where c + id is the second complex number:");
    printf("\nc = ");
    scanf("%d", &b.real);
    printf("d = ");
    scanf("%d", &b.img);

    c.real = a.real + b.real;
    c.img = a.img + b.img;
    if (c.img >= 0)
        printf("Sum of the complex numbers = %d + %di\n", c.real, c.img);
    else
    	printf("Sum of the complex numbers = %d %di\n", c.real, c.img);

    c.real = a.real - b.real;
    c.img = a.img - b.img;
    if (c.img >= 0)
    	printf("Difference of the complex numbers = %d + %di\n", c.real, c.img);
    else
        printf("Difference of the complex numbers = %d %di\n", c.real, c.img);
    

    c.real = a.real*b.real - a.img*b.img;
    c.img = a.img*b.real + a.real*b.img;
    if (c.img >= 0)
        printf("Multiplication of the complex numbers = %d + %di\n", c.real, c.img);
    else
        printf("Multiplication of the complex numbers = %d %di\n", c.real, c.img);
}
