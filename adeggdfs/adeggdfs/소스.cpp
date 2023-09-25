#include <iostream>
#include <conio.h>
#include <chrono>

int main() {
    char key;
    auto start_time = std::chrono::high_resolution_clock::now();

    // 게임 시작 화면 출력
    std::cout << "==================================" << std::endl;
    std::cout << "202207007 최민석 대전엑션 게임 만들기" << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "어떤 기술을 사용하시겠습니까?" << std::endl;

    while (true) {
        
        // 현재 시간을 가져옴
        auto current_time = std::chrono::high_resolution_clock::now();

        // ESC 키를 누르면 프로그램 종료
        if (_kbhit() && _getch() == 27) {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }

        // 방향키 아래, 오른쪽, 'a' 키를 순서대로 누름
        if (_kbhit()) {
            key = _getch();
            if ((key == 80 || key == 77 || key == 'a') &&
                std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() <= 300) {
                //current_time-start_time 으로 입력을 시작한 시간에서 현재 시간을 빼 걸린 시간을 구하고 count()에 넣음
                if (key == 'a') {
                    std::cout << "아도겐! =0" << std::endl;
                }
                start_time = current_time;
            }
            else {
                start_time = std::chrono::high_resolution_clock::now();
            }
        }

        // 방향키 오른쪽, 위쪽, 'b' 키를 순서대로 누름
        else if (_kbhit()) {
            key = _getch();
            if ((key == 77 || key == 72 || key == 'b') &&
                std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time).count() <= 300) {
                //current_time-start_time 으로 입력을 시작한 시간에서 현재 시간을 빼 걸린 시간을 구하고 count()에 넣음
                if (key == 'b') {
                    std::cout << "승룡권! " << std::endl;
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
                 //current_time-start_time 으로 입력을 시작한 시간에서 현재 시간을 빼 걸린 시간을 구하고 count()에 넣음
                if (key == 'f') {
                    std::cout << "하단 발차기! " << std::endl;
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
