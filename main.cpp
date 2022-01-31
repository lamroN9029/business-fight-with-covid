#include <iostream>
#include <conio.h>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "res/m_functionpixel.h"
#include "res/m_ll.h"
#include "res/m_spworkman.h"
#include "res/mr_boss.h"
#include "res/mr_item.h"
#define ENTER '\r'
#define MAX_WORKMAN 4
using namespace std;
void ShowConsoleCursor(bool showFlag) {
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, & cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, & cursorInfo);
}

void enter(int, int);
void delaycout(string, int);
void select(int, int, int); // check select ->
void menu(int);
bool check_for_cls(char);
int select_switch(int, char, int);
void workman_management(int); // 1
void show_workman(int, int); // 1
void special_workman_management(int); // 2
void show_special_workman(int, int); // 2
void hire_fire_menu(int, int, int); // 2
void supply_management(int); // 3
void buy_menu(int, int, int); // 3
void buy_yes(int, int, string); // 3
void buy_no(int, int); // 3
void buy_error(int, int); // 3
void boss_management(int); // 4
void show_boss(int, int); // 4
void confirm_menu(int, int, int); // 4
void information_screen(); // 5
void skip_the_day(); //6
void press_any_key(int, int);

ll l;
workman intern("Intern", 500, 2500, 1, 40, 4, 3, 9, 3),
    staff("Staff", 1000, 3500, 2, 40, 6, 6, 10, 6),
    employee("Employee", 1500, 4500, 3, 30, 8, 9, 12, 7),
    professional("Professional", 2000, 6000, 4, 25, 10, 10, 13, 9);
special_workman medic(0.5, "Reduce the chance of being covid by 50%", 0, 3500, 0, "Medic"),
    entertainer(0.05, "Increase mental health by 5% per day", 0, 3500, 0, "Entertainer");
material m;
boss b;
item ppe, cure, entertain;

int main() {
    setting_space();
    gotoxy(60, 30);
    printf("Recommend : Please play in fullscreen or fullwindow to get best experiences\n");
    ShowConsoleCursor(0);
    Sleep(3000);
    system("cls");
    richs();
    Sleep(1000);
    system("cls");
    stand();
    Sleep(1000);
    system("cls");
    jump();
    Sleep(1000);
    system("cls");
    Intro();
    enter(70, 45);
    menu(1);
    return 0;
}
void menu(int current) {
    ShowConsoleCursor(0);
    char k1, k2;
    while (1) {
        textcolor(WHITE, BLACK);
        cout << "Main Menu\n\n";
        textcolor(RED, BLACK);
        cout << "=> What you want to do?\n\n";
        gotoxy(5, 5);
        select(current, 1, 3);
        textcolor(DARKYELLOW, BLACK);
        cout << "1) Workman management\n";
        textcolor(WHITE, BLACK);
        gotoxy(30, 10);
        select(current, 2, 3);
        textcolor(YELLOW, BLACK);
        cout << "2) Special workman management\n";
        textcolor(WHITE, BLACK);
        gotoxy(55, 18);
        select(current, 3, 3);
        textcolor(GREEN, BLACK);
        cout << "3) Supply management\n";
        textcolor(WHITE, BLACK);
        gotoxy(80, 26);
        select(current, 4, 3);
        textcolor(DARKGREEN, BLACK);
        cout << "4) Boss management\n";
        textcolor(WHITE, BLACK);
        gotoxy(105, 38);
        select(current, 5, 3);
        textcolor(AQUA, BLACK);
        cout << "5) See business information\n";
        textcolor(WHITE, BLACK);
        gotoxy(130, 46);
        select(current, 6, 3);
        textcolor(BLUE, BLACK);
        cout << "6) Do noting (skip the day)\n";
        textcolor(WHITE, BLACK);
        k1 = getch();
        if (check_for_cls(k1)) break;
        k2 = getch();
        current = select_switch(current, k2, 6);
    }
    switch (current) {
        case 1:
            workman_management(1);
            break;
        case 2:
            special_workman_management(1);
            break;
        case 3:
            supply_management(1);
            break;
        case 4:
            boss_management(1);
            break;
        case 5:
            information_screen();
        case 6:
            skip_the_day();
            break;
    }
}
void delaycout(string s, int d) {
    for (unsigned int i = 0; i < s.length(); ++i) {
        cout << s[i];
        Sleep(d);
    }
}
void enter(int x, int y) {
    gotoxy(x, y);
    textcolor(RED, BLACK);
    delaycout("Press any key to enter the game...", 50);
    textcolor(WHITE, BLACK);
    ShowConsoleCursor(1);
    getch();
    ShowConsoleCursor(0);
    system("cls");
}
void select(int current, int number, int space) {
    string s;
    textcolor(DARKYELLOW, BLACK);
    for (int i = 0; i < space; ++i) s += ' ';
    if (current == number)

        cout << s << "-> ";
    else
        cout << s << "  ";
    textcolor(WHITE, BLACK);
}
bool check_for_cls(char key) {
    if (key == ENTER) {
        system("cls");
        return true;
    } else {
        return false;
    }
}
int select_switch(int current, char key, int n_key) {
    switch (key) {
        case 72: // up
            current = (current == 1) ? n_key : current - 1;
            break;
        case 80: // down
            current = (current == n_key) ? 1 : current + 1;
            break;
    }
    system("cls");
    return current;
}
void workman_management(int current) {
    char k1, k2;
    while (1) {
        show_workman(current, -1);
        k1 = getch();
        if (check_for_cls(k1)) break;
        k2 = getch();
        current = select_switch(current, k2, 3);
    }
    if (current == 3) menu(1);
    int lv, current_next = 1;
    string name;
    workman w;
    switch (current) {
        case 1:
            if (l.size_get() == MAX_WORKMAN) {
                show_workman(current, current_next);
                textcolor(RED, BLACK);
                delaycout("Result : Can't hire more workman (Max workman)\n", 50);
                textcolor(WHITE, BLACK);
                textcolor(VIOLET, BLACK);
                delaycout("\t\t\tPress any key to continue...", 50);
                textcolor(WHITE, BLACK);
                getch();
                system("cls");
                workman_management(current);
            }
            system("cls");
            cout << ">> All workman list\n\n";
            intern.display();
            staff.display();
            employee.display();
            professional.display();
            cout << "=> Hire ?\n\n";
            delaycout("Input workman Lv. (type 99 to cancel): ", 50);
            ShowConsoleCursor(1);
            try {
                cin >> lv;
                if (cin.fail())
                    throw 0;
                if (lv != 99 && (lv < 0 || lv > 4))
                    throw 1;
            } catch (int e) {
                if (e == 0) {
                    cout << "Cin fail, please enter number\n";
                    exit(0);
                }
                if (e == 1) {
                    cout << "Number out of range, please enter 1-4 or 99\n";
                    textcolor(VIOLET, BLACK);
                    press_any_key(25, 40);
                    textcolor(WHITE, BLACK);
                    workman_management(1);
                }
            } catch (exception & e) {
                cout << "-> Exception: " << e.what() << '\n';
                cout << "Return to menu\n";
                menu(1);
            }
            ShowConsoleCursor(0);
            if (lv == 99) {
                delaycout("Return to workman management\n", 50);
                system("cls");
                workman_management(1);
                ShowConsoleCursor(0);
            }
            delaycout("Please enter workman name : ", 50);
            ShowConsoleCursor(1);
            try {
                cin >> name;
            } catch (exception & e) {
                cout << "-> Exception: " << e.what() << '\n';
                cout << "Return to menu\n";
                menu(1);
            }
            ShowConsoleCursor(0);
            switch (lv) {
                case 1:
                    w = intern;
                    w += name;
                    l.add_node(w);
                    break;
                case 2:
                    w = staff;
                    w += name;
                    l.add_node(w);
                    break;
                case 3:
                    w = employee;
                    w += name;
                    l.add_node(w);
                    break;
                case 4:
                    w = professional;
                    w += name;
                    l.add_node(w);
                    break;
            }
            l.bubble_sort();
            textcolor(GREEN, BLACK);
            delaycout("Result : Complete hire ", 50);
            textcolor(WHITE, BLACK);
            delaycout(name, 50);
            delaycout("(Lv. ", 50);
            cout << lv;
            delaycout(")", 50);
            textcolor(VIOLET, BLACK);
            press_any_key(25, 40);
            textcolor(WHITE, BLACK);
            workman_management(1);
            break;
        case 2:
            system("cls");
            char k3, k4;
            while (1) {
                show_workman(current, current_next);
                k3 = getch();
                if (check_for_cls(k3)) break;
                k4 = getch();
                current_next = select_switch(current_next, k4, l.size_get() + 1);
            }
            if (current_next == l.size_get() + 1) workman_management(current);
            l.delete_node(current_next);
            show_workman(current, current_next);
            textcolor(DARKRED, BLACK);
            delaycout("Result : Complete fire workman\n", 50);
            textcolor(WHITE, BLACK);
            //
            textcolor(VIOLET, BLACK);
            press_any_key(25, 40);
            textcolor(WHITE, BLACK);
            //
            workman_management(1);
            break;
    }
}
void show_workman(int current, int current_next) {
    switch (current) {
        case 1:
            if (l.size_get() >= 1)
                workman1Normal(60, 5);
            if (l.size_get() >= 2)
                workman2Normal(90, 5);
            if (l.size_get() >= 3)
                workman3Normal(60, 11);
            if (l.size_get() >= 4)
                workman4Normal(90, 11);
            break;
        case 2:
            switch (current_next) {
                case 1:
                    if (l.size_get() >= 1)
                        workman1SAD(60, 5);
                    break;
                case 2:
                    if (l.size_get() >= 2)
                        workman2SAD(90, 5);
                    break;
                case 3:
                    if (l.size_get() >= 3)
                        workman3SAD(60, 11);
                    break;
                case 4:
                    if (l.size_get() >= 4)
                        workman4SAD(90, 11);
                    break;
            }
            break;
    }
    gotoxy(0, 0);
    cout << "=> Workman management\n\n";
    cout << ">> Workman list\n\n";
    l.print_list();
    for (int i = l.size_get() + 1; i <= MAX_WORKMAN; ++i)
        printf("%3d. - Empty -\n\n", i);
    cout << ">> Command ?\n\n";
    select(current, 1, 5);
    cout << "Hire workman\n";
    select(current, 2, 5);
    cout << "Fire workman\n";
    if (current == 2) {
        for (int i = 1; i <= l.size_get(); ++i) {
            select(current_next, i, 9);
            l.name_display(i);
        }
        select(current_next, l.size_get() + 1, 9);
        cout << "<< Cancel";
    }

    cout << "\n\n";
    select(current, 3, 3);
    cout << "<< Back\n\n";
}
void special_workman_management(int current) {
    char k1, k2;
    while (1) {
        show_special_workman(current, -1);
        k1 = getch();
        if (check_for_cls(k1)) break;
        k2 = getch();
        current = select_switch(current, k2, 3);
    }
    if (current == 3) menu(2);
    int current_next = 1;
    char k3, k4;
    while (1) {
        show_special_workman(current, current_next);
        k3 = getch();
        if (check_for_cls(k3)) break;
        k4 = getch();
        current_next = select_switch(current_next, k4, 3);
    }
    show_special_workman(current, current_next);
    switch (current) {
        case 1:
            switch (current_next) {
                case 1:
                    if (medic.status_get()) {
                        textcolor(RED, BLACK);
                        delaycout("Result : Can't hire, medic has already hired\n", 50);
                        textcolor(WHITE, BLACK);
                        Sleep(250);
                        system("cls");
                        // medic has already hired
                    } // else medic hire
                    else {
                        medic.status_set(true);
                        textcolor(GREEN, BLACK);
                        delaycout("Result : Complete hire medic\n", 50);
                        textcolor(WHITE, BLACK);
                        textcolor(VIOLET, BLACK);
                        press_any_key(25, 40);
                        textcolor(WHITE, BLACK);
                    }
                    special_workman_management(1);
                    break;
                case 2:
                    if (entertainer.status_get()) {
                        textcolor(RED, BLACK);
                        delaycout("Result : Can't hire, entertainer has already hired\n", 50);
                        textcolor(WHITE, BLACK);
                        Sleep(250);
                        system("cls");
                        // entertainer has already hired
                    } // else entertainer hire
                    else {
                        entertainer.status_set(true);
                        textcolor(GREEN, BLACK);
                        delaycout("Result : Complete hire entertainer\n", 50);
                        textcolor(WHITE, BLACK);
                        textcolor(VIOLET, BLACK);
                        press_any_key(25, 40);
                        textcolor(WHITE, BLACK);
                    }
                    special_workman_management(1);
                    break;
                case 3:
                    system("cls");
                    special_workman_management(1);
                    break;
            }
            break;
        case 2:
            switch (current_next) {
                case 1:
                    if (medic.status_get()) {
                        medic.status_set(false);
                        textcolor(DARKRED, BLACK);
                        delaycout("Result : Complete fire medic\n", 50);
                        textcolor(WHITE, BLACK);
                        textcolor(VIOLET, BLACK);
                        press_any_key(25, 40);
                        textcolor(WHITE, BLACK);
                        // medic fire
                    } // else don't have medic
                    else {
                        textcolor(RED, BLACK);
                        delaycout("Result : Can't fire, medic doesn't hire yet\n", 50);
                        textcolor(WHITE, BLACK);
                        Sleep(250);
                        system("cls");
                    }
                    special_workman_management(2);
                    break;
                case 2:
                    if (entertainer.status_get()) {
                        entertainer.status_set(false);
                        textcolor(DARKRED, BLACK);
                        delaycout("Result : Complete fire entertainer\n", 50);
                        textcolor(WHITE, BLACK);
                        textcolor(VIOLET, BLACK);
                        press_any_key(25, 40);
                        textcolor(WHITE, BLACK);
                        // entertainer fire
                    } // else don't have entertainer
                    else {
                        textcolor(RED, BLACK);
                        delaycout("Result : Can't fire, entertainer doesn't hire yet\n", 50);
                        textcolor(WHITE, BLACK);
                        Sleep(250);
                        system("cls");
                    }
                    special_workman_management(2);
                    break;
                case 3:
                    system("cls");
                    special_workman_management(2);
                    break;
            }
            break;
    }
}
void show_special_workman(int current, int current_next) {
    switch (current) {
        case 1:
            switch (current_next) {
                case 1:
                    medN(60, 5);
                    break;
                case 2:
                    EnN(60, 5);
                    break;
            }
            break;
        case 2:
            switch (current_next) {
                case 1:
                    medS(60, 5);
                    break;
                case 2:
                    EnS(60, 5);
                    break;
            }
            break;
    }
    gotoxy(0, 0);
    cout << "=> Special workman management\n\n";
    cout << ">> Special workman list\n\n";
    cout << "  1. ";
    medic.display(5);
    cout << '\n';
    cout << "  2. ";
    entertainer.display(5);
    cout << '\n';
    cout << ">> What you want to do?\n\n";
    select(current, 1, 5);
    cout << "Hire special workman\n";
    hire_fire_menu(current, current_next, 1);
    select(current, 2, 5);
    cout << "Fire special workman\n";
    hire_fire_menu(current, current_next, 2);
    cout << "\n\n";
    select(current, 3, 3);
    cout << "<< Back\n\n";
}
void hire_fire_menu(int current, int current_next, int number) {
    if (current == number) {
        select(current_next, 1, 7);
        cout << "Medic\n";
        select(current_next, 2, 7);
        cout << "Entertainer\n";
        select(current_next, 3, 7);
        cout << "<< Cancel\n";
    }
}
void buy_menu(int current, int current_next, int number, int cost) {
    if (current == number) {
        space(9);
        textcolor(AQUA, BLACK);
        cout << ">> Buy ?\n";
        textcolor(WHITE, BLACK);
        select(current_next, 1, 11);
        textcolor(DARKGREEN, BLACK);
        cout << "Pay " << cost << " to full restock\n";
        textcolor(WHITE, BLACK);
        select(current_next, 2, 11);
        textcolor(RED, BLACK);
        cout << "<< Cancel\n";
        textcolor(WHITE, BLACK);
    }
}
void buy_yes(int x, int y, string s) {
    cout << endl;
    gotoxy(x, y + 1);
    printf(" _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    gotoxy(x, y + 2);
    printf("|                         |\n");
    gotoxy(x, y + 3);
    printf("|                         |\n");
    gotoxy(x, y + 4);
    printf("|_ _ _ _ _ _ _ _ _ _ _ _ _|\n\n");
    gotoxy(x + 3, y + 3);
    delaycout("COMPLETE RESTOCK ", 100);
    delaycout(s, 100);
}
void buy_no(int x, int y) {
    cout << endl;
    gotoxy(x, y);
    printf(" _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    gotoxy(x, y + 1);
    printf("|                         |\n");
    gotoxy(x, y + 2);
    printf("|                         |\n");
    gotoxy(x, y + 3);
    printf("|_ _ _ _ _ _ _ _ _ _ _ _ _|\n\n");
    gotoxy(x + 2, y + 2);
    delaycout("- OK . . . NEVERMIND  -", 100);
}
void buy_error(int x, int y) {
    cout << endl;
    gotoxy(x, y);
    printf(" _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    gotoxy(x, y + 1);
    printf("|                         |\n");
    gotoxy(x, y + 2);
    printf("|                         |\n");
    gotoxy(x, y + 3);
    printf("|_ _ _ _ _ _ _ _ _ _ _ _ _|\n\n");
    gotoxy(x + 2, y + 1);
    delaycout("-> Please enter Y or N", 100);
    gotoxy(x + 5, y + 2);
    delaycout("Y = YES    N = NO", 100);
}
void press_any_key(int x, int y) {
    textcolor(VIOLET, BLACK);
    gotoxy(x, y);
    delaycout("Press any key to continue...", 50);
    textcolor(WHITE, BLACK);
    ShowConsoleCursor(1);
    getch();
    ShowConsoleCursor(0);
    system("cls");
}
void show_supply(int current, int current_next) {
    switch (current) {
        case 1:
            Soda(50, 2);
            Soda_banner(75, 20);
            break;
        case 2:
            Syrup(50, 3);
            Syrup_banner(77, 14);
            break;
        case 3:
            Ice(50, 3);
            Ice_banner(79, 12);
            break;
        case 4:
            Cup(50, 4);
            Cup_banner(80, 14);
            break;
    }
    gotoxy(0, 0);
    cout << "=> Supply management\n\n";
    cout << ">> Supply list\n\n";
    select(current, 1, 5);
    cout << "Soda : " << m.show_soda() << '\n';
    buy_menu(current, current_next, 1, 5000);
    select(current, 2, 5);
    cout << "Syrup: " << m.show_syrup() << '\n';
    buy_menu(current, current_next, 2, 7000);
    select(current, 3, 5);
    cout << "Ice  : " << m.show_ice() << '\n';
    buy_menu(current, current_next, 3, 2000);
    select(current, 4, 5);
    cout << "Cup  : " << m.show_cup() << '\n';
    buy_menu(current, current_next, 4, 9000);
    cout << "\n\n";
    select(current, 5, 3);
    cout << "<< Back\n\n";
}
void supply_management(int current) {
    char k1, k2;
    while (1) {
        show_supply(current, -1);
        k1 = getch();
        if (check_for_cls(k1)) break;
        k2 = getch();
        current = select_switch(current, k2, 5);
    }
    if (current == 5) menu(3);
    int current_next = 1;
    char k3, k4;
    while (1) {
        show_supply(current, current_next);
        k3 = getch();
        if (check_for_cls(k3)) break;
        k4 = getch();
        current_next = select_switch(current_next, k4, 2);
    }
    show_supply(current, current_next);
    char question[2];
    switch (current_next) {
        case 1:
            switch (current) {
                case 1:
                    delaycout(">> Confirm restock soda to 100 ? (Y/N) : ", 50);
                    ShowConsoleCursor(1);
                    fflush(stdin);
                    scanf(" %s", question);
                    ShowConsoleCursor(0);
                    if (question[1] != '\0') {
                        buy_error(25, 20);
                        press_any_key(25, 26);
                        break;
                    }
                    switch (toupper(question[0])) {
                        case 'Y':
                            printf("\n");
                            if (b.money_get() < 5000) {
                                textcolor(RED, BLACK);
                                delaycout("Result : Can't buy (Not enough money)\n\n", 25);
                                textcolor(WHITE, BLACK);
                                press_any_key(25, 20);
                                supply_management(current);
                            }
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-5000);
                            m.restock_soda();
                            buy_yes(25, 20, "SODA");
                            break;
                        case 'N':
                            buy_no(25, 20);
                            break;
                        default:
                            buy_error(25, 20);
                    }
                    press_any_key(25, 26);
                    break;
                case 2:
                    delaycout(">> Confirm restock syrup to 100 ? (Y/N) : ", 50);
                    ShowConsoleCursor(1);
                    fflush(stdin);
                    scanf(" %s", question);
                    ShowConsoleCursor(0);
                    if (question[1] != '\0') {
                        buy_error(25, 20);
                        press_any_key(25, 26);
                        break;
                    }
                    switch (toupper(question[0])) {
                        case 'Y':
                            printf("\n");
                            if (b.money_get() < 7000) {
                                textcolor(RED, BLACK);
                                delaycout("Result : Can't buy (Not enough money)\n\n", 25);
                                textcolor(WHITE, BLACK);
                                press_any_key(25, 20);
                                supply_management(current);
                            }
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-7000);
                            m.restock_syrup();
                            buy_yes(25, 20, "SYRUP");
                            break;
                        case 'N':
                            buy_no(25, 20);
                            break;
                        default:
                            buy_error(25, 20);
                    }
                    press_any_key(25, 26);
                    break;
                case 3:
                    delaycout(">> Confirm restock ice to 100 ? (Y/N) : ", 50);
                    ShowConsoleCursor(1);
                    fflush(stdin);
                    scanf(" %s", question);
                    ShowConsoleCursor(0);
                    if (question[1] != '\0') {
                        buy_error(25, 20);
                        press_any_key(25, 26);
                        break;
                    }
                    switch (toupper(question[0])) {
                        case 'Y':
                            printf("\n");
                            if (b.money_get() < 2000) {
                                textcolor(RED, BLACK);
                                delaycout("Result : Can't buy (Not enough money)\n\n", 25);
                                textcolor(WHITE, BLACK);
                                press_any_key(25, 20);
                                supply_management(current);
                            }
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-2000);
                            m.restock_ice();
                            buy_yes(25, 20, "ICE");
                            break;
                        case 'N':
                            buy_no(25, 20);
                            break;
                        default:
                            buy_error(25, 20);
                    }
                    press_any_key(25, 26);
                    break;
                case 4:
                    delaycout(">> Restock cup to 100 ? (Y/N) : ", 50);
                    ShowConsoleCursor(1);
                    fflush(stdin);
                    scanf(" %s", question);
                    ShowConsoleCursor(0);
                    if (question[1] != '\0') {
                        buy_error(25, 20);
                        press_any_key(25, 26);
                        break;
                    }
                    switch (toupper(question[0])) {
                        case 'Y':
                            printf("\n");
                            if (b.money_get() < 9000) {
                                textcolor(RED, BLACK);
                                delaycout("Result : Can't buy (Not enough money)\n\n", 25);
                                textcolor(WHITE, BLACK);
                                press_any_key(25, 20);
                                supply_management(current);
                            }
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-9000);
                            m.restock_cup();
                            buy_yes(25, 20, "CUP");
                            break;
                        case 'N':
                            buy_no(25, 20);
                            break;
                        default:
                            buy_error(25, 20);
                    }
                    press_any_key(25, 26);
                    break;
            }
            supply_management(current);
            break;
        case 2:
            system("cls");
            supply_management(current);
            break;
    }
}
void boss_management(int current) {
    char k1, k2;
    while (1) {
        show_boss(current, -1);
        k1 = getch();
        if (check_for_cls(k1)) break;
        k2 = getch();
        current = select_switch(current, k2, 4);
    }
    if (current == 4) menu(4);
    int current_next = 1;
    char k3, k4;
    while (1) {
        show_boss(current, current_next);
        k3 = getch();
        if (check_for_cls(k3)) break;
        k4 = getch();
        current_next = select_switch(current_next, k4, 2);
    }
    show_boss(current, current_next);
    switch (current_next) {
        case 1:
            textcolor(CYAN, BLACK);
            delaycout("Result : ", 25);
            textcolor(WHITE, BLACK);
            switch (current) {
                case 1:
                    if (b.money_get() >= 5000) {
                        if (ppe.avaliable_get()) {
                            textcolor(RED, BLACK);
                            delaycout("Can't buy PPE (You already have)\n", 50);
                            textcolor(WHITE, BLACK);
                        } else {
                            textcolor(GREEN, BLACK);
                            delaycout("Complete buy PPE, we are safe today\n", 50);
                            textcolor(WHITE, BLACK);
                            printf("\n");
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-5000);
                            ppe.avaliable_set(true);
                        }
                    } else {
                        textcolor(RED, BLACK);
                        delaycout("Can't buy PPE (You don't have enough money)\n", 50);
                        textcolor(WHITE, BLACK);
                    }
                    break;
                case 2:
                    if (b.money_get() >= 20000) {
                        if (cure.avaliable_get()) {
                            delaycout("Can't cure yourself (You already cure yourself today)\n", 50);
                        } else {
                            delaycout("Complete cure yourself, your HP is full restore\n", 50);
                            printf("\n");
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-20000);
                            b.hp_set(100);
                            if (b.covid_get()) b.hp_damage_set(10);
                            cure.avaliable_set(true);
                        }
                    } else {
                        delaycout("Can't cure yourself (You don't have enough money)\n", 50);
                    }
                    break;
                case 3:
                    if (b.money_get() >= 20000) {
                        if (entertain.avaliable_get()) {
                            delaycout("Can't entertain yourself (You already entertain yourself today)\n", 50);
                        } else {
                            delaycout("Complete entertain yourself, your MP is full restore\n", 50);
                            printf("\n");
                            textcolor(CYAN, BLACK);
                            delaycout("Summary : \n\n", 25);
                            textcolor(WHITE, BLACK);
                            delaycout(">> Boss\n", 20);
                            space(5);
                            b.money_add(-20000);
                            b.mp_set(100);
                            entertain.avaliable_set(true);
                        }
                    } else {
                        delaycout("Can't entertain yourself (You don't have enough money)\n", 50);
                    }
                    break;
            }
            press_any_key(90, 60);
            boss_management(current);
            break;
        case 2:
            system("cls");
            boss_management(current);
            break;
    }
}
void show_boss(int current, int current_next) {
    cout << "=> Boss management\n\n";
    cout << ">> Boss data";
    if (b.covid_get()) {
        BossuiC();
    } else {
        if (b.hp_get() < 50)
            BossuiN();
        else if (b.mp_get() < 50)
            BossuiN();
        else
            BossuiH();
    }
    b.total_income_set(l.income_get_all());
    int set = l.cost_get_all();
    if (medic.status_get()) set += medic.cost_get();
    if (entertainer.status_get()) set += entertainer.cost_get();
    b.total_expenses_set(set);
    b.display();
    cout << "\n>> What you want to do?\n\n";
    select(current, 1, 5);
    cout << "1. Buy the PPE(Personal Protective Equipment)\n";
    space(10);
    cout << "Effect: Reduce the chance of being Covid by 80% (1 day only)\n";
    space(10);
    cout << "Cost  : 5000 B\n";
    confirm_menu(current, current_next, 1);
    select(current, 2, 5);
    cout << "2. Cure yourself\n";
    space(10);
    cout << "Effect: - Recover HP to 100%\n";
    space(10);
    cout << "        - Reduce blood loss rate from Covid-19 by 50% (1 day only)\n";
    space(10);
    cout << "Cost  : 20000 B\n";
    confirm_menu(current, current_next, 2);
    select(current, 3, 5);
    cout << "3. Entertain yourself\n";
    space(10);
    cout << "Effect: - Recover MP to 100%\n";
    space(10);
    cout << "Cost  : 20000 B\n";
    confirm_menu(current, current_next, 3);
    cout << "\n\n";
    select(current, 4, 3);
    cout << "<< Back\n\n";
}
void confirm_menu(int current, int current_next, int number) {
    if (current == number) {

        space(11);
        textcolor(BLUE, BLACK);
        cout << ">> Confirm ?\n";
        textcolor(WHITE, BLACK);
        select(current_next, 1, 13);
        textcolor(DARKGREEN, BLACK);
        cout << "Yes\n";
        textcolor(WHITE, BLACK);
        select(current_next, 2, 13);
        textcolor(RED, BLACK);
        cout << "<< No\n";
        textcolor(WHITE, BLACK);
    }
}
///////////
void information_screen() {
    cout << "=> Information screen\n\n";
    cout << ">> Boss\n\n";
    if (b.covid_get()) {
        BossuiC();
    } else {
        if (b.hp_get() < 50)
            BossuiN();
        else if (b.mp_get() < 50)
            BossuiN();
        else
            BossuiH();
    }
    b.display();
    cout << "\t\t\t\t\t\t-----------------------------------------------------------------\n\n";
    textcolor(RED, BLACK);
    cout << ">> Material\n\n";
    textcolor(WHITE, BLACK);
    cout << "Soda : " << m.show_soda() << '\n';
    cout << "Syrup: " << m.show_syrup() << '\n';
    cout << "Ice  : " << m.show_ice() << '\n';
    cout << "Cup  : " << m.show_cup() << "\n\n";

    //boss pixel
    cout << "-----------------------------------------------------------------\n\n";
    textcolor(GREEN, BLACK);
    cout << ">> Hired Workman list\n\n";
    textcolor(WHITE, BLACK);
    l.print_list();
    for (int i = l.size_get() + 1; i <= MAX_WORKMAN; ++i)
        printf("%5d. - Empty -\n\n", i);
    cout << "-----------------------------------------------------------------\n\n";
    textcolor(VIOLET, BLACK);
    cout << ">> Special workman status\n\n";
    textcolor(WHITE, BLACK);
    cout << "  1. ";
    medic.display(5);
    cout << '\n';
    cout << "  2. ";
    entertainer.display(5);
    cout << '\n';
    cout << "-----------------------------------------------------------------\n\n";
    printf("\t\t\t\t\t");
    textcolor(VIOLET, BLACK);
    delaycout("Press any key to continue...", 50);
    textcolor(WHITE, BLACK);
    ShowConsoleCursor(1);
    getch();
    ShowConsoleCursor(0);
    system("cls");
    menu(5);
}
///////////////
void skip_the_day() {
    printf("=> Skip the day\n\n");
    //check for skip the day
    bool ch = true;
    int cost_use = 0;
    cost_use += l.cost_get_all();
    if (medic.status_get()) cost_use += medic.cost_get();
    if (entertainer.status_get()) cost_use += entertainer.cost_get(); {
        textcolor(CYAN, BLACK);
        printf("Summary : \n\n");
        textcolor(WHITE, BLACK);
    }
    if (b.money_get() < cost_use) {
        textcolor(RED, BLACK);
        printf("Not enough money to hire, please fire some workman or special workman\n");
        textcolor(WHITE, BLACK);
        ch = false;
    }
    int soda_use = l.soda_get_all();
    int syrup_use = l.syrup_get_all();
    int ice_use = l.ice_get_all();
    int cup_use = l.cup_get_all();
    textcolor(RED, BLACK);
    if (m.show_soda() < soda_use) {
        printf("Not enough soda (need %d, have %d)\n", soda_use, m.show_soda());
        ch = false;
    }
    if (m.show_syrup() < syrup_use) {
        printf("Not enough syrup (need %d, have %d)\n", syrup_use, m.show_syrup());
        ch = false;
    }
    if (m.show_ice() < ice_use) {
        printf("Not enough ice (need %d, have %d)\n", ice_use, m.show_ice());
        ch = false;
    }
    if (m.show_cup() < cup_use) {
        printf("Not enough cup (need %d, have %d)\n", cup_use, m.show_cup());
        ch = false;
    }
    textcolor(WHITE, BLACK);
    if (!ch) {
        textcolor(RED, BLACK);
        printf("Can't skip the day\n");
        textcolor(WHITE, BLACK);
    } // <- check
    else {
        printf("----- Day %d -----\n\n", b.day_get());
        b.day_plus(); // day +1
        /// item
        if (ppe.avaliable_get() || cure.avaliable_get()) {
            textcolor(RED, BLACK);
            printf(">> Item use\n\n");
            textcolor(WHITE, BLACK);
            textcolor(GREEN, BLACK);
            printf("Buff: \n");
            textcolor(WHITE, BLACK);
            textcolor(DARKYELLOW, BLACK);
            if (ppe.avaliable_get()) printf(" - Reduce the chance of being Covid by 80%%\n");
            if (cure.avaliable_get()) printf(" - Reduce blood loss rate from Covid-19 by 50%%\n\n");
            textcolor(WHITE, BLACK);
        }
        /// end item

        /// workman
        if (!l.is_empty()) { // if workman size > 0
            textcolor(RED, BLACK);
            printf(">> Workman\n\n");
            textcolor(WHITE, BLACK);
            b.money_add(-l.cost_get_all()); // - money from workman cost
            b.money_add(l.income_get_all()); // + money from workman
            if (soda_use != 0) { // -soda
                printf("- %2d Soda  --> ", soda_use);
                m.minus_soda(soda_use);
                printf("Soda left: %2d\n", m.show_soda());
            }
            if (syrup_use != 0) { // -syrup
                printf("- %2d Syrup --> ", syrup_use);
                m.minus_syrup(syrup_use);
                printf("Syrup left: %2d\n", m.show_syrup());
            }
            if (ice_use != 0) { // -ice
                printf("- %2d Ice   --> ", ice_use);
                m.minus_ice(ice_use);
                printf("Ice left: %2d\n", m.show_ice());
            }
            if (cup_use != 0) { // -cup
                printf("- %2d Cup   --> ", cup_use);
                m.minus_cup(cup_use);
                printf("Cup left: %2d\n\n", m.show_cup());
            }
            // covid rand
            if (ppe.avaliable_get()) // if have ppe (4) rate *0.8
                l.covid_display_all(0.8);
            else if (medic.status_get()) // if have medic (2) rate *0.5
                l.covid_display_all(medic.rate_get());
            else
                l.covid_display_all(1); // if not have both rate = normal

        }
        /// end workman

        /// special workman
        if (medic.status_get() || entertainer.status_get()) {
            textcolor(RED, BLACK);
            printf(">> Special workman\n\n");
            textcolor(WHITE, BLACK);
            if (medic.status_get()) {
                b.money_add(-medic.cost_get());
                printf("Medic : ");
                medic.display_info();
                printf("\n");
                // reduce in workman & boss already
            }
            if (entertainer.status_get()) {
                b.money_add(-entertainer.cost_get());
                printf("Entertainer : ");
                entertainer.display_info();
                b.mp_add(entertainer.rate_get() * 100);
                printf("\n");
            }
        }
        /// end special workman

        /// boss
        textcolor(RED, BLACK);
        printf(">> Boss \n\n");
        textcolor(WHITE, BLACK);
        if (!b.covid_get()) {
            // cal
            if (ppe.avaliable_get())
                b.covid_cal(b.covid_rate_get() * 0.8);
            else if (medic.status_get())
                b.covid_cal(b.covid_rate_get() * medic.rate_get());
            else
                b.covid_cal(b.covid_rate_get());
            // if being covid
            if (b.covid_get()) {
                if (cure.avaliable_get())
                    b.hp_damage_set(10);
                else
                    b.hp_damage_set(20);
                b.mp_damage_set(20);
            }
            // else
            else {
                b.mp_damage_set(10);
            }
        }
        // boss damage take
        b.hp_add(-b.hp_damage_get());
        b.mp_add(-b.mp_damage_get());
        if (b.hp_get() == 0) {
            Gameover();
            exit(0);
        }
        if (b.mp_get() == 0) {
            Suicide();
            exit(0);
        }
        if (b.day_get() == 31) {
            richs();
            exit(0);
        }
        /// end boss

        /// 1 day remove
        ppe.avaliable_set(false);
        cure.avaliable_set(false);
        entertain.avaliable_set(false);
        printf("\n------------------\n\n");
    }
    getch();
    system("cls");
    menu(6);
}