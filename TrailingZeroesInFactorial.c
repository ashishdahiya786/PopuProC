#include <stdio.h>
int main()
{
    int n,i,z=0;
    printf("enter the number...");
    scanf("%d",&n);
    for(i=5; i<=n; i=i*5)
        z = z + (n/i);
    printf("%d",z);
    return 0;
}
