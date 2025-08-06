#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vc;
    int N, tmp, flag = 0;
    cin>>N;
    for(int i=1; i<=N; i++){
        flag = 0;
        for(int j=1; j<=10; j++){
            cin>>tmp;
            if(tmp != ((j-1)%5)+1){
                flag = 1;
            }
        }
        if(flag == 0) vc.push_back(i);
    }
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<"\n";
    }
    return 0;
}