#pragma once
#include <stdio.h>
#include <conio.h> // _getch(), _kbhit() �Լ� ����� ���� �ʿ�
#include <Windows.h> // SetConsoleCursorPosition() �Լ� ����� ���� �ʿ�

void gotoxy(int x, int y) 
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void PlayerMoveSetup()
{
    int x = 10, y = 10; // �ʱ� ���� ��ġ
    int key;
    printf("��");
    while (1) {
        system("cls"); // ȭ�� ����� (�ݺ��� �ȿ��� ȭ���� ��� ���ΰ�ħ)
        gotoxy(x, y);
        if (_kbhit()) { // Ű �Է��� �ִ��� Ȯ��
            key = _getch(); // Ű �Է� �ޱ�

            if (key == 224 || key == 0) { // ����Ű �Է� (Ȯ�� Ű)
                key = _getch(); // ���� ����Ű �ڵ� �ٽ� �Է� �ޱ�
                switch (key) {
                case 72: y--; break; // ���� ȭ��ǥ
                case 80: y++; break; // �Ʒ��� ȭ��ǥ
                case 75: x--; break; // ���� ȭ��ǥ
                case 77: x++; break; // ������ ȭ��ǥ
                }
            }
            else if (key == 27) { // ESC Ű�� ������ ����
                break;
            }
        }
    }
}