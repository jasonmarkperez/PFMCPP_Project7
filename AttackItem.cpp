#include "AttackItem.h"
#include "Utility.h"

AttackItem::AttackItem(): Item("Attack Item", 10)
{

}

void AttackItem::use(Character * character)
{
    useAttackItem(character, this);
}
