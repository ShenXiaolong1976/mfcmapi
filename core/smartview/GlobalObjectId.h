#pragma once
#include <core/smartview/SmartViewParser.h>
#include <core/smartview/block/blockBytes.h>
#include <core/smartview/block/blockT.h>

namespace smartview
{
	class GlobalObjectId : public SmartViewParser
	{
	private:
		void Parse() override;
		void ParseBlocks() override;

		std::shared_ptr<blockBytes> m_Id = emptyBB(); // 16 bytes
		blockT<WORD> m_Year;
		blockT<BYTE> m_Month;
		blockT<BYTE> m_Day;
		blockT<FILETIME> m_CreationTime;
		blockT<LARGE_INTEGER> m_X;
		blockT<DWORD> m_dwSize;
		std::shared_ptr<blockBytes> m_lpData = emptyBB();
	};
} // namespace smartview