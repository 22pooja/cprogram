#include<stdio.h>


struct student
{
    int id;
    char name[15];
    float per;
};
void main()
{
    struct student s[3];
    int i;
    printf("enter id ,name and marks :");
    for(i=0; i<3; i++)
    {
        scanf("%d%s%f",&s[i].id,&s[i].name,&s[i].per);
    }
    printf("your data");
     for(i=0; i<3; i++)
    {
      printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].per);
    }
}
