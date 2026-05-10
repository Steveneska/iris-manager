#ifndef OPF_DEFINES_H
#define OPF_DEFINES_H

#define OFTP_VERSION "2.3"

#define OFTP_LOGIN_USERNAME "root"

#define OFTP_DATA_BUFSIZE   32768
#define OFTP_LISTEN_BACKLOG 32

#define OFTP_ERRMSG_THREAD  "An error occured when starting the main server thread.\n\nOpen PS3™ FTP cannot continue operation. Please restart Open PS3™ FTP.\n\nIf this problem still occurs, please reboot your system or update Open PS3™ FTP."
#define OFTP_ERRMSG_NETWORK "No active network connection detected. Open PS3™ FTP will close now."

// Macros
#define NIPQUAD(addr) ((unsigned char *)&addr)[0], ((unsigned char *)&addr)[1], ((unsigned char *)&addr)[2], ((unsigned char *)&addr)[3]
#define FD(socket) ((socket)&~SOCKET_FD_MASK)

// PSL1GHT v2 net/socket.h doesn't seem to have this, but sprx/libnet/socket.c does
int closesocket(int socket);

extern char passwd[64];
extern int appstate;

#endif
