// flag에 따라 다른 값 반환하기
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    return flag ? a+b:a-b;
}

// test funcation
#include <iostream>
int main(void){
    int a,b;
    bool flag;
    cin>>a>>b>>flag;
    cout<<solution(a,b,flag)<<endl;
    return 0;
}