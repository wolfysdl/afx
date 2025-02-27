#ifndef AFX_GRANNY2_MODEL_H
#define AFX_GRANNY2_MODEL_H

#include "../afxSimulation.h"

#define GRANNY2 XFX

#if 0
#ifndef __e2granny2__
#   define GRANNY2 _AFXIMPORT
#else
#   define GRANNY2 _AFXEXPORT
#endif
#endif

GRANNY2 afxResult AfxLoadAssetsFromGranny2File(afxSimulation sim, afxUri const *uri, afxArray *assets);

#endif//AFX_GRANNY2_MODEL_H