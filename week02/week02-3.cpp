/// week02-3.cpp LeetCode �ǲ߭p�e��1�D
///1769. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(); ///�r�����
        int N2 = word2.length();
        string ans; ///���צr��A�@�}�l�S���F��
        for(int i=0; i<max(N1,N2); i++){
           if(i<N1) ans += word1[i]; ///��r���A��J����
           if(i<N2) ans += word2[i]; ///��r���A��J����
        }
        return ans; ///���׶ǥX�h�A����
    }
};
