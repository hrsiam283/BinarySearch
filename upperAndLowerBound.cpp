#include <bits/stdc++.h>
#define nl '\n'
#define maxi 1000000000
using namespace std;
int UpperBound(int n, int arr[], int x)
{

    int lo_index = 0, hi_index = n - 1, mid;
    while (hi_index - lo_index > 1)
    {
        mid = (hi_index - lo_index) / 2 + lo_index;
        if (arr[mid] <= x) // equl or less can't be upperbound, so we cut these
        {
            lo_index = mid + 1;
        }
        else
            hi_index = mid;
    }
    if (arr[lo_index] > x)
        return lo_index;
    if (arr[hi_index] > x)
        return hi_index;
    return n;
}
int LowerBound(int n, int arr[], int x)
{
    int lo_index = 0, hi_index = n - 1, mid;
    while (hi_index - lo_index > 1)
    {
        mid = (hi_index - lo_index) / 2 + lo_index;
        if (arr[mid] < x) // equl or less can't be upperbound, so we cut these
        {
            lo_index = mid + 1;
        }
        else
            hi_index = mid;
    }
    if (arr[lo_index] >= x)
        return lo_index;
    if (arr[hi_index] >= x)
        return hi_index;
    return n;
}
int lower(int n, int arr[], int x) // it's a lower_bound alike function that returns equal or imidiate small values index
{
    int lo_index = 0, hi_index = n - 1, mid;
    while (hi_index - lo_index > 1)
    {
        mid = (hi_index - lo_index) / 2 + lo_index;
        if (arr[mid] > x)
        {
            hi_index = mid - 1;
        }
        else
            lo_index = mid;
    }
    if (arr[hi_index] <= x)
        return hi_index;
    if (arr[lo_index] <= x)
        return lo_index;
    return n;
}
int upper(int n, int arr[], int x)
{
    int lo_index = 0, hi_index = n - 1, mid;
    while (hi_index - lo_index > 1)
    {
        mid = (hi_index - lo_index) / 2 + lo_index;
        if (arr[mid] >= x)
        {
            hi_index = mid - 1;
        }
        else
            lo_index = mid;
    }
    if (arr[hi_index] < x)
        return hi_index;
    if (arr[lo_index] < x)
        return lo_index;
    return n;
}
int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << LowerBound(7, arr, 3) << endl;
    cout << UpperBound(7, arr, 3) << endl;
    cout << lower(7, arr, 3) << endl;
    cout << upper(7, arr, 3) << endl;
}