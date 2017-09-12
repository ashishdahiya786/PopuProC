#include <stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter length of fibonacci series =");
    scanf("%d",&n);
    
    if(n==1)
        printf("0");
    else if(n==2)
        printf("0\n1");
    else if(n<1)
    {
        printf("invalid input");
        return 0;
    }

    else{
        printf("0\n1\n");
        for(int i=3; i<=n; i++)
        {
           c=a+b;
           printf("%d\n",c);
           a=b;
           b=c;
        }
    }

    return 0;
}
