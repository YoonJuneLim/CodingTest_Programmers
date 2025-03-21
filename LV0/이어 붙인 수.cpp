// 이어 붙인 수
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list){
    string odd="",even="";

    for(int i=0; i<num_list.size(); i++){
        (num_list[i] % 2) ? odd += to_string(num_list[i]) : even += to_string(num_list[i]);
    }

    return stoi(odd)+ stoi(even);
}

// test function
#include <iostream>

int main(void){
    vector<int> num = {3, 4, 5, 2, 1};
    cout << solution(num) << endl;
    return 0;
}