//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:25:13

#ifndef INCLUDE_SYMBOLS_AIOBJECT
#define INCLUDE_SYMBOLS_AIOBJECT
#endif	//#ifndef INCLUDE_SYMBOLS_AIOBJECT
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *AIOBJECT_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CAIManagerRO;
//Component externs
extern "C" CRegisterComponent CAIManagerRO;
extern "C" CRegisterComponent CAIObjectRO;
extern "C" CRegisterComponent CAIObjectCommandRO;
//Message externs
extern "C" CRegisterMessage Start_CAIManagerRM;
extern "C" CRegisterMessage Stop_CAIManagerRM;
extern "C" CRegisterMessage StartCommandSequence_CAIObjectRM;
extern "C" CRegisterMessage CompleteCurrentCommand_CAIObjectRM;
extern "C" CRegisterMessage ClearCommandSequence_CAIObjectRM;
extern "C" CRegisterMessage GetCommandString_CAIObjectCommandRM;
extern "C" CRegisterMessage CompleteCommand_CAIObjectCommandRM;
extern "C" CRegisterMessage CancelCommand_CAIObjectCommandRM;
extern "C" CRegisterMessage GetSchema_CAIObjectCommandRM;

#endif	//#ifdef _LIB