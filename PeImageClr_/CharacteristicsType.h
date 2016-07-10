#pragma once
#include <Windows.h>
#include <WinBase.h>
#include "EnumHexConverter.h"
#include "UITypeEditor.h"
namespace PeImageClr
{
	using namespace System::ComponentModel;

	[FlagsAttribute]
	[EditorAttribute(FlagsEditor<CharacteristicsType>::typeid, UITypeEditor::typeid)]
	public enum class  CharacteristicsType :WORD
	{
		RELOCS_STRIPPED = IMAGE_FILE_RELOCS_STRIPPED,
		EXECUTABLE_IMAGE = IMAGE_FILE_EXECUTABLE_IMAGE,
		LINE_NUMS_STRIPPED = IMAGE_FILE_LINE_NUMS_STRIPPED,
		LOCAL_SYMS_STRIPPED = IMAGE_FILE_LOCAL_SYMS_STRIPPED,
		AGGRESIVE_WS_TRIM = IMAGE_FILE_AGGRESIVE_WS_TRIM,
		LARGE_ADDRESS_AWARE = IMAGE_FILE_LARGE_ADDRESS_AWARE,
		BYTES_REVERSED_LO = IMAGE_FILE_BYTES_REVERSED_LO,
		MACHINE_32BIT = IMAGE_FILE_32BIT_MACHINE,
		DEBUG_STRIPPED = IMAGE_FILE_DEBUG_STRIPPED,
		REMOVABLE_RUN_FROM_SWAP = IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP,
		NET_RUN_FROM_SWAP = IMAGE_FILE_NET_RUN_FROM_SWAP,
		SYSTEM = IMAGE_FILE_SYSTEM,
		DLL = IMAGE_FILE_DLL,
		UP_SYSTEM_ONLY = IMAGE_FILE_UP_SYSTEM_ONLY,
		BYTES_REVERSED_HI = IMAGE_FILE_BYTES_REVERSED_HI
	};
}  // namespace PeImageClr