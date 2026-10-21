#include <iostream>
#include <string>
 
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    int x = 0;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(s=="++X"||s=="X++"){
            x++;
        }else if(s=="--X"||s=="X--"){
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}