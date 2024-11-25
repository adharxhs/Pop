void main() {

 int A[10][10], B[10][10], c[10][10], i, j, k, m, n, p, q;

 printf("Enter the order of matrix A\n");

 scanf("%d%d", &m, &n);

 printf("Enter the order of matrix B\n");

 scanf("%d%d", &p, &q);

 if (n != p) {

 printf("Matrix multiplication not possible\n");

 exit(0);

 }

 printf("Enter the elements of matrix A:\n");

 for (i = 0; i < m; i++) {

 for (j = 0; j < n; j++) {

 scanf("%d", &A[i][j]);

 }

 }

 printf("Enter the elements of matrix B:\n");

 for (i = 0; i < p; i++) {

 for (j = 0; j < q; j++) {

 scanf("%d", &B[i][j]);

 }

 }

 for (i = 0; i < m; i++) {

 for (j = 0; j < q; j++) {

 c[i][j] = 0;

 for (k = 0; k < n; k++) {
c[i][j] += A[i][k] * B[k][j];

 }

 }

 }

 printf("Matrix A is:\n");

 for (i = 0; i < m; i++) {

 for (j = 0; j < n; j++) {

 printf("%d\t", A[i][j]);

 }

 printf("\n");

 }

 printf("Matrix B is:\n");

 for (i = 0; i < p; i++) {

 for (j = 0; j < q; j++) {

 printf("%d\t", B[i][j]);

 }

 printf("\n");

 }

 printf("Resultant matrix C is:\n");

 for (i = 0; i < m; i++) {

 for (j = 0; j < q; j++) {

 printf("%d\t", c[i][j]);

 }

 printf("\n");

 }

}
