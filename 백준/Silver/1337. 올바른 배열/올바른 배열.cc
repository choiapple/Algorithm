#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0, k, cur, len;
    long long tmp;
    cin>>N;
    vector<long long> vc;
    for(int i=0; i<N; i++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<N; i++){
        k = 1;
        len = 0;
        if(i + 5 <= N){
            len = i + 5;
        }else{
            len = N;
        }
        for(int j=i+1; j<len; j++){
            if(vc[j] - vc[i] <= 4){
                k++;
            }
        }
        if(k > answer){
            answer = k;
        }
    }
    cout<<5-answer<<"\n";
}