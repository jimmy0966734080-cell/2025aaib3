//LeetCode �ǲ߭p�e �j�����w �b haystack ��� needle
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�n�ΰj��A��Ҧ��i�઺��m�A�C����L�@��
        //ex. sadbutsad �����L �n�� sad
        //i:0 sad �� haystack �ūe��N�Ӧr��
        //    sad
        //i:1   sad
        //      adb
        //i:2     sad
        //        dub
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++){ //i�չL�Ҧ���m
            if(haystack.substr(i,N) == needle) return i;
        }
        return -1;
    }
};
