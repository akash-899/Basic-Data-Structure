#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Calculate the lexicographically smallest word
        int first = 1;  // 'a' has the index 1
        int second = 1;
        int third = n - 2;

        // Output the result
        cout << char('a' + first - 1) << char('a' + second - 1) << char('a' + third - 1) << endl;
    }

    return 0;
}
