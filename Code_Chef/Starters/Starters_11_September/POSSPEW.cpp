#include<bits/stdc++.h>
#define int long long
#define pb push_back 
#define MAX INT_MAX
#define MIN INT_MIN
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define mod1 998244353
#define LMAX 9223372036854775807
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define btz(n) __builtin_ctz(n)
using namespace std;



void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    set<int> s1;
    for(int j=0;j<n;j++){
        cin >> arr[j];
        if(arr[j]>0){
            s1.insert(j);
        }
    }
    if(s1.size()==0){
        cout << "0\n";
    }
    else{
        int arr1[n];
        int ans=0,tmax=0;
        for(int j=0;j<n;j++){
            if(arr[j]==0){
                auto it=s1.lower_bound(j);
                if(it==s1.begin() || it==s1.end()){
                    int x=*s1.begin();
                    int y=*s1.rbegin();
                                   
                    x=min(abs(x-j),min(n-j+x,n-x+j));
                
                    y=min(abs(y-j),min(n-j+y,n-y+j));

                    arr1[j]=min(x,y);
                   
                }
                else{
                    int x=*it;
                    it--;
                    int y=*it;
                    arr1[j]=min(abs(j-x),abs(j-y));
                }

            }
            else{
                arr1[j]=0;
            }
            tmax=min(k,max(tmax,arr1[j]));
        }
        int z=k-tmax;
        ans+=(z*2*n);
        for(int j=0;j<n;j++){
            
            if(j==0){
                if(arr1[j+1]<tmax)
                    ans+=abs(tmax-arr1[j+1]);
                if(arr1[n-1]<tmax)
                    ans+=abs(tmax-arr1[n-1]);
               
            }
            else if(j==n-1){
                if(arr1[0]<tmax)
                    ans+=abs(tmax-arr1[0]);
                if(arr1[j-1]<tmax)
                    ans+=abs(tmax-arr1[j-1]);
            }
            else{
                if(arr1[j-1]<tmax)
                    ans+=abs(tmax-arr1[j-1]);
                if(arr1[j+1]<tmax)
                    ans+=abs(tmax-arr1[j+1]);
            }
            ans+=arr[j];
        }
        cout << ans << "\n";
    }
}

signed main(){
    fast_io;
   // #ifndef ONLINE_JUDGE
   //    freopen("input.txt", "r", stdin);
   //    freopen("output.txt", "w", stdout);
   // #endif
    //sieve();
    //facto(1000000);
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
