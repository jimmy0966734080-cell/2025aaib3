///week05-1 .cpp
///LeetCode 學習計畫 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss (s); ///把字串 string 當 iostream 的 cin 來用
        string word; ///字串
        ///ss >> word; ///像 cin >>word 樣, 現在的 ss 可以用 ss >> word
        ///ss >> word; ///讀第2個, 會讀到第2個
        while (ss >> word) { ///一直讀, 讀到不能讀為止
            ///裡面什麼事都沒有
        }
        cout << word; ///像做一個實驗

        return word.length(); ///最後, 把長度送出去
    }
};
