#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[100001] = {0, };
vector<int> vc;
int ne(int na, int nb){
    int a = na;
    int b = nb;
    while(true){
        int c = b%a;
        if(c == 0){
            break;
        }
        b = a;
        a = c;
    }
    return a;
}
int main(){
    int N;
    int answer = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    for(int n=1; n<N; n++){
        vc.push_back(arr[n]-arr[n-1]);
    }
    int vcLen = vc.size();
    sort(vc.begin(), vc.end());
    int tmp = ne(vc[0], vc[vcLen-1]);
    int tmp2 = 0;
    for(int t = tmp; t>0; t--){
        for(int j=1; j<vcLen; j++){
            if(vc[j]%t == 0){
                tmp2 = t;
            }else{
                tmp2 = 1;
                break;
            }
        }
        if(tmp2 == t){
            break;
        }
    }
    for(int i=0; i<vcLen; i++){
        answer += vc[i]/tmp2 - 1;
    }
    cout<<answer<<"\n";
}