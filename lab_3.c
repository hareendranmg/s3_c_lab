#include <stdio.h>

void printTwoDimensionalArr(int arr[][3], int rows, int columns);
void printRowAverage(int arr[][3], int rows, int columns);

int main()
{
    int rows = 1, columns = 1;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter array values: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printTwoDimensionalArr(arr, rows, columns);
    printRowAverage(arr, rows, columns);

    return 0;
}

void printRowAverage(int arr[][3], int rows, int columns)
{
    int sum = 0, avg = 0;

    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Average of the row elements is %d\n", sum / columns);
    }
}

void printTwoDimensionalArr(int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf(" %d ", arr[i][j]);
        }

        printf("\n");
    }
}