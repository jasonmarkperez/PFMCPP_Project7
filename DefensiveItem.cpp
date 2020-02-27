#include "DefensiveItem.h"
#include "Utility.h"
#include <cassert>

void DefensiveItem::use(Character* character)
{
    useDefensiveItem(character, *this);
}
