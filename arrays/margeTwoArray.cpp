#include <iostream>
using namespace std;
void margeTwoArray(int num1[], int m, int num2[], int n)
{
    int num[m + n], j = 0;

    // int my algorithm marge two arrays
    for (int i = 0; i <= m + n; i++)
    {
        if (i < m)
        {
            num[i] = num1[i];
        }
        else if (i >= m)
        {
            num[i] = num2[j];
            j++;
        }
    }
    // print the all element of num[m+n]
    for (int i = 0; i < m + n; i++)
    {
        cout << num[i];
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 0, 0, 0}, arr2[] = {2, 5, 6};
    int arr1_lenght = 3, arr2_lenght = 3;
    margeTwoArray(arr1, arr1_lenght, arr2, arr2_lenght);
}