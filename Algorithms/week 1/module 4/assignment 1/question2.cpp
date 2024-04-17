#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int N;
    cin >> N;
    int numbers[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }
    int k;
    cin >> k;

    int index = binarySearch(numbers, 0, N - 1, k);

    if (index != -1)
        cout << index << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}