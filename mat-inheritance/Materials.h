//
// Created by Gustavo Batistela on 3/26/21.
//

#ifndef CPP_DISCOVERIES_MATERIALS_H
#define CPP_DISCOVERIES_MATERIALS_H

// Example of materials
class SimpleMat : public TPZMaterialImpl<> {
public:
    void CommonMethod() override {
        std::cout << "SimpleMat::CommonMethod() was called!\n";
    }
};

class ComplexMat : public TPZMaterialImpl<MemInterface, ErrorInterface> {
public:
    void CommonMethod() override {
        std::cout << "ComplexMat::CommonMethod() was called!\n";
    }
    void MemMethod() override {
        std::cout << "ComplexMat::MemMethod() was called!\n";
    }
    void ErrorMethod() override {
        std::cout << "ComplexMat::ErrorMethod() was called!\n";
    }
};

#endif //CPP_DISCOVERIES_MATERIALS_H
