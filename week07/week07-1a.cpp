/// week 07-1a.cpp
/// TAICA 國立陽明交大電機系 期中考第6題
/// Input: 1-9 的數字 Output: 繞圈圈的方形
/// ex. Iput: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 總共5層樓
/// Input 2 有3層樓，Input 3 有5層樓，Input 4 有7層樓，Input 5 有9層樓
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n; ///Step01: Input
    for(int i=1; i<2*n; i++){ ///Step03: for迴圈，層樓
        for(int j=1; j<2*n; j++){ ///第幾格
            if(j>1) cout << " "; ///Step05: 火車頭+車廂+車廂+車廂+車廂
            cout << n; ///先亂印數字n(將會拆掉)
        }
        cout <<"現在是第i樓, i:" << i; ///Step04: 層樓鷹架(將會拆掉)
        cout << endl; ///Step02: Output, 跳行
    }
}
