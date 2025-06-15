#include <iostream>
using namespace std;
int main(){
    int arr[3] = {0, 2, 5}, tmp1 = 0, tmp2 = 0;
    int j, e;
    cin>>j>>e;
    if(j == e){
        cout<<"=";
    }else if(j==0 && e==2){
        cout<<">";
    }else if(j==0 && e==5){
        cout<<"<";
    }else if(j==2 && e==5){
        cout<<">";
    }else if(e==0 && j==2){
        cout<<"<";
    }else if(e==0 && j==5){
        cout<<">";
    }else if(e==2 && j==5){
        cout<<"<";
    }else{
        for(int i=0; i<3; i++){
            if(arr[i] == j) tmp1 = 1;
            if(arr[i] == e) tmp2 = 1;
        }
        if(tmp1 > tmp2){
            cout<<">";
        }else if(tmp1 < tmp2){
            cout<<"<";
        }else{
            cout<<"=";
        }
    }
}