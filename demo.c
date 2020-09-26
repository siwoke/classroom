#include <stdio.h>
#include <malloc.h>

typedef struct practice demo;
struct practice
{
    int a;
    double b;
    float c;
    char d;
    char e[10];
};

int main(){
    demo test01;
    scanf("%d", &test01.a);
    printf("%d+19", test01.a);
    return 0;
}