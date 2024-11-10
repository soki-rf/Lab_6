#include <iostream>
#include <list>

using namespace std;

void Sort(list<float>& s){
    float buf;
    for(auto i = s.begin(); i != s.end(); i++){
        for(auto j = i; j != s.end(); j++){
            if(*i > *j){
                buf = *i;
                *i = *j;
                *j = buf;
            }
        }
    }
}

int main() {
    int n, i;
    float x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter one number at a time: ";
    list<float> nums;
    for(int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }
    Sort(nums);
    for(auto i = nums.begin(); i != nums.end(); ++i) {
        cout << *i << endl;
    }
    return 0;
}
