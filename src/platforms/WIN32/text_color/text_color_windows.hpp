#include <iostream>

using namespace std;

void text_color_windows() {
    #ifdef _WIN32
    HANDLE hConsole = GetStdHanfle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    cout << "Please enter a valid option!\n";
    #endif
}