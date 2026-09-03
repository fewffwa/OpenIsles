#include "modding.h"
#include "ultra64.h"
#include "enums.h"
#include "common_structs.h"
#include "recomputils.h"
#include "Player_Progress_Structs.h"

extern PlayerProgress D_global_asm_807FC950;
void setFlag(s16 flagIndex, u8 newValue, u8 flagType);

RECOMP_CALLBACK("*", recomp_on_new_file_start) void OpenIsles(void) {
    for (int i=0x1BB; i<=0x1C3; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
    for (int i=0x1C5; i<=0x1D4; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
    for (int i=0x17E; i<=0x18C; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
    for (int i=0x167; i<=0x17A; i++){
    setFlag(i, TRUE, FLAG_TYPE_PERMANENT);
    }
        setFlag(0x6, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x42, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x46, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x75, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x179, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x2A, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x5D, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x5E, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x186, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x1B, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x5C, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x5F, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x8C, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0xC2, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x115, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x11A, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x12F, TRUE, FLAG_TYPE_PERMANENT);
        setFlag(0x15D, TRUE, FLAG_TYPE_PERMANENT);
           for (int i=0; i<=4; i++){
        D_global_asm_807FC950.character_progress[i].weapon = 7;
        D_global_asm_807FC950.character_progress[i].moves = 3;
        D_global_asm_807FC950.character_progress[i].simian_slam = 3;
        D_global_asm_807FC950.character_progress[i].instrument = 15;
        D_global_asm_807FC950.character_progress[i].instrument_ammo = 10;
        D_global_asm_807FC950.melons = 3;
        D_global_asm_807FC950.health = 12;
        D_global_asm_807FC950.standardAmmo = 50;
        D_global_asm_807FC950.oranges = 20;
        D_global_asm_807FC950.crystals = 3000;
        D_global_asm_807FC950.film = 10;
        }
        }