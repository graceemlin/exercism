#include "queen_attack.h"
#include <stdlib.h>
attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    int dr = abs (queen_1.row - queen_2.row);
    int dc = abs (queen_1.column - queen_2.column);
    if (queen_1.row > 7|| 
        queen_1.column > 7|| 
        queen_2.row > 7|| 
        queen_2.column > 7|| 
        (dr == 0 && dc == 0))
        return INVALID_POSITION;
    else if (dr == 0 || dc == 0 || dr == dc)
        return CAN_ATTACK;
    else
        return CAN_NOT_ATTACK;
}
