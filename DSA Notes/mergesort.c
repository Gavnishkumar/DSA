#include <stdio.h>
void mergesort(int arr1[], int n1, int arr2[], int n2)
{
    int mergearray[50];
    int i, count1 = 0, count2 = 0;
    for (i = 0; i < n1 + n2; i++)
    {
        if (arr1[count1] <= arr2[count2] && count1 < n1)
        {
            mergearray[i] = arr1[count1];
            count1++;
        }
        else if (arr2[count2] < arr1[count1] && count2 < n2)
        {
            mergearray[i] = arr2[count2];
            count2++;
        }
        else if (count1 >= n1)
        {
            mergearray[i] = arr2[count2];
            count2++;
        }
        else if (count2 >= n2)
        {
            mergearray[i] = arr1[count1];
            count1++;
        }
    }
    printf("%d %d \n", count1, count2);
    for (int i = 0; i < n1 + n2; i++)
    {
        printf(" %d ", mergearray[i]);
    }
}
int main()
{
    int arr1[] = {2, 5, 7, 9, 13};
    int arr2[] = {1, 3, 5, 8, 9, 12, 26};
    int n1 = 5;
    int n2 = 7;
    mergesort(arr1, n1, arr2, n2);
    return 0;
}