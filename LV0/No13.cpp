// [PCCE 기출문제] 5번 / 산책

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string route) {
    int east = 0;
    int north = 0;
    vector<int> answer(2);
    for(int i=0; i<route.length(); i++){
        switch(route[i]){
            case 'N':
                north++;
                break;
            case 'S':
                north--;
                break;
            case 'E':
                east++;
                break;
            case 'W':
                east--;
                break;
        }
    }
    answer[0] = east;
    answer[1] = north;
    return answer;
}

//test function
#include <iostream>
int main(void){

    string route;
    vector<int> result;

    cin >> route;

    result = solution(route);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}