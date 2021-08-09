#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void pMenu()
{

    printf("Available operations\n");
    printf("1, +\n");
    printf("2, -\n");
    printf("3, *\n");
    printf("4, /\n");
    printf("5, sin\n");
    printf("6, cod\n");
    printf("7, tan\n");
    printf("8, pow\n");
    printf("9, sqrt\n");
    printf("Enter the account transaction number\n");
}
void sum();
void sub();
void mul();
void DIV();
void SIN();
void COS();
void TAN();
void POW();
void sq();

int main()
{
    pMenu();
    int operation;
    scanf("%i", &operation);
    while (operation != -1)
    {
        if (operation >= true)
        {

            switch (operation)
            {
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                DIV();
                break;
            case 5:
                SIN();
                break;
            case 6:
                COS();
                break;
            case 7:
                TAN();
                break;
            case 8:
                POW();
                break;
            case 9:
                sq();
                break;

            default:
                printf("wrong choice");
                break;
            }
            operation++;
        }
        else
        {
            printf("fail\n");
        }
        printf("Enter a number Calculation or -1 To exit the program :");
        scanf("%d", &operation);
    }

    return 0;
}

void sum()
{
    printf("Enter two numbers to add: ");
    int x, y;
    scanf("%i %i", &x, &y);
    printf("%i + %i = %i\n", x, y, x + y);
}
void sub()
{
    printf("Enter two numbers to for subtraction: ");
    int x, y;
    scanf("%i %i", &x, &y);
    printf("%i - %i = %i\n", x, y, x - y);
}
void mul()
{
    printf("to hit them: ");
    int x, y;
    scanf("%i %i", &x, &y);
    printf("%i * %i = %i\n", x, y, x * y);
}
void DIV()
{
    printf("Enter two numbers to for to divide: ");
    int x, y;
    scanf("%i %i", &x, &y);
    printf("%i / %i = %i\n", x, y, x / y);
}
void SIN()
{
    printf("Enter the angle account number Sin: ");
    int x;
    scanf("%i", &x);
    printf("Sin(%f) = %.3f\n", x, sin(x));
}
void COS()
{

    printf("Enter the number to calculate the cosine of the angle Cos: ");
    int x;
    scanf("%i", &x);
    printf("Cos(%i) = %i\n", x, cos(x));
}
void TAN()
{
    printf("Enter the number to calculate the tangent of the angle Tan: ");
    int x;
    scanf("%i", &x);
    printf("Tan(%i) = %i\n", x, tan(x));
}
void POW()
{
    printf("Enter a number, then the strength: ");
    int x, y;
    scanf("%i %i", &x, &y);
    printf("%i ^ %i = %f\n", x, y, pow(x, y));
}
void sq()
{
    printf("Enter a number to find its square root: ");
    int x;
    scanf("%i", &x);
    printf("Sqrt(%i) = %f\n", x, sqrt(x));
}
