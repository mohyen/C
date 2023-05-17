#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void disp_car(int car_number, int distance) {
    printf("Car %d: %d meters\n", car_number, distance);
}

int main(void) {
    int i;
    int car1_dist = 0, car2_dist = 0;

    srand((unsigned)time(NULL)); // 시드 값을 현재 시간으로 설정하여 랜덤 값을 생성하기 위한 초기화

    for (i = 0; i < 6; i++) {
        car1_dist += rand() % 100; // 0부터 99 사이의 랜덤 값을 car1_dist에 추가하여 거리 증가
        car2_dist += rand() % 100; // 0부터 99 사이의 랜덤 값을 car2_dist에 추가하여 거리 증가
        disp_car(1, car1_dist); // car1의 번호와 현재 거리를 disp_car 함수를 사용하여 출력
        disp_car(2, car2_dist); // car2의 번호와 현재 거리를 disp_car 함수를 사용하여 출력
        printf("---------------------\n"); // 구분을 위한 줄 출력
        getchar(); // 사용자 입력 대기
    }

    return 0;
}