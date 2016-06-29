#ifndef CITRUS_H
#define CITRUS_H
class CitrusFruit{
protected:
  float ph;
public:
  CitrusFruit(float ph) : ph(ph){}
  const char * getName();
  float getPh();
};
#endif