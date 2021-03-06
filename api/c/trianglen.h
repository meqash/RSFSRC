/* This file is automatically generated. DO NOT EDIT! */

#ifndef _sf_trianglen_h
#define _sf_trianglen_h


#include "_bool.h"


void sf_trianglen_init (int ndim  /* number of dimensions */, 
			int *nbox /* triangle radius [ndim] */, 
			int *ndat /* data dimensions [ndim] */);
/*< initialize >*/


void sf_trianglen_lop (bool adj, bool add, int nx, int ny, float* x, float* y);
/*< linear operator >*/


void sf_trianglen_close(void);
/*< free allocated storage >*/

#endif
