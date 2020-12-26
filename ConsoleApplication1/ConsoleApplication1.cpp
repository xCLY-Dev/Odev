#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("title math.basic");
menu_start:
    SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "05352468 ile devam eden telefon numarasına selam olsun :" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
    cout << "   [1] - Arithmetic Four Operations" << endl;
    cout << "   [2] - Exponential Numbers" << endl;
    cout << "   [3] - Square Root" << endl;
    cout << "   [4] - Round Number" << endl;
    cout << "   [5] - Natural Logarithm" << endl;
    cout << "   [6] - Hyperbolic Cosine" << endl;
    cout << "   [7] - Sin" << endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    int mb_menu_select = 0;

    cout << "Select: ";
    cin >> mb_menu_select;
    if (mb_menu_select >= 0 || mb_menu_select != NULL || mb_menu_select <= 7) {
        if (mb_menu_select == 1) {
            int mb_1_first;
            int mb_1_second;

            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type First Number: ";
            cin >> mb_1_first;

            cout << "Type Second Number: ";
            cin >> mb_1_second;

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << mb_1_first << " + " << mb_1_second << " = " << mb_1_first + mb_1_second << endl;
            cout << mb_1_first << " - " << mb_1_second << " = " << mb_1_first - mb_1_second << endl;
            cout << mb_1_first << " * " << mb_1_second << " = " << mb_1_first * mb_1_second << endl;
            cout << mb_1_first << " / " << mb_1_second << " = " << mb_1_first / mb_1_second << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }

        if (mb_menu_select == 2) {
            double mb_2_first = 0;
            double mb_2_second = 0;
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type Number: ";
            cin >> mb_2_first;
            cout << "Type Exponential Number: ";
            cin >> mb_2_second;

            double mb_2_exponential = pow(mb_2_first, mb_2_second);

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << mb_2_first << " ^ " << mb_2_second << " = " << mb_2_exponential << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }

        if (mb_menu_select == 3) {
            double mb_3_first = 0;
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type Number: ";
            cin >> mb_3_first;

            double mb_3_square = sqrt(mb_3_first);

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "Square root of " << mb_3_first << " is " << mb_3_square << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }

        if (mb_menu_select == 4) {
            double mb_4_first = 0;
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type Number: ";
            cin >> mb_4_first;

            double mb_4_round = round(mb_4_first);

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << mb_4_first << " => " << mb_4_round << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }

        if (mb_menu_select == 5) {
            double mb_5_first = 0;
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type Number: ";
            cin >> mb_5_first;

            double mb_5_log = log(mb_5_first);

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << mb_5_first << " => " << mb_5_log << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }

        if (mb_menu_select == 6) {
            double mb_6_first = 0;
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type Number: ";
            cin >> mb_6_first;

            double mb_6_exp = exp(mb_6_first);

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << mb_6_first << " => " << mb_6_exp << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }

        if (mb_menu_select == 7) {
            double mb_7_first = 0;
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Type Number: ";
            cin >> mb_7_first;

            double mb_7_sin = sin(mb_7_first);

            cout << "\n";
            cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << mb_7_first << " => " << mb_7_sin << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~\n" << endl;
            goto menu_start;
        }
        else {
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "Unexcepted Error!" << endl;
            goto menu_start;
        }
    }
    return 0;
}