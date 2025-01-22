#include<stdio.h>
int main(){
    int ar[20][20],n,m,s=0;
    char c,c1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &ar[i][j]);
            s=s+ar[i][j];
        }
    }
    printf("Do you want to display the array ? Y or N\n");
    scanf(" %c", &c);
    if(c=='Y'){for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",ar[i][j]);
            
        }
        printf("\n");
    }}
    else if(c=='N'){printf("Okay\n");}
    else{printf("Please answer with Y or N next time\n");}
    printf("Do you want the sum of all elements in the array ? Y or N\n");
    scanf(" %c", &c1);
    if(c1=='Y'){printf("%d",s);}
    else{printf("Bye");}
    return 0;
}