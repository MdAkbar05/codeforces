#include <iostream>
 
using namespace std;
 
 
int main() {
    int limak, bob;
    cin >> limak >> bob;
    int yearCount =0;
    while(limak <= bob){
        limak *= 3;
        bob *= 2;
        yearCount++;
    }
    cout << yearCount << "\n";
    return 0;
}