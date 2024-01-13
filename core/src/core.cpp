#include "core.h"
#include "core_details.h"

int Core::method1(int coeff)
{
    const auto detail{CoreDetails()};
    return (m_interface.getValue() * coeff * detail.getArbitraryValue());
}