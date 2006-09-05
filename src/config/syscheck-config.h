/* @(#) $Id$ */

/* Copyright (C) 2003-2006 Daniel B. Cid <dcid@ossec.net>
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */
       

#ifndef __SYSCHECKC_H
#define __SYSCHECKC_H


#define MAX_DIR_SIZE    64
#define MAX_DIR_ENTRY   128


#define SYSCHECK_DB     "/queue/syscheck/syschecklocal.db"
#define SYS_WIN_DB      "syscheck/syschecklocal.db"
#define SYSCHECK_WAIT   3600
#define SYSCHECK        "syscheck"


/* Checking options */
#define CHECK_MD5SUM        0000001
#define CHECK_PERM          0000002
#define CHECK_SIZE          0000004
#define CHECK_OWNER         0000010
#define CHECK_GROUP         0000020
#define CHECK_SHA1SUM       0000040


#include <stdio.h>
typedef struct _config
{
    int tsleep;
    int sleep_after;
    int rootcheck;
    
    int time;
    int queue;
    
    int opts[MAX_DIR_ENTRY +1];

    char *workdir;
    char *remote_db;
    char *db;
    
	char **ignore;
	char *dir[MAX_DIR_ENTRY +1];

    FILE *fp;

}config;

#endif

/* EOF */
