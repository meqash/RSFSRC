/* This file is automatically generated. DO NOT EDIT! */

#ifndef _sf_triangle1_h
#define _sf_triangle1_h


#include "_bool.h"


void sf_triangle1_init (int nbox /* triangle size */, 
						int ndat /* data size */);
/*< initialize >*/


void sf_triangle1_lop (bool adj, bool add, int nx, int ny, float* x, float* y);
/*< linear operator >*/


void sf_triangle1_close(void);
/*< free allocated storage >*/

#endif