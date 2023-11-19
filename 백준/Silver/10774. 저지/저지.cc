#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int J, A;
    cin>>J>>A;
    char arr[1000001];
    for(int i=1; i<=J; i++){
        cin>>arr[i];
    }
    int ans = 0;
    int tmp;
    char tag;
    for(int a=0; a<A; a++){
        cin>>tag>>tmp;
        if(arr[tmp] == 'S'){
            if(tag == 'S'){
                arr[tmp] = 'X';
                ans++;
            }
        }else if(arr[tmp] == 'M'){
            if(tag == 'S' || tag == 'M'){
                arr[tmp] = 'X';
                ans++;
            }
        }else if(arr[tmp] == 'L'){
            if(tag == 'S' || tag == 'M' || tag == 'L'){
                arr[tmp] = 'X';
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}