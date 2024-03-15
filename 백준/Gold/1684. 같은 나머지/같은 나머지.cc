#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int gcd(int a, int b){
    while(a){
        int c = b%a;
        b = a;
        a = c;
    }
    return b;
}
int main(){
    int n;
    int init[1001] = {0, };
    vector<int> vc;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>init[i];
    }
    sort(init, init+n);
    for(int i=1; i<n; i++){
        vc.push_back(init[i] - init[i-1]);
    }
    sort(vc.begin(), vc.end());
    int answer = vc[0];
    for(int i=1; i<vc.size(); i++){
        answer = gcd(answer, vc[i]);
    }
    cout<<answer<<"\n";
    return 0;
}