#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, k = 3;
    vector<int> vc;
    cin>>N;
    vc.push_back(1);
    vc.push_back(2);
    while(vc.size()<N-1){
        vc.push_back(k++);
    }
    while(true){
        int flag = 0;
        for(int i=2; i<k; i++){
            if(k%i == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            vc.push_back(k);
            break;
        }else{
            k++;
        }
    }
    cout<<N<<"\n";
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<" ";
    }
    return 0;
}