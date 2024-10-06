#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[1001];
int max_length = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> person;
    for(int i=0; i<n; i++){
        person.clear();
        for(int j=0; j<n; j++){
            if(arr[i] != arr[j]){
                person.push_back(arr[j]);
            }
        }
        for(int j=0; j<person.size(); j++){
            int len = 1;
            for(int k=j+1; k<person.size(); k++){
                if(person[j] != person[k]) break;
                len++;
            }
            max_length = max(len, max_length);
        }
    }
    cout<<max_length<<"\n";
    return 0;
}