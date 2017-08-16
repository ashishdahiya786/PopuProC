#include <stdio.h>
int  main()
{
    int n,i; 
    long long val=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
        val = val*i;
    
    printf("%d\n",val);
    return 0;
}
