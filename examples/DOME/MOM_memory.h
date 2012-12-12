!********+*********+*********+*********+*********+*********+*********+*
!*   This include file determines the compile-time settings for the   *
!* Generalized Ocean Layered Dynamics (MOM) ocean model.             *
!********+*********+*********+*********+*********+*********+*********+*

!  Specify the numerical domain.
#define NIGLOBAL_ 150
#define NJGLOBAL_ 70
                               !    NIGLOBAL_ and NJGLOBAL_ are the number of thickness
                               !  grid points in the zonal and meridional
                               !  directions of the physical domain.
#define NK_ 25
                               !    The number of layers.

#define STATIC_MEMORY
                               !    If STATIC_MEMORY is defined, the principle
                               !  variables will have sizes that are statically
                               !  determined at compile time.  Otherwise the
                               !  sizes are not determined until run time. The
                               !  STATIC option is substantially faster, but
                               !  does not allow the PE count to be changed at
                               !  run time.
#undef  SYMMETRIC_MEMORY
                               !    If defined, the velocity point data domain
                               !  includes every face of the thickness points.
                               !  In other words, some arrays are larger than
                               !  others, depending on where they are on the 
                               !  staggered grid.

#define NIPROC_ 10
                               !    NIPROC_ is the number of processors in the
                               !  x-direction.
#define NJPROC_ 2
                               !    NJPROC_ is the number of processors in the
                               !  y-direction.

#define MAX_FIELDS_ 50
                               !    The maximum permitted number (each) of
                               !  restart variables, time derivatives, etc.
                               !  This is mostly used for the size of pointer
                               !  arrays, so it should be set generously.

#define NIHALO_ 4
#define NJHALO_ 4
                               !   NIHALO_ and NJHALO_ are the sizes of the
                               ! memory halos on each side.

#include <MOM_memory_macros.h>
