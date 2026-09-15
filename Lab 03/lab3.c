#include<stdio.h>

void traverse(int n, int m, int a[n][m]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}

void linear_search(int n, int m, int a[n][m], int target){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j]==target){
                printf("\nFound %d at index (%d, %d).\n", target, i, j);
                return;
            }
        }
    }
    printf("\nCouldn't find %d in matrix.\n");
}

void sum(int n, int m, int a[n][m]){
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) res+=a[i][j];
    }
    printf("\nSum of matrix is %d.\n", res);
}

void minmax(int n, int m, int a[n][m]){
    int mini = a[0][0];
    int maxi = a[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] < mini) mini = a[i][j];
            if (a[i][j] > maxi) maxi = a[i][j];
        }
    }
    printf("\nMinimum is %d, Maximum is %d.\n", mini, maxi);
}

void matrix_mult(int n, int m, int a[n][m], int b[n][m], int c[n][m]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            c[i][j] = a[i][j]*b[i][j];
        }
    }
}

void diagonals(int n, int m, int a[n][m]){
    int p = 0, s = 0;
    printf("\nPrinciple diagonal elements: ");
    for (int i = 0; i < n; i++){
        p += a[i][i];
        printf("%d ", a[i][i]);
    }
    printf("\nSecondary diagonal elements: ");
    for (int i = 0; i < n; i++){
        s += a[i][n-1-i];
        printf("%d ", a[i][n-1-i]);
    }
    printf("\nPrinciple Sum: %d\nSecondary Sum: %d\n", p, s);
}

void upper_triangle(int n, int m, int a[n][m]){
    printf("\nUpper Triangular: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i<=j) printf("%d ", a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}

void lower_triangle(int n, int m, int a[n][m]){
    printf("\nLower Triangular: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i>=j) printf("%d ", a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}

void transpose(int n, int m, int a[n][m]){
    printf("\nTranspose: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

void sum_per_row(int n, int m, int a[n][m]){
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++) sum += a[i][j];
        printf("\nSum of Row %d: %d", i, sum);
    }
}

void sum_per_column(int n, int m, int a[n][m]){
    for (int j = 0; j < m; j++){
        int sum = 0;
        for (int i = 0; i < n; i++) sum += a[i][j];
        printf("\nSum of Column %d: %d", j, sum);
    }
}

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{2,3,4},{5,4,3},{1,1,1}};
    
    int n = 3, m = 3;

    int c[3][3]; matrix_mult(n, m, a, b, c);
    
    printf("Matrix A: \n");
    traverse(n, m, a);
    printf("\nMatrix B: \n");
    traverse(n, m, b);

    printf("\nFollowing operations are on matrix A.\n");
    linear_search(n, m, a, 2);

    sum(n, m, a);

    minmax(n, m, a);

    printf("\nMatrix Mult of A and B: \n");
    traverse(n, m, c);

    diagonals(n, m, a);

    upper_triangle(n, m, a);

    lower_triangle(n, m, a);

    transpose(n, m, a);

    sum_per_row(n, m, a);

    sum_per_column(n, m, a);

    return 0;
}