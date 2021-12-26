#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    //Setup and reciving scores
    int n, k;
    cin >> n >> k;
    int scores[n];
    for(int i = 0; i < n; ++i)
        cin >> scores[i];
    
    //Get the number of scores that are leq to the k^th score
    int i = scores[k-1] > 0 ? k : 0;
    while(i < n and scores[i] >= scores[k-1] and scores[i] > 0) { i++; }

    //Output answer
    cout << i << endl;

    return 0;
}