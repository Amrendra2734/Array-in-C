#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    int a[20][20],b[20][20];

 //Creating First matrix 
    printf("Enter the number of rows and column: ");
    scanf("%d %d",&r1, &c1);
    printf("Insert elements of matrix %dx%d\n",r1,c1);
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++) {
            scanf("%d",&a[i][j]);
             // Loop body
        }
    }

// Creating Second Matrix :3
     printf("Enter the number of rows and column: ");
    scanf("%d %d",&r2, &c2);
    printf("Insert elements of matrix %dx%d\n",r2,c2);
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++) {
            scanf("%d",&b[i][j]);
             
        }
        
    }


// Printing First matrix
    printf("First matrix:\n");
     for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++) {
           printf("%d ",a[i][j]);
             
        }
        printf("\n");
    }

//Printing second matrix
    printf("Second matrix:\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++) {
            printf("%d ",b[i][j]);
            
        }
        printf("\n");
    }
    

}