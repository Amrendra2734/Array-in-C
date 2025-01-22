#include<stdio.h>
int main(){
int r1,r2,c1,c2,a[20][20],b[20][20];

 printf("Enter the number of rows and column: ");
    scanf("%d %d",&r1, &c1);
    printf("Insert elements of matrix %dx%d\n",r1,c1);
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++) {
            scanf("%d",&a[i][j]);
             // Loop body
        }
    }

// Create Second Matrix
     printf("Enter the number of rows and column: ");
    scanf("%d %d",&r2, &c2);
    printf("Insert elements of matrix %dx%d\n",r2,c2);
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++) {
            scanf("%d",&b[i][j]);
             // Loop body
        }
        
    }
    int c[20][20];
    if(r1==r2 && c1==c2){
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}