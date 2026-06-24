#include <stdio.h>

int main(){
    int i,j,count=1;
    for(i=1;i<=5;i++){ //1
        for(j=i;j<=5;j++){ //12345
            printf("%d ",j);
            
        }
        printf("\n");
    }
    return 0;
}