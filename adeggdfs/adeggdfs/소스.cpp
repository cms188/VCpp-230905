#include <iostream>
#include <conio.h>
#include <chrono>

int main() {
    char key;
    auto start_time = std::chrono::high_resolution_clock::now();

    // ���� ���� ȭ�� ���
    std::cout << "==================================" << std::endl;
    std::cout << "202207007 �ֹμ� �������� ���� �����" << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "� ����� ����Ͻðڽ��ϱ�?" << std::endl;

    while (true) {
        
        // ���� �ð��� ������
        auto current_time = std::chrono::high_resolution_clock::now();

        // ESC Ű�� ������ ���α׷� ����
        if (_kbhit() && _getch() == 27) {
            std::cout << "���α׷��� �����մϴ�." << std::endl;
            break;
        }

        // ����Ű �Ʒ�, ������, 'a' Ű�� ������� ����
        if (_kbhit()) {
            key = _getch();
            if ((key == 80 || key == 77 || key == 'a') &&
                std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() <= 300) {
                //current_time-start_time ���� �Է��� ������ �ð����� ���� �ð��� �� �ɸ� �ð��� ���ϰ� count()�� ����
                if (key == 'a') {
                    std::cout << "�Ƶ���! =0" << std::endl;
                }
                start_time = current_time;
            }
            else {
                start_time = std::chrono::high_resolution_clock::now();
            }
        }

        // ����Ű ������, ����, 'b' Ű�� ������� ����
        else if (_kbhit()) {
            key = _getch();
            if ((key == 77 || key == 72 || key == 'b') &&
                std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() <= 300) {
                //current_time-start_time ���� �Է��� ������ �ð����� ���� �ð��� �� �ɸ� �ð��� ���ϰ� count()�� ����
                if (key == 'b') {
                    std::cout << "�·��! " << std::endl;
                }
                start_time = current_time;
            }
            else {
                start_time = std::chrono::high_resolution_clock::now();
            }
        }
        else if (_kbhit()) {
            key = _getch();
                if ((key == 77 || key == 80 || key == 'f') &&
                    std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() <= 300) {
                 //current_time-start_time ���� �Է��� ������ �ð����� ���� �ð��� �� �ɸ� �ð��� ���ϰ� count()�� ����
                if (key == 'f') {
                    std::cout << "�ϴ� ������! " << std::endl;
                }
                start_time = current_time;
            }
            else {
                start_time = std::chrono::high_resolution_clock::now();
            }
        }
    }

    return 0;
}
