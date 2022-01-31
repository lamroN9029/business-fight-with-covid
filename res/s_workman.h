#ifndef workman_h
#define workman_h
#include "r_material.h"
#include "r_space.h"
using namespace std;
class workman: public material{
protected:
    string name;
    string rank;
    int cost;
    int income;
    int level;
    int covid_rate;
public:
    workman(string = "Norank", int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, string = "Noname");
    void operator = (workman);
    void operator += (string);
    virtual void display(){
        if(name == "Noname")
            cout << "> Lv." << level << '\n';
        else
            cout << "Name   : " << name << " (Lv." << level << ")\n";
        space(5); cout << "Rank   : " << rank << '\n';
        space(5); printf("Cost   : %4d\n", cost);
        space(5); printf("Income : %4d\n", income);
        space(5); printf(">> Material use\n");
        space(5); printf("Soda: %2d   Syrup: %2d   Ice: %2d   Cup: %2d\n\n", soda, syrup, ice, cup);
    }
    string name_get();
    int cost_get();
    int income_get();
    int covid_rate_get();
    bool covid_cal(int);
    int lv_get();
    ~workman();
};
workman::workman(string ra, int co, int in, int lv, int co_ra, int so, int sy, int ic, int cu, string na):material(so, sy, ic, cu){
    rank = ra;
    cost = co;
    income = in;
    level = lv;
    covid_rate = co_ra;
    name = na;
}
void workman::operator = (workman w){
    //workman
    cost = w.cost;
    income = w.income;
    rank = w.rank;
    name = w.name;
    level = w.level;
    covid_rate = w.covid_rate;
    name = w.name;
    //material
    soda = w.soda;
    syrup = w.syrup;
    ice = w.ice;
    cup = w.cup;
}
void workman::operator += (string n){
    name = n;
}
string workman::name_get(){
    return name;
}
int workman::cost_get(){
    return cost;
}
int workman::income_get(){
    return income;
}
int workman::covid_rate_get(){
    return covid_rate;
}
bool workman::covid_cal(int r){
    srand(time(NULL));
    int x = rand() % 100 +1;
    if(x <= r)
        return true;
    else
        return false;
}
int workman::lv_get(){
	return level;
}
workman::~workman(){
}
#endif // workman_h



