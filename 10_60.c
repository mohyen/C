#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>

int coin_toss(void); // 동전 던지기 함수의 프로토타입 선언

int main(void) {
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL)); // 시드 값을 현재 시간으로 설정하여 랜덤 값을 생성하기 위한 초기화

    for (toss = 0; toss < 100; toss++) {
        if (coin_toss() == 1)
            heads++; // 앞면이 나온 경우 헤드 개수 증가
        else
            tails++; // 뒷면이 나온 경우 테일 개수 증가
    }

    printf("동전의 앞면: %d \n", heads); // 앞면 개수 출력
    printf("동전의 뒷면: %d \n", tails); // 뒷면 개수 출력
    return 0;
}

// 동전 던지기 함수의 정의
int coin_toss(void) {
    int head = rand() % 2; // 0 또는 1의 값을 랜덤으로 생성하여 head 변수에 저장
    return head; // head 값을 반환하여 동전의 앞면(1) 또는 뒷면(0)을 나타냄
}
