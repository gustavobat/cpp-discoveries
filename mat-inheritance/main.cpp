
#include <iostream>
#include <vector>

#include "TPZMaterial.h"
#include "TPZMatInterfaces.h"
#include "Materials.h"

int main () {

    MemMat mem_mat;
    ErrorMat error_mat;
    ComplexMat complex_mat;

    std::vector<TPZMatBase*> mat_vec;
    mat_vec.emplace_back(&mem_mat);
    mat_vec.emplace_back(&error_mat);
    mat_vec.emplace_back(&complex_mat);

    for (const auto mat : mat_vec) {
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