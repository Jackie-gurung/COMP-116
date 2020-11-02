//
// Created by aadarsha on 10/31/20.
//

#pragma once

class IQueue {
public:
    virtual int insert(int a) = 0;

    virtual int remove() = 0;

    virtual int front() = 0;

    virtual int rear() = 0;
};