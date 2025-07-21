#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<pair<int, int> > vc;
    int H, d1, d2, answer = 0;
    for(int i=0; i<3; i++){
        cin>>d1>>d2;
        vc.push_back(make_pair(d1, d2));
    }
    cin>>H;
    for(int i=0; i<=5001; i++){
        for(int j=0; j<3; j++){
            if(i%vc[j].first == 0){
                H -= vc[j].second;
            }
        }
        if(H <= 0){
            answer = i;
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}