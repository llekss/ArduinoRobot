#ifndef Morse_h
#define Morse_h

class SunFounderLineFollower
{
  public:
    SunFounderLineFollower();
    int readSensor();
  private:
    int _linSensor;
    unsigned char _data[16];
};

#endif
