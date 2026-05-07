// Function: FUN_01f35940
// Address: 01f35940
// Size: 2543 bytes
// Class: Unknown
// String references:
//   "Command-%I"

void FUN_01f35940(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  undefined7 uVar9;
  void*puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t lVar11;
  uint64_t uVar12;
  bool bVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  int64_t local_140;
  char local_138;
  int local_ac;
  void*local_88;
  uint32_t local_80;
  int local_7c;
  void*local_78;
  int64_t *local_70;
  uint32_t local_68;
  uint32_t local_64;
  int64_t *local_60;
  uint64_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x498))();
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_01d65330();
  if (cVar2 == '\0') goto LAB_01f3637e;
  FUN_01d65ea0();
  local_60 = local_40;
  if (local_40 == (int64_t *)0x0) {
    local_68 = 1;
    local_60 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_68 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01f35a04;
      FUN_00d50b20();
    }
    local_68 = 0;
  }
LAB_01f35a04:
  iVar3 = FUN_01d5e2e0();
  uVar12 = 0;
  local_48 = (int64_t *)0x0;
  while (local_50 = uVar12, iVar4 = FUN_01d5b230(), iVar3 + 1 < iVar4) {
    uVar5 = FUN_01d5b240(extraout_XMM0_Da,iVar3 + 1);
    plVar10 = local_40;
    uVar9 = (undefined7)((uint64_t)uVar5 >> 8);
    cVar2 = (char)uVar12;
    if (local_40 == local_48) {
      local_50 = uVar12;
      plVar10 = local_48;
      if ((cVar2 == '\0') && (local_40 != (int64_t *)0x0)) {
        local_50 = CONCAT71(uVar9,1);
        if (local_38 != '\0') goto LAB_01f35b64;
        local_50 = CONCAT71(uVar9,1);
        FUN_00d50b00();
        plVar10 = local_48;
      }
joined_r0x01f35b1f:
      local_48 = plVar10;
      plVar10 = local_48;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar10 = local_48;
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto joined_r0x01f35b1f;
      }
      local_50 = CONCAT71(uVar9,1);
      if ((cVar2 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01f35b64:
    local_48 = plVar10;
    cVar2 = FUN_01d65330();
    uVar12 = local_50;
    if (cVar2 != '\0') break;
    FUN_01d65460();
    plVar8 = local_40;
    plVar10 = g_027fffc0;
    if (g_027fffc0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar8 + 0x50))();
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = local_50;
    if (cVar2 == '\0') break;
    FUN_01d5dde0();
    uVar12 = local_50 & 0xffffffff;
  }
  local_50 = uVar12;
  iVar3 = FUN_01d5e2e0();
  FUN_01e58640();
  local_70 = local_40;
  if (local_40 == (int64_t *)0x0) {
    local_64 = 1;
    local_70 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_64 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01f35ce1;
      FUN_00d50b20();
    }
    local_64 = 0;
  }
LAB_01f35ce1:
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  uVar14 = (*g_02572370)();
  local_78 = puVar6;
  if (*(int *)((int64_t)local_70 + 0xc) < 1) {
    local_58 = 0;
    plVar10 = (int64_t *)0x0;
  }
  else {
    lVar11 = 0;
    plVar10 = (int64_t *)0x0;
    local_58 = 0;
    do {
      lVar7 = local_70[2];
      plVar8 = *(int64_t **)(lVar7 + lVar11 * 8);
      if (plVar10 == plVar8) {
        if (((char)local_58 == '\0') && (plVar10 != (int64_t *)0x0)) {
          local_58 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar8 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_58 == '\0') || (plVar10 == (int64_t *)0x0)) {
          local_58 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          plVar10 = plVar8;
        }
        else {
          uVar5 = FUN_00d50b20();
          local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          plVar10 = plVar8;
        }
      }
      uVar14 = FUN_01e5c650();
      if (local_40 == (int64_t *)0x0) {
        bVar13 = false;
      }
      else {
        FUN_01e5c650();
        uVar14 = FUN_01e55ec0();
        bVar13 = local_88 != (void*)0x0;
        if (((char)local_80 != '\0') && (local_88 != (void*)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != 0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if (bVar13) {
        local_38 = '\0';
        local_40 = plVar10;
        uVar14 = FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)((int64_t)local_70 + 0xc));
  }
  lVar11 = g_027feca0;
  if (g_027feca0 != 0) {
    uVar14 = FUN_00d50b00();
  }
  FUN_00d242c0(uVar14,lVar11);
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  pcVar1 = g_026846e8;
  if (0 < *(int *)((int64_t)local_78 + 0xc)) {
    local_ac = 1;
    lVar11 = 0;
    do {
      uVar12 = local_50 & 0xffffffff;
      lVar7 = local_78[2];
      plVar8 = *(int64_t **)(lVar7 + lVar11 * 8);
      if (plVar10 == plVar8) {
        if (((char)local_58 == '\0') && (plVar10 != (int64_t *)0x0)) {
          local_58 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar8 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_58 == '\0') || (plVar10 == (int64_t *)0x0)) {
          local_58 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          plVar10 = plVar8;
        }
        else {
          uVar5 = FUN_00d50b20();
          local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          plVar10 = plVar8;
        }
      }
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar8 = (int64_t)&g_026846d0;
      plVar8[2] = (int64_t)&g_02684a60;
      *(void*)(plVar8 + 3) = 0;
      *(void*)((int64_t)plVar8 + 0x1c) = 0;
      *(void*)((int64_t)plVar8 + 0x24) = 0;
      *(void*)((int64_t)plVar8 + 0x2c) = 0;
      *(void*)((int64_t)plVar8 + 0x34) = 0;
      *(void*)((int64_t)plVar8 + 0x3a) = 0;
      *(void*)((int64_t)plVar8 + 0x42) = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      plVar8[0xc] = 0;
      plVar8[0xd] = 0;
      *(void*)(plVar8 + 0xe) = 0;
      uVar5 = (*pcVar1)();
      uVar9 = (undefined7)((uint64_t)uVar5 >> 8);
      cVar2 = (char)uVar12;
      if (plVar8 == local_48) {
        if (cVar2 == '\0') {
          local_50 = CONCAT71(uVar9,1);
          plVar8 = local_48;
        }
        else {
          FUN_00d50b20();
          local_50 = uVar12;
          plVar8 = local_48;
        }
      }
      else {
        local_50 = CONCAT71(uVar9,1);
        if ((cVar2 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_48 = plVar8;
      FUN_01e59f00();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d64eb0();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = g_027fffc0;
      if (g_027fffc0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_01d65120();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar14 = FUN_01d66da0();
      plVar8 = g_027fffc0;
      if (g_027fffc0 != (int64_t *)0x0) {
        uVar14 = FUN_00d50b00();
      }
      local_40 = plVar8;
      local_38 = '\0';
      uVar14 = FUN_00ca0840(uVar14,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        uVar14 = FUN_00d50b20();
      }
      if (((char)local_80 != '\0') && (local_88 != (void*)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if (local_ac < 9) {
        local_80 = 1;
        local_88 = &g_024cc6f0;
        local_7c = local_ac;
        FUN_00d8cb40(&g_024cc6f0,&local_88);
        plVar8 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar14 = FUN_01d65190();
        if (plVar8 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        local_ac = local_ac + 1;
      }
      FUN_01d5d7f0(uVar14,(uint64_t)(iVar3 + 1) + lVar11);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)((int64_t)local_78 + 0xc));
    local_50 = CONCAT71((int7)(int3)((uint)*(int *)((int64_t)local_78 + 0xc) >> 8),1);
  }
  if (((char)local_58 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)local_64 == '\0' && local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_68 == '\0' && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f3637e:
  FUN_00d50b20();
  return;
}

