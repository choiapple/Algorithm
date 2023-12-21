#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, tmp;
    while(true){
        cin>>N;
        if(N == 0) break;
        vector<int> vc;
        for(int i=0; i<N; i++){
            cin>>tmp;
            int len = vc.size();
            if(len == 0){
                vc.push_back(tmp);
            }else{
                if(vc[len-1] != tmp){
                    vc.push_back(tmp);
                }
            }
        }
        int len = vc.size();
        for(int i=0; i<len; i++){
            cout<<vc[i]<<" ";
        }
        cout<<"$"<<"\n";
    }
}