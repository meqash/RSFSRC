/* This file is automatically generated. DO NOT EDIT! */

#ifndef _matrix_h
#define _matrix_h


void mul(float *a,float *b,int m,int n,int k,float *c);
/*< multiplication: a->m*n, b->n*k >*/


void add(float *a,float *b,int m,int n,float *c);
/*< add: a->m*n, b->m*n >*/


void sub(float *a,float *b,int m,int n,float *c);
/*< subtract: a->m*n, b->m*n >*/


void dotmul(float *a,float *b,int m,int n,float *c);
/*< dot multiplication: a->m*n, b->m*n >*/


void tran(float *a, int m, int n, float *b);
/*< matrix transpose: a->m*n, b->n*m >*/


void zero(float *a, int m);
/*< zero a specific part of an array, like initialization >*/


void cmatmul(kiss_fft_cpx *a,kiss_fft_cpx *b,int m,int n,int k,kiss_fft_cpx *c);
/*< complex matrix multiplication: a->m*n, b->n*k >*/


void cmattran(kiss_fft_cpx *a, int m, int n, kiss_fft_cpx *b);
/*< complex matrix transpose: a->m*n, b->n*k >*/


void czero(kiss_fft_cpx *a, int m );
/*< zero a specific part of a complex array, like initialization >*/

#endif