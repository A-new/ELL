////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     ObjectDescription.cpp (utilities)
//  Authors:  Chuck Jacobs
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ObjectDescription.h"

// utiliites
#include "Exception.h"

// stl
#include <memory>

namespace utilities
{
    //
    // PropertyDescription
    //
    PropertyDescription::PropertyDescription()
    {}

    //
    // ObjectDescription
    //
    bool ObjectDescription::HasProperty(const std::string& name)
    {
        return _properties.find(name) != _properties.end();
    }
}
