#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    int c = 0;

    int l = n.length();

    for (int i = 0; i < l; i ++){
        int x =  int(n[i]) - 48;

        if(x == 4 || x ==7){
            c++;
        }

    }

    if(c == 4 || c == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
