///week04-4b.cpp �ϥ� C++�y�� �g
#include<iostream> ///�ϥ� C++�y�� �~��
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b; ///C++�y�� Ū���
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0) ans += i;
    }
    cout << ans; ///C++�y�� �L���
}
