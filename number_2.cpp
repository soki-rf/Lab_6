#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el){
    while(first<last - 1){
       auto m = first + (last - first)/2;
       if(el == *m){
           return m;
       }
       else{
           if(el < *m){
               last = m;
           }
           else{
               first = m;
           }
       }
    }
    return last;
}

int main(){
    int n, el;
    cout<< "Enter n" << endl;
    cin >> n;
    cout << "Enter sorted array elements" << endl;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Enter el" << endl;
    cin >> el;

    vector<int>::iterator it = findInSorted(v.begin(), v.end(), el);
    cout << "Result: ";
    cout << it - v.begin() << endl;
  return 0;
}
