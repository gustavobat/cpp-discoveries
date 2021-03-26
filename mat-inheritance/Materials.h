//
// Created by Gustavo Batistela on 3/26/21.
//

#ifndef CPP_DISCOVERIES_MATERIALS_H
#define CPP_DISCOVERIES_MATERIALS_H

class MemMat : public TPZMaterial<MemInterface> {
public:
    void MemMethod() override {
        std::cout << "MemMat::MemMethod() was called!\n";
    }
};

class ErrorMat : public TPZMaterial<ErrorInterface> {
public:
    void ErrorMethod() override {
        std::cout << "ErrorMat::MemMethod() was called!\n";
    }
};

class ComplexMat : public TPZMaterial<MemInterface, ErrorInterface> {
public:
    void MemMethod() override {
        std::cout << "ComplexMat::MemMethod() was called!\n";
    }
    void ErrorMethod() override {
        std::cout << "ComplexMat::MemMethod() was called!\n";
    }
};

#endif //CPP_DISCOVERIES_MATERIALS_H
