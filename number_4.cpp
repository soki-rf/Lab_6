#include <iostream>
#include <map>
#include <string>

using namespace std;

map<std::string, int> wordsMapCounter(const string& str) {
    string et, buf, s;
    buf = "";
    et = " .,";
    int k;
    k = 1;
    s = str + " ";
    map<string, int> ans;
    for(auto i = s.begin(); i < s.end(); i++){
        if((et.find(*i) == string::npos)){
            buf += *i;
            k += 1;
        }else{
            if((et.find(*i) != string::npos) and k != 0){
                k = 0;
                if(ans.contains(buf)){
                    ans[buf] += 1;
                }else{
                    ans[buf] = 1;
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
    map<std::string, int> words = wordsMapCounter(str);
    for(auto i = words.begin(); i != words.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }
    return 0;
}
