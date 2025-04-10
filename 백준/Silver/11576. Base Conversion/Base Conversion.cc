#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int A, B, m, tmp;
    long long ten = 0;
    cin>>A>>B;
    cin>>m;
    for(int i=m-1; i>=0; i--){
        cin>>tmp;
        ten += pow(A, i) * tmp;
    }
    vector<int> vc;
    while(ten >= B){
        int r = ten % B;
        ten /= B;
        vc.push_back(r);
    }
    vc.push_back(ten);
    int len = vc.size();
    for(int i=len-1; i>=0; i--){
        cout<<vc[i]<<" ";
    }
}