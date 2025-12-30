#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[1001];
    for(int i=1; i<N; i++){
        cin>>arr[i];
    }
    for(int i=1; i<arr[1]; i++){
        int temp[1001];
        temp[0] = i;
        int isPerm = 1;
        for(int j=1; j<N; j++){
            temp[j] = arr[j] - temp[j-1];
            for(int k=0; k<j; k++){
                if(temp[j] == temp[k] || temp[j] > N){
                    isPerm = 0;
                    break;
                }
            }
        }
        if(isPerm){
            cout<<temp[0];
            for(int j=1; j<N; j++){
                cout<<" "<<temp[j];
            }
            return 0;
        }
    }
}