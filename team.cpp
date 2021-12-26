#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n, res = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        int m, counter = 0;
        for(int j = 0; j < 3; ++j){
            cin >> m;
            counter += m;
        }
        if(counter > 1){
            res++;
        }
    }

    cout << res;
    return 0;
}