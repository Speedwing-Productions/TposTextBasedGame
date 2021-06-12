#include <iostream>

using namespace std;
void text_color_linux() {
    #ifdef linux
    cout << "\033[31mPlease enter a valid option!\033[0m\n";
    #endif
}