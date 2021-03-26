//
// Created by Gustavo Batistela on 3/26/21.
//

#ifndef CPP_DISCOVERIES_TPZMATINTERFACES_H
#define CPP_DISCOVERIES_TPZMATINTERFACES_H

//T wo interfaces
class MemInterface {
public:
    MemInterface() {}
    virtual void MemMethod() {
        std::cout << "MemMethod() was called!\n";
    }
};

class ErrorInterface {
public:
    ErrorInterface() {}
    virtual void ErrorMethod() {
        std::cout << "ErrorMethod() was called!\n";
    }
};


#endif //CPP_DISCOVERIES_TPZMATINTERFACES_H
