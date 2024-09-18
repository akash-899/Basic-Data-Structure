#include<bits/stdc++.h>
using namespace std;
class Student {
public: 
    string S;
    int I;
    
    Student(string S, int I) {
        this->S = S;
        this->I = I;
    }
};

class cmp {
public:
    bool operator()(Student a, Student b) {
        if (a.S == b.S) {
            return a.I > b.I;
        } else {
            return a.S < b.S;
        }
    }
};

int main() {
    int n;
    cin >> n;
    vector<Student> v;
    for (int i = 0; i < n; i++) {
        string S;
        int I;
        cin >> S >> I;
        Student obj(S, I);
        v.push_back(obj);
    }
    sort(v.begin(), v.end(), cmp());
    for (Student val : v) {
        cout << val.S << " " << val.I << endl;
    }
    return 0;
}