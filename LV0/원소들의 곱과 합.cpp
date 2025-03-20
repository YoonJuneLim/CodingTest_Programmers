// 원소들의 곱과 합
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int a=1,b=0;
    int len = num_list.size();
    while(len-->0){
        a *= num_list[len];
        b += num_list[len];
    }
    return (a < (b*b)) ;
}

// test function
#include <iostream>
int main(void){
    vector<int> num = {5, 7, 8, 3};
    cout<<solution(num)<<endl;
    return 0;
}