#ifndef USYSCALL_H
#define USYSCALL_H

#include "../kernel/types.h"

struct usyscall {
    int pid;
    int ppid;
    uint64 sz;
};

#endif

