# include <stdio.h>

int main(){
    int a[10][10], b[10][10], c[10][10], row_num_a, col_num_a, row_num_b, col_num_b;
    
    printf("enter matrix A row num = \n");
    scanf("%d", &row_num_a);
    printf("enter matirx A col num = \n");
    scanf("%d", &col_num_a);

    printf("enter matrix B row num = \n");
    scanf("%d", &row_num_b);
    printf("enter matirx B col num = \n");
    scanf("%d", &col_num_b);

    if (row_num_b != col_num_a){
        printf("A column number must equal to B row number\n try again");
    }

    else{
        printf("matirx a = \n");
        for (int i = 0; i < row_num_a; i++){
            for (int j = 0; j < col_num_a; j++){
                scanf("%d", &a[i][j]);
            }
        }
        
        printf("matrix B= \n");
        for (int i = 0; i < row_num_b; i++){
            for (int j = 0; j < col_num_b; j++){
                scanf("%d", &b[i][j]);
            }
        }

        printf("matrix C = \n");
        for (int i = 0; i < row_num_b; i++){
            for (int j = 0; j < col_num_b; j++){
                c[i][j] = 0;
                for (int k = 0; k < col_num_a; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < row_num_a; i++){
            for (int j = 0; j < col_num_b; j++){
                printf("%4d", c[i][j]);
            }
            printf("\n");
        }
    }
}