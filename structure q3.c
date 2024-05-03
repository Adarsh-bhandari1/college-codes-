Q3. /* Define a structure called circle to represent each circle with a radius.Write a
C program to calculate the area and perimeter of each circle and display the
output */


#include<stdio.h>
typedef struct circle
{
    float r;
} cr;
int main()
{
    cr a[60];
    int i,n;
    float ar,pr;
    printf("Enter the the number of records: ");
    scanf("%d",&n);
    printf("Enter the details\n");
    printf("*********X*********\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the radius : ");
        scanf("%f",&a[i].r);
        ar=3.14*a[i].r*a[i].r;
        pr= 3.14*2*a[i].r;
        printf("The area of the given circle is : %f\n",ar);
        printf("The perimeter of the given circle is : %f\n",pr);
         printf("*********X*********\n");
        
    }
    return 0;
    
}