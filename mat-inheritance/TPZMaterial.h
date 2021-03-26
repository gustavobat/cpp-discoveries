//
// Created by Gustavo Batistela on 3/26/21.
//

#ifndef CPP_DISCOVERIES_TPZMATERIAL_H
#define CPP_DISCOVERIES_TPZMATERIAL_H


class TPZMatBase {
public:
    virtual void CommonMatMethod() = 0;
};

// Class with (possibly) multiple inheritance
template <typename... Interfaces>
class TPZMaterial : public TPZMatBase, public Interfaces... {
public:
    TPZMaterial() : Interfaces() ... {};
    void CommonMatMethod() override {
        std::cout << "TPZMaterial::CommonMatMethod()\n";
    }
};

#endif //CPP_DISCOVERIES_TPZMATERIAL_H
