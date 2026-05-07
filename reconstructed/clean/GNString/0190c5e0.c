// Function: FUN_0190c5e0
// Address: 0190c5e0
// Size: 1408 bytes
// Class: GNString
// String references:
//   "0123456789abcdef"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0190c5e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte local_b8;
  byte local_b4;
  byte local_b0;
  byte local_ac;
  byte local_a9;
  uint8_t local_a8 [64];
  uint64_t local_68;
  uint64_t uStack_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  uint32_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_68 = g_0241ad30;
  uStack_60 = _UNK_0241ad38;
  local_58 = g_0241ad40;
  uStack_54 = _UNK_0241ad44;
  uStack_50 = _UNK_0241ad48;
  uStack_4c = _UNK_0241ad4c;
  local_48 = 0x1f83d9ab9b05688c;
  local_40 = 0x5be0cd19;
  lVar3 = FUN_00d8b910();
  uVar1 = FUN_00e7dde0();
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar4 = 0;
    do {
      local_a8[uVar2] = *(void*)(lVar3 + uVar4);
      uVar2 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar2);
      if (uVar2 == 0x40) {
        FUN_0190c1a0();
        if (0xfffffdff < local_68._4_4_) {
          uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 + 1);
        }
        local_68 = (uint64_t)(local_68._4_4_ + 0x200) << 0x20;
        uVar2 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  FUN_0190c430();
  FUN_00d8d3e0(local_a9 & 0xf,0x40,param_3,param_4,"0123456789abcdef"[local_b8 >> 4],
               "0123456789abcdef"[local_b4 >> 4],"0123456789abcdef"[local_b0 >> 4],
               "0123456789abcdef"[local_ac >> 4]);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

