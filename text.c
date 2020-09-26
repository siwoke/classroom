# include <stdio.h>
# include <string.h>
struct STU
{
    char name[20];
    int age;
    char sex;
    char num[20];
};
void OutputSTU(struct STU stu[5]);  //函数声明
int main(void)
{
    struct STU stu[5];
    OutputSTU(stu);
    return 0;
}
void OutputSTU(struct STU stu[5])
{
    struct STU stumax = stu[0];
    int j;
    for (j=1; j<5; ++j)
    {
        if (strcmp(stumax.num, stu[j].num) < 0)
        {
            stumax = stu[j];
        }
    }
    printf("学生姓名：%s 学生年龄：%d 学生性别：%c 学生学号：%s\n", stumax.name, stumax.age, stumax.sex, stumax.num);
}