// n의 배수
#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    return !(num % n);
}

// test function
#include <iostream>
int main(void){
    int num,n;
    cin >> num >> n;
    cout << solution(num,n) << endl;
    return 0;
}