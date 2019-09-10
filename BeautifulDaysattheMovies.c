#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int beautifulDays(int i,int j,int k) {
    int z,p,s,r,c=0,l;
    for(p=i;p<=j;p++)
    {
        r=0;
        z=p;
        while(z!=0)
        {
            s=z%10;
            r=(r*10)+s;
            z=z/10;
        }
        l=abs(p-r);
        if(l%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}

int main()
{
    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);
    beautifulDays(i,j,k);
    return 0;
}
