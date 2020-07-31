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
    int n,i,arr[100];
    float m=0.0,p=0.0,z=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            m=m+1;
        }
        else if(arr[i]==0){
            z++;
        }
        else{
            p++;
        }
    }
    printf("%f\n",p/n);
    printf("%f\n",m/n);
    printf("%f\n",z/n);
return 0;
}
