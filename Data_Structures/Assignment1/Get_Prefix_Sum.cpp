#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for(long long int i=0; i<n; i++) cin>> a[i];

    long long int aa[n];
    aa[0]=a[0];

    for (long long int i=1; i<n; i++) aa[i]=a[i]+aa[i-1];

    for (long long int i=n-1; i>=0; i--) cout <<aa[i]<<" ";
    return 0;
}