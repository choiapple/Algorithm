#include <iostream>
#include <algorithm>
using namespace std;
long long arr[4] = {0, }, answer = 0;
int main(){
    
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(k == i) continue;
                if(k == j) continue;
                if(i == j) continue;
                long long a = arr[i];
                long long b = arr[j];
                long long c = arr[k];
                if(answer < (a + b * c)){
                    answer = a + b * c;
                }
                if(answer < (a * b + c)){
                    answer = a * b + c;
                }
            }
        }
    }
    cout<<answer<<"\n";
}