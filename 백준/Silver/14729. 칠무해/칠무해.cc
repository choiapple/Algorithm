#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    double tmp;
    cin>>N;
    priority_queue<double> pq;
    for(int i=0; i<N; i++){
        cin>>tmp;
        pq.push(tmp);
        if(pq.size() > 7){
            pq.pop();
        }
    }
    double arr[8] = {0, };
    for(int i=0; i<7; i++){
        arr[i] = pq.top();
        pq.pop();
    }
    sort(arr, arr+7);
    cout<<fixed;
    cout.precision(3);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<"\n";
    }
}