// 홀짝 구분하기
#include <iostream>
#include <string>

using namespace std;

int main(void){
    int n;
    cin>>n;
    cout << 
        (((n%2) == 0) ? (to_string(n)+" is even") : (to_string(n)+" is odd")) 
        << endl;
    return 0;
}