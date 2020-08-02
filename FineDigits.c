#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,arr[100000],i,count,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        count=0;
        scanf("%d",&arr[i]);
        int r=0;
        d=arr[i];
        while(arr[i]!=0){
            r=arr[i]%10;
            if(r!=0){
            if(d%r == 0){
                count++;
            }}
            arr[i]=arr[i]/10;
        }
        printf("%d\n",count);
    }
    return 0;
}
