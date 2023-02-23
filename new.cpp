//Bismillahir_Rahmanir_Raheeem
#include <bits/stdc++.h>
using namespace std;
 
//Main 
#define     ll                              long long;
#define     checkmate                       return 0;
#define     in_range(i,x,y)                 for(int i=x;i<y;i++);
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--);
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
const int M = 1e9+7;
#define N 1000000000
 
int main(int argc, char const *argv[]){
    fastread();
    int n,m,k,sum=0;
    cin >> n >> m >> k;
    map <int , int> mp;
    while(n--){
        int x,y;
        cin >> x >> y;
        if(mp.count(x) == 0){
            mp[x]=y;
        }
        else if( mp[x] > y){
            mp[x] = y;
        }
    }
    for(auto it : mp){
        sum += it.second;
        //cout << it.first << " " << it.second << endl;
    }
    if(sum < k) cout << sum;
    else cout << k;
}