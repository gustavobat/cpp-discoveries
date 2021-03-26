//
// Created by Gustavo Batistela on 3/26/21.
//

#ifndef CPP_DISCOVERIES_TPZMATINTERFACES_H
#define CPP_DISCOVERIES_TPZMATINTERFACES_H

// Two interfaces
class MemInterface {
public:
    MemInterface() {}
    virtual void MemMethod() = 0;
};

class ErrorInterface {
public:
    ErrorInterface() {}
    virtual void ErrorMethod() = 0;
};

#endif //CPP_DISCOVERIES_TPZMATINTERFACES_H
