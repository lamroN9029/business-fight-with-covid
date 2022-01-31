#ifndef item_h
#define item_h
class item{
private:
    bool avaliable;
public:
    item(bool = false);
    bool avaliable_get();
    void avaliable_set(bool);
    ~item();
};
item::item(bool a){
    avaliable = a;
}
bool item::avaliable_get(){
    return avaliable;
}
void item::avaliable_set(bool x){
    avaliable = x;
}
item::~item(){
}
#endif // item_h
