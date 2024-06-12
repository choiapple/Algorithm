#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int W, H, N, tmp, tmp1, maxW = 0, maxH = 0;
    cin>>W>>H;
    vector<int> wVc;
    vector<int> hVc;
    wVc.push_back(0);
    wVc.push_back(W);
    hVc.push_back(0);
    hVc.push_back(H);
    cin>>N;
    while(N > 0){
        N--;
        cin>>tmp>>tmp1;
        if(tmp == 1) wVc.push_back(tmp1);
        else hVc.push_back(tmp1);
    }
    sort(wVc.begin(), wVc.end());
    sort(hVc.begin(), hVc.end());
    for(int i=0; i<wVc.size()-1; i++){
        if(wVc[i+1] - wVc[i] > maxW) maxW = wVc[i+1] - wVc[i];
    }
    for(int i=0; i<hVc.size()-1; i++){
        if(hVc[i+1] - hVc[i] > maxH) maxH = hVc[i+1] - hVc[i];
    }
    cout<<maxW * maxH<<"\n";
    return 0;
}