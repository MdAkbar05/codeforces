#include <iostream>
 
using namespace std;
 
 
int main() {
    int m,n;
    cin >> m >> n;
    if(m >16 || n > 16){
        return 0;
    }
    int max = m*n;
    cout << max/2 << endl;
    return 0;
}