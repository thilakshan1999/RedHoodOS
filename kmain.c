#include "drivers/frame_buffer.h"
#include "drivers/serial_port.h"

/* The C function */
int sum_of_three(int arg1, int arg2, int arg3)
{
char RH[] = "Red Hood ";

fb_write(RH, 19);
serial_write(0x3F8, RH, 19);

return arg1 + arg2 + arg3;
}

