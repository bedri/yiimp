#ifndef X11K_H
#define X11K_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void x11kvshash(void *output, const void *input, int thr_id, unsigned int level);

#ifdef __cplusplus
}
#endif

#endif
