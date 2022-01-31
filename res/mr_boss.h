#ifndef boss_h
#define boss_h
using namespace std;
class boss{
private:
    int hp;
    int mp;
    int total_income;
    int total_expenses;
    int money;
    int day;
    int covid_rate;
    int hp_damage;
    int mp_damage;
    bool covid;
public:
    boss(int = 100, int = 100, int = 0, int = 0, int = 40000, int = 1, int = 10, int = 0, int = 10, bool = false);
    void display();
    void display_block(int);
    void hp_set(int);
    void hp_add(int);
    int hp_get();
    void mp_set(int);
    void mp_add(int);
    int mp_get();
    void hp_damage_set(int);
    void mp_damage_set(int);
    bool covid_get();
    void covid_cal(int);
    int money_get();
    void money_add(int);
    int hp_damage_get();
    int mp_damage_get();
    void day_plus();
    int day_get();
    int covid_rate_get();
	void total_income_set(int);
	void total_expenses_set(int);
    ~boss();
};
boss::boss(int h, int m, int ti, int te, int mo, int d, int cr, int hd, int md, bool c){
    hp = h;
    mp = m;
    total_income = ti;
    total_expenses = te;
    money = mo;
    day = d;
    covid_rate = cr;
    hp_damage = hd;
    mp_damage = md;
    covid = c;
}
void boss::display(){
    cout << "\t\t\t\t\t\tHp : "; textcolor(RED,RED); display_block(hp); textcolor(WHITE,BLACK); cout << " (" << hp << ")\t\t";
    cout << "Mp : "; textcolor(BLUE,BLUE); display_block(mp); textcolor(WHITE,BLACK); cout << " (" << mp << ")\n";
    cout << "\t\t\t\t\t\tTotal income   : " << total_income << "\t\t";
    cout << "Total expenses : " << total_expenses << '\n';
    cout << "\t\t\t\t\t\tMoney : " << money << '\n';
    cout << "\t\t\t\t\t\tDay   : " << day << '\n';
    /*cout << "///////////////\n";
    cout << "covid rate = " << covid_rate << '\n';
    cout << "hp damage  = " << hp_damage << '\n';
    cout << "mp damage  = " << mp_damage << '\n';
    cout << "covid      = " << covid << '\n';*/
}
void boss::display_block(int x){
    char block = 219;
    for(int i = 0; i < x; i+=10)
        cout << block;
}
bool boss::covid_get(){
    return covid;
}
void boss::hp_set(int h){
    hp = h;
}
void boss::mp_set(int m){
    mp = m;
}
void boss::hp_add(int h){
    hp += h;
    if(hp > 100) hp = 100;
    if(hp < 0) hp = 0;
    printf("Hp ");
    if(h > 0) printf("+");
    printf(" %3d --> hp left: %3d\n", h, hp);
}
void boss::mp_add(int m){
    mp += m;
    if(mp > 100) mp = 100;
    if(mp < 0) mp = 0;
    printf("Mp ");
    if(m > 0) printf("+");
    printf(" %3d --> mp left: %3d\n", m, mp);
}
void boss::hp_damage_set(int hd){
    hp_damage = hd;
}
void boss::mp_damage_set(int md){
    mp_damage = md;
}
int boss::hp_damage_get(){
    return hp_damage;
}
int boss::mp_damage_get(){
    return mp_damage;
}
void boss::covid_cal(int r){
    srand(time(NULL));
    int x = rand() % 100 +1;
    if(x <= r){
        printf("Boss is being covid\n");
        printf("Debuff : \n");
        printf(" - hp will decrease 20%% per day\n");
        printf(" - mp will decrease up to 20%% per day (from normal 10%%)\n");
        covid = true;
    }
}
int boss::money_get(){
    return money;
}
void boss::money_add(int x){
    money += x;
    if(money < 0) money = 0;
    printf("Money ");
    if(x >= 0) printf("+");
    printf("%4d --> Money left: %4d\n\n", x, money);
}
void boss::day_plus(){
    ++day;
}
int boss::day_get(){
    return day;
}
int boss::hp_get(){
    return hp;
}
int boss::mp_get(){
    return mp;
}
int boss::covid_rate_get(){
    return covid_rate;
}
void boss::total_income_set(int ti){
	total_income = ti;
}
void boss::total_expenses_set(int te){
	total_expenses = te;
}
boss::~boss(){
}
#endif // boss_h
