#include <iostream>
#include <string>
using namespace std;


int main(){
    string a, b;
    int sizea,sizeb ,n = 0;

    cin >> a>>b;

    sizea = a.length();
    sizeb = b.length();

    if(sizea == sizeb){
        for(int i = 0; i < sizea; i++){
            if(a[i] != b[sizea - i -1]){
                n = 1;
            }
        }
        if(n == 1){
            cout << "NO";
        }
        else{
        cout << "YES";
        }
    }
    else{
        cout << "NO";
    }


    return 0;
}


