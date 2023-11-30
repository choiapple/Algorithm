#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, int> f1, pair<int, int> f2){
    int tmp1 = f1.first * f1.first + f1.second * f1.second;
    int tmp2 = f2.first * f2.first + f2.second * f2.second;
    if(tmp1 != tmp2){
        return tmp1 < tmp2;
    }
    return f1.first < f2.first;
}
int main(){
    int h, w;
    while(true){
        cin>>h>>w;
        if(h == 0 && w == 0){
            break;
        }
        vector<pair<int, int> > vc;
        for(int i=1; i<=150; i++){
            for(int j=i+1; j<=150; j++){
                if((i*i + j*j) > (h*h + w*w)){
                    vc.push_back(make_pair(i, j));
                }else if((i*i + j*j) == (h*h + w*w)){
                    if(i > h){
                        vc.push_back(make_pair(i, j));
                    }
                }
            }
        }
        sort(vc.begin(), vc.end(), compare);
        cout<<vc[0].first<<" "<<vc[0].second<<"\n";
    }
    
}