/* This file is automatically generated. DO NOT EDIT! */

#ifndef _update_h
#define _update_h


void update_init(int m1, int m2 /* dimensions */,
		 float *t       /* [m1,m2] traveltime */);
/*< initialize >*/


void update_close(void);
/*< free allocated storage >*/


unsigned char get_update(int i, bool *up1, bool *up2, int *j);
/*< next update step >*/

#endif
