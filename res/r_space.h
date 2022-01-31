#ifndef space_h
#define space_h
#define MAX_SPACE 21
using namespace std;
string sp[MAX_SPACE];
void setting_space(){
    for(int i = 1; i < MAX_SPACE; ++i)
        sp[i] = sp[i-1] + ' ';
}
void space(int n){
    cout << sp[n];
}
#endif // space_h


