#include <stdlib.h>
#include <stdio.h>

int main(void) {
    system("dir"); // "dir" 명령어를 실행하여 현재 디렉토리의 내용을 출력합니다.
    printf("아무 키나 치세요\n");
    _getch(); // 사용자로부터 키 입력을 받습니다.
    system("cls"); // 화면을 지우는 명령어인 "cls"를 실행합니다.
    return 0;