#ifndef special_workman_h
#define special_workman_h
#include "s_workman.h"
using namespace std;
class special_workman:public workman{
private:
    double rate;
    string info;
    bool status;
public:
    special_workman(double = 0, string = "NOINFO", bool = false, int = 0, int = 0, string = "NORANK");
    void display(int = 0);
    bool status_get();
    void status_set(bool);
    void display_info();
    double rate_get();
    ~special_workman();
};
special_workman::special_workman(double x, string fo, bool st, int co, int in, string ra):workman(ra, co, in){
    rate = x;
    info = fo;
    status = st;
}
void special_workman::display(int x){
    space(x-5); cout << rank << '\n';
    space(x); cout << "Status  : ";
    if(status == true) cout << "Hired";
    else cout << "Fired";
    cout << '\n';
    space(x); cout << "Ability : " << info << '\n';
    space(x); printf("Cost    : %4d B/day\n", cost);
    space(x); printf("Income  : %4d B/day\n", income);
}
bool special_workman::status_get(){
    return status;
}
void special_workman::status_set(bool x){
    status = x;
}
double special_workman::rate_get(){
	return rate;
}
void special_workman::display_info(){
	cout << info << '\n';
}
special_workman::~special_workman(){
}
#endif // special_workman_h
