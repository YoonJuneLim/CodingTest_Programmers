// 마지막 두 원소
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int size = num_list.size();
    int last, last_before;
    last = num_list[size-1];
    last_before = num_list[size-2];
    num_list.push_back(((last > last_before) ? (last-last_before) : (last*2)));
    return num_list;
}

// test function
#include <iostream>
int main(void){
    vector<int> list = {2,1,6};
    
    vector<int> l = solution(list);

    for(int i=0; i<l.size(); i++)
        cout << l[i] << " ";
    cout <<endl;
    return 0;
}