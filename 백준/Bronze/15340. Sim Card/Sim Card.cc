#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr1[3] = {30, 35, 40};
    int arr2[3] = {40, 30, 20};
    int a, b, answer = 2147000000;
    while(true){
        cin>>a>>b;
        if(a == 0 && b == 0) break;
        answer = 2147000000;
        for(int i=0; i<3; i++){
            int aa = a * arr1[i];
            int bb = b * arr2[i];
            if(answer > aa + bb){
                answer = aa + bb;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}