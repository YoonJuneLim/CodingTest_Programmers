// 대소문자 바꿔서 출력하기
#include <iostream>
#include <string>

#define STR_LEN 20

using namespace std;

int main(void){
    char* str = (char*)malloc(sizeof(char)*STR_LEN);
    char c;
    cin.getline(str, STR_LEN);
    
    for(int i=0; i<STR_LEN; i++){
        c = str[i]; if(c<0x40 || c>0x7A) continue;
        str[i] = (c> 0x60) ? c-0x20 : c+0x20; 
    }

    cout << str << endl;

    free(str);

    return 0;
}