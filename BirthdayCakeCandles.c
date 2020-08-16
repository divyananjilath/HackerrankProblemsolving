#include <stdio.h>
#include <stdlib.h>
int birthdayCakeCandles(int a[],int n)
{
    int i,max,count=0;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
           count++;
        }
    }
    return count;
}
int main()
{
    int n,i,a[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("%d",birthdayCakeCandles(a,n));
    return 0;
}
