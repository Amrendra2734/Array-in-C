#include<stdio.h>
int main(){
    int ar[20][20],n,m,s=0;
    char c,c1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
// Creating array
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &ar[i][j]);
            // s=s+ar[i][j];
        }
    }
//sum of diagonals
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
           if(i==j){ s=s+ar[i][j];}
        }}printf("%d\n",s);
}