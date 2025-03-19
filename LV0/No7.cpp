// [PCCE 기출문제] 7번 / 버스
#include <string>
#include <vector>

using namespace std;

int func1(int num){
    if(0 > num){
        return 0;
    }
    else{
        return num;
    }
}

int func2(int num){
    if(num > 0){
        return 0;
    }
    else{
        return num;
    }
}

int func3(vector<string> station){
    int num = 0;
    for(int i=0; i<station.size(); i++){
        if(station[i] == "Off"){
            num += 1;
        }
    }
    return num;
}

int func4(vector<string> statcion){
    int num=0;
    for(int i=0; i<statcion.size(); i++){
        if(statcion[i] == "On"){
            num += 1;
        }
    }
    return num;
}

int solution(int seat, vector<vector<string>> passengers){
    int num_passenger = 0;
    for(int i=0; i<passengers.size(); i++){
        num_passenger += func4(passengers[i]);
        num_passenger -= func3(passengers[i]);
    }
    int answer = func1(seat - num_passenger);
    return answer;
}

// test function
#include <iostream>
int main(void){
    vector<vector<string>> passenger = {{"On","On","On"},
                                        {"Off","On","-"},
                                        {"Off","-","-"}};
    int seat = 5;
    cout << solution(seat, passenger) << endl;
    
    return 0;
}