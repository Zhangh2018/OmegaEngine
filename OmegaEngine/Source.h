#pragma once

#include <string>
#include "Engine.h"

namespace omega {

class Source
{
	friend Engine;
private:
	// Pipeline 1: opaque meshes
	static const std::string cleanGBufferVert;
	static const std::string cleanGBufferFrag;
	static const std::string OpaqueToGBufferVert;
	static const std::string OpaqueToGBufferFrag;
	static const std::string GBufferToColorBufferVert;
	static const std::string GBufferToColorBufferFrag;
	// Pipeline 2: transparent meshes and final blend
private:
	// SSBO base sizes
	static size_t SizeofGBufferFragment;
	static size_t LLBufferSizeFactor;
	static size_t SizeofLinkedListFragment;
};

}