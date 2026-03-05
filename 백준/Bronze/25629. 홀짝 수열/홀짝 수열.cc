#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, answer = 1, tmp;
    vector<int> vc1, vc2;
    cin>>N;
    for(int n=1; n<=N; n++){
        cin>>tmp;
        if(tmp%2 == 0){
            vc2.push_back(tmp);
        }else{
            vc1.push_back(tmp);
        }
    }
    if(N%2 == 0){
        if(vc2.size() != vc1.size()){
            answer = 0;
        }
    }else{
        if(vc1.size() != vc2.size() + 1){
            answer = 0;
        }
    }
    cout<<answer;
    return 0;
}