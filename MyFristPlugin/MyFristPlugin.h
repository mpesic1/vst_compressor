#ifndef __MYFRISTPLUGIN__
#define __MYFRISTPLUGIN__

#include "IPlug_include_in_plug_hdr.h"

class MyFristPlugin : public IPlug
{
public:
  MyFristPlugin(IPlugInstanceInfo instanceInfo);
  ~MyFristPlugin();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mGain;
};

#endif
