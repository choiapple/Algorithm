#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long tmp = 0;
    long long array[500001] = {0, };
    long long array2[500001] = {0, };
    for(int i=0; i<n; i++){
        array2[i] = tmp;
        cin>>array[i];
        tmp += array[i];
    }
    long long answer = 0;
    for(int i=0; i<n; i++){
        answer += (array[i] * array2[i])%1000000007;
        answer  = answer%1000000007;
    }
    cout<<answer<<"\n";
}