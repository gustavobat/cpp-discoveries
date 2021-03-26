//
// Created by Gustavo Batistela on 3/26/21.
//

#ifndef CPP_DISCOVERIES_TPZMATERIAL_H
#define CPP_DISCOVERIES_TPZMATERIAL_H

class TPZMaterial {
public:
    virtual void CommonMethod() = 0;
};

// Class with (possibly) multiple inheritance
template <typename... Interfaces>
class TPZMaterialImpl : public TPZMaterial, public Interfaces... {
public:
    TPZMaterialImpl() : Interfaces() ... {};
};

#endif //CPP_DISCOVERIES_TPZMATERIAL_H
