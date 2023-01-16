#include <iostream>
#include <vector>
using namespace std;


int main(){
    int x,n,i, number, digit, value;
    vector<int> vec1;
    vector<int> vec2;
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        cin >> x;
        vec1.push_back(x);
    }
    value = 0;
    digit = 0;
    for ( i = 0; i < n; i++)
    {
        digit = 0;
        number = vec1[i];
        cout << "Number" << number << endl;
        for (int i = 0; i < 2; i++) {
            if(number % 10 == 1){
                digit += 1;
            }
            number /= 10;
            cout << number << endl;
        }
        if(digit >=2){
            value += 1;

                cout << value << endl << endl;
        }
       

        


    }
    cout << digit << endl;


    return 0;
}