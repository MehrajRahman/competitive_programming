
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(6);
#define done cout<<"Successful\n";
#define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
   vector< int> v(5);
   v[0] = 10;
   v[1] = 20;
   v[2] = 70;
   v[3] = 40;
   v[4] = 50;
   

   for(int x : v){
      cout << x << endl;
   }

   vector<int>::iterator it = v.begin();

   cout << *it <<endl;

   sort(v.begin(), v.end());

   for(int x : v){
      cout << x << endl;
   }

   // red black binary searching

   // o(log n)

   set <int >st;

   st.insert(20);
   st.insert(15);
   st.insert(30);


   st.count(13) > 0? 
   cout<< "there is  thirteen " <<endl
    :cout<< "there is no thirteen " <<endl; 


   st.count(15) > 0? cout<< "there is 15 " <<endl:cout<< "there is no 15 " <<endl; 

   for(int x:st){
      cout << x<< " ";
   }
   cout << endl;



   vector <pair<int, int>>q(5);
   q[0].first  = 10;
   q[0].second  = 2;

   q[1] = make_pair(20,2);
   q[2] = make_pair(5,1);
   q[3] = make_pair(5,2);
   q[4] = make_pair(20,3);


   sort(q.begin(), q.end());
   for(pair<int,int> p:q){
      cout << p.first<<" ";
      cout << p.second<<endl;
   }





   


}


int main(){
    fast;
   
     solve();
    return 0;
}
