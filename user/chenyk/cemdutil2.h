/* This file is automatically generated. DO NOT EDIT! */

#ifndef _cemdutil2_h
#define _cemdutil2_h


#define DEFAULT_THRESHOLD 0.05
#define DEFAULT_TOLERANCE 0.05
#define DEFAULT_NBPHASES 4
#define MAX_ITERATIONS 1000
#define LIM_GMP 30000
#define NBSYM 2
#define SQUARE(A) (A*A)
#define CUBE(A) (A*A*A)
#define GREATER(A,B) ((A) >= (B) ? (A) : (B))
#define SMALLER(A,B) ((A) <  (B) ? (A) : (B))
#ifdef C99_OK
#include <complex.h>
#define COMPLEX_T double complex
#define CREAL creal
#define CIMAG cimag
#define CABS cabs
#else
#define COMPLEX_T complex_data_t
#define CREAL emd_creal
#define CIMAG emd_cimag
#define CABS emd_cabs
#endif


typedef struct {
  double r;
  double i;
} complex_data_t;


/* structure used to store the local extrema of the signal */
typedef struct {
  int n_min;
  int n_max;
  double *x_min;
  double *y_min;
  double *x_max;
  double *y_max;
} extrema_t;


typedef struct {
    double threshold;
    double tolerance;
} stop_t;


/* structure used to store an IMF and the associated number of iterations */
typedef struct i {
  int nb_iterations;
  COMPLEX_T *pointer;
  struct i *next;
} imf_t;


/* structure of the IMF list */
typedef struct {
  imf_t *first;
  imf_t *last;
  int m; 
  int n; 
} imf_list_t;


/* structure used to store envelopes and temporary data */
typedef struct {
  int n;
  double *e_min;
  double *e_max;
  double *tmp1;
  double *tmp2;
} envelope_t;


extrema_t init_extr(int n);
/*<initialization for extremas extraction>*/


void extr(double x[],double y[],int n,extrema_t *ex);
/*< extract extremas >*/


void boundary_conditions(double x[],double y[],int n,extrema_t *ex);
/*< setting boundary conditions >*/


void free_extr(extrema_t ex);
/*<free allocated extrema struct>*/


void interpolation(double y[],double xs[],double ys[],int n,double x[], int nx,double *ys2, double *temp);
/*< interpolates the sequence (xs,ys) at instants in x using cubic spline >*/


imf_list_t init_imf_list(int n);
/*< define imf list struct >*/


void add_imf(imf_list_t *list,COMPLEX_T *p,int nb_it);
/*< adding imf to imf list >*/


void free_imf_list(imf_list_t list);
/*<free allocated imf list struct >*/


envelope_t init_local_mean(int n);
/*< initialization for local mean of bivariate emd >*/


void free_local_mean(envelope_t env);
/*<free allocated local mean struct >*/


int mean_and_amplitude(double *x,COMPLEX_T *z,COMPLEX_T *m,double *a,int n,int nbphases,extrema_t *ex,envelope_t *env);
/*< compute the mean of the envelopes and the amplitude of the current imf >*/


/*********************************************************/
/* COMPUTES THE MEAN OF THE ENVELOPES OF THE CURRENT IMF */
/*********************************************************/
int mean(double *x,COMPLEX_T *z,COMPLEX_T *m,int n,int nbphases,extrema_t *ex,envelope_t *env);
/*< compute the mean of the envelopes of the current imf >*/


double CREAL(complex_data_t c);
/*< creal >*/


double CIMAG(complex_data_t c);
/*< cimag >*/


double CABS(complex_data_t c);
/*< cabs >*/


double crealeiphi(double phi,complex_data_t c);
/*< crealeiphi >*/


int stop_sifting(COMPLEX_T *m, double *a,extrema_t *ex,stop_t *sp,int n, int counter, int max_iterations);
/*< decide if stop sifting >*/

#endif
