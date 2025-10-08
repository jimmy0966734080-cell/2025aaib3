///week05-3c .cpp 三合一 Part 1/Part 2 Input/Ouput
///CPE 這次的第2題 UVA 483 Word Scranble 把字弄反
#include <iostream>
#include <sstream> ///Part 3 : 把字串用來斷字
#include <string>
#include <algorithm> ///Part 4 : 反過來, 要用到 algorithm
using namespace std;
int main(){
    string line; ///Part 1 : Inout
    while(getline(cin, line)){
    ///讀入1行 一直讀, 讀到Ctrl+z才結束
        stringstream ss(line); ///Part 3: 把字串用來斷字
        string word; ///用來斷字
        ss >> word; ///Part 5: 解決空格問題, 火車頭 不用空格
        reverse(word.begin(), word.end() );
        cout <<word; ///Part 5 : 解決空格問題, 火車頭 不用空格
        while (ss >> word ){ ///Part 3 : 把字串用來斷字
            reverse(word.begin(), word.end() );
            cout << " " <<word;
        }
        cout << endl; ///跳行
        /// Part 2 : Output
        ///cout << line << endl; ///先隨便印出來
    }
}
