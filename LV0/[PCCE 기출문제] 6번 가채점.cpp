// [PCCE 기출문제] 6번 / 가채점

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<int> numbers, vector<int> our_score, vector<int> score_list) {
    int num_student = numbers.size();
    vector<string> answer(num_student);
    
    for (int i = 0; i < num_student; i++) {
        if (our_score[i] == score_list[numbers[i]-1]) { // if (our_score[i] == score_list[i]) {
            answer[i] = "Same";
        }
        else {
            answer[i] = "Different";
        }
    }
    
    return answer;
}

//test function
#include <iostream>
int main(void){
    
    vector<int> numbers = {3, 4};
    vector<int> our_score = {85, 93};
    vector<int> score_list = {85, 92, 38, 93, 48, 85, 92, 56};
    vector<string> result = solution(numbers, our_score, score_list);

    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";

    cout << endl;
    return 0;
}