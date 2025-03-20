// 문자열 겹쳐쓰기
#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s){
    string answer = my_string;
    for(int i=s; i<overwrite_string.size()+s; i++)
        answer[i] = overwrite_string[i-s];
    return answer;
}

// test function
int main(void){
    string my_string, overwrite_string;
    int s;

    cin >> my_string >> overwrite_string >> s;

    cout << solution(my_string,overwrite_string,s) << endl;

    return 0;
}