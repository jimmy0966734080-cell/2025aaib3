/// week 07-1b.cpp
/// TAICA ��߶�����j�q���t �����Ҳ�6�D
/// Input: 1-9 ���Ʀr Output: ¶��骺���
/// ex. Iput: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@5�h��
/// Input 2 ��3�h�ӡAInput 3 ��5�h�ӡAInput 4 ��7�h�ӡAInput 5 ��9�h��
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n; ///Step01: Input
    for(int i=1; i<2*n; i++){ ///Step03: for�j��A�h��
        for(int j=1; j<2*n; j++){ ///�ĴX��
            if(j>1) cout << " "; ///Step05: �����Y+���[+���[+���[+���[
            int d = max (abs(i-n), abs(j-n)); ///Step06: ��Z�����̤j��
            cout << d + 1; ///cout << n; ///���æL�Ʀrn(�N�|�) Step06: �A+1
        }
        ///cout <<"�{�b�O��i��, i:" << i; ///Step04: �h���N�[(�N�|�)
        cout << endl; ///Step02: Output, ����
    }
}
