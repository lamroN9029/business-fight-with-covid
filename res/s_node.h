#ifndef node_h
#define node_h
#include "s_workman.h"
class node{
private:
    workman data;
    node *next;
public:
    node(workman);
    void insert(node *&);
    node *move_next();
    workman data_get();
    ~node();
};
node::node(workman x){
    data = x;
    next = NULL;
    cout << "adding\n";
}
void node::insert(node *&x){
    this->next = x;;
}
node* node::move_next(){
    return next;
}
workman node::data_get(){
    return data;
}
node::~node(){
}
#endif // node_h
