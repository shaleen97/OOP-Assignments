#include <iostream>
#include "array.hpp"
using namespace std;

int main(){
    Array<int> arrint(20);
    Array<double> arrdbl(20);
    
    for(int i = 0; i < 20; i++){
        arrint[i] = i +100;
        arrdbl[i] = i + 3.142;
    }
    for(int i = 0; i < 20; i++){
        
        cout << "Array<int>: " << i << " - "
        << arrint[i] ;
        cout << "Array<double>: " << i << " - "
        << arrdbl[i] << endl;
    }
    Array<Array<double> > aadbl(10);
    Array<Array<int> > aaint(10);
    
    for(int i = 0; i < 20; i++){
        aaint[0][i] = arrint[i];
        aadbl[0][i] = arrdbl[i];
        
    }
}
