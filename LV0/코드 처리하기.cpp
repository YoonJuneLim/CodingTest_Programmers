// 코드 처리하기
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret="";
    char c;
    for(int i=0, mode=0; i<code.size(); i++){
        c = code[i];
        if(c == '1') { mode = !mode; continue;}
        if(!(i%2 ^ mode)) ret += c; 
    }
    if(ret == "") return "EMPTY";
    return ret;
}

// test function
#include <iostream>
int main(void){
    string code;
    cin>>code;
    cout<<solution(code)<<endl;
    return 0;
}