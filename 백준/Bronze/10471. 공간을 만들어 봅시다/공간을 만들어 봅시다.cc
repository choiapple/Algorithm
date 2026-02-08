#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer[101] = {0, }, W, P, tmp;
    vector<int> L;
    cin>>W>>P;
    L.push_back(0);
    L.push_back(W);
    for(int p=0; p<P; p++){
        cin>>tmp;
        L.push_back(tmp);
    }
    sort(L.begin(), L.end());
    for(int p=0; p<P+2; p++){
        for(int i=p+1; i<P+2; i++){
            tmp = L[i] - L[p];
            answer[tmp] = 1;
        }
    }
    for(int i=0; i<=W; i++){
        if(answer[i] != 0) cout<<i<<" ";
    }
    return 0;
}