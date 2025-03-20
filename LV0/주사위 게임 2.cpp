// 주사위 게임 2
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int sum = (a+b+c);
    if(a!=b && b!=c && a!=c) return sum;
    sum *= (a*a+b*b+c*c);
    if(!(a==b && b==c && a==c)) return sum;
    sum *= (a*a*a+b*b*b+c*c*c);
    return sum;
}

// test function
#include <iostream>
int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solution(a,b,c)<<endl;
    return 0;
}