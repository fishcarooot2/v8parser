#ifndef SYSTEM_TSTREAMREADER_HPP
#define SYSTEM_TSTREAMREADAER_HPP

#include "TStream.hpp"
#include "System.SysUtils.hpp"
#include "String.hpp"

namespace System {

namespace Classes {

class TStreamReader
{
public:
	TStreamReader(TStream *stream, bool DetectBOM);

	int Read();

	String ReadLine();

private:
	TStream *stream;
};

} // Classes

} // System

#endif
