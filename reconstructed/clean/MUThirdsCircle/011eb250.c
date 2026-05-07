// Function: FUN_011eb250
// Address: 011eb250
// Size: 724 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eb250(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t local_e0;
  uint8_t local_d8;
  int64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  uint64_t local_50;
  uint8_t local_48;
  int64_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  local_38 = param_2;
  local_34 = param_1;
  if (unaff_ESI == 0) {
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar6 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_68 = 1;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_70 = lVar5;
        FUN_011eb620(local_34,local_38,&local_50);
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  else {
    lVar5 = **(int64_t **)(*(int64_t *)(this_ptr + 0x280) + 0x10);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_e0 = 0;
    local_d8 = 0;
    FUN_011eb620(local_34,local_38,&local_e0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) +
             (int64_t)(int)(uVar1 - 1) * 8);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c8 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_d0 = lVar5;
    FUN_011eb620(local_34,local_38,&local_b0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (2 < (int)uVar1) {
      local_40 = (uint64_t)(uVar1 - 1) - 1;
      lVar5 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        lVar2 = *(int64_t *)(lVar4 + 8 + lVar5 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        }
        local_98 = 1;
        lVar3 = *(int64_t *)(lVar4 + lVar5 * 8);
        local_a0 = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b00();
          lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        }
        local_88 = 1;
        lVar4 = *(int64_t *)(lVar4 + 0x10 + lVar5 * 8);
        local_90 = lVar3;
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        local_78 = 1;
        local_80 = lVar4;
        FUN_011eb620(local_34,local_38,&local_80);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (local_40 != lVar5);
    }
  }
  return;
}

