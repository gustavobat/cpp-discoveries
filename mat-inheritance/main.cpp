
#include <iostream>
#include <vector>

#include "TPZMaterial.h"
#include "TPZMatInterfaces.h"
#include "Materials.h"

int main () {

    SimpleMat simple_mat;
    ComplexMat complex_mat;

    std::vector<TPZMaterial*> mat_vec;
    mat_vec.emplace_back(&simple_mat);
    mat_vec.emplace_back(&complex_mat);

    for (const auto mat : mat_vec) {

        mat->CommonMethod();

        ErrorInterface *errorInterface = dynamic_cast<ErrorInterface*>(mat);
        if (errorInterface) {
            errorInterface->ErrorMethod();
        }
        MemInterface *memInterface = dynamic_cast<MemInterface*>(mat);
        if (memInterface) {
            memInterface->MemMethod();
        }
    }
}