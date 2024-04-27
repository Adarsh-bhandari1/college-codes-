/* Q1. Create a structure name student with members as name , age , total marks.
write a C program to store data of n number of students and sort the data 
acoording to the marks of the students and displaY the sorted data.*/

#include<stdio.h>
typedef struct students
{
    char nm[30];
    int ag;
    float tm;
} stu ;

int main()
{
    stu a[100],t;
    int n,i,j;
    printf("Enter the number of records\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the detail of the %dth student\n",i+1);
        printf("Enter the name of the  student : ");
        scanf("%s",a[i].nm);
        printf("Enter the age of the  student : ");
        scanf("%d",&a[i].ag);
        printf("Enter the total marks of the  student : ");
        scanf("%f",&a[i].tm);
         printf("*************X*************\n");
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].tm>a[j].tm)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("*************X*************\n");
    printf("The sorted data is\n");
    for(i=0;i<n;i++)
    {
       printf(" The name of the  student : %s\n",a[i].nm);
        printf(" The age  of the  student : %d\n",a[i].ag);
        printf(" The total marks  of the  student : %f\n",a[i].tm);
        printf("*************X*************\n");
    }
    return 0;
}



