#include <iostream>
#include <vector>
using namespace std;

int wordsCounter(const std::string& str){
    int i, cnt = 0;
    string et = " .,";
    for(i = 0; i < str.size() - 1; i++) {
        if((et.find(str[i]) == string::npos) and (et.find(str[i+1]) != string::npos)){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    str = str + " ";
    cout << "Count of words: " << wordsCounter(str) << endl;
}
