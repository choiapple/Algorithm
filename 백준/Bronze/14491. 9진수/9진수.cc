#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T;
    vector<int> vc;
    cin>>T;
    while(T > 0){
        vc.push_back(T%9);
        T /= 9;
    }
    for(int i=vc.size()-1; i>=0; i--){
        cout<<vc[i];
    }
    return 0;
}