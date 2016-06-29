#ifndef ARRAY_H
#define ARRAY_H
#include <assert.h>

template <typename T>
class Array{
    int length;
    T* data;
public:
    Array(){ length = 0; data = 0; }
    Array(int len){
        length = len;
        data = new T[len];
    }
    ~Array(){
        delete []data;
    }
    void Erase(){
        delete []data;
        length = data = 0; 
    }
    T& operator[](int index){
        assert(index >= 0 && index < length);
        return data[index];
    }
    // Hint: implement operator= below
    void operator=(Array<T>& rhs){
        Array aaint();
        Array aadbl();
        
        this.arrint=aaint;
        this.arrdbl=aadbl;
        // Implement this method.
    }
    int getLength() const;
};
template <typename T>
int Array<T>::getLength() const{
    return length;
}

#endif