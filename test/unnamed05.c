#include <malloc.h>
#include <stdio.h>
struct student
{
    int num;
    char name[15];
    char sex[2];
    float score;
};

int main()
{
    struct student *ps, *temp;
    int i, n;
    printf("Please input the number of student: \n");
    scanf("%d", &n);
    ps = (struct student *)malloc(sizeof(struct student) * n);
    temp = ps;
    for (i = 0; i < n; i++)
    {
        printf("Please input the num, name,sex and score\n");
        scanf("%d %s %s %f", &ps->num, ps->name, ps->sex, &ps->score);
        ps++;
    }
    ps = temp;
    printf("Students information:\n");
    for (i = 0; i < n; i++)
    {
        printf("Number=%-10d Name=%-15s sex=%-10s Score=%.2f\n", ps->num, ps->name, ps->sex, ps->score);
        ps++;
    }
    free(ps);
    return 0;
}