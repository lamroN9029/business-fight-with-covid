#ifndef material_h
#define material_h
#include <iostream>
using namespace std;
class material{
protected:
    int soda;
    int syrup;
    int ice;
    int cup;
public:
    material(int = 0, int = 0, int = 0, int = 0);
    int show_soda();
    int show_syrup();
    int show_ice();
    int show_cup();
    void restock_soda();
    void restock_syrup();
    void restock_ice();
    void restock_cup();
    void minus_soda(int );
    void minus_syrup(int );
    void minus_ice(int );
    void minus_cup(int );
    ~material();
};
material::material(int so, int sy, int ic, int cu){
    soda = so;
    syrup = sy;
    ice = ic;
    cup = cu;
}
int material::show_soda(){
    return soda;
}
int material::show_syrup(){
    return syrup;
}
int material::show_ice(){
    return ice;
}
int material::show_cup(){
    return cup;
}
void material::restock_soda(){
    soda = 100;
}
void material::restock_syrup(){
    syrup = 100;
}
void material::restock_ice(){
    ice = 100;
}
void material::restock_cup(){
    cup = 100;
}
void material::minus_soda(int so){
    soda -= so;
}
void material::minus_syrup(int sy){
    syrup -= sy;
}
void material::minus_ice(int ic){
    ice -= ic;
}
void material::minus_cup(int cu){
    cup -= cu;
}
material::~material(){}
#endif // material_h
