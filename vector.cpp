#include <iostream>
#include <vector>

using namespace std;
int main(){

    vector<int> v(5);
    cout << "Enter numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> v[i];
    }

    v.pop_back();


    for(int i = 0; i < 5; i++){
        cout << v[i] <<" ";
    }

    cout << v.size();

        return 0;
}
