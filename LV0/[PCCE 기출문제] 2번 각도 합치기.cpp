// [PCCE 기출문제] 2번 / 각도 합치기
#include <iostream>

using namespace std;

int main(void){
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;
    
    int sum_angle = (angle1 + angle2)%360; // int sum_angle = angle1 + angle2;
    cout << sum_angle << endl;
    return 0;
}