#include<stdio.h>

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    //printing upper half of diamond
    //iscocles triangle 
    for(int i = 1; i<=n;i++)
    {
        //to print the spaces(decrease)
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        //print from left to middle 
        for(int s = 1;s<=i;s++)
        {
            printf("%d",s);
        }
        //To print the right side from middle in decreasing 
        //(i-1 bcz middle term is printed by i )
        for(int v = i-1;v>0;v--)
        {
            printf("%d",v);
        }
        printf("\n");
        //move to below line after printing the below line 
    }
    //to print the lower half of diamond 
    // code for printing inverted isoceles triangle 
    for(int i = 1; i<=n;i++)
    {
        //code for spaces (increase)
        for(int v = i;v>0;v--)
        {
            printf(" ");
        }
        //to print the left numbers from middle
        for(int j=1;j<=(n-i);j++)
        {
            printf("%d",j);
        }
        //n-i-1 bcz max no in row in n-i . numbers should decrease in right 
        for(int s= n-i-1;s>0;s--)
        {
            printf("%d",s);
        }
        // move to below line after printing a row 
        printf("\n");
    }
    return 0;
}
