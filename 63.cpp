#include <bits/stdc++.h>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    int a = 0;
    while (a + k != n + 1)
    {
        int x = *max_element(arr + a, arr + a + k);
        cout << x;
        a++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}