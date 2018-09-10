#include "SampleAnalyzer/User/Analyzer/cms_exo_16_055.h"
#include "SampleAnalyzer/Process/Analyzer/AnalyzerManager.h"
#include "SampleAnalyzer/Commons/Service/LogStream.h"

// -----------------------------------------------------------------------------
// BuildTable
// -----------------------------------------------------------------------------
void BuildUserTable(MA5::AnalyzerManager& manager)
{
  using namespace MA5;
  manager.Add("cms_exo_16_055",new cms_exo_16_055);
}
