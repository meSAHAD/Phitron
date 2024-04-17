#include<bits/stdc++.h>

using namespace std;

void merge(int arr1[], int arr2[], int result[], int n1, int n2)
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] >= arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else
        {
            result[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        result[k++] = arr1[i++];
    }

    while (j < n2)
    {
        result[k++] = arr2[j++];
    }
}

int main()
{
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    int n = n1 + n2;
    int result[n];
    merge(arr1, arr2, result, n1, n2);
    for (int i = 0; i <n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
