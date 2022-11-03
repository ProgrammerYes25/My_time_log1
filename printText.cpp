#include "Header.h"

void printText::titleText() {
    cout << endl;
    cout << "         ____________________________________________________________________________________________________________________" << endl;
    cout << "        |                                                                                                                    |" << endl;
    cout << "        |                                                                                                                    |" << endl;
    cout << "        |                " << " _          _   _      _       _________    _________    _          _     __________" << "                |        " << endl;
    cout << "        |                " << "| \\        / |  \\\\    //      |___   ___|  |___   ___|  | \\        / |   |   _______|" << "               |        " << endl;
    cout << "        |                " << "|  \\      /  |   \\\\  //           | |          | |      |  \\      /  |   |  |_______" << "                |        " << endl;
    cout << "        |                " << "| |\\\\    //| |    \\\\//            | |          | |      | |\\\\    //| |   |   _______|" << "               |        " << endl;
    cout << "        |                " << "| | \\\\  // | |     ||             | |       ___| |___   | | \\\\  // | |   |  |_______" << "                |        " << endl;
    cout << "        |                " << "|_|  \\\\//  |_|     ||             |_|      |_________|  |_|  \\\\//  |_|   |__________|" << "               |        " << endl;
    cout << "        |                                                                                                                    |" << endl;
    cout << "        |                " << "                         _            _____      ______                         " << "                    |        " << endl;
    cout << "        |                " << "                        | |          | ___ |    | _____|                        " << "                    |        " << endl;
    cout << "        |                " << "                        | |         | |   | |  | |   ___                        " << "                    |        " << endl;
    cout << "        |                " << "                        | |         | |   | |  | |  |_  |                        " << "                   |        " << endl;
    cout << "        |                " << "                        | |______   | |___| |  | |____| |                        " << "                   |        " << endl;
    cout << "        |                " << "                        |________|   |_____|    |______|                         " << "                   |        " << endl;
    cout << "        |                                                                                                                    |" << endl;
    cout << "        |____________________________________________________________________________________________________________________|" << endl;
    cout << "        |____________________________________________________________________________________________________________________|" << endl;
    cout << "        |                " << "                       시작하려면 1을 입력하세요!(종료는 0)" << "                                         |        " << endl;

    string start = macro::input();
    if (macro::pickMacro4(start)) {
        menuText();
    }
    else {
        titleText();
    }
}
void printText::menuText() {
    cout << endl;
    cout << "                         ____________________________________________________________________________" << endl;
    cout << "                        |                                                                            |" << endl;
    cout << "                        |       메뉴 선택 화면          (원하시는 메뉴의 번호를 입력해주세요.)       |" << endl;
    cout << "                        |____________________________________________________________________________|" << endl;
    cout << "                        |____________________________________________________________________________|" << endl;
    cout << "                        |                   |                                                        |" << endl;
    cout << "                        |          1        |                      시간표 조회                       |" << endl;
    cout << "                        |___________________|________________________________________________________|" << endl;
    cout << "                        |                   |                                                        |" << endl;
    cout << "                        |          2        |                     스터디 플레너                      |" << endl;
    cout << "                        |___________________|________________________________________________________|" << endl;
    cout << "                        |                   |                                                        |" << endl;
    cout << "                        |          3        |                    짧은 한줄 일기                      |" << endl;
    cout << "                        |___________________|________________________________________________________|" << endl;
    cout << "                        |                   |                                                        |" << endl;
    cout << "                        |          4        |                     프로그램 종료                      |" << endl;
    cout << "                        |___________________|________________________________________________________|" << endl;
    cout << "                        |____________________________________________________________________________|" << endl;
    cout << "                        |                            메뉴의 번호을 입력하세요!" << "                       |" << endl;
    string meun = macro::input();
    if (macro::pickMacro4(meun)) {
        switch (atoi(meun.c_str())) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            exit(1);
            break;
        }
    }
    else {
        menuText();
    }
}
