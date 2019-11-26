#include <iostream>
template<typename T,size_t size>
void map(T a[],T(*change)(T)){
    for(size_t i=0;i<size;i++){
        a[i]=change(a[i]);
    }
}


