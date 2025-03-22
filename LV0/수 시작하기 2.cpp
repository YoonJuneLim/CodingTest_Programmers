// 수 시작하기 2
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog){
    string str="";
    int cut = 0;
    int diff;
    while(1){
        diff = numLog[cut+1] - numLog[cut];
        switch(diff){
            case 1: str += 'w'; break;
            case -1: str += 's'; break;
            case 10: str += 'd'; break;
            case -10: str += 'a'; break;
            default: break;
        }
        if(cut++>(numLog.size()-1)) break;
    }
    
    return str;
}

// test function
#include <iostream>
int main(void){
    vector<int> numLog = {0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1};
    cout << solution(numLog) << endl;

    return 0;
}