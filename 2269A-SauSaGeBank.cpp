#include <iostream>
 
using namespace std;
 
void solve() {
        int n, k;
        cin >> n >> k; // n=10 k=2
        int cardAmount = 0;
        int bankAmount = 1;
        for(int i=0;i<n-k+1; i++){
            bankAmount *= 2;
        }
        cardAmount = bankAmount + (k-1)*2;
        cout << cardAmount << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}