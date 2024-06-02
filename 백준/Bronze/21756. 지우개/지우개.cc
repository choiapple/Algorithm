#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<int> vvc;
vector<int> vc;
int main(){
    cin>>N;
    for(int i=1; i<=N; i++){
        vc.push_back(i);
    }
    while(vc.size() != 1){
        vvc.clear();
        for(int i=1; i<vc.size(); i+=2){
            vvc.push_back(vc[i]);
        }
        vc = vvc;
    }
    cout<<vc[0]<<"\n";
    return 0;
}