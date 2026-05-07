// Function: FUN_00654180
// Address: 00654180
// Size: 2064 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_00654180(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  char *pcVar10;
  int64_t *this_ptr;
  int64_t *plVar11;
  int64_t **pplVar12;
  bool bVar13;
  double dVar14;
  uint64_t uVar15;
  int64_t *local_a0;
  uint8_t local_98;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_002a0530();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = this_ptr + 0x29;
  if (((int64_t *)this_ptr[0x29] != (int64_t *)0x0) &&
     ((**(code **)(*(int64_t *)this_ptr[0x29] + 0x9b0))(), *plVar8 != 0)) {
    *plVar8 = 0;
    FUN_00d50b20();
  }
  local_60 = plVar8;
  FUN_01e561b0();
  if (local_70 == 0) {
    bVar5 = 0;
  }
  else {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_88 + 0x450))();
    plVar8 = g_026e1800;
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      if (g_026e1800 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      dVar14 = (double)FUN_00e7d6f0();
      uVar7 = (uint64_t)(dVar14 * g_023907c0);
      dVar14 = dVar14 * g_023907c0 - g_023907c8;
      uVar15 = FUN_0071a120();
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (uVar15 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
      local_58 = plVar8;
      local_50 = '\0';
      FUN_000175c0(uVar15,&local_58);
      plVar9 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar9;
        bVar5 = FUN_00c70bc0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar5 = plVar9 != (int64_t *)0x0 & bVar5;
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5 == 0) goto LAB_00654911;
  FUN_01e561b0();
  FUN_01d8b220();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) goto LAB_00654911;
  FUN_01e561b0();
  pplVar12 = &local_58;
  FUN_01d8b220();
  plVar8 = local_58;
  FUN_0006d940();
  if (plVar8 == (int64_t *)0x0) {
LAB_00654443:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00654443;
  }
  plVar8 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  local_38[0] = '\0';
  local_88 = plVar8;
  local_78 = plVar8;
  do {
    plVar8 = local_88;
    FUN_01e40eb0();
    plVar9 = local_48;
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_006544fa;
      }
    }
    else {
      local_88 = local_48;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
        if (plVar8 != (int64_t *)0x0 && local_38[0] != '\0') {
          FUN_00d50b20();
          pcVar10 = local_38;
        }
      }
      else {
        if (plVar8 != (int64_t *)0x0 && local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar8 = plVar9;
LAB_006544fa:
        local_38[0] = '\x01';
        pcVar10 = local_40;
        plVar9 = plVar8;
      }
      *pcVar10 = '\0';
      plVar8 = plVar9;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddd0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_026d9988 = FUN_0006d940();
      g_026d9970 = "MDWorkspaceView";
      g_026d9978 = 0x188;
      g_026d9980 = FUN_000a3150;
      g_026d9990 = 0;
      ram_00000000026d9998 = 0;
      g_026d99a0 = 0;
      g_026d9a18 = 0;
      ram_00000000026d9a20 = 0;
      g_026d9a28 = 0;
      g_026d9a2a = 1;
      g_026d99a8 = 0;
      ram_00000000026d99b0 = 0;
      g_026d99b8 = 0;
      ram_00000000026d99c0 = 0;
      g_026d99c8 = 0;
      ram_00000000026d99d0 = 0;
      g_026d99d8 = 0;
      ram_00000000026d99e0 = 0;
      g_026d99e8 = 0;
      ram_00000000026d99f0 = 0;
      g_026d99f8 = 0;
      ram_00000000026d9a00 = 0;
      g_026d9a08 = 0;
      ram_00000000026d9a10 = 0;
      g_026d9a33 = 0;
      g_026d9a2b = 0;
      ___cxa_guard_release();
    }
    pplVar12 = (int64_t **)&g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar12 = &local_88;
      if (cVar4 == '\0') {
        pplVar12 = (int64_t **)&g_02802688;
      }
    }
    plVar9 = local_78;
    plVar8 = local_88;
    if (*pplVar12 != (int64_t *)0x0) {
      bVar2 = false;
      bVar13 = true;
      bVar3 = true;
      if (local_38[0] != '\0') goto LAB_006546d8;
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = false;
      plVar11 = (int64_t *)*local_60;
      if (plVar11 == plVar8) goto LAB_006546ef;
      goto LAB_006546a4;
    }
  } while (local_88 != (int64_t *)0x0);
  bVar2 = true;
  plVar8 = (int64_t *)0x0;
  bVar3 = false;
LAB_006546d8:
  bVar13 = bVar3;
  plVar11 = (int64_t *)*local_60;
  if (plVar11 == plVar8) {
LAB_006546ef:
    if (!bVar2 && plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_006546a4:
    if (!bVar13 && plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
      plVar11 = (int64_t *)*local_60;
    }
    *local_60 = (int64_t)plVar8;
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = local_60;
  plVar8 = (int64_t *)*local_60;
  FUN_000b6330();
  if (plVar8 == (int64_t *)0x0) {
LAB_00654768:
    plVar9 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00654768;
  }
  lVar1 = *plVar9;
  if (lVar1 != 0) {
    FUN_00d50b00();
    uVar15 = FUN_000b51b0();
    plVar8 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_98 = 1;
    local_a0 = plVar8;
    FUN_00654070(uVar15,&local_a0);
    plVar9 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = local_60;
    if (plVar9 != (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar8 = (int64_t *)*plVar8;
      if (plVar8 != local_48) {
        if (local_40[0] == '\0') {
          if (local_48 == (int64_t *)0x0) {
            plVar9 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar8 = (int64_t *)*local_60;
            plVar9 = local_48;
          }
        }
        else {
          local_40[0] = '\0';
          plVar9 = local_48;
        }
        *local_60 = (int64_t)plVar9;
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00212c70();
      FUN_00d50b20();
    }
  }
  if ((int64_t *)*local_60 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*local_60 + 0x990))();
    uVar15 = (**(code **)(*(int64_t *)*local_60 + 0x9b0))();
    if (this_ptr[0x18] != 0) {
      uVar15 = FUN_0009b2d0(uVar15,0);
    }
    if (this_ptr[0x19] != 0) {
      FUN_0009b2d0(uVar15,0);
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00654911:
  FUN_01e561b0();
  if (local_48 == (int64_t *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e561b0();
    FUN_01d8b220();
    bVar13 = local_58 != (int64_t *)0x0;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    (**(code **)(*this_ptr + 0x400))();
  }
  return;
}

