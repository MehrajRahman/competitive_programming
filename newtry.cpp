#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n][n-1];
    for(int i=0; i<n; i++){
      for(int j=0; j<n-1; j++){
        cin>>arr[i][j];
      }
    }
    ll ind1,ind2;

    map<int, int>ma;
    for(int i=0; i<n; i++){
      for(int j=0; j<1; j++){
        ma[arr[i][j]]++;
      }
    }
    int key, indexi, out;

    for(auto const& x: ma){
      if(x.second == 1){
        key = x.first;
      }
      else{
        out = x.first;
      }
    }

    for(int i=0; i<n; i++){
      for(int j=0; j<1; j++){
        if(arr[i][j] == key){
          indexi =  i;
        } 
      }
    }

    cout << out << " ";
    for(int i = indexi;  i <= indexi; i++){
      for(int j = 0;  j < n-1; ++j){
        cout << arr[i][j] << " ";
      }
    }
    cout << endl;
  }
}