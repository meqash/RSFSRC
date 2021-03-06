/* This file is automatically generated. DO NOT EDIT! */

#ifndef _predict2_h
#define _predict2_h


void predict2_init(int m1, int m2           /* data dimensions */, 
		   float eps                /* regularization parameter */,
		   int order                /* accuracy order */,
		   float** pp, float **qq   /* slopes [m1][m2] */);
/*< initialize >*/


void predict2_close(void);
/*< free allocated storage >*/


void predict2_lop(bool adj, bool add, int nx, int ny, float* x, float* y);
/*< linear operator >*/

#endif
