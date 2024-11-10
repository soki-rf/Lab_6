#include <iostream>
#include <vector>

using namespace std;

void plusesDeleter(vector<int>& nums){
    vector<int>::iterator it;
    for(it=nums.begin();it!=nums.end();it++) {
        if(*it > 0) {
            nums.erase(it);
        }
    }
}

int main(){
    int n, i;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter numbers: ";
    vector<int> v(n);
    for(i = 0; i < n; i++) {
        cin >> v[i];
    }
    plusesDeleter(v);
    for(i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
