#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, item_list[7] = {"Paper", "Printer", "Planners", "Binders", "Calendar", "Notebooks", "Ink"};
    double answer = 0, cost_list[7] = {57.99, 120.50, 31.25, 22.50, 10.95, 11.20, 66.95};
    while(true){
        cin>>s;
        if(s == "EOI") break;
        for(int i=0; i<7; i++){
            if(s == item_list[i]){
                answer += cost_list[i];
                break;
            }
        }
    }
    cout<<"$"<<answer;
    return 0;
}