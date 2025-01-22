#include<stdio.h>
int main(){
    int n,s=0,d,c=0,a[32];
    printf("Enter the number ");
    scanf("%d", &n);
    int copy=n;
    while(copy> 0 ){
        copy/=2;
        c++;
    }
    // printf("%d",c);
    for(int i=c-1;i>=0;i--){
        if(n%2==1){
            a[i]=1;
            n=n/2;
            // printf("%d ",n);
            }
        else if(n%2==0){
            a[i]=0;
            n=n/2;
            // printf("%d ",n);
        }
        
    }
    for(int i=0;i<c;i++){
    printf("%d",a[i]);}
    return 0;
}
