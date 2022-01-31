#ifndef ll_h
#define ll_h
#include "s_workman.h"
struct node{
    workman data;
    node *next;
};
class ll{
private:
    node *head;
    int size;
public:
    ll();
    int size_get();
    bool is_empty();
    void add_node(workman &);
    void print_list();
    void name_display(int);
    void delete_node(int);
    int cost_get_all();
    int income_get_all();
    int soda_get_all();
    int syrup_get_all();
    int ice_get_all();
    int cup_get_all();
    void covid_display_all(int);
    void bubble_sort();
    ~ll();
};
ll::ll(){
    head = NULL;
    size = 0;
}
int ll::size_get(){
    return size;
}
bool ll::is_empty(){
    if(size == 0)
        return true;
    else
        return false;
}
void ll::add_node(workman &a){
    node *new_node = new node;
    new_node->data = a;
    new_node->next = NULL;
    if(size == 0){
        head = new_node;
    }
    else{
        node *t = head;
        for(int i = 1; i <= size-1; ++i)
            t = t->next;
        t->next = new_node;
	}
    ++size;
}
void ll::print_list(){
    node *t = head;
    for(int i = 1; i <= size; ++i){
        printf("%3d. ", i);
        t->data.display();
        t = t->next;
    }
}
void ll::name_display(int n){
    node *t = head;
    for(int i = 1; i < n; ++i)
        t = t->next;
    cout << t->data.name_get() << '\n';
}
void ll::delete_node(int x){
    node *t = head;
    if(x == 1){
        head = head->next;
    }
    else{
        for(int i = 1; i <= x-2; ++i)
            t = t->next;
        t->next = t->next->next;
    }
    --size;
}
int ll::cost_get_all(){
    if(is_empty()) return 0;
    node *t = head;
    int cost = 0;
    for(int i = 1; i <= size; ++i){
        cost += t->data.cost_get();
        t = t->next;
    }
    return cost;
}
int ll::income_get_all(){
    if(is_empty()) return 0;
    node *t = head;
    int income = 0;
    for(int i = 1; i <= size; ++i){
        income += t->data.income_get();
        t = t->next;
    }
    return income;
}
int ll::soda_get_all(){
    if(is_empty()) return 0;
    node *t = head;
    int soda = 0;
    for(int i = 1; i <= size; ++i){
        soda += t->data.show_soda();
        t = t->next;
    }
    return soda;
}
int ll::syrup_get_all(){
    if(is_empty()) return 0;
    node *t = head;
    int syrup = 0;
    for(int i = 1; i <= size; ++i){
        syrup += t->data.show_syrup();
        t = t->next;
    }
    return syrup;
}
int ll::ice_get_all(){
    if(is_empty()) return 0;
    node *t = head;
    int ice = 0;
    for(int i = 1; i <= size; ++i){
        ice += t->data.show_ice();
        t = t->next;
    }
    return ice;
}
int ll::cup_get_all(){
    if(is_empty()) return 0;
    node *t = head;
    int cup = 0;
    for(int i = 1; i <= size; ++i){
        cup += t->data.show_cup();
        t = t->next;
    }
    return cup;
}
void ll::covid_display_all(int mul){
    node *t = head;
    for(int i = 1; i <= size; ++i){
        if(t->data.covid_cal(t->data.covid_rate_get()*mul)){
            cout << t->data.name_get();
            printf("was fired because being the covid-19\n");
            delete_node(i);
        }
        t = t->next;
    }
}
void ll::bubble_sort(){
    int swapped, i;
    node *t;
    node *lptr = NULL;
    if (head == NULL)
        return;
    do
    {
        swapped = 0;
        t = head;
        while (t->next != lptr)
        {
            if (t->data.lv_get() > t->next->data.lv_get())
            {
                node *a = t;
				node *b = t->next;
				workman temp = a->data;
				//swap
				a->data = b->data;
				b->data = temp;
                swapped = 1;
            }
            t = t->next;
        }
        lptr = t;
    }
    while (swapped);
}
ll::~ll(){
    node *t = head;
    for(int i = 1; i <= size; ++i){
        t = head;
        head = head->next;
        delete t;
	}
}
#endif // ll_h
