#include <stdio.h>

int main() {
    int t;  // So bo test
    scanf("%d", &t);
    
    for (int k = 1; k <= t; k++) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int a[n][m];  // Ma tran A
        // Doc ma tran A
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        
        // Tinh ma tran tich A * A^T, ma tran ket qua co kich thuoc n x n
        int result[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = 0;
                // Tinh tich vo huong cua hang i cua A va hang j cua A^T (hay cot j cua A)
                for (int k = 0; k < m; k++) {
                    result[i][j] += a[i][k] * a[j][k];
                }
            }
        }
        
        // In ket qua
        printf("Test %d:\n", k);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) printf(" ");
                printf("%d", result[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
