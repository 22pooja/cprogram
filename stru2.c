#include<stdio.h>
struct student
{
    int id;
    char name[15];
    float per;
};
void main()
{
    struct student s1,s2,s3;
    printf("enter id ,name and marks :");
    scanf("%d%s%f",&s1.id,&s1.name,&s1.per);
    printf("your data");
    printf("\n%d\t%s\t%f",s1.id,s1.name,s1.per);
}
