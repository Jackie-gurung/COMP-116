#pragma once

#include <iostream>
#include "IQueue.h"

class ArrayQueue : public IQueue {
private:
    int size;
    int *arr, f, r, pos = 0;
    int i;

public:
    explicit ArrayQueue(int size) : size(size) { arr = new int(size); }

    int insert(int a) override;

    int remove() override;

    int front() override;

    int rear() override;
};
