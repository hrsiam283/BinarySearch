#include <bits/stdc++.h>
#define nl '\n'
#define maxi 1000000000
using namespace std;
int binSearch(int n, int arr[], int x)
{

    int lo_index = 0, hi_index = n - 1, mid;
    cout << mid << endl;
    while (hi_index - lo_index > 1)
    {
        mid = (hi_index - lo_index) / 2 + lo_index;
        if (arr[mid] < x)
        {
            lo_index = mid + 1;
        }
        else
            hi_index = mid; // equal conditions also lies here. Thats why hi_index = mid-1 isn't applicable
    }
    if (arr[lo_index] == x)
        return lo_index;
    else if (arr[hi_index] == x)
        return hi_index;
    else
        return -1;
}
int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << binSearch(7, arr, 6) << endl;
}