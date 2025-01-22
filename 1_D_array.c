#include<stdio.h>
int main(){
    int a[5];
    for(int i=0; i< 5 ;i++){
        scanf("%d",&a[i]);
    }
    for(int j=4;j>=0;j--)
    {printf("%d ",a[j]);

    }
}