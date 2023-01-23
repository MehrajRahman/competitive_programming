#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(12);
#define done cout<<"Successful\n";
#define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
   int n;

   cin >> n;

   // vector <int > v(n-1);
   // vector <int > r(n);

   int arr[n] = {1};
   int arr2[n] = {1};

   input(arr, n-1);
   int x = 1;

   for (int i = 0; i < n-1; ++i)
   {
      if(v[i] == 0){
         r[i] = x;

      }
      if(v[i] == 1){
         r[i] = x;
         x++;
      }
      if(v[i]==2){
         if(x == 1){
            x++;
         }
         r[i] = x;
         
         if(x > 1)x--;
      }
   }
   r[n-1]  = x;

   for(int j = n - 2; j >= 0; j--){
            if(v[j] == 2){
               r[j] = r[j+1] +1;
            }
   }
   for (int i = n - 2; i >= 0; --i)
   {
      if(v[i] == 0){

         r[i] = r[i+1];

      }
 
   }
   for(int j = n - 2; j >= 0; j--){
            if(v[j] == 2){
               r[j] = r[j+1] +1;
            }
   }

   for (int i = 0; i < n; ++i)
   {
      cout << r[i] << " ";
   }
   cout << endl;
}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}




























// # Project name : SPOJ: MOZSATLA - Sharmeen and the Lost Array
// # Author       : Wojciech Raszka
// # E-mail       : gitpistachio@gmail.com
// # Date created : 2019-04-22
// # Description  :
// # Status       : Accepted (23672782)
// # Tags         : python
// # Comment      :

// T = int(input())

// while T > 0:
//     n = int(input())
//     X = input().split()
//     A = [1]*n

//     for i in range(n - 2, -1, -1):
//         if X[i] == '0':
//             A[i] = A[i + 1]
//         elif X[i] == '1':
//             A[i] = 1
//             if A[i + 1] == 1:
//                 l = i + 1
//                 A[l] += 1
//                 while l < n - 1:
//                     if X[l] == '0':
//                         A[l + 1] += 1
//                     elif X[l] == '1' and A[l + 1] <= A[l]:
//                         A[l + 1] += 1
//                     else:
//                         break
//                     l += 1
//         else:
//             A[i] = A[i + 1] + 1

//     print(' '.join(map(str, A)))
//     T -= 1