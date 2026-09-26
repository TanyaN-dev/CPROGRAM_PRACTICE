#include <stdio.h>

void spiralOrder(int matrix[][3], int rows, int cols)
{
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right)
    {
        // Left to right
        for (int i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    spiralOrder(matrix, 3, 3);

    return 0;
}