#ifndef __XRD_LCMAPS_CONFIG_HH
#define __XRD_LCMAPS_CONFIG_HH

#include <mutex>

int XrdSecgsiAuthzConfig(const char *cfg);
extern std::mutex lcmaps_mutex;

#endif
