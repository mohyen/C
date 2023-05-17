#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start, end; // time_t는 unsigned long과 동일한 자료형입니다.

    start = time(NULL); // 현재 시간을 start 변수에 저장합니다.
    printf("10초가 되면 아무 키나 누르세요\n");

    while (1) {
        if (getchar()) // 사용자가 아무 키나 입력할 때까지 대기합니다.
            break;
    }

    printf("종료되었습니다.\n");
    end = time(NULL); // 현재 시간을 end 변수에 저장합니다.
    printf("경과된 시간은 %ld 초입니다. \n", end - start); // 경과 시간을 출력합니다.
    return 0;
}