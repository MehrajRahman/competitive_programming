#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string newOne , output, test;
    int length,n,i;
    vector<string> vec1;
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        cin >> newOne;
        vec1.push_back(newOne);

    }
    

    for ( i = 0; i < n; i++)
    {
        test = vec1[i];
        length = test.length();
        if(length > 10){
            output = test[0] + to_string(length-2) + test[length - 1];
            cout << output << "\n";
        }
        else{
            output = test;
            cout << output << "\n";
        }

    }
    



    return 0;
}