/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/jsearls/code/personal/treadmill_arcade/src/treadmill_arcade.ino"
void setup();
void loop();
void power();
void faster();
void slower();
void wildCard();
#line 1 "/Users/jsearls/code/personal/treadmill_arcade/src/treadmill_arcade.ino"
int POWER_BUTTON = D0;
int INCREASE_SPEED = D1;
int DECREASE_SPEED = D2;
int WILD_CARD = D3;

void setup()
{
  pinMode(POWER_BUTTON, INPUT_PULLUP);
  pinMode(INCREASE_SPEED, INPUT_PULLUP);
  pinMode(DECREASE_SPEED, INPUT_PULLUP);
  pinMode(WILD_CARD, INPUT_PULLUP);
}

void loop()
{
  int powerButtonState = digitalRead(POWER_BUTTON);
  int fasterButtonState = digitalRead(INCREASE_SPEED);
  int slowerButtonState = digitalRead(DECREASE_SPEED);
  int wildCardButtonState = digitalRead(WILD_CARD);
  // LOW means button is being pushed
  if (powerButtonState == LOW)
  {
    power();
  }
  else if (fasterButtonState == LOW)
  {
    faster();
  }
  else if (slowerButtonState == LOW)
  {
    slower();
  }
  else if (wildCardButtonState == LOW)
  {
    wildCard();
  }
  delay(100);
}

//local functions
void power()
{
  Particle.publish("POWER", "TURN ON TREADMILL");
  delay(100);
}
void faster()
{
  Particle.publish("FASTER", "INCREASE TREADMILL SPEED");
  delay(100);
}
void slower()
{
  Particle.publish("SLOWER", "DECREASE TREADMILL SPEED");
  delay(100);
}
void wildCard()
{
  Particle.publish("WILDCARD", "WHATEVER YOU WANT");
  delay(100);
}
