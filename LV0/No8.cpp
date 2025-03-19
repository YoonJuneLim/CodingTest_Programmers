// [PCCE 기출문제] 8번 / 닉네임 규칙
#include <string>
#include <vector>

using namespace std;

string solution(string nickname){
    string answer = "";
    for(int i=0; i<nickname.size(); i++){
        if(nickname[i] == 'l'){
            answer += "I";
        }
        else if(nickname[i] == 'w'){
            answer += "vv";
        }
        else if(nickname[i] == 'W'){
            answer += "VV";
        }
        else if(nickname[i] == 'O'){
            answer += "0";
        }
        else{
            answer += nickname[i];
        }
    }
    for(int i=4-answer.size(); i > 0; i--){//if(answer.size() < 3){
        answer += "o";
    }
    if(answer.size() > 8){
        answer = answer.substr(0,8);
    }
    return answer;
}

// test function
#include <iostream>
int main(void){
    // ex 1
    string nickname = "WORLDworld";
    cout << solution(nickname) << endl;

    // ex 2
    nickname = "GO";
    cout << solution(nickname) << endl;
    return 0;
}