#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, H, W;
    string answer, tmp, arr[11];
    cin>>N>>H>>W;
    for(int h=0; h<H; h++){
        cin>>arr[h];
    }
    for(int i=0; i<N*W; i+=W){
        tmp = "?";
        for(int j=0; j<H; j++){
            for(int k=i; k<i+W; k++){
                if(arr[j][k] != '?'){
                    tmp = arr[j][k];
                }
            }
        }
        answer += tmp;
    }
    cout<<answer<<"\n";
    return 0;
}