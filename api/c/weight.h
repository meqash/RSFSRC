/* This file is automatically generated. DO NOT EDIT! */

#ifndef _sf_weight_h
#define _sf_weight_h


void sf_weight_init(float *w1);
/*< initialize >*/


void sf_weight_lop (bool adj, bool add, int nx, int ny, float* xx, float* yy);
/*< linear operator >*/


void sf_cweight_lop (bool adj, bool add, int nx, int ny, 
		     sf_complex* xx, sf_complex* yy);
/*< linear operator >*/


void sf_weight_apply(int nx, float *xx);
/*< apply weighting in place >*/


void sf_cweight_apply(int nx, sf_complex *xx);
/*< apply weighting in place >*/

#endif
