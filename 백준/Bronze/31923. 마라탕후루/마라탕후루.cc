#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, P, Q, tmp;
    vector<int> A, B, answer;
    cin>>N>>P>>Q;
    for(int n=0; n<N; n++){
        cin>>tmp;
        A.push_back(tmp);
    }
    for(int n=0; n<N; n++){
        cin>>tmp;
        B.push_back(tmp);
    }
    for(int n=0; n<N; n++){
        int a = A[n];
        int b = B[n];
        int j = 0;
        while(a != b){
            a += P;
            b += Q;
            j++;
            if(j == 10000){
                cout<<"NO";
                return 0;
            }
        }
        answer.push_back(j);
    }
    cout<<"YES"<<"\n";
    for(int n=0; n<N; n++){
        cout<<answer[n]<<" ";
    }
    return 0;
}