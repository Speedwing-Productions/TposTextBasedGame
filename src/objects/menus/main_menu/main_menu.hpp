#ifdef _WIN32
#include <windows.h>
#include "../../../platforms/WIN32/text_color/text_color_windows.hpp"
#endif

#ifdef linux
#include "../../../platforms/LINUX/text_color/text_color_linux.hpp"
#endif

#include <iostream>

#include "../../splash_screen/splash-screen.hpp"
using namespace std;
void main_menu() {
    int options[] = {/*Start*/ 1, /*Settings*/ 2, /*Quit*/ 3};

    int plrInput;

    splash_screen();
    cout <<  "|---------------------------------------------------------------------------------------------------------|     \n"
         <<  "| [1] - Start                                                                                             |     \n"
         <<  "| [2] - Settings                                                                                          |     \n"
         <<  "| [3] - Quit                                                                                              |     \n"
         <<  "|---------------------------------------------------------------------------------------------------------|     \n";
    cout <<  "                                                 Copyright 2021 Speedwing Productions                           \n";

    cin >> plrInput;
    switch(plrInput) {
        case 1:
            //start
            break;
        case 2:
            //settings
            break;
        case 3:
                //quit
                break;
            default:
                while (plrInput != options[1,2,3]) {
                    /*
                    Sets the error text color
                    when using Windows PC
                    */
                    #ifdef _WIN32
                    text_color_windows();
                    #endif

                    /*
                    Sets the error text color
                    when using linux PC
                    */
                    #ifdef linux
                    text_color_linux();
                    #endif

                    cin >> plrInput;
                    switch(plrInput) {
                        case 1:
                            //start
                            break;
                        case 2:
                            //settings
                            break;
                        case 3:
                            //quit
                            break;
                }
                break;
        }

    }
}