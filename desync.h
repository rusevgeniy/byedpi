#ifndef DESYNC_H
#define DESYNC_H

#include <stdint.h>
#include <stddef.h>

#ifdef _WIN32
    #include <winsock2.h>
#else
    #include <sys/socket.h>
#endif

ssize_t desync(int sfd, char *buffer, size_t bfsize, ssize_t n, ssize_t offset, int dp_c);

ssize_t desync_udp(int sfd, char *buffer, ssize_t n, const struct sockaddr *dst, int dp_c);

int setttl(int fd, int ttl);

int post_desync(int sfd, int dp_c);

struct proto_info {
    char init, type;
    int host_len, host_pos;
};
#endif
