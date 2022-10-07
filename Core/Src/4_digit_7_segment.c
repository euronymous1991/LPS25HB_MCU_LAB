#include "main.h"
#include "4_digit_7_segment.h"

#define COMMON_ANODE   //COMMON_ANODE
#ifdef COMMON_ANODE 
// Segment numbers stored in the array
uint8_t segmentNumber[10] = {
        ~(Aseg|Bseg|Cseg|Dseg|Eseg|Fseg),  // 0
        ~(Bseg|Cseg),  // 1
        ~(Aseg|Bseg|Gseg|Eseg|Dseg),  // 2
        ~(Aseg|Bseg|Cseg|Dseg|Gseg),  // 3
        ~(Bseg|Cseg|Fseg|Gseg),  // 4
        ~(Aseg|Fseg|Cseg|Dseg|Gseg),  // 5
        ~(Aseg|Eseg|Cseg|Dseg|Gseg|Fseg),  // 6
        ~(Aseg|Bseg|Cseg),  // 7
        ~(Aseg|Bseg|Cseg|Dseg|Eseg|Fseg|Gseg),  // 8
        ~(Aseg|Bseg|Cseg|Dseg|Fseg|Gseg)   // 9  // 9
};
#endif
#ifdef COMMON_CATODE
uint8_t segmentNumber[10] = {
        (Aseg|Bseg|Cseg|Dseg|Eseg|Fseg),  // 0
        (Bseg|Cseg),  // 1
        (Aseg|Bseg|Gseg|Eseg|Dseg),  // 2
        (Aseg|Bseg|Cseg|Dseg|Gseg),  // 3
        (Bseg|Cseg|Fseg|Gseg),  // 4
        (Aseg|Fseg|Cseg|Dseg|Gseg),  // 5
        (Aseg|Eseg|Cseg|Dseg|Gseg|Fseg),  // 6
        (Aseg|Bseg|Cseg),  // 7
        (Aseg|Bseg|Cseg|Dseg|Eseg|Fseg|Gseg),  // 8
        (Aseg|Bseg|Cseg|Dseg|Fseg|Gseg)   // 9
};
#endif