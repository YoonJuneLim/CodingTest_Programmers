// [PCCE 기출문제] 2번 / 피타고라스의 정리
#include <iostream>

using namespace std;

int main(void){
    int a;
    int c;
    cin >> a >> c;

    int b_square = (c*c - a*a); // int b_square = c - a;
    cout << b_square << endl;
    return 0;
}