// ===================================================================
// GNAlertPanel — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (3):
//                   _infoText
//                   _okTitle
//                   _cancelTitle


// ============================================================
// 01f6ca30
// ============================================================
// Function: FUN_01f6ca30
// Address: 01f6ca30
// Size: 1500 bytes
// Class: GNAlertPanel
// String references:
//   "GNAlertPanel"
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


int64_t * FUN_01f6ca30(uint64_t param_1,int64_t *param_2)

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
LAB_01f6cc20:
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
        goto LAB_01f6cc8a;
      }
      local_40 = (int64_t *)0x0;
      bVar2 = true;
    }
    else if (local_70 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      bVar2 = true;
    }
    else {
LAB_01f6cc8a:
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
        if ((g_026e8030 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_026e7f80 = FUN_00015ff0();
          g_026e7f68 = "GNAlertPanel";
          g_026e7f70 = 0xa0;
          g_026e7f78 = FUN_001aaa10;
          g_026e7f88 = 0;
          ram_00000000026e7f90 = 0;
          g_026e7f98 = 0;
          ram_00000000026e7fa0 = 0;
          g_026e7fa8 = 0;
          ram_00000000026e7fb0 = 0;
          g_026e7fb8 = 0;
          ram_00000000026e7fc0 = 0;
          g_026e7fc8 = 0;
          ram_00000000026e7fd0 = 0;
          g_026e7fd8 = 0;
          ram_00000000026e7fe0 = 0;
          g_026e7fe8 = 0;
          ram_00000000026e7ff0 = 0;
          g_026e7ff8 = 0;
          ram_00000000026e8000 = 0;
          g_026e8008 = 0;
          ram_00000000026e8010 = 0;
          g_026e8018 = 0;
          ram_00000000026e8020 = 0;
          g_026e8028 = 0;
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
          goto LAB_01f6ce4a;
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
LAB_01f6ce4a:
      FUN_00083b20();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) goto LAB_01f6ce6a;
      bVar1 = true;
      local_40 = (int64_t *)0x0;
      bVar2 = true;
      if (plVar7 == (int64_t *)0x0) goto LAB_01f6cf0a;
    }
LAB_01f6cea1:
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
    if (bVar11) goto LAB_01f6cf27;
  }
  else {
    local_90 = '\0';
    pplVar12 = &local_70;
    local_98 = *param_2;
    FUN_000175c0(uVar13,&local_98);
    plVar8 = local_70;
    if ((g_026e8030 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e7f80 = FUN_00015ff0();
      g_026e7f68 = "GNAlertPanel";
      g_026e7f70 = 0xa0;
      g_026e7f78 = FUN_001aaa10;
      g_026e7f88 = 0;
      ram_00000000026e7f90 = 0;
      g_026e7f98 = 0;
      ram_00000000026e7fa0 = 0;
      g_026e7fa8 = 0;
      ram_00000000026e7fb0 = 0;
      g_026e7fb8 = 0;
      ram_00000000026e7fc0 = 0;
      g_026e7fc8 = 0;
      ram_00000000026e7fd0 = 0;
      g_026e7fd8 = 0;
      ram_00000000026e7fe0 = 0;
      g_026e7fe8 = 0;
      ram_00000000026e7ff0 = 0;
      g_026e7ff8 = 0;
      ram_00000000026e8000 = 0;
      g_026e8008 = 0;
      ram_00000000026e8010 = 0;
      g_026e8018 = 0;
      ram_00000000026e8020 = 0;
      g_026e8028 = 0;
      ___cxa_guard_release();
    }
    plVar6 = local_48;
    if (plVar8 == (int64_t *)0x0) {
      pplVar12 = &g_02802688;
      plVar8 = g_02802688;
      if (g_02802688 == (int64_t *)0x0) goto LAB_01f6cbd1;
LAB_01f6cba8:
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
      if (*pplVar12 != (int64_t *)0x0) goto LAB_01f6cba8;
LAB_01f6cbd1:
      bVar11 = false;
      plVar8 = (int64_t *)0x0;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) goto LAB_01f6cc20;
LAB_01f6ce6a:
    local_80 = '\0';
    local_88 = plVar8;
    local_40 = plVar8;
    FUN_00d23d90();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = bVar1;
    if (plVar7 != (int64_t *)0x0) goto LAB_01f6cea1;
LAB_01f6cf0a:
    bVar2 = true;
    *(void*)(this_ptr + 1) = 0;
    bVar3 = true;
    if (bVar11) goto LAB_01f6cf27;
  }
  bVar2 = bVar3;
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_01f6cf27:
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
// 01f6e450
// ============================================================
// Function: FUN_01f6e450
// Address: 01f6e450
// Size: 1162 bytes
// Class: GNAlertPanel
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


void FUN_01f6e450(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)(this_ptr + 0x70);
  local_a8 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_120 = g_027feca0;
  local_a8 = '\x01';
  local_b0 = plVar1;
  if (g_027feca0 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_98 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_a0 = lVar2;
  FUN_00e3fb50(&local_a0,&local_120);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_110 = g_02800b50;
  local_88 = '\x01';
  local_90 = plVar1;
  if (g_02800b50 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_78 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar2;
  FUN_00e3fb50(&local_80,&local_110);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_100 = g_02800b58;
  local_68 = '\x01';
  local_70 = plVar1;
  if (g_02800b58 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_58 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar2;
  FUN_00e3fb50(&local_60,&local_100);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    iVar3 = FUN_00d8c7a0();
    if (iVar3 != 0) {
      local_48 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_f0 = g_02800b60;
      local_48 = '\x01';
      local_50 = plVar1;
      if (g_02800b60 != 0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      local_38 = 0;
      lVar2 = *(int64_t *)(this_ptr + 0x90);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar2;
      FUN_00e3fb50(&local_40,&local_f0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    iVar3 = FUN_00d8c7a0();
    if (iVar3 != 0) {
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_d0 = g_02800b68;
      local_d8 = '\x01';
      local_e0 = plVar1;
      if (g_02800b68 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      local_b8 = 0;
      lVar2 = *(int64_t *)(this_ptr + 0x98);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_c0 = lVar2;
      FUN_00e3fb50(&local_c0,&local_d0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        (**(code **)(*local_e0 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01f6ddb0
// ============================================================
// Function: FUN_01f6ddb0
// Address: 01f6ddb0
// Size: 963 bytes
// Class: GNAlertPanel
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


int FUN_01f6ddb0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  byte bVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar8;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 == 0) {
    bVar8 = true;
    local_58 = 0;
    plVar4 = (int64_t *)0x0;
  }
  else {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    FUN_00e97870();
    local_78 = local_50;
    local_70 = 0;
    lVar2 = g_02800b40;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        lVar2 = g_02800b40;
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    g_02800b40 = lVar2;
    if (lVar2 != 0) {
      local_70 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar2;
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e97f20();
    if (this_ptr[0x13] == 0) {
      uVar5 = FUN_00e97f30();
      bVar8 = true;
      if (local_40 == 0) {
        uVar5 = FUN_00e978a0();
        bVar8 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          uVar5 = FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar5 = FUN_00d50b20();
      }
      lVar2 = g_02800b48;
      if (bVar8) {
        if (g_02800b48 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if (this_ptr[0x13] != lVar2) {
          FUN_00d64850();
          lVar1 = this_ptr[0x13];
          if (lVar1 != lVar2) {
            local_58 = lVar1;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            this_ptr[0x13] = lVar2;
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_00d64910();
        }
        if (lVar2 == 0) {
          uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
        }
        else {
          uVar5 = FUN_00d50b20();
          uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
        }
        local_58 = CONCAT71(uVar6,1);
        bVar8 = false;
        bVar7 = 1;
        goto LAB_01f6dfeb;
      }
    }
    else {
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
    }
    local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    bVar8 = false;
  }
  bVar7 = 0;
LAB_01f6dfeb:
  iVar3 = (**(code **)(*this_ptr + 0x5d8))();
  if ((bool)(bVar7 & iVar3 == 2)) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    FUN_00e978d0();
    local_68 = local_50;
    local_60 = 0;
    local_88 = g_026fceb8;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_88 = g_026fceb8;
      }
    }
    else {
      local_48 = '\0';
    }
    local_60 = '\x01';
    g_026fceb8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar8 && plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return iVar3;
}



// ============================================================
// 01f6d220
// ============================================================
// Function: FUN_01f6d220
// Address: 01f6d220
// Size: 1464 bytes
// Class: GNAlertPanel
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


uint32_t FUN_01f6d220(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint32_t uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_178;
  char local_170;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*arg1 == 0) {
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar8 + 0x18))();
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == plVar8) {
      if ((char)arg1[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01f6d292;
      }
    }
    else {
      *arg1 = (int64_t)plVar8;
      if (((char)arg1[1] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_01f6d292:
  FUN_01f27fe0();
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  if (local_110 == '\0') {
    if (local_118 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(int64_t *)(this_ptr + 0x80);
  }
  else {
    lVar3 = *(int64_t *)(this_ptr + 0x80);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_60 = 0;
  if (local_100 == '\0') {
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  else {
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  local_60 = '\x01';
  local_68 = local_108;
  if (lVar4 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_50 = 0;
  if (local_f0 == '\0') {
    if (local_f8 != 0) {
      FUN_00d50b00();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x90);
  }
  else {
    lVar5 = *(int64_t *)(this_ptr + 0x90);
  }
  local_50 = '\x01';
  local_58 = local_f8;
  if (lVar5 != 0) {
    local_50 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_40 = 0;
  if (local_e0 == '\0') {
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    lVar6 = *(int64_t *)(this_ptr + 0x98);
  }
  else {
    lVar6 = *(int64_t *)(this_ptr + 0x98);
  }
  local_40 = '\x01';
  local_48 = local_e8;
  if (lVar6 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_30 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_30 = '\x01';
  local_38 = local_d8;
  uVar7 = FUN_01f316e0(&local_58,&local_68,&local_48,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_118 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  return uVar7;
}

