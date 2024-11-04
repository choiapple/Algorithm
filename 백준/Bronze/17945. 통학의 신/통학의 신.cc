#include <iostream>
#include <vector>
using namespace std;
int main(){
    int A, B, result;
    vector<int> vc;
    cin>>A>>B;
    for(int i=-1000; i<=1000; i++){
        result = (i*i)+(2*A*i)+B;
        if(result == 0){
            vc.push_back(i);   
        }
    }
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<" ";
    }
}