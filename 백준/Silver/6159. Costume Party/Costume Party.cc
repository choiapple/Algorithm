#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, S, L;
    int answer = 0;
    cin>>N>>S;
    vector<int> vc;
    for(int i=0; i<N; i++){
        cin>>L;
        vc.push_back(L);
    }
    sort(vc.begin(), vc.end());
    
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(vc[i] + vc[j] <= S){
                answer++;
            }
        }
    }
    
    cout<<answer<<"\n";
}