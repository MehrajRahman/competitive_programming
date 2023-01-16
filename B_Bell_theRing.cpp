#include <iostream>
#include <vector>
using namespace std;

int main (){
    int t, n, x;
    cin >> t;
    for(int i = 0; i < t; i++ ){
        int v = 0;
        cin >> n;
        int s = n;
        vector<int>myvector;
        for(int j = 0; j < n; j++){
            cin >> x;
            myvector.push_back(x);
        }

       int k = 0;
       while(k < s){



            if(s > 1  &&myvector.at(0) == myvector.at(s - 1)){
            cout<<"Checked"<<endl;
                v = 0;
                myvector.pop_back();
                s--;
            }else{
                v++;
                myvector.pop_back();
                s--;
            }
       }
       cout << v << " ";





    }

    return 0;
}
