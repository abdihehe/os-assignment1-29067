#ifndef K_USYSCALL_H
#define K_USYSCALL_H

struct usyscall {
    int pid;
    int ppid;
    uint64 sz;
};

#endif

