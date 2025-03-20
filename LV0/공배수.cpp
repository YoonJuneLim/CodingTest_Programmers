// 공배수
#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    return (!(number % n) && !(number % m)) ? 1 : 0;
}

// test function
#include <iostream>
int main(void){
    int number, n, m;
    cin >> number >> n >> m;
    cout << solution(number, n, m) << endl;
    return 0;
}