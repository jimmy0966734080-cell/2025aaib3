///week4-5.cpp
///LeetCode �ǲ߭p�e��7�D 66. Plus One
///�q�k�����ݡB�˰h�Ӫ��j��
///1, 9, 9
///   0    �]�����i��A�ҥH����+1
///2       �S�i��A�����F�ʹN���
///1, 2, 3
///      4 �S�i��A�����F�ʹN���
///9, 9, 9
///1,0,0,0 �p�G�@���i��A�S����쵪�סA�٭n�b�̫᭱��1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); ///�����D�}�C�����סA�H�K �˹L�Ӫ��j��
        for(int i=N-1; i>=0; i--){
            if(digits[i] == 9) digits[i] = 0; ///�i��A�ܦ�0(�٨S��쵪��)
            else{ ///�S���i��A�N�O��쵪��
                digits[i]++; ///�N+1��A�S�k�i��
                return digits; ///��쵪�סA�e�X�h
            }
        }
        ///����쵪�סA�]�N�O9,9,9 �@���i��A�S����쵪�סA�٭n�b�̫e����1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
