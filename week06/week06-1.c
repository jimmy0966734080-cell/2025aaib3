///week06-1.cpp
///LeatCode �ǲ߭p�e��4�D 242. Valid Anagran
/// ���A2�Ӧr�� s, t �ЧP�_�L�Ϊ��r���A�O�_���ۦP(�i������)
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///���ݦr�ꪺ���׬O�_�ۦP�C
        if( s.length() != t.length() ) return false; ///���P�A�N��������

        ///����r�� s ���r���A�ֿn�@�U
        int R[26] = {}; ///�n���@��Recycle�^����A�Ӥ�����ڭ̪��r��
        for (int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; ///���ӬO�p�g�r���A���n�ܦ�0~25�ҥH�n��'a'
            R[c]++;
        }
        ///�A����ֿn���r���C�� t �Ψ���ǡB�����C��n�Χ�(����ζW�L)
        for (int i=0; i<t.length(); i++){
            char c = t[i] - 'a';
            R[c]--; ///�α��L
            if(R[c]<0) return false; ///�����ΡA�N����
        }
        return true; ///���S�����ѡA�N�O���\
    }
};
