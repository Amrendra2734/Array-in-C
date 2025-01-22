#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    int a[20][20],b[20][20];

 //Create First matrix 
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


// Printing First matrix
    printf("First matrix:\n");
     for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++) {
           printf("%d ",a[i][j]);
             // Loop body
        }
        printf("\n");
    }

//Printing second matrix
    printf("Second matrix:\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++) {
            printf("%d ",b[i][j]);
             // Loop body
        }
        printf("\n");
    }
    

printf("Do you want to multiply these matrices? 'Y' or 'N'\n");
    char c9;
    // getchar();
    scanf("\n%c", &c9);
    if(c9=='N'){printf("Exit");
    return 0;
    }else{
 //For Matrix multiplication
    if(c1!=r2){printf("Multiplication not possible\n");}
    else{ int c[r1][c2];
    printf("Matrix multiplication\n"); 
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<r2;k++){
                c[i][j]=c[i][j] + a[i][k]*b[k][j];
            }
        }
    }  
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }  
    
    }   
    }
}