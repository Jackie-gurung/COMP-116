#pragma once
#include <iostream>
#include "IQueue.h"

template <class Type>
class ArrayQueue : public IQueue<Type> {

private:
    int size, pos = 0;
    Type *arr, f, r;
    int i;

public:
    explicit ArrayQueue(int size) : size(size) { arr = new Type(size); }

    Type insert(Type a) override;

    Type remove() override;

    Type front() override;

    Type rear() override;
};