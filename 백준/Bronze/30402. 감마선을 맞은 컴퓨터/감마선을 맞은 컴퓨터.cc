#include <iostream>
using namespace std;
int main(){
    char c;
    string answer;
    for(int i=0; i<15; i++){
        for(int j=0; j<15; j++){
            cin>>c;
            if(c == 'w'){
                answer = "chunbae";
            }else if(c == 'b'){
                answer = "nabi";
            }else if(c == 'g'){
                answer = "yeongcheol";
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}