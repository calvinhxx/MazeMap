#include"linux_catch_keyboard_event.h"
//函数set_disp_mode用于控制是否开启输入回显功能
//如果option为0，则关闭回显，为1则打开回显
int set_disp_mode(int fd,int option)
{
   int err;
   struct termios term;
   if(tcgetattr(fd,&term)==-1){
     perror("Cannot get the attribution of the terminal");
     return 1;
   }
   if(option)
        term.c_lflag|=ECHOFLAGS;
   else
        term.c_lflag &=~ECHOFLAGS;
   err=tcsetattr(fd,TCSAFLUSH,&term);
   if(err==-1 && err==EINTR){
        perror("Cannot set the attribution of the terminal");
        return 1;
   }
   return 0;
}

void wait_for_esc()
{
    int fd_kb;
    struct input_event event_kb;
    fd_kb = open("/dev/input/event1", O_RDONLY); //键盘输入
    if(fd_kb <= 0)
    {
            printf("open device error\n");
    }
    else
    {
        // set_disp_mode(STDIN_FILENO,0);
        while(1)
        {
                if(read(fd_kb, &event_kb, sizeof(event_kb)) == sizeof(event_kb))
                {
                    if (event_kb.type == EV_KEY)
                    {
                        //if (event_kb.value == 0 || event_kb.value == 1)//1表示按下，0表示释放，会检测到两次
                        if (event_kb.value == 1)//键按下
                        {
                                if(event_kb.code == KEY_ESC)
                                {
                                    printf("logout\n");
                                    // set_disp_mode(STDIN_FILENO,1);
                                    break;
                                }
                                if(event_kb.code == KEY_A)
                                    MOVELEFT(1);
                                if(event_kb.code == KEY_W)
                                    MOVEUP(1);
                                if(event_kb.code == KEY_S)
                                    MOVEDOWN(1);
                                if(event_kb.code == KEY_D)
                                    MOVERIGHT(1);
                        }
                    }
                }
        }
    }
    close(fd_kb);
}
