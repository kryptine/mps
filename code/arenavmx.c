/* impl.c.arenavmx: STUBS FOR ARENAVM
 *
 * $Id$
 * Copyright (c) 2001 Ravenbrook Limited.
 *
 * .purpose: This file is not properly part of the MPS.  It is a
 * convenience file for EP-Core who do _not_ wish to get a link error,
 * when they link to a VM arena function on a platform where it isn't
 * supported (see req.epcore.link.no-error).
 *
 * .stub: This file provides stub functions for the VM arena class
 * functions.  Calling any of them causes a run-time assertion.
 */


#include "mpm.h"
#include "mpsavm.h"

SRCID(arenavmx, "$Id$");


mps_arena_class_t mps_arena_class_vm(void)
{
  NOTREACHED;
  return (mps_arena_class_t)NULL;
}

mps_arena_class_t mps_arena_class_vmnz(void)
{
  NOTREACHED;
  return (mps_arena_class_t)NULL;
}
