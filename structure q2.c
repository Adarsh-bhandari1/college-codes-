/* Q2. Define a structure name book to store details like title , author name , price
.Write a C program to print the highest & lowest price book.*/
#include<stdio.h>
typedef struct book
{
    char nm[30];
    char ti[30];
    float p;
} bk;

int main()
{
    bk a[100],t;
    int i,j,n;
    printf("Enter the number of records to be stored ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the detail of the book %d \n",i+1);
        printf("Enter the name of the  book : ");
        scanf("%s",a[i].ti);
        printf("Enter the author's name  : ");
        scanf("%s",&a[i].nm);
        printf("Enter the price  of the  book : ");
        scanf("%f",&a[i].p);
        printf("*************X*************\n");
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].p<a[j].p)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("*************X*************\n");
    
    printf("The highest price book is \n");
    printf("Name : %s\n",a[0].ti);
    printf("Author's name  : %s\n",a[0].nm);
    printf("Price of the book  : %f\n",a[0].p);
    printf("\n");
    printf("The lowest price book is \n");
    printf("Name : %s\n",a[n-1].ti);
    printf("Author's name  : %s\n",a[n-1].nm);
    printf("Price of the book  : %f\n",a[n-1].p);
}

