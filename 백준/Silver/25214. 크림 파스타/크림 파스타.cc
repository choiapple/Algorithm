#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    cin>>N;
    cin>>tmp;
    cout<<0<<" ";
    int mini = tmp, maxV = 0;
    for(int n=1; n<N; n++){
        cin>>tmp;
        if(maxV < tmp - mini){
            maxV = tmp - mini;
            cout<<maxV<<" ";
        }else{
            cout<<maxV<<" ";
        }
        if(mini > tmp) mini = tmp;
    }
}