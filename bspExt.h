#ifndef TILL_BSP_EXTENSION_H
#define TILL_BSP_EXTENSION_H

#include <rtems.h>

/* initialize the bsp extensions */
rtems_status_code
bspExtInit(void);

/* probe a memory address:
 *
 * addr : address to probe
 * write: writes *pval to address if !=0, reads from address to *pval,
 *        otherwise.
 * size : size of the probe; must be 1 2 or 4
 * pval : pointer to value that is written or read
 *
 * RETURNS : RTEMS_SUCCESSFUL		on probe success
 *           RTEMS_INVALID_ADDRESS 	probed address not mapped/accessible
 *           other			error
 */

rtems_status_code
bspExtMemProbe(void *addr, int write, int size, void *pval);

#endif
