// EMERGENT GAME TECHNOLOGIES PROPRIETARY INFORMATION
//
// This software is supplied under the terms of a license agreement or
// nondisclosure agreement with Emergent Game Technologies and may not
// be copied or disclosed except in accordance with the terms of that
// agreement.
//
//      Copyright (c) 1996-2009 Emergent Game Technologies.
//      All Rights Reserved.
//
// Emergent Game Technologies, Calabasas, CA 91302
// http://www.emergent.net

#pragma once
#ifndef NiMeshPCH_H
#define NiMeshPCH_H

#if defined(NI_USE_PCH)

#include <NiSystemPCH.h>
#include <NiMainPCH.h>

#if !defined(NIDEBUG)
#pragma message("using fat pch's")
// For full builds, it is faster to include all of the current project's headers.

#include "NiMeshLib.h"

#else

// Minimize cost of increment NiMesh recompiles.
#include "NiMatrix3x4.h"
#include "NiTSimpleArray.h"

#endif

#endif //#if defined(NI_USE_PCH)

#endif // #ifndef NiMeshPCH_H
