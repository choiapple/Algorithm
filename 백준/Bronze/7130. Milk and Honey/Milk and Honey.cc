#include <iostream>
#include <vector>
using namespace std;
int main(){
    int M, H, N, C, B, answer = 0;
    vector<pair<int, int> > vc;
    cin>>M>>H;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>C>>B;
        if(C * M > B * H){
            answer += C * M;
        }else{
            answer += B * H;
        }
    }
    cout<<answer<<"\n";
    return 0;
}