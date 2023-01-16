#include <iostream>
using namespace std;

int main(){
    int n , cp = 0, mn = 0, a, b;
    cin >> n;

    for(int i = 1; i <=n; i++  ){
        cin >> a >> b;
        cp  = cp + b -a;

        if(cp > mn){
            mn = cp;
        }

    }

    cout << mn;
    return 0;
}
