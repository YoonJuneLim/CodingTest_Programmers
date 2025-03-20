// 더 크게 합치기
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int sum1 = stoi(to_string(a) + to_string(b));
    int sum2 = stoi(to_string(b) + to_string(a));

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