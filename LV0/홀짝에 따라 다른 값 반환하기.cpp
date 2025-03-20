// 홀짝에 따라 다른 값 반환하기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int sum = 0;
    int check = n%2;
    do{
        if(n%2 != check) continue;
        sum += (check) ? n : n*n;
    }while(n-->0);

    return sum;
}

//test function
#include <iostream>
int main(void){
    int n;
    cin >> n;
    cout << solution(n) << endl;
    return 0;
}