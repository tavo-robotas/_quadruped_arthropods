#include <Servo.h>   

Servo servo[4][3];
const int servo_pin[4][3] = { 
  {2, 3, 4}, 
  {5, 6, 7}, 
  {8, 9, 10}, 
  {16, 14, 15}
};

void setup()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].attach(servo_pin[i][j]);
      delay(20);
    }
  }
}

void loop(void)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].write(90);
      delay(20);
    }
  }
}
