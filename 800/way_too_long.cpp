#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string words[n];
    
    for(int i = 0; i < n; ++i)
        cin >> words[i];

    for(int i = 0; i < n; ++i){
        int size = words[i].size();
        if(size > 10){
            cout << words[i].front();
            cout << size - 2;
            cout << words[i].back() << endl;
        } else {
            cout << words[i] << endl;
        }
    }

    return 0;
}