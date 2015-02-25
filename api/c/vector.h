/* This file is automatically generated. DO NOT EDIT! */

#ifndef _sf_vector_h
#define _sf_vector_h


#include "_defs.h"


#include "file.h"


#include "point.h"


typedef struct{
    double dx,dz;
}vc2d;


typedef struct{
    double dx,dy,dz;
}vc3d;


/*------------------------------------------------------------*/
double det3(double *m);
/*< compute 3D determinant >*/


/*------------------------------------------------------------*/
double det2(double *m);
/*< compute 2D determinant >*/


/*------------------------------------------------------------*/
double jac3d(pt3d *C, pt3d *T, pt3d *P, pt3d *Q);
/*< 3D jacobian >*/


/*------------------------------------------------------------*/
vc3d vec3d(pt3d* O, pt3d* A);
/*< build 3D vector >*/


/*------------------------------------------------------------*/
vc3d axa3d( int n);
/*< build 3D unit vector >*/


/*------------------------------------------------------------*/
double scp3d(vc3d* U, vc3d* V);
/*< scalar product of 3D vectors >*/


/*------------------------------------------------------------*/
vc3d vcp3d(vc3d* U, vc3d* V);
/*< vector product of 3D vectors >*/


/*------------------------------------------------------------*/
double len3d(vc3d* V);
/*< 3D vector length >*/


/*------------------------------------------------------------*/
vc3d nor3d(vc3d* V);
/*< normalize 3D vector >*/


/*------------------------------------------------------------*/
double ang3d(vc3d* U, vc3d* V);
/*< angle between 3D vectors >*/


/*------------------------------------------------------------*/
pt3d tip3d(pt3d* O, vc3d* V);
/*< tip of a 3D vector >*/


/*------------------------------------------------------------*/
vc3d scl3d(vc3d* V, float s);
/*< scale a 3D vector >*/


/*------------------------------------------------------------*/
vc3d rot3d(vc3d *nn,
	   vc3d *aa,
	   float phi);
/*< rotate a 3D vector >*/


/*------------------------------------------------------------*/
void vc3dread1(sf_file F,
               vc3d   *v,
               size_t  n1);
/*< input vector3d 1-D vector >*/

#endif
