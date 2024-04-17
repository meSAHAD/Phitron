#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<int, int> arr;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[a]++;
        }
        int max = INT_MIN;
        for(auto it = arr.begin(); it != arr.end(); it++)
        {
            if(it->second > max)
            {
                max = it->second;
            }
        }        
        int max_n = INT_MIN;
        for(auto it = arr.begin(); it != arr.end(); it++)
        {
            if(it->second == max)
            {
                if(it->first > max_n) max_n = it->first;
            }
        }
        cout << max_n << " " << max << endl;
    }
return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
const int MOD = 998244353;
vector<vector<int>> m(200005);
vector<int> parent(200005);
vector<int> depth(200005);


signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
  int n;
  cin>>n;
  vi a(n,0);
  read(a);
  vi b=a;
  sort(b.begin(),b.end());
  if(a==b){
   cout<<"YES"<<endl;
   continue;
  }
  vector<int> v;
  int maxi=a[0];
  int inc=0;
  for(int i=1;i<n;i++){
   maxi=max(a[i],maxi);
   if(a[i]<maxi){
    v.push_back(i);
    inc=max(inc,maxi-a[i]);
   }
  }
  
  int f=1;
  for(int i=1;i<v.size();i++){
   if(v[i]==v[i-1]+1){f=0;}
  }
  for(auto it:v){
   a[it]=a[it]+inc;
  }
  b=a;
  sort(b.begin(),b.end());
  if(a==b and f==1){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
  
}

return 0;
}