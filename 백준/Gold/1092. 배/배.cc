#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, M, tmp;
    int crain[51] = {0, };
    vector<int> box;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>crain[i];
    }
    sort(crain, crain+N);
    cin>>M;
    for(int i=0; i<M; i++){
        cin>>tmp;
        box.push_back(tmp);
    }
    sort(box.begin(), box.end());
    if(crain[N-1] < box[M-1]){
        cout<<-1<<"\n";
        return 0;
    }
    int answer = 0;
    while(!box.empty()){
        answer++;
        for(int i=N-1; i>=0; i--){
            for(int j=box.size()-1; j>=0; j--){
                if(box[j] <= crain[i]){
                    box.erase(box.begin()+j);
                    break;
                }
            }
        }
    }
    cout<<answer<<"\n";
}