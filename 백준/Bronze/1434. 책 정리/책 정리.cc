#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, shelf[51], books[51], answer = 0;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>shelf[i];
        answer += shelf[i];
    }
    for(int i=0; i<M; i++){
        cin>>books[i];
    }
    int j = 0;
    for(int i=0; i<M; i++){
        while(j < N){
            if(shelf[j] >= books[i]) {
                shelf[j] -= books[i];
                answer -= books[i];
                break;
            }else{
                j++;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}