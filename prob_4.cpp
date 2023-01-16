#include <iostream>
#include <vector>
#include<iterator>
using namespace std;

int main(){
    int a, limit, value,b, x;
    vector<int> g;


    value = 0;
    cin >> a >> limit;
    for(int i =1; i<=a; i++){
        cin >> b;
        g.push_back(b);
        if(i <= limit && b > 0){
            value++;
        }
        else{
            vector<int>::iterator it = g.begin();
            x = i;

            it += 2;
            cout << " \\ it "<< *it << " || i " << i;
            if(b > 0  ){
                value += 1;

            }


        }


    }

    cout << value;


    return 0;
}
