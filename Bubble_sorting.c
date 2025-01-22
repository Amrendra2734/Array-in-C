#include<stdio.h>
int main(){
    int n,a[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
//Creating a 1D array
printf("Insert the elements:\n"); 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
//print array before sorting 
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
for(int i=0;i<n-1;i++){              //Number of passes
    for(int j=0;j<n-i-1;j++){        //Number of comparison
    if(a[j]<a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];                //swapping
        a[j+1]=temp;
        }

    }
}
//printing Sorted array
printf("Sorted Array\n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}

}