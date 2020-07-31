#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[100],b[100],i,al=0,bo=0;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            al++;
        }
        else if(a[i]<b[i]){
            bo++;
        }
    }
    printf("%d %d",al,bo);
    return 0;
}
