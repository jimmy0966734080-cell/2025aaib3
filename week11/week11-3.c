/// week11-3 .cpp 學習計畫 Matd 倒數第3題 2進位家法 1萬位
/// LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1; ///字串長度
        vector<int> ans; ///伸縮自如的陣列，把答案放進去
        int carry = 0; ///現在這個位數
        while(i>=0 || j>=0){ ///要一直做家法，從右邊的底為數，往左邊高數加
            int now = carry;///現在的這個位數(進偽藥加起來)
            if(i>=0){ ///字串a還可以做加法
                now += a[i] - '0'; ///字串的字母a[i]脫掉字母外皮，變數直
                i--; ///加完了，再左一位
            }
            if (j>=0){ ///字串b，還可以做加法
                now += b[j] - '0'; ///字母變數直
                j--; ///往左一位
            }
            ans.push_back(now%2); ///把二進位的個位數，記的ans裡
            carry = now / 2; ///新的進位部分
        }
        if(carry > 0)ans.push_back(carry); ///離開迴圈(直是加法)加完字串後，還有進位!!!再記ans
        string strAns = ""; ///最後呢?需做出字串，當答案
        for (int i=ans.size()-1; i>=0; i--){ ///倒過來的迴圈(因為ans裡，是記 個位、十位...倒過來)
            strAns = strAns + (char)(ans[i]+'0'); ///把數字，變字母，再加到字串裡
        }
        return strAns;
    }
};
