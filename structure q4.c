Q4./* Define a structure called car with members as car_id , model number & rent per
day.Write a C program to I/P data of n cars and number of days and calculate the
the total cost of the rent */


#include<stdio.h>
typedef struct car
{
    int id;
    int md;
    float r;
} car;
int main()
{
    car a[60];
    int i,n,x;
    float tm;
    printf("Enter the the number of records: ");
    scanf("%d",&n);
    printf("Enter the number of days : ");
    scanf("%d",&x);
    printf("Enter the details of the cars\n");
    printf("*********X*********\n");
    for(i=0;i<n;i++) 
    {
        printf("Enter the car id : ");
        scanf("%d",&a[i].id);
        printf("Enter the model number : ");
        scanf("%d",&a[i].md);
        printf("Enter the rent per day : ");
        scanf("%f",&a[i].r);
        tm=x*a[i].r; 
        printf("The total cost is : %f\n",tm);
        printf("*********X*********\n");
        
    }
    return 0;
    
}