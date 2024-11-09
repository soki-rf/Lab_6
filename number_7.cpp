#include <iostream>
#include <list>

using namespace std;

list<int> reverseNum(list<int> m) {
    for(auto it = m.begin(); it != m.end(); ++it) {
        m.insert(it, -(*it));
    }
    return m;
}

int main(){
    int n, x;
    cout << "Enter a number n: ";
    cin >> n;
    cout << "The list: " << endl;
    list<int> l;
    for(int i = 0; i < n; i++) {
        cin >> x;
        l.push_back(x);
    }
    l = reverseNum(l);
    for(auto it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
