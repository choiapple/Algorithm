#include <iostream>
#include <vector>
using namespace std;
int main(){
    int A, B;
    vector<long long> vc;
    vc.push_back(0);
    cin>>A>>B;
    int i = 1;
    int k = 1;
    while(vc.size() < 1001){
        for(int j=1; j <= i; j++){
            long long tmp = vc[k-1] + i;
            vc.push_back(tmp);
            k++;
        }
        i++;
    }
    cout<<vc[B] - vc[A-1]<<"\n";
}