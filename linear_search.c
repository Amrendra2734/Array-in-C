#include<stdio.h>
int main(){
    int a[20];
    int n,num,found = 0;                 //initial value of found will be zero 
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number that you want to search: ");
    scanf("%d",&num);

    for(int i=0;i<n;i++){

        if(a[i]==num){
            printf("%d Found in index %d\n",num,i);
            found=1;              //found is basically a verification variable i.e if found = 1, it means that found = true 
            }

    }
if(!found){                      // !found means found = 0 which means found = false
     printf("Not Found!!\n");
}
}