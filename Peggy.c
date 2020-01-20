#include <kipr/botball.h>
void forward()
{
	motor(1,100);
	motor(0,100);
}

void right()
{
    motor(1,100);
    motor(0,0);
    msleep(870);
}
// I'm commenting!
void left()
{
    motor(0,100);
    motor(1,0);
    msleep(1200);
}

void backward()
{
    motor(0,-100);
    motor(1,-100);
}

int main()
{
    forward();
    msleep(3000);
    left();
    forward();
    msleep(4500);
    enable_servos();
    set_servo_position(3,600);

    return 0;
}
