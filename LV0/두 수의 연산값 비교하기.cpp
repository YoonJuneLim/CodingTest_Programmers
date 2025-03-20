// 두 수의 연산값 비교하기
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int sum1,sum2;
    sum1 = stoi(to_string(a) + to_string(b));
    sum2 = stoi(to_string(2*a*b));
    if(sum2>sum1) return sum2;
    else return sum1;
}

// test function
#include <iostream>
int main(void){
    int a,b;
    cin>>a>>b;
    cout<<solution(a,b)<<endl;
    return 0;
}