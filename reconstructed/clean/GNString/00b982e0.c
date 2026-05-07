// Function: FUN_00b982e0
// Address: 00b982e0
// Size: 1755 bytes
// Class: GNString
// String references:
//   "FORM"
//   "AIFF"
//   "AIFC"
//   "SSND"
//   "COMM"
//   "fl32"
//   "32-bit Floating "
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b982e0(double param_1,uint64_t param_2,uint32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint64_t in_RCX;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  char *pcVar10;
  bool bVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  int64_t local_140;
  char local_138;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  uint16_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_d8 = *param_4;
  local_d0 = '\0';
  FUN_00bba180(in_RCX,param_2,param_3,&local_d8);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  pcVar10 = "AIFF";
  switch(*(void*)(this_ptr + 0x34)) {
  case 0x10:
  case 0x40:
    *(void*)(this_ptr + 0x34) = 0;
    break;
  case 0x11:
  case 0x41:
    *(void*)(this_ptr + 0x34) = 1;
    break;
  case 0x12:
  case 0x42:
    *(void*)(this_ptr + 0x34) = 2;
    break;
  case 0x13:
  case 0x44:
    *(void*)(this_ptr + 0x34) = 3;
  case 3:
    pcVar10 = "AIFC";
  }
  local_40 = 0;
  uVar3 = (uint)(int64_t)param_1;
  if (uVar3 < 2) {
    local_48 = 0xff3f;
    iVar4 = 0x80;
    lVar6 = 2;
  }
  else {
    local_48 = 0x40;
    if (uVar3 < 0x40000000) {
      uVar8 = 0;
      if (((int64_t)param_1 & 0x40000000U) == 0) {
        uVar5 = 0x40000000;
        uVar7 = 0;
        do {
          uVar8 = uVar7 + 1;
          if (0x1f < uVar7) break;
          uVar5 = uVar5 >> 1;
          uVar7 = uVar8;
        } while ((uVar5 & uVar3) == 0);
      }
      iVar4 = uVar3 << ((char)uVar8 + 1U & 0x1f);
      local_48 = (uint64_t)
                 CONCAT14((char)((uint)iVar4 >> 8),
                          CONCAT13((char)((uint)iVar4 >> 0x10),
                                   CONCAT12((char)((uint)iVar4 >> 0x18),
                                            CONCAT11('\x1d' - (char)uVar8,0x40))));
      lVar6 = 5;
    }
    else {
      iVar4 = 0x1d;
      lVar6 = 1;
    }
  }
  *(char *)((int64_t)&local_48 + lVar6) = (char)iVar4;
  uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"FORM");
  bVar11 = true;
  if (local_58 == 0) {
    FUN_00ccdf50(uVar12,0x2e);
    bVar11 = true;
    if (local_68 == 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,pcVar10);
      bVar11 = true;
      if (local_78 == 0) {
        uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"COMM");
        bVar11 = true;
        if (local_88 == 0) {
          uVar9 = 0x12;
          if (*(int *)(this_ptr + 0x34) == 3) {
            uVar9 = 0x26;
          }
          uVar12 = FUN_00ccdf50(uVar12,uVar9);
          bVar11 = true;
          if (local_128 == 0) {
            uVar12 = FUN_00ccdf10(uVar12,(int)*(short *)(this_ptr + 0x30));
            bVar11 = true;
            if (local_118 == 0) {
              FUN_00ccdf50(uVar12,0);
              bVar11 = true;
              if (local_108 == 0) {
                sVar2 = FUN_00ae7f20();
                FUN_00ccdf10(extraout_XMM0_Qa,(int)sVar2);
                bVar11 = true;
                if (local_f8 == 0) {
                  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(10,&local_48);
                  bVar11 = local_140 != 0;
                  if ((local_138 != '\0') && (local_140 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_027653a0;
  if (bVar11) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar6;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(this_ptr + 0x34) == 3) {
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"fl32");
    bVar11 = true;
    if (local_58 == 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(0x10,"32-bit Floating ");
      bVar11 = local_68 != 0;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = g_027653a0;
    if (bVar11) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar6;
      local_b0 = '\x01';
      FUN_00cc78b0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"SSND");
  bVar11 = true;
  if (local_58 == 0) {
    uVar12 = FUN_00ccdf50(uVar12,8);
    bVar11 = true;
    if (local_68 == 0) {
      uVar12 = FUN_00ccdf50(uVar12,0);
      bVar11 = true;
      if (local_78 == 0) {
        uVar12 = FUN_00ccdf50(uVar12,0);
        bVar11 = local_88 != 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar12 = FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar6 = g_027653a0;
  if (bVar11) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar6;
    local_a0 = '\x01';
    uVar12 = FUN_00cc78b0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))(uVar12,this_ptr + 0x40);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_027653a0;
  if (local_58 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar6;
    local_90 = '\x01';
    FUN_00cc78b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = *param_4;
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x48) = lVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

