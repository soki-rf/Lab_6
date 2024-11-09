#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

vector<string> uniqueWords(const string& str) {
    string et, buf, s;
    buf = "";
    et = " .,";
    int k;
    k = 1;
    s = str + " ";
    set<string> res;
    vector<string> ans;
    for(auto i = s.begin(); i < s.end(); i++){
        if((et.find(*i) == string::npos)){
            buf += *i;
            k += 1;
        }else{
            if((et.find(*i) != string::npos) and k != 0){
                k = 0;
                if(res.find(buf) == res.end()){
                    res.insert(buf);
                    ans.push_back(buf);
                }
                buf = "";
            }
        }
    }
    return ans;
}

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    vector<string> unique = uniqueWords(str);
    cout << "The unique words are: " << endl;
    for(auto i = unique.begin(); i < unique.end(); i++) {
        cout << *i << endl;
    }
    return 0;
}
