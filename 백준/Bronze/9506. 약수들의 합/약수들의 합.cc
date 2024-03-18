#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(true){
        cin>>n;
        if(n == -1) break;
        vector<int> vc;
        int tmp = 1;
        vc.push_back(1);
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0 && n/i != i){
                vc.push_back(i);
                vc.push_back(n/i);
                tmp += i + n/i;
            }else if(n%i == 0 && i == n/i){
                vc.push_back(i);
                tmp += i;
            }
        }
        if(tmp == n){
            sort(vc.begin(), vc.end());
            cout<<n<<" = "<<vc[0];
            for(int i=1; i<vc.size(); i++){
                cout<<" + "<<vc[i];
            }
            cout<<"\n";
        }else{
            cout<<n<<" is NOT perfect."<<"\n";
        }
    }
}