#pragma once

#include "DirectoryBase.h"
namespace PeDecoder
{
	// UNDONE: 
	class ArchitectureDirectory :
		public DirectoryBase<DataDirectoryEntryType::Architecture>
	{
	public:
		ArchitectureDirectory(PeImage& pe, TDataPtr ptr, TSizePtr sizePtr);
		~ArchitectureDirectory();
	};
}  // namespace PeDecoder

