#pragma once

#include "API/Types.hpp"
#include "Common.hpp"
#include "Services/Hooks/Hooks.hpp"

namespace Tweaks {

class DeadCreatureFiresOnAreaExit
{
public:
    DeadCreatureFiresOnAreaExit(NWNXLib::Services::HooksProxy* hooker);

private:
    static int32_t CNWSArea__RemoveObjectFromArea_hook(CNWSArea*, NWNXLib::API::Types::ObjectID);
    static NWNXLib::Hooking::FunctionHook* pRemoveObjectFromArea_hook;
};

}
