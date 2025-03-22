// 수 조작하기 1
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control){
    int len = control.size();

    while(len-->0){
        switch(control[len]){
            case 'w': n += 1; break;
            case 's': n -= 1; break;
            case 'd': n += 10;break;
            case 'a': n -= 10;break;
            default: break;
        }
    }

    return n;
}

// test function
#include <iostream>
int main(void){
    string str;
    int n;
    cin >> n >> str;
    cout<< solution(n, str);
    return 0;
}