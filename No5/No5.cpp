// [PCCE 기출문제] 5번 / 심폐소생술

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> cpr) {
    vector<int> answer = {0, 0, 0, 0, 0};
    vector<string> basic_order = {"check", "call", "pressure", "respiration", "repeat"};

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(cpr[i] == basic_order[j]){
                answer[i] = (j+1);
                break;
            }
        }
    }

    return answer;
}

// test function
#include <iostream>
using namespace std;
int main(void){
    vector<string> cpr = {"call", "respiration", "repeat", "check", "pressure"};
    vector<int> ret;

    ret = solution(cpr);

    for(int i=0; i<cpr.size(); i++)
        cout << ret[i] << ' ';

    return 0;
}