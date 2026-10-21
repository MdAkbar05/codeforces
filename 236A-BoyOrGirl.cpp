
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
 
int main() {
    string s;
    cin >> s; // xyzxb
    unordered_set<char> uniqueChar(s.begin(), s.end());
    
    string result = uniqueChar.size()%2==0 ? "CHAT WITH HER!":"IGNORE HIM!";
    cout << result;
    return 0;
}