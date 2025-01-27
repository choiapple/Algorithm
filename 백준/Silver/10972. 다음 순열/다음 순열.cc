#include <iostream>
#include <vector>
using namespace std;
bool next_permutation(vector<int> &vc, int N) {
    int i = N - 1;
    while(i > 0 && vc[i - 1] >= vc[i]) i -= 1;
    if(i <= 0) return false;
    int j = N - 1;
    while(vc[j] <= vc[i - 1]) j -= 1;
    swap(vc[j], vc[i-1]);
    j = N - 1;
    while(i < j){
        swap(vc[i], vc[j]);
        i += 1;
        j -= 1;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    vector<int> vc(N);
    for(int i=0; i<N; i++){
        cin>>vc[i];
    }
    if(next_permutation(vc, N)) {
        for(int i=0; i<N; i++){
            cout<<vc[i]<<" ";
        }
    }else{
        cout<<-1<<"\n";
    }
}