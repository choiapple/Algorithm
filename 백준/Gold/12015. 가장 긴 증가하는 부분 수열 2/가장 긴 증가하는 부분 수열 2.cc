#include <iostream>
#include <vector>
using namespace std;
vector<int> vc;
int N, A;
void binary(int k){
    int start = 0;
    int end = vc.size()-1;
    while(start < end){
        int mid = (start + end)/2;
        if(k > vc[mid]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    vc[end] = k;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    cin>>A;
    vc.push_back(A);
    for(int i=1; i<N; i++){
        cin>>A;
        int len = vc.size() - 1;
        if(vc[len] < A){
            vc.push_back(A);
        }else{
            binary(A);
        }
    }
    cout<<vc.size()<<"\n";
    return 0;
}