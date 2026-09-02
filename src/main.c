#include "modding.h"
#include "ultra64.h"
#include "enums.h"
#include "common_structs.h"
#include "recomputils.h"
#include "Player_Progress_Structs.h"

extern PlayerProgress D_global_asm_807FC950;
void setFlag(s16 flagIndex, u8 newValue, u8 flagType);

RECOMP_CALLBACK("*", dk64recomp_every_frame) void OpenIsles(void) {
    for (int i=0x1BB; i<=0x1C3; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
    for (int i=0x1CD; i<=0x1D4; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
    for (int i=0x182; i<=0x185; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
        setFlag(0x6, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x42, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x46, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x75, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x179, TRUE, FLAG_TYPE_PERMANENT);
           for (int i=0; i<=4; i++){
        D_global_asm_807FC950.character_progress[i].weapon = 7;
        D_global_asm_807FC950.character_progress[i].moves = 3;
        D_global_asm_807FC950.character_progress[i].simian_slam = 3;
        D_global_asm_807FC950.character_progress[i].instrument = 15;
        }
        }