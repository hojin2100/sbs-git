#pragma once
#include <stdio.h>
#include <conio.h> // _getch(), _kbhit() 함수 사용을 위해 필요
#include <Windows.h> // SetConsoleCursorPosition() 함수 사용을 위해 필요

void gotoxy(int x, int y) 
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void PlayerMoveSetup()
{
    int x = 10, y = 10; // 초기 문자 위치
    int key;
    printf("★");
    while (1) {
        system("cls"); // 화면 지우기 (반복문 안에서 화면을 계속 새로고침)
        gotoxy(x, y);
        if (_kbhit()) { // 키 입력이 있는지 확인
            key = _getch(); // 키 입력 받기

            if (key == 224 || key == 0) { // 방향키 입력 (확장 키)
                key = _getch(); // 실제 방향키 코드 다시 입력 받기
                switch (key) {
                case 72: y--; break; // 위쪽 화살표
                case 80: y++; break; // 아래쪽 화살표
                case 75: x--; break; // 왼쪽 화살표
                case 77: x++; break; // 오른쪽 화살표
                }
            }
            else if (key == 27) { // ESC 키를 누르면 종료
                break;
            }
        }
    }
}