/*
** Widgets to ease double buffering with lambdas, to create input panel areas,
** to have a common background widget and more
*/
#include "Surge.hpp"
#include "SurgeStyle.hpp"
#include "SurgeWidgets.hpp"
#include "SurgeModuleCommon.hpp"
#include "rack.hpp"
#include <functional>
#include <map>

struct SurgeModuleWidgetCommon : public virtual rack::ModuleWidget, SurgeStyle {
    SurgeModuleWidgetCommon() : rack::ModuleWidget() { }
};

