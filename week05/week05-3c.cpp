///week05-3c .cpp �T�X�@ Part 1/Part 2 Input/Ouput
///CPE �o������2�D UVA 483 Word Scranble ��r�ˤ�
#include <iostream>
#include <sstream> ///Part 3 : ��r��Ψ��_�r
#include <string>
#include <algorithm> ///Part 4 : �ϹL��, �n�Ψ� algorithm
using namespace std;
int main(){
    string line; ///Part 1 : Inout
    while(getline(cin, line)){
    ///Ū�J1�� �@��Ū, Ū��Ctrl+z�~����
        stringstream ss(line); ///Part 3: ��r��Ψ��_�r
        string word; ///�Ψ��_�r
        ss >> word; ///Part 5: �ѨM�Ů���D, �����Y ���ΪŮ�
        reverse(word.begin(), word.end() );
        cout <<word; ///Part 5 : �ѨM�Ů���D, �����Y ���ΪŮ�
        while (ss >> word ){ ///Part 3 : ��r��Ψ��_�r
            reverse(word.begin(), word.end() );
            cout << " " <<word;
        }
        cout << endl; ///����
        /// Part 2 : Output
        ///cout << line << endl; ///���H�K�L�X��
    }
}
