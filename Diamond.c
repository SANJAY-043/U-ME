#include<stdio.h>

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    
    for(int i = 1; i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(int s = 1;s<=i;s++)
        {
            printf("%d",s);
        }
        for(int v = i-1;v>0;v--)
        {
            printf("%d",v);
        }
        printf("\n");
    }
    for(int i = 1; i<=n;i++)
    {
        for(int v = i;v>0;v--)
        {
            printf(" ");
        }
        for(int j=1;j<=(n-i);j++)
        {
            printf("%d",j);
        }
        for(int s= n-i-1;s>0;s--)
        {
            printf("%d",s);
        }
        
        printf("\n");
    }
    return 0;
}
