// 문자열 곱하기
#include <iostream>
#include <vector>

using namespace std;

string solution(string my_string, int k){
    string ret="";
    while(k--) ret += my_string;
    return ret;
}

// test function
int main(void){
    string str;
    int k;
    cin >> str >> k;
    cout << solution(str,k) << endl;
    return 0;
}