#include <iostream>
#include <utility>
using namespace std;
 
 
int main() {
    int moves = 0;
    int r=0,c=0;
    int matrixs[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrixs[i][j];
            if (matrixs[i][j] == 1) {
                r = i + 1;
                c = j + 1;
            }
        }
    }
    
    moves = abs(r - 3) + abs(c - 3);
    cout << moves << endl;
    return 0;
}