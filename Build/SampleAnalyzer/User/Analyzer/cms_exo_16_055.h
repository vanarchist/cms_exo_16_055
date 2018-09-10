#ifndef analysis_cms_exo_16_055_h
#define analysis_cms_exo_16_055_h

#include "SampleAnalyzer/Process/Analyzer/AnalyzerBase.h"

namespace MA5
{
class cms_exo_16_055 : public AnalyzerBase
{
  INIT_ANALYSIS(cms_exo_16_055,"cms_exo_16_055")

 public:
  virtual bool Initialize(const MA5::Configuration& cfg, const std::map<std::string,std::string>& parameters);
  virtual void Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files);
  virtual bool Execute(SampleFormat& sample, const EventFormat& event);

 private:
};
}

#endif