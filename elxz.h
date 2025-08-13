//include guard for elxz.h
#ifndef elxz_h
#define elxz_h

#include "quantum.h"

//layout definition for 6 key + 1 encoder key macropad
#define LAYOUT(    \
    k00, k01, k02, \
    k10, k11, k12, \
    K20            \
) { \
    { k00, k01, k02,} \
    { k10, k11, k12,} \
    { K20 }           \ 
}

#endif // end of include guard for elxz.h