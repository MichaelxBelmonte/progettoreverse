// Function: FUN_01a759a0
// Address: 01a759a0
// Size: 1227 bytes
// Class: MUChord
// String references:
//   "%I_%I_%I"
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void* FUN_01a759a0(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  int iVar8;
  char cVar9;
  bool bVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint8_t in_register_00001244 [12];
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  uint32_t local_6c;
  int64_t *local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint local_40;
  uint32_t local_3c;
  int local_38;
  int local_34;
  
  local_6c = param_1;
  iVar3 = FUN_00e7d780();
  iVar4 = FUN_00e7d780();
  if ((g_028b2ff8 == (int64_t *)0x0) || (uVar11 = extraout_XMM0_Qa, g_028b3001 == '\0')) {
    FUN_00e8cb50();
    if (g_028b2ff8 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028b2ff8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = g_028b2ff8 != (int64_t *)0x0;
        g_028b2ff8 = plVar5;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (g_028b3000 == '\0') {
        g_028b3000 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
    else {
      g_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
  }
  local_3c = *(void*)(arg1 + 0x1d0);
  local_40 = 3;
  local_48 = &g_0253a1a8;
  local_38 = iVar3;
  local_34 = iVar4;
  uVar11 = FUN_00d8cb40(uVar11,&local_48);
  if ((local_b0 == '\0') && (local_b8 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b00();
  }
  local_78 = local_b8;
  local_a8 = local_b8;
  local_a0 = '\0';
  uVar11 = FUN_000175c0(uVar11,&local_a8);
  plVar5 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      uVar11 = FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    FUN_01a75080(uVar11,(char)local_6c);
    local_50 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00152930();
    (**(code **)(*plVar5 + 0x18))();
    FUN_01cfbc00();
    local_68 = local_48;
    local_60 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_60 = '\x01';
    auVar12._4_12_ = in_register_00001244;
    auVar12._0_4_ = (float)iVar4;
    auVar12 = insertps(ZEXT416((uint)(float)iVar3),auVar12,0x10);
    FUN_01d4eaa0(auVar12._0_8_);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52700();
    uVar11 = FUN_01d52740();
    local_98 = local_50;
    local_90 = '\0';
    (**(code **)(*local_48 + 0x420))(uVar11,&local_98);
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = FUN_01d52770();
    local_80 = '\0';
    local_48 = local_78;
    local_40 = local_40 & 0xffffff00;
    local_88 = plVar5;
    FUN_00ca0840(uVar11,&local_48);
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_6c == '\0') {
      if ((1 < iVar4) && (0 < iVar3)) {
        do {
          iVar8 = 0;
          do {
            FUN_01d53270(0,0,0,iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
          bVar1 = 3 < iVar4;
          iVar4 = iVar4 + -2;
        } while (bVar1);
      }
    }
    else if ((1 < iVar3) && (0 < iVar4)) {
      iVar8 = 1;
      do {
        iVar6 = 0;
        do {
          FUN_01d53270(0,0,0,iVar8);
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
        iVar8 = iVar8 + 2;
      } while (iVar8 < iVar3);
    }
    cVar9 = (char)local_58;
    plVar7 = local_50;
  }
  else {
    cVar9 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

