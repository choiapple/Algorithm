#include <iostream>
using namespace std;
int main() {
    int resp;
    for(int a=1; a<=9; a++){
        cout<< "? A " << a <<"\n";
        cin >> resp;

        if(resp == 1){
            for(int b=1; b<=9; b++){
                cout<<"? B "<< b <<"\n";
                cin>>resp;
                
                if(resp == 1){
                    cout<<"! "<<a + b;
                    return 0;
                }
            }
            
        }
    }
}