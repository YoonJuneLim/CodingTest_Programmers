//수열과 구간 쿼리 2

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * queries_cols);

    int* p = &**queries;
    int max = -1;
    int ret;
    for (int arr_cnt = 0; arr_cnt < arr_len; arr_cnt++) {
        if (p[0] <= arr[arr_cnt] && arr[arr_cnt] <= p[1] && p[2]<arr[arr_cnt]) {
            if (max < arr[arr_cnt]) max = arr[arr_cnt];
            else ret = arr[arr_cnt];
        }
    }
    printf("%d", ret);

    return answer;
}

// test function
int main(void){
    int **queries = (int**)malloc(sizeof(int*)*3);
    int arr[] = {0,1,2,4,3};
    int *ret;
    queries[0] = (int*)malloc(sizeof(int)*3);
    queries[1] = (int*)malloc(sizeof(int)*3);
    queries[2] = (int*)malloc(sizeof(int)*3);
    queries[0][0] = 0;
    queries[0][1] = 4;
    queries[0][2] = 2;

    queries[1][0] = 0;
    queries[1][1] = 3;
    queries[1][2] = 2;

    queries[2][0] = 0;
    queries[2][1] = 2;
    queries[2][2] = 2;

    ret = solution(arr, 5, queries, 3, 3);

    free(queries[0]);
    free(queries[1]);
    free(queries[2]);
    free(queries);

    return 0;
}