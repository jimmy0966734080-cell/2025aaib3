///week05-1 .cpp
///LeetCode �ǲ߭p�e 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss (s); ///��r�� string �� iostream �� cin �ӥ�
        string word; ///�r��
        ///ss >> word; ///�� cin >>word ��, �{�b�� ss �i�H�� ss >> word
        ///ss >> word; ///Ū��2��, �|Ū���2��
        while (ss >> word) { ///�@��Ū, Ū�줣��Ū����
            ///�̭�����Ƴ��S��
        }
        cout << word; ///�����@�ӹ���

        return word.length(); ///�̫�, ����װe�X�h
    }
};
