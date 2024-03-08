#include <iostream>
#include <vector>
using namespace std;
int N;
int arr[1001] = {0, };
vector<int> vc;
void re(int x){
    int start = 0;
    int end = vc.size()-1;
    while(start < end){
        int mid = (start + end)/2;
        if(vc[mid] < x){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    vc[end] = x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    vc.push_back(arr[N-1]);
    for(int i=N-2; i>=0; i--){
        int len = vc.size();
        if(vc[len-1] < arr[i]){
            vc.push_back(arr[i]);
        }else{
            re(arr[i]);
        }
    }
    cout<<vc.size()<<"\n";
}