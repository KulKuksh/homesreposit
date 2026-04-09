#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Значение INT_MAX РАВНО %i\n", INT_MAX);
    printf("Значение INT_MIN равно %i\n", INT_MIN);
    printf("INT занимает %li байт\n", sizeof(int));
    printf("Значение FLT_MAX РАВНО %f\n", FLT_MAX);
    printf("Значение FLT_MIN равно %f\n", FLT_MIN);
    printf("float занимает %li байт\n", sizeof(float));
    return 0;
}