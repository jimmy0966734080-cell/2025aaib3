/// week02-2.cpp C++
///�n�� C++ ���r�� ��L��
#include <iostream> ///IO��y�~��
#include <string> ///�r��~��
using namespace std; ///�ϥΩR�W�Ŷ�std
int main()
{
    cout << "�п�J��r: ";
    string a, ans ;
    cin >> a; ///Ū�J�r��
    ///�˹L�Ӫ��j�� �r�ꪺ���� a.lenght()
    for (int i=a.length()-1; i>=0; i--){
        ans += a[i]; ///��r���˹L��, ��J����
    } ///�g��@�b, �Ȱ��𮧤@�U
    cout << a << ans;
}
