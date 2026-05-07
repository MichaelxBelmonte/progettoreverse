// Function: FUN_002bbb70
// Address: 002bbb70
// Size: 2461 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MUPercussivePitchSystem"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002bbb70(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t **pplVar8;
  int64_t **pplVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint32_t uVar13;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int local_74;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t *local_48;
  char local_38 [8];
  
  if (*arg1 == 0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_90 = this_ptr;
    do {
      plVar11 = local_90;
      (**(code **)(*local_90 + 0x370))();
      plVar10 = local_70;
      if (local_70 == plVar11) {
        if (((local_38[0] == '\0') && (local_70 != (int64_t *)0x0)) && (local_68[0] != '\0')) {
          local_38[0] = '\x01';
          plVar10 = plVar11;
          goto LAB_002bbc27;
        }
      }
      else {
        local_90 = local_70;
        if (local_68[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_002bbc27:
          local_38[0] = '\x01';
          pcVar7 = local_68;
        }
        *pcVar7 = '\0';
        plVar11 = plVar10;
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar11 = local_90;
      if (*pplVar8 != (int64_t *)0x0) {
        bVar2 = false;
        if (local_38[0] == '\0') {
          if (local_90 == (int64_t *)0x0) goto LAB_002bbde1;
          FUN_00d50b00();
          plVar10 = (int64_t *)*arg1;
          cVar5 = (char)arg1[1];
        }
        else {
          plVar10 = (int64_t *)*arg1;
          cVar5 = (char)arg1[1];
        }
        bVar3 = false;
        bVar2 = false;
        if (plVar10 != plVar11) goto LAB_002bbdef;
        goto LAB_002bbdb6;
      }
    } while (local_90 != (int64_t *)0x0);
    bVar2 = true;
    plVar11 = (int64_t *)0x0;
LAB_002bbde1:
    plVar10 = (int64_t *)*arg1;
    cVar5 = (char)arg1[1];
    bVar3 = bVar2;
    if (plVar10 == plVar11) {
LAB_002bbdb6:
      if ((cVar5 == '\0') && (plVar11 != (int64_t *)0x0)) {
        if (bVar2) {
          FUN_00d50b00();
        }
        goto LAB_002bbe2c;
      }
      if (!bVar2 && plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
LAB_002bbdef:
      if (bVar3) {
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar11;
        if ((cVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *arg1 = (int64_t)plVar11;
        if ((cVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_002bbe2c:
      *(void*)(arg1 + 1) = 1;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*arg1 == 0) {
      return;
    }
  }
  FUN_0197b900();
  plVar11 = local_70;
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    bVar2 = false;
    local_48 = (int64_t *)0x0;
  }
  else {
    FUN_0197b900();
    pplVar8 = &local_70;
    (**(code **)(*local_90 + 0xa28))();
    plVar11 = local_70;
    if ((g_027c0150 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_0270acc8 = FUN_0015ea50();
      g_0270acb0 = "MUPercussivePitchSystem";
      g_0270acb8 = 0x58;
      g_0270acc0 = FUN_0015eca0;
      g_0270acd0 = 0;
      ram_000000000270acd8 = 0;
      g_0270ace0 = 0;
      ram_000000000270ace8 = 0;
      g_0270acf0 = 0;
      ram_000000000270acf8 = 0;
      g_0270ad00 = 0;
      ram_000000000270ad08 = 0;
      g_0270ad10 = 0;
      ram_000000000270ad18 = 0;
      g_0270ad20 = 0;
      ram_000000000270ad28 = 0;
      g_0270ad30 = 0;
      ram_000000000270ad38 = 0;
      g_0270ad40 = 0;
      ram_000000000270ad48 = 0;
      g_0270ad50 = 0;
      ram_000000000270ad58 = 0;
      g_0270ad60 = 0;
      ram_000000000270ad68 = 0;
      g_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_002bbed3:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_002bbed3;
    }
    local_48 = *pplVar8;
    if (*pplVar8 == (int64_t *)0x0) {
      bVar2 = false;
      local_48 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      bVar2 = true;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar8 = &local_70;
  FUN_01d98320();
  plVar11 = local_70;
  FUN_00275460();
  if (plVar11 == (int64_t *)0x0) {
LAB_002bbf98:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002bbf98;
  }
  plVar11 = *pplVar8;
  pplVar9 = &local_90;
  if (*(char *)(pplVar8 + 1) != '\0') {
    pplVar9 = pplVar8 + 1;
  }
  local_90 = (int64_t *)CONCAT71(local_90._1_7_,*(char *)(pplVar8 + 1));
  *(void*)pplVar9 = 0;
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    local_74 = 0;
    if (local_48 != (int64_t *)0x0) goto LAB_002bbfea;
LAB_002bc034:
    lVar12 = g_026f6f70;
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_026fc750;
    if (g_026fc750 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar4;
    local_c8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d31230(&local_c0,&local_d0);
    local_80 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_68[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
      bVar3 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_74 = FUN_01b18580();
    if (local_48 == (int64_t *)0x0) goto LAB_002bc034;
LAB_002bbfea:
    bVar3 = false;
    local_80 = (int64_t *)0x0;
  }
  uVar13 = (**(code **)(*this_ptr + 0x4a0))();
  plVar10 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_002bc357;
    FUN_00d50b00();
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_002bc357;
  local_68[0] = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
    if (local_48 == (int64_t *)0x0) {
      lVar12 = 0;
      do {
        plVar1 = *(int64_t **)(plVar10[2] + lVar12 * 8);
        local_70 = plVar1;
        FUN_000f5df0();
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_002bc2bd;
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
          if (plVar1 != (int64_t *)0x0) {
LAB_002bc2bd:
            (**(code **)(*plVar1 + 0x998))();
            (**(code **)(*plVar1 + 0xa88))();
            (**(code **)(*plVar1 + 0x918))();
            (**(code **)(*plVar1 + 0x6a8))();
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar12);
      } while ((int)lVar12 < *(int *)((int64_t)plVar10 + 0xc));
    }
    else {
      lVar12 = 0;
      do {
        plVar1 = *(int64_t **)(plVar10[2] + lVar12 * 8);
        local_70 = plVar1;
        FUN_000f5df0();
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_002bc1bd;
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
          if (plVar1 != (int64_t *)0x0) {
LAB_002bc1bd:
            (**(code **)(*plVar1 + 0x998))();
            (**(code **)(*plVar1 + 0x918))();
            (**(code **)(*plVar1 + 0x6a8))();
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar12);
      } while ((int)lVar12 < *(int *)((int64_t)plVar10 + 0xc));
    }
  }
  FUN_000a9680();
  uVar13 = FUN_00d50b20();
LAB_002bc357:
  if ((local_48 != (int64_t *)0x0) && (local_74 != 0)) {
    FUN_00502230(uVar13,0);
  }
  if ((bVar3) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

