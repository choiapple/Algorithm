#include <iostream>
#include <vector>
using namespace std;
int arr[10] = {0, };
int N, tmp, k, s, e, answer = 0;
vector<int> vc;
int check_num(){
    int check = 0;
    for(int i=1; i<=9; i++){
        if(arr[i] > 0){
            check++;
        }
    }
    return check;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    s = 0;
    e = 0;
    arr[vc[0]]++;
    while(s < N && e < N){
       k = check_num();
       if(k <= 2){
           if(answer < e-s+1){
               answer = e-s+1;
           }
       }
       if(k <= 2){
           e++;
           arr[vc[e]]++;
       }else{
           arr[vc[s]]--;
           s++;
       }
    }
    cout<<answer<<"\n";
    return 0;
}