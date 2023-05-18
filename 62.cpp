#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    void twosum(int &nums, int target, int a)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if ((nums + i) + (nums + j) == target)
                {
                    cout << "[" << i << "," << j << "]";
                }
            }
        }
    }
};
int main()
{
    Solution s;
    int size;
    cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cin >> *(nums + i);
    }
    int target;
    cin >> target;
    s.twosum(*nums, target, size);
}