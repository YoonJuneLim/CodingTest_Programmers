// 등차수열의 특정한 항만 더하기
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int sum=0;
    for(int i=0; i<included.size(); i++,a+=d)
        if(included[i]) sum+=a;
    return sum;
}

//test function
#include <iostream>
int main(void){
    int a,b;
    vector<bool> included;

    a = 3;
    b = 4;
    included = {true, false, false, true, true};

    cout<<solution(a,b,included)<<endl;
    return 0;
}