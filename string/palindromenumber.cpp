#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "naman";
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            cout << "not a palindrome number";
            return 0;
        }
        else{
        start++;
        end--;
        }
    }

    cout << "palindrome number" << endl;
    return 0;
}
