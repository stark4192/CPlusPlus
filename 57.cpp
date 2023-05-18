// WAP to find sort an integer array and a float array, using function template
#include <iostream>
#include <string>
using namespace std;
template <class T>
void sort(T arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k = 0; k < a; k++)
        cout << arr[k] << "-";
}
int main();
{
    int m, n;
    printf("size of int array : ");
    scanf("%d", &n);
    printf("size of float array : ");
    scanf("%d", &m);
    int iarr[n];
    float farr[m];
    for (int i = 0; i < n; i++)
    {
        printf("int arr[%d] = ", i);
        scanf("%d", &iarr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("float arr[%d] = ", i);
        scanf("%f", &farr[i]);
    }
    sort(iarr, n);
    cout << endl;
    sort(farr, n);
    return 0;
}