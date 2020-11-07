#pragma once

template<class Type>
class IQueue {
public:
    virtual Type insert(Type a) = 0;

    virtual Type remove() = 0;

    virtual Type front() = 0;

    virtual Type rear() = 0;
};