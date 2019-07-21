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
#ifndef EE_EGFLUALIBTYPE_H
#define EE_EGFLUALIBTYPE_H

// so we know the names our dll exports (if we compile for windows)
#if defined(WIN32) || defined(_XENON)
    #ifdef EE_EGFLUA_EXPORT
        //Defined if we are building the library.
        #define EE_EGF_LUA_ENTRY __declspec (dllexport)
    #elif defined(_WINDLL) || defined (USEDLL)
        // if we are including as part of a client (we are a library)
        #define EE_EGF_LUA_ENTRY __declspec (dllimport)
    #else
        // if we are defining for a static build (NOT a .dll)
        #define EE_EGF_LUA_ENTRY
    #endif
#else
    // if we are compiling for a non-windows build
    #define EE_EGF_LUA_ENTRY
#endif

#endif //EE_EGFLUALIBTYPE_H

