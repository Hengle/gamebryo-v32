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
#ifndef EE_CUSTOMSCREENFILLINGRENDERVIEW_H
#define EE_CUSTOMSCREENFILLINGRENDERVIEW_H

#include "egmToolServicesLibType.h"
#include <egmToolServices/egmToolServicesClassIDs.h>

#include "NiRenderView.h"
#include "NiDynamicEffect.h"
#include "NiCriticalSection.h"
#include "NiScreenFillingRenderView.h"
#include "NiMeshScreenElements.h"

namespace egmToolServices
{

/**
    Provides an NiMesh implementation of NiScreenFillingRenderView.
*/
class EE_EGMTOOLSERVICES_ENTRY CustomScreenFillingRenderView :
    public NiScreenFillingRenderView
{
    /// @cond EMERGENT_INTERNAL

    NiDeclareRTTI;

    /// @endcond

public:

    /// Default Constructor
    CustomScreenFillingRenderView();

    /// Virtual Destructor
    virtual ~CustomScreenFillingRenderView();

    /// Attaches a property to the screen-filling quad.
    virtual void AttachProperty(NiProperty* pkProperty);

    /// Detaches a property from the screen-filling quad.
    virtual void DetachProperty(NiProperty* pkProperty);

    /// Detaches all properties from the screen-filling quad.
    virtual void DetachAllProperties();

    /// Gets a property from the screen-filling quad.
    virtual NiProperty* GetProperty(int iType) const;

    /// Removes a property to the screen-filling quad.
    virtual NiPropertyPtr RemoveProperty(int iType);

    /// Gets the underlying screen-filling quad geometry object so that
    /// materials and shaders can be attached.
    virtual NiRenderObject& GetScreenFillingQuad() const;

    /// @cond EMERGENT_INTERNAL

    /// Register creation function with factory parent class
    static void RegisterFactoryMethod();

    /// Creation method used by factory
    static NiScreenFillingRenderView* CreateImpl();

    /// @endcond

protected:
    /// Adds the screen-filling quad to the PV geometry array.
    virtual void CalculatePVGeometry();

    /// The screen-filling quad.
    NiMeshScreenElementsPtr m_spScreenFillingQuad;

    /// Boolean variables indicating whether or not UpdateProperties or
    /// UpdateEffects must be called before the next render.
    bool m_bPropertiesChanged;
};

NiSmartPointer(CustomScreenFillingRenderView);

}; // namespace

#include "CustomScreenFillingRenderView.inl"

#endif  // EE_CUSTOMSCREENFILLINGRENDERVIEW_H
