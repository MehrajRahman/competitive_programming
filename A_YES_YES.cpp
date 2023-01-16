#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string txt, test= "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> txt;


        if(test.find(txt) < 50){
            cout << "Yes" << endl;

        }
        else {
            cout << "No" << endl;
        }


    }

    return 0;
}
