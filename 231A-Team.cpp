#include <iostream>
 
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    int solvedCount = 0;
    for(int i=0;i<t;i++){
        int n[3];
        cin >> n[0] >> n[1]>>n[2];
        int count = 0;
        for(int i=0;i<3;i++){
            if(n[i]==1){
                count++;
            }
        }
        if(count >=2){
            solvedCount++;
        }
    }
    cout << solvedCount << "\n";
    return 0;
}