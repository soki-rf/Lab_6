#include <iostream>

#include <set>
#include <string>

using namespace std;

int diffWordsCounter(const string& str) {
    string et, buf, s;
    buf = "";
    et = " .,";
    int k;
    k = 1;
    s = str + " ";
    set<string> res;
    for(auto i = s.begin(); i < s.end(); i++){
        if((et.find(*i) == string::npos)){
            buf += *i;
            k += 1;
        }else{
            if((et.find(*i) != string::npos) and k != 0){
                k = 0;
                if(res.find(buf) == res.end()){
                    res.insert(buf);
                }
                buf = "";
            }
        }
    }
    return res.size();
}

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    int words = diffWordsCounter(str);
    cout << "Total number of words: " << words << endl;
    return 0;
}
