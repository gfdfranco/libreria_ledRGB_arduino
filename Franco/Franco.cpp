#include "Arduino.h"
#include "Franco.h"

int red, blue, green;
Franco::Franco(int red, int blue,  int green)
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  _red=red;
  _blue=blue;
  _green=green;
}

void Franco::start_red()
{
  analogWrite(_red, 255);
  analogWrite(_green, 0);
  analogWrite(_blue, 0);
}

void Franco::start_green()
{
  digitalWrite(_red, LOW);
  digitalWrite(_green, HIGH);
  digitalWrite(_blue, LOW);
}

void Franco::start_blue()
{
  digitalWrite(_red, LOW);
  digitalWrite(_green, LOW);
  digitalWrite(_blue, HIGH);
}