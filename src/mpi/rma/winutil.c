/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#include "mpiimpl.h"

/* FIXME: Move this into wincreate (having a separate file is unneccessary,
   and it leads to a false "missing coverage" report) */
#ifndef MPIR_WIN_PREALLOC
#define MPIR_WIN_PREALLOC 8
#endif

/* Preallocated window objects */
MPIR_Win MPIR_Win_direct[MPIR_WIN_PREALLOC] = { {0} };
#ifdef HAVE_MEMKIND
MPIR_Object_alloc_t MPIR_Win_mem = { 0, 0, 0, 0, 0, 0,
#ifdef MPICH_HAVE_OBJCOUNT
                        0,0,0,
#endif
                     MPIR_WIN,
				      sizeof(MPIR_Win), MPIR_Win_direct,
                                      MPIR_WIN_PREALLOC};

#else
MPIR_Object_alloc_t MPIR_Win_mem = { 0, 0, 0, 0,
#ifdef MPICH_HAVE_OBJCOUNT
                        0,0,0,
#endif
                      MPIR_WIN,
				      sizeof(MPIR_Win), MPIR_Win_direct,
                                      MPIR_WIN_PREALLOC};
#endif
