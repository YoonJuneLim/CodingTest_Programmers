// [PCCE 기출문제] 6번 / 물 부족
#include <string>
#include <vector>

using namespace std;

int solution(int storage, int usage, vector<int> change) {
    int total_usage = 0;
    for(int i=0; i<change.size(); i++){
        usage += usage * change[i] / 100; // usage = total_usage * change[i] / 100;
        total_usage += usage;
        if(total_usage > storage){
            return i;
        }
    }
    return -1;
}
// test function
#include <iostream>
int main(void){
    int storage, usage;
    vector<int> change = {10, -10, 10, -10, 10, -10, 10, -10, 10, -10};
    storage = 5141;
    usage = 500;

    cout << solution(storage, usage, change) << endl;

    return 0;
}