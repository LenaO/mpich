/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2012 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */
#ifndef NETMOD_PTL_PROC_H_INCLUDED
#define NETMOD_PTL_PROC_H_INCLUDED

#include "ptl_impl.h"

static inline int MPIDI_NM_rank_is_local(int rank, MPIR_Comm * comm)
{
    int ret;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPIDI_NETMOD_RANK_IS_LOCAL);
    MPIR_FUNC_VERBOSE_ENTER(MPIDI_NETMOD_RANK_IS_LOCAL);

    MPIR_Assert(0);
    ret = 0;

    MPIR_FUNC_VERBOSE_EXIT(MPIDI_NETMOD_RANK_IS_LOCAL);
    return ret;
}

#endif /* NETMOD_PTL_PROC_H_INCLUDED */
