#include<bits/stdc++.h>
#include<deque>
using namespace std;

void printKMax(deque<int> q, int n, int k)
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
    deque<int> q;
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k,data;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        cin>>data
            q.push_back(data)
                printKMax(q, n, k);
        t--;
    }
    return 0;
}