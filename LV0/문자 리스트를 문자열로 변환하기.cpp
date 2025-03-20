// 문자 리스트를 문자열로 변환하기
#include <iostream>
#include <vector>

using namespace std;

string solution(vector<string> arr){
    string ret="";
    for(int i=0; i<arr.size(); i++)
        ret += arr[i];
    return ret;
}

// test function
#include <string>
int main(void){
    vector<string> arr = {"a","b","c"};
    cout<<solution(arr)<<endl;
    return 0;
}