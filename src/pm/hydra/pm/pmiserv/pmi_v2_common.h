/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2008 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef PMI_V2_COMMON_H_INCLUDED
#define PMI_V2_COMMON_H_INCLUDED

#include "hydra_base.h"
#include "hydra_utils.h"

struct HYD_pmcd_pmi_v2_reqs {
    enum type {
        NODE_ATTR_GET,
        KVS_GET
    } type;

    int fd;
    int pid;
    int pgid;
    char *thrid;
    char **args;

    struct HYD_pmcd_pmi_v2_reqs *next;
};

HYD_status HYD_pmcd_pmi_v2_queue_req(int fd, int pid, int pgid, enum type type, char *args[],
                                     struct HYD_pmcd_pmi_v2_reqs **pending_reqs);
void HYD_pmcd_pmi_v2_print_req_list(struct HYD_pmcd_pmi_v2_reqs *pending_reqs);

#endif /* PMI_V2_COMMON_H_INCLUDED */
