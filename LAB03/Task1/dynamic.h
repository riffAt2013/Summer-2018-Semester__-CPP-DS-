#ifndef DYNAMIC_H_INCLUDED
#define DYNAMIC_H_INCLUDED

template <class ARB>
class dynamic {
private:

    ARB *data;
    int size;

public:
    dynamic(int);
    ~dynamic();
    ARB getValue (int);
    void setValue (int, ARB);

};

#endif // DYNAMIC_H_INCLUDED
