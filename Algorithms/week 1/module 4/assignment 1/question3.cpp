#include <bits/stdc++.h>
using namespace std;

int firoccur(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int index1 = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            index1 = mid;
            high = mid - 1; 
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return index1;
}

int lasoccur(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int index2 = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            index2 = mid;
            low = mid + 1; 
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return index2;
}

int main()
{
    int N;
    cin >> N;

    int num[N];
    for (int i = 0; i < N; ++i)   cin >> num[i];
    int K;
    cin >> K;
    int index1 = firoccur(num, N, K);
    int index2 = lasoccur(num, N, K);

    if (index2 - index1 > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
