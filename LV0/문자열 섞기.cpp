// 문자열 섞기
#include <iostream>
#include <string>

using namespace std;

string solution(string str1, string str2){
    string answer = "";
    for(int i=0; i<str1.size(); i++){
        answer += str1[i];
        answer += str2[i];
    }
    return answer;
}

// test function
int main(void){
    string str1, str2;
    cin >> str1 >> str2;
    cout << solution(str1, str2) << endl;
    return 0;
}