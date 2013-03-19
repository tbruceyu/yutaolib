#ifndef _YUTAO_H
#define _YUTAO_H

#include 	<stdio.h>
#include 	<stdlib.h>
#include 	<string.h>
#include 	<fcntl.h>
#include 	<unistd.h>
#include    <ctype.h>
#include 	<sys/types.h>
#include 	<sys/wait.h>
#include 	<sys/socket.h>
/*
 * now this is socket function's wrap 
 */
int Accept(int , struct sockaddr*, socklen_t *);
void Bind(int , const struct sockaddr *, socklen_t);
void Connect(int , const struct sockaddr*, socklen_t);
void Getsockopt(int fd, int level, int optname, void *optval, socklen_t *optlenptr);
void Listen(int , int );
ssize_t Recv(int fd, void *ptr, size_t nbytes, int flags);
ssize_t Recvfrom(int fd, void *ptr, size_t nbytes, int flags, 
				 struct sockaddr *sa, socklen_t *salenptr);
int Select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout);
void Send(int fd, const void *ptr, size_t nbytes, int flags);
void Sendto(int fd, const void *ptr, size_t nbytes, int flags,
			const struct sockaddr *sa, socklen_t salen);
void Shutdown(int fd, int how);
int Socket(int family, int type, int protocol);

/* functions from apue */
#define	MAXLINE	4096			/* max line length */

void	err_dump(const char *, ...);		/* {App misc_source} */
void	err_msg(const char *, ...);
void	err_quit(const char *, ...);
void	err_exit(int, const char *, ...);
void	err_ret(const char *, ...);
void	err_sys(const char *, ...);

void	log_msg(const char *, ...);			/* {App misc_source} */
void	log_open(const char *, int, int);
void	log_quit(const char *, ...);
void	log_ret(const char *, ...);
void	log_sys(const char *, ...);

#endif
