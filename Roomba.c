#include <kipr/botball.h>
void backward()
{
        create_drive_direct(-100,-100);
}
void left()
{
        create_drive_direct(0,-100);
        msleep(3900);
}
void forward()
{
// 1000 msleep = 4.5 inches
    // 4888.8 (with a bar) = 21 inches
    // 13333.3 (with a bar) = 60 inches
        create_drive_direct(100,100);
}
void right()
{
        create_drive_direct(100,0);
        msleep(3400);
}
void rightshort()
{
    create_drive_direct(100,0);
        msleep(500);
}
void leftshort()
{
    create_drive_direct(0,-100);
        msleep(500);
        }
void FollowTheLine()
{
    set_create_distance(0);
    while (get_create_distance() < 1600){
        forward();
        msleep(2500);
        if(get_create_rfcliff > 1600){
            rightshort();
        }
        if(get_create_lfcliff > 1600){
            leftshort();
         
            }
    }
}
?
int main()
{
     create_connect();
    backward();
    msleep(2000);
    left();
    backward();
    msleep(2250);
    left();
    backward();
    msleep(5000);
    rightshort();
    backward();
    msleep(4950);
    printf("This will work because Ari is good at coding!\n");
    create_disconnect();
    return 0;
}