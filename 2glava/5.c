#include <stdio.h>
int main()
{
    int drinks[]= {4,2,3};
    printf("1-й заказ: %i напитка\n", drinks[0]);
    printf("1-й заказ: %i напитка\n", *drinks);
    printf("3-й заказ: %i напитка\n", drinks[2]);
    printf("3-й заказ: %i напитка\n", *(drinks+2));
}