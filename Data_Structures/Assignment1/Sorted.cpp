#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin>>a[i];
        
        int sorted=1;
        for (int i=0; i<n-1; i++)
        {
            if (a[i]>a[i + 1])
            {
                sorted=0;
                break;
            }
        }
        if(sorted==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}