#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el){
    for(vector<int>::iterator i = first; i != last; i++) {
        if(*i == el){
            return i;
        }
    }
    return last;
}

int main(){
    int n, el;
    cout<< "Enter n" << endl;
    cin >> n;
    cout << "Enter array elements" << endl;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Enter el" << endl;
    cin >> el;

    vector<int>::iterator it = Find(v.begin(), v.end(), el);
    cout << "Result: ";
    cout << it - v.begin() << endl;
  return 0;
}
