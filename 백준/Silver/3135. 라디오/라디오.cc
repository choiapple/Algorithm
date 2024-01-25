#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A, B, N;
    int arr[6] = {0, };
    cin>>A>>B;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int answer = abs(B - A);
    int tmp = 0;
    for(int i=0; i<N; i++){
        if(answer > abs(arr[i] - B) + 1){
            answer = abs(arr[i] - B) + 1;
        }
    }
    cout<<answer<<"\n";
    return 0;
}