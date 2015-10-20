#pragma once

#define OFX_LAYER_BEGIN_NAMESPACE namespace ofx { namespace Layer {
#define OFX_LAYER_END_NAMESPACE } }

OFX_LAYER_BEGIN_NAMESPACE

template<typename T>
struct Type2Int
{
    static unsigned long value()
    {
        static size_t m = 0;
        return (unsigned long)&m;
    }
};

OFX_LAYER_END_NAMESPACE

namespace ofxLayer = ofx::Layer;

