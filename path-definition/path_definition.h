//
// Created by Gustavo Batistela on 3/18/21.
//

#ifndef PATH_DEFINITION_H
#define PATH_DEFINITION_H

#include <iostream>

//#define IS_INSTALL

#define INSTALL_DIR "/usr/local/blob"
#define BUILD_DIR "Git/blob/"

#ifdef IS_INSTALL
#define PATH INSTALL_DIR
#else
#define PATH BUILD_DIR
#endif

static std::string_view getPath() {
    return PATH;
}

void print_val();

#endif // PATH_DEFINITION_H
