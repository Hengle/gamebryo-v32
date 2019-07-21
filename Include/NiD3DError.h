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
#ifndef NID3DERROR_H
#define NID3DERROR_H

#include <NiShaderError.h>
#include "NiD3DDefines.h"

typedef NiShaderError NiD3DError;
#define NiDeclareD3DShaderError(name, value) \
    NiDeclareShaderError((name), NISHADERERR_D3DPREFIX, (value))

#endif  //#ifndef NID3DERROR_H
