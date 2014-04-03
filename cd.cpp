#include<windows.h>
main()
{
mciSendString("Set cdaudio door open wait", NULL, 0 ,1);
//albo
mciSendString("Set cdaudio door open wait", NULL, 0 ,0);
//"Set cdaudio door closed wait"
mciSendString("Set cdaudio door open wait", NULL, 0 ,0); 
}