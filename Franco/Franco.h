#ifndef Franco_h
#define Franco_h
#include "Arduino.h"

class Franco
{
  public:
    Franco(int red,int blue,int green);
    void start_red();
    void start_blue();
    void start_green();
  private:
    int _red;
    int _blue;
    int _green;
};

#endif