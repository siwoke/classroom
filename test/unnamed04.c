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
    int i, n;
    printf("Please input the number of student:\n");
    scanf("%d", &n);
    struct student stu[n];
    for (i = 0; i < n; i++)
    {
        printf("Please input the num,name,sex,and score\n");
        scanf("%d %15s %2s %f", &stu[i].num, stu[i].name, stu[i].sex, &stu[i].score);
    }
    printf("Student information:\n");
    for (i = 0; i < n; i++)
    {
        printf("Number=%-10d Name=%-15s Sex=%-10s Score=%.2f\n", stu[i].num, stu[i].name, stu[i].sex, stu[i].score);
    }
    return 0;
}