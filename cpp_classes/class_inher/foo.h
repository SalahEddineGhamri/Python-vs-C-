#ifndef FOO_H
#define FOO_H

class base{
    int a;
    int b;
public:
    base();
    base(int a, int b);
    int add();
    ~base();
protected:
//
private:
//
};

class base_child:public base{
public:
    base_child(int a, int b):base(a, b){}
};

#endif