#include <stdio.h>
#include <stdlib.h>

// Function to calculate diagonal difference
int diagonalDifference(int n, int matrix[n][n])
{

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++)
    {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = diagonalDifference(n, matrix);
    printf("Diagonal Difference: %d\n", result);

    return 0;
}
