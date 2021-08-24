#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,x=1;
    printf("enter your matrix : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            if( i==j && arr[i][j]!=1)
            {
                x=0;
                break;
            }

            if(i!=j && arr[i][j]!=0)
            {
                x=0;
                break;
            }
        }
    }
    if(x==1)
    {
        printf("this is identity matrix");
    }
    else
    {
        printf("this is not identity  matrix");
    }



}
