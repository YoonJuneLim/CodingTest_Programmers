// 수열과 구간 쿼리 3
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(vector<int> query:queries){
        int temp = arr[query[0]];
        arr[query[0]] = arr[query[1]];
        arr[query[1]] = temp;
    }

    return arr;
}

// test function
#include <iostream>
int main(void){
    vector<int> arr = {0, 1, 2, 3, 4};
    vector<vector<int>> queire = {{0, 3},{1, 2},{1, 4}};

    arr = solution(arr, queire);
    for(int i:arr) {cout<<i<<" ";}
    cout<<endl;
    return 0;
}