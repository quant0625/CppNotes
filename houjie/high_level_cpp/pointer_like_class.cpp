#include <list>

//include pointer usage 

// 1.smart pointer
template<typename T>
class shared_ptr
{
public:
    T& operator*() const { return *px; } // dereference
    T* operator->() const { return px; } // -> operator can be used in many times

    shared_ptr(T* p): px(p) {}
private:
    T* px;
    long* pn;
};

struct Foo
{
    void method(void){};
};


void sample1()
{

    shared_ptr<Foo> pFoo(new Foo);
    Foo (*poo);
    pFoo->method();
}

// 2.iterator
template<typename T>
struct __list_node
{
    void *prev;
    void *next;
    T data;
};


template<typename T, typename Ref, typename Ptr>
struct __list_iterator
{
    typedef __list_iterator<T, Ref, Ptr> self;
    typedef Ptr pointer;
    typedef Ref reference;

    typedef __list_node<T>* link_type;
    link_type node;

    bool operator==(const self& x) const { return node == x.node;}
    bool operator!=(const self& x) const { return node != x.node;}
    Ref operator*() const { return (*node).data; }
    Ptr operator->() const { return &(operator*()); }
    self& operator++() { node = (link_type)(*node).next; return *this; } 
    self operator++(int) {auto tmp = *this; ++*this; return tmp;}
    self& operator--() { node = (link_type)(*node).prev; return *this;}
    self operator--(int) {auto tmp = *this; --*this; return tmp;}
};


void sample2()
{

    std::list<Foo>::iterator ite;
    *ite;
    ite->method();
}


int main()
{
    sample2();
}