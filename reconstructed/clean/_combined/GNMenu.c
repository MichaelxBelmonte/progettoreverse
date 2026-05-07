// ===================================================================
// GNMenu — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (3):
//                   _mainWindow
//                   _keyWindow
//                   _infoController


// ============================================================
// 01d61e70
// ============================================================
// Function: FUN_01d61e70
// Address: 01d61e70
// Size: 1500 bytes
// Class: GNMenu
// String references:
//   "GNMenu"
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


int64_t * FUN_01d61e70(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char *pcVar9;
  int64_t lVar10;
  int64_t *this_ptr;
  bool bVar11;
  int64_t **pplVar12;
  uint32_t uVar13;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_48 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_02572358;
  uVar13 = (*g_02572370)();
  plVar6 = local_48;
  local_a0 = '\0';
  local_a8 = plVar7;
  uVar13 = FUN_01e2af10(uVar13,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (*param_2 == 0) {
    bVar11 = false;
LAB_01d62060:
    FUN_00ca1380();
    plVar8 = local_70;
    pcVar9 = local_38;
    if (local_68[0] != '\0') {
      pcVar9 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_01d620ca;
      }
      local_40 = (int64_t *)0x0;
      bVar2 = true;
    }
    else if (local_70 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      bVar2 = true;
    }
    else {
LAB_01d620ca:
      local_68[0] = '\0';
      local_70 = (int64_t *)0x0;
      local_40 = plVar8;
      local_60 = plVar8;
      local_58 = -1;
      iStack_54 = 0;
      iStack_50 = 0;
      while( true ) {
        lVar10 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)((int64_t)local_60 + 0xc) <= local_58) break;
        plVar6 = *(int64_t **)(local_60[2] + 8 + lVar10 * 8);
        local_70 = plVar6;
        if ((g_026ee720 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_027f8498 = FUN_00d4fe50();
          g_027f8480 = "GNMenu";
          g_027f8488 = 0x50;
          g_027f8490 = FUN_001d7d70;
          g_027f84a0 = 0;
          ram_00000000027f84a8 = 0;
          g_027f84b0 = 0;
          ram_00000000027f84b8 = 0;
          g_027f84c0 = 0;
          ram_00000000027f84c8 = 0;
          g_027f84d0 = 0;
          ram_00000000027f84d8 = 0;
          g_027f84e0 = 0;
          ram_00000000027f84e8 = 0;
          g_027f84f0 = 0;
          ram_00000000027f84f8 = 0;
          g_027f8500 = 0;
          ram_00000000027f8508 = 0;
          g_027f8510 = 0;
          ram_00000000027f8518 = 0;
          g_027f8520 = 0;
          ram_00000000027f8528 = 0;
          g_027f8530 = 0;
          ram_00000000027f8538 = 0;
          g_027f8540 = 0;
          ___cxa_guard_release();
        }
        pplVar12 = &g_02802688;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar12 = &local_70;
          if (cVar4 == '\0') {
            pplVar12 = &g_02802688;
          }
        }
        plVar6 = local_48;
        plVar8 = *pplVar12;
        if (plVar8 != (int64_t *)0x0) {
          if (*(char *)(pplVar12 + 1) == '\0') {
            FUN_00d50b00();
            bVar11 = true;
          }
          else {
            *(void*)(pplVar12 + 1) = 0;
            bVar11 = true;
            plVar6 = local_48;
          }
          goto LAB_01d6228a;
        }
        if (iStack_54 != 0) {
          if (iStack_54 < 1) {
            iStack_54 = -iStack_54;
          }
          else {
            local_58 = local_58 - iStack_54;
            FUN_00d23690();
            iStack_50 = iStack_50 + iStack_54;
            iStack_54 = 0;
          }
        }
      }
      plVar8 = (int64_t *)0x0;
      plVar6 = local_48;
LAB_01d6228a:
      FUN_00083b20();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) goto LAB_01d622aa;
      bVar1 = true;
      local_40 = (int64_t *)0x0;
      bVar2 = true;
      if (plVar7 == (int64_t *)0x0) goto LAB_01d6234a;
    }
LAB_01d622e1:
    bVar1 = bVar2;
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    iStack_54 = 0;
    iStack_50 = 0;
    local_60 = plVar7;
    for (lVar10 = 0; local_58 = (int)lVar10, local_58 < *(int *)((int64_t)plVar7 + 0xc);
        lVar10 = lVar10 + 1) {
      local_70 = *(int64_t **)(plVar7[2] + lVar10 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    bVar2 = false;
    *(void*)(this_ptr + 1) = 0;
    bVar3 = false;
    if (bVar11) goto LAB_01d62367;
  }
  else {
    local_90 = '\0';
    pplVar12 = &local_70;
    local_98 = *param_2;
    FUN_000175c0(uVar13,&local_98);
    plVar8 = local_70;
    if ((g_026ee720 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027f8498 = FUN_00d4fe50();
      g_027f8480 = "GNMenu";
      g_027f8488 = 0x50;
      g_027f8490 = FUN_001d7d70;
      g_027f84a0 = 0;
      ram_00000000027f84a8 = 0;
      g_027f84b0 = 0;
      ram_00000000027f84b8 = 0;
      g_027f84c0 = 0;
      ram_00000000027f84c8 = 0;
      g_027f84d0 = 0;
      ram_00000000027f84d8 = 0;
      g_027f84e0 = 0;
      ram_00000000027f84e8 = 0;
      g_027f84f0 = 0;
      ram_00000000027f84f8 = 0;
      g_027f8500 = 0;
      ram_00000000027f8508 = 0;
      g_027f8510 = 0;
      ram_00000000027f8518 = 0;
      g_027f8520 = 0;
      ram_00000000027f8528 = 0;
      g_027f8530 = 0;
      ram_00000000027f8538 = 0;
      g_027f8540 = 0;
      ___cxa_guard_release();
    }
    plVar6 = local_48;
    if (plVar8 == (int64_t *)0x0) {
      pplVar12 = &g_02802688;
      plVar8 = g_02802688;
      if (g_02802688 == (int64_t *)0x0) goto LAB_01d62011;
LAB_01d61fe8:
      if (*(char *)(pplVar12 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar12 + 1) = 0;
      }
      bVar11 = true;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') {
        pplVar12 = &g_02802688;
      }
      plVar8 = *pplVar12;
      if (*pplVar12 != (int64_t *)0x0) goto LAB_01d61fe8;
LAB_01d62011:
      bVar11 = false;
      plVar8 = (int64_t *)0x0;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) goto LAB_01d62060;
LAB_01d622aa:
    local_80 = '\0';
    local_88 = plVar8;
    local_40 = plVar8;
    FUN_00d23d90();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (plVar7 != (int64_t *)0x0) goto LAB_01d622e1;
LAB_01d6234a:
    bVar2 = true;
    *(void*)(this_ptr + 1) = 0;
    bVar3 = true;
    if (bVar11) goto LAB_01d62367;
  }
  bVar2 = bVar3;
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_01d62367:
  *this_ptr = (int64_t)local_40;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01d03810
// ============================================================
// Function: FUN_01d03810
// Address: 01d03810
// Size: 1601 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_01d03810(uint64_t param_1,float param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  undefined7 uVar9;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  int64_t *plVar11;
  bool bVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t uVar13;
  float local_d8;
  int64_t local_68;
  char local_60;
  int64_t *local_50;
  char local_48 [8];
  uint64_t local_40;
  char local_38 [8];
  
  plVar11 = this_ptr + 0x39;
  lVar5 = *arg1;
  lVar1 = this_ptr[0x39];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *plVar11 = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x620))();
  if ((int64_t *)this_ptr[0x3a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x918))();
  }
  plVar7 = (int64_t *)*plVar11;
  if ((plVar7 == (int64_t *)0x0) || ((char)plVar7[4] != '\0')) {
    while( true ) {
      (**(code **)(*this_ptr + 0x4a0))();
      iVar3 = *(int *)((int64_t)local_50 + 0xc);
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 == 0) break;
      (**(code **)(*this_ptr + 0x4a0))();
      FUN_00d23340();
      local_38[0] = local_48[0];
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_001b9d20();
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') {
      plVar11 = &g_02802688;
    }
    if (*plVar11 != 0) {
      FUN_00d50b00();
      local_d8 = (float)FUN_01e3f820();
      iVar3 = FUN_01f7c6f0();
      local_40 = 0;
      plVar11 = (int64_t *)0x0;
      for (uVar10 = 0; iVar4 = FUN_01f7c6f0(), (int64_t)uVar10 < (int64_t)iVar4;
          uVar10 = uVar10 + 1) {
        if ((int64_t)uVar10 < (int64_t)*(int *)(this_ptr[7] + 0xc)) {
          lVar5 = *(int64_t *)(this_ptr[7] + 0x10);
          plVar7 = *(int64_t **)(lVar5 + uVar10 * 8);
          uVar13 = extraout_XMM0_Da;
          if (plVar11 == plVar7) {
            if (((char)local_40 == '\0') && (plVar11 != (int64_t *)0x0)) {
              local_40 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            if (plVar7 != (int64_t *)0x0) {
              lVar5 = FUN_00d50b00();
              uVar13 = extraout_XMM0_Da_00;
            }
            if (((char)local_40 == '\0') || (plVar11 == (int64_t *)0x0)) {
              local_40 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
              plVar11 = plVar7;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              plVar11 = plVar7;
              uVar13 = extraout_XMM0_Da_01;
            }
          }
        }
        else {
          plVar7 = (int64_t *)FUN_00e8fc40();
          FUN_0006daf0();
          *(void*)(plVar7 + 0x27) = 0;
          plVar7[0x2e] = 0;
          *(void*)(plVar7 + 0x2f) = 0;
          plVar7[0x30] = 0;
          *(void*)(plVar7 + 0x31) = 0;
          plVar7[0x28] = 0;
          plVar7[0x29] = 0;
          *(void*)(plVar7 + 0x2a) = 0;
          plVar7[0x2b] = 0;
          plVar7[0x2c] = 0;
          *(void*)((int64_t)plVar7 + 0x165) = 0;
          *(void*)((int64_t)plVar7 + 0x18c) = 0;
          *(void*)((int64_t)plVar7 + 0x194) = 0;
          *(void*)((int64_t)plVar7 + 0x199) = 0;
          plVar7[0x35] = 0;
          plVar7[0x36] = 0;
          plVar7[0x37] = 0;
          plVar7[0x38] = 0;
          *plVar7 = (int64_t)&g_02679c28;
          plVar7[2] = (int64_t)&g_0267a6f0;
          plVar7[0x39] = 0;
          plVar7[0x3a] = 0;
          uVar6 = FUN_00d500e0();
          uVar9 = (undefined7)((uint64_t)uVar6 >> 8);
          if (plVar7 == plVar11) {
            plVar7 = plVar11;
            if ((char)local_40 == '\0') {
              local_40 = CONCAT71(uVar9,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            bVar12 = (char)local_40 != '\0';
            local_40 = CONCAT71(uVar9,1);
            if ((bVar12) && (plVar11 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = plVar7;
          uVar13 = (**(code **)(*this_ptr + 0x450))();
        }
        FUN_01f7c770(uVar13,uVar10 & 0xffffffff);
        if (local_48[0] == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_01d03810();
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x4d0))(local_d8,param_2 / (float)iVar3);
        FUN_00d50b00();
        (**(code **)(*plVar11 + 0xa20))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = g_027ef470;
        if (g_027ef470 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar11 + 0xa10))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x6e8))();
        local_d8 = local_d8 + param_2 / (float)iVar3;
      }
      while( true ) {
        (**(code **)(*this_ptr + 0x4a0))();
        iVar3 = *(int *)((int64_t)local_50 + 0xc);
        iVar4 = FUN_01f7c6f0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar3 <= iVar4) break;
        (**(code **)(*this_ptr + 0x4a0))();
        FUN_00d23340();
        local_38[0] = local_48[0];
        pcVar8 = local_48;
        if (local_48[0] == '\0') {
          pcVar8 = local_38;
        }
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_50 + 0x478))();
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01d614c0
// ============================================================
// Function: FUN_01d614c0
// Address: 01d614c0
// Size: 1373 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_01d614c0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  
  pcVar5 = g_026846e8;
  lVar7 = *arg1;
  uVar1 = *(uint *)(*(int64_t *)(lVar7 + 0x18) + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  local_50 = (int64_t *)0x0;
  bVar4 = false;
  puVar10 = (void*)0x0;
  do {
    lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x18) + 0x10) + lVar12 * 8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    if (lVar11 == lVar7) {
      if ((!bVar3) && (lVar7 = lVar11, lVar11 != 0)) goto LAB_01d61583;
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar3) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
LAB_01d61583:
      lVar11 = lVar7;
      bVar3 = true;
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_026846d0;
    puVar8[2] = &g_02684a60;
    *(void*)(puVar8 + 3) = 0;
    *(void*)((int64_t)puVar8 + 0x1c) = 0;
    *(void*)((int64_t)puVar8 + 0x24) = 0;
    *(void*)((int64_t)puVar8 + 0x2c) = 0;
    *(void*)((int64_t)puVar8 + 0x34) = 0;
    *(void*)((int64_t)puVar8 + 0x3a) = 0;
    *(void*)((int64_t)puVar8 + 0x42) = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *(void*)(puVar8 + 0xe) = 0;
    (*pcVar5)();
    if (puVar8 == puVar10) {
      puVar8 = puVar10;
      if (bVar2) {
        FUN_00d50b20();
        bVar6 = bVar2;
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
      if ((bVar2) && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = bVar6;
    FUN_01d65230();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d64eb0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d65460();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d65120();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d654b0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d65190();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d65ec0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d651e0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5d8d0();
    FUN_01d65320();
    FUN_01d65260();
    FUN_01d65e30();
    FUN_01d66ab0();
    FUN_01d654a0();
    FUN_01d65490();
    FUN_01d64cb0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar9 + 0x18))();
      if (plVar9 == local_50) {
        plVar9 = local_50;
        if (bVar4) {
          FUN_00d50b20();
          bVar6 = bVar4;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        if ((bVar4) && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = plVar9;
      FUN_01d64cb0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d614c0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d654e0();
      bVar4 = bVar6;
    }
    if ((uint64_t)uVar1 - 1 == lVar12) {
      if ((bVar4) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (!bVar3) {
        return;
      }
      if (lVar11 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar7 = *arg1;
    lVar12 = lVar12 + 1;
    puVar10 = puVar8;
  } while( true );
}



// ============================================================
// 01d62660
// ============================================================
// Function: FUN_01d62660
// Address: 01d62660
// Size: 799 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_01d62660(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t this_ptr;
  uint uVar4;
  uint64_t uVar5;
  int64_t local_48;
  char local_40;
  
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar5 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    while( true ) {
      uVar4 = uVar4 - 1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_01d65330();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') break;
      lVar3 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5dde0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((int64_t)uVar5 < 2) break;
      uVar5 = uVar5 - 1;
      lVar3 = *(int64_t *)(this_ptr + 0x18);
    }
    lVar3 = *(int64_t *)(this_ptr + 0x18);
    uVar4 = *(uint *)(lVar3 + 0xc);
    if (1 < (int)uVar4) {
      uVar5 = (uint64_t)(uVar4 - 2);
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar5 * 8);
      while( true ) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_01d65330();
        if (cVar2 == '\0') {
          cVar2 = '\0';
        }
        else {
          lVar1 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + 8 + uVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_01d65330();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + uVar5 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          FUN_01d5dde0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if ((int64_t)uVar5 < 1) break;
        uVar5 = uVar5 - 1;
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + uVar5 * 8);
      }
      lVar3 = *(int64_t *)(this_ptr + 0x18);
      uVar4 = *(uint *)(lVar3 + 0xc);
    }
  }
  if (uVar4 != 0) {
    lVar3 = **(int64_t **)(lVar3 + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_01d65330();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      lVar3 = **(int64_t **)(*(int64_t *)(this_ptr + 0x18) + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5dde0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar5 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    while( true ) {
      uVar4 = uVar4 - 1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_01d64c70();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        lVar3 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + (uint64_t)uVar4 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01d64cb0();
        FUN_01d62660();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((int64_t)uVar5 < 2) break;
      uVar5 = uVar5 - 1;
      lVar3 = *(int64_t *)(this_ptr + 0x18);
    }
  }
  return;
}



// ============================================================
// 01d03340
// ============================================================
// Function: FUN_01d03340
// Address: 01d03340
// Size: 829 bytes
// Class: GNMenu
// String references:
//   "GNMenu"
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


uint64_t FUN_01d03340(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  char local_32;
  char local_31;
  
  plVar7 = (int64_t *)*arg1;
  local_50 = param_1;
  if ((g_026ee720 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027f8498 = FUN_00d4fe50();
    g_027f8480 = "GNMenu";
    g_027f8488 = 0x50;
    g_027f8490 = FUN_001d7d70;
    g_027f84a0 = 0;
    ram_00000000027f84a8 = 0;
    g_027f84b0 = 0;
    ram_00000000027f84b8 = 0;
    g_027f84c0 = 0;
    ram_00000000027f84c8 = 0;
    g_027f84d0 = 0;
    ram_00000000027f84d8 = 0;
    g_027f84e0 = 0;
    ram_00000000027f84e8 = 0;
    g_027f84f0 = 0;
    ram_00000000027f84f8 = 0;
    g_027f8500 = 0;
    ram_00000000027f8508 = 0;
    g_027f8510 = 0;
    ram_00000000027f8518 = 0;
    g_027f8520 = 0;
    ram_00000000027f8528 = 0;
    g_027f8530 = 0;
    ram_00000000027f8538 = 0;
    g_027f8540 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d0339a:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d0339a;
  }
  local_32 = (char)arg1[1];
  if ((local_32 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) goto LAB_01d0353d;
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = g_027ef478;
  plVar7 = (int64_t *)*param_2;
  if (g_027ef478 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar7 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    plVar7 = (int64_t *)*local_50;
    FUN_01e7eb20();
    if (plVar7 == (int64_t *)0x0) {
LAB_01d03453:
      plVar7 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = local_50;
      if (cVar3 == '\0') goto LAB_01d03453;
    }
    plVar1 = (int64_t *)*plVar7;
    local_31 = (char)plVar7[1];
    if ((local_31 == '\0') || (plVar1 == (int64_t *)0x0)) {
      if (plVar1 == (int64_t *)0x0) goto LAB_01d0352f;
    }
    else {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x6f0))();
    local_48 = local_60;
    local_40 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_40 = '\x01';
    uVar4 = FUN_00d51e10();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 != '\0') {
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
      if (local_32 == '\0') {
        return uVar8;
      }
      FUN_00d50b20();
      return uVar8;
    }
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_01d0352f:
  if (local_32 != '\0') {
    FUN_00d50b20();
  }
LAB_01d0353d:
  local_80 = *param_2;
  local_78 = '\0';
  local_70 = *local_50;
  local_68 = '\0';
  uVar5 = FUN_00d59fc0(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return (uint64_t)uVar5;
}



// ============================================================
// 01d61100
// ============================================================
// Function: FUN_01d61100
// Address: 01d61100
// Size: 531 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


uint64_t FUN_01d61100(void)

{
  uint8_t auVar1 [16];
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  float fVar8;
  float extraout_XMM0_Dc;
  float fVar9;
  float extraout_XMM0_Dd;
  uint8_t auVar10 [16];
  uint8_t local_88 [8];
  float fStack_80;
  float fStack_7c;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cb4790();
  (**(code **)(*local_78 + 0x370))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x18);
  if (*(int *)(lVar4 + 0xc) < 1) {
    local_88 = (uint8_t  [8])0x0;
  }
  else {
    _local_88 = ZEXT816(0);
    lVar6 = 0;
    local_58 = plVar5;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01d65230();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      plVar5 = local_58;
      local_48 = '\x01';
      local_68 = local_58;
      local_60 = '\0';
      uVar7 = (**(code **)(*plVar3 + 0x5d0))(0,&local_68);
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      fVar8 = extraout_XMM0_Dc;
      fVar9 = extraout_XMM0_Dd;
      uVar2 = uVar7;
      if ((float)uVar7 <= (float)local_88._0_4_) {
        fVar8 = fStack_80;
        fVar9 = fStack_7c;
        uVar2 = local_88;
      }
      auVar10._0_4_ = (float)local_88._0_4_ + (float)uVar7;
      auVar10._4_4_ = (float)local_88._4_4_ + (float)((uint64_t)uVar7 >> 0x20);
      auVar10._8_4_ = fStack_80 + extraout_XMM0_Dc;
      auVar10._12_4_ = fStack_7c + extraout_XMM0_Dd;
      auVar1._8_4_ = fVar8;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = fVar9;
      _local_88 = blendps(auVar10,auVar1,0xd);
      lVar6 = lVar6 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x18);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_88;
}



// ============================================================
// 001d7ee0
// ============================================================
// Function: FUN_001d7ee0
// Address: 001d7ee0
// Size: 1345 bytes
// Class: GNMenu
// String references:
//   "GNMenu"
//   "GNLocalizationTarget"
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_001d7ee0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_0258bc60;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02684308;
  this_ptr[2] = &g_02684690;
  FUN_001d84c0();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f853b == '\0') {
    FUN_001d87d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f853b == '\0') {
    FUN_001d8940();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f853b == '\0') {
    FUN_001d8ab0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x23) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f853b == '\0') {
    FUN_001d8c20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f853b == '\0') {
    FUN_001d8d90();
    FUN_00e87980();
  }
  FUN_001d8f00();
  FUN_001d9180();
  FUN_001d9470();
  FUN_001d9760();
  this_ptr[9] = *(void*)(arg1 + 0x48);
  return;
}



// ============================================================
// 00809560
// ============================================================
// Function: FUN_00809560
// Address: 00809560
// Size: 708 bytes
// Class: GNMenu
// String references:
//   "GNMenu"
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


void FUN_00809560(void)

{
  int64_t lVar1;
  int iVar2;
  char *pcVar3;
  uint32_t uVar4;
  int64_t local_2d0;
  int64_t local_2c0;
  int64_t local_2b0;
  
  lVar1 = FUN_00822d90();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_001871b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    lVar1 = FUN_00822d90();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_008230a0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNMenu");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    if (local_2c0 != 0) {
      FUN_00d50b20();
    }
    if (local_2d0 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}

