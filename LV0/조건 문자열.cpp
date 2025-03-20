// 조건 문자열
#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    string str = ineq+eq;
    if(str==">=") return (n>=m);
    else if(str=="<=") return (n<=m);
    else if(str==">!") return (n>m);
    else return (n<m);
}

//test function
#include <iostream>
int main(void){
    string ineq, eq;
    int n,m;
    cin>>ineq>>eq>>n>>m;
    cout<<solution(ineq,eq,n,m)<<endl;
    return 0;
}