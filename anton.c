#include<stdio.h>
// #include<string.h>
// #include <bits/stdc++.h>
// #include "stdio.h"
// using namespace std;
// typedef long long int ll;
// #define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
// #define precision cout << fixed << setprecision(12);
// #define done cout<<"Successful\n";
// #define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
// #define print(x) cout<< #x <<" = "<< x<<"\n";
// #define nl "\n"
// #define sp " "



void solve(){
   char a[1000];
   gets(a);
   int arr[26] = {0}, count = 0;
    for(int i = 0; i < 1000 ; i++){
        if(a[i] == '\0' ){
            break;
        }
        else{
            char x = tolower(a[i]);
            if(a[i] >= 97 && a[i] <= 122 ){
                arr[a[i] - 'a']++;
            }
        }
    }
    for(int i =  0; i< 26 ; i++){
        if(arr[i]  > 0){
            count++;
        }
    }
    printf("%d", count);
}


int main(){
    // fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}
