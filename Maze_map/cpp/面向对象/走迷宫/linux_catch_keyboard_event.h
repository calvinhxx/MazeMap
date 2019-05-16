#ifndef  _LINUX_CATCH_KEYBOARD_EVENT_H_
#define  _LINUX_CATCH_KEYBOARD_EVENT_H_

#include <stdio.h>
#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include "ctrlcur.h"
#define ECHOFLAGS (ECHO | ECHOE | ECHOK | ECHONL)

int set_disp_mode(int fd,int option);
void wait_for_esc();

#endif
