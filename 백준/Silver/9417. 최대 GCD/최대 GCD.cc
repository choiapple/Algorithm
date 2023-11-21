#include <iostream>
#include <sstream>
using namespace std;
int gcd(int x, int y){
    int a, b, c;
    if(x > y){
        a = x;
        b = y;
    }else{
        a = y;
        b = x;
    }
    while(true){
        c = a%b;
        if(c == 0){
            break;
        }
        a = b;
        b = c;
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int answer = 0;
    cin>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        int arr[101] = {0, };
        int tmp = 0;
        int x = 0;
        answer = 0;
        string str;
        getline(cin, str);
        stringstream stream;
        stream.str(str);
        while(stream >> arr[tmp++])
        for(int i=0; i<tmp-1; i++){
            for(int j=i+1; j<tmp; j++){
                if(answer < gcd(arr[i], arr[j])){
                    answer = gcd(arr[i], arr[j]);
                }
            }
        }
        cout<<answer<<"\n";
    }
}