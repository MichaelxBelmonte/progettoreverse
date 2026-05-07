// Function: FUN_00654180
// Address: 00654180
// Size: 2064 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00654180(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  longlong **pplVar12;
  bool bVar13;
  double dVar14;
  undefined8 uVar15;
  longlong *local_a0;
  undefined1 local_98;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_002a0530();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = unaff_RDI + 0x29;
  if (((longlong *)unaff_RDI[0x29] != (longlong *)0x0) &&
     ((**(code **)(*(longlong *)unaff_RDI[0x29] + 0x9b0))(), *plVar8 != 0)) {
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
    plVar8 = DAT_026e1800;
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      if (DAT_026e1800 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      dVar14 = (double)FUN_00e7d6f0();
      uVar7 = (ulonglong)(dVar14 * DAT_023907c0);
      dVar14 = dVar14 * DAT_023907c0 - _DAT_023907c8;
      uVar15 = FUN_0071a120();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (uVar15 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      bVar5 = (byte)(((longlong)dVar14 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
      local_58 = plVar8;
      local_50 = '\0';
      FUN_000175c0(uVar15,&local_58);
      plVar9 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar9;
        bVar5 = FUN_00c70bc0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar5 = plVar9 != (longlong *)0x0 & bVar5;
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
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
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_00654911;
  FUN_01e561b0();
  pplVar12 = &local_58;
  FUN_01d8b220();
  plVar8 = local_58;
  FUN_0006d940();
  if (plVar8 == (longlong *)0x0) {
LAB_00654443:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00654443;
  }
  plVar8 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar12 + 1) = 0;
  }
  local_38[0] = '\0';
  local_88 = plVar8;
  local_78 = plVar8;
  do {
    plVar8 = local_88;
    FUN_01e40eb0();
    plVar9 = local_48;
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_006544fa;
      }
    }
    else {
      local_88 = local_48;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
        if (plVar8 != (longlong *)0x0 && local_38[0] != '\0') {
          FUN_00d50b20();
          pcVar10 = local_38;
        }
      }
      else {
        if (plVar8 != (longlong *)0x0 && local_38[0] != '\0') {
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
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddd0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026d9988 = FUN_0006d940();
      _DAT_026d9970 = "MDWorkspaceView";
      _DAT_026d9978 = 0x188;
      _DAT_026d9980 = FUN_000a3150;
      _DAT_026d9990 = 0;
      uRam00000000026d9998 = 0;
      _DAT_026d99a0 = 0;
      _DAT_026d9a18 = 0;
      uRam00000000026d9a20 = 0;
      _DAT_026d9a28 = 0;
      DAT_026d9a2a = 1;
      _DAT_026d99a8 = 0;
      uRam00000000026d99b0 = 0;
      _DAT_026d99b8 = 0;
      uRam00000000026d99c0 = 0;
      _DAT_026d99c8 = 0;
      uRam00000000026d99d0 = 0;
      _DAT_026d99d8 = 0;
      uRam00000000026d99e0 = 0;
      _DAT_026d99e8 = 0;
      uRam00000000026d99f0 = 0;
      _DAT_026d99f8 = 0;
      uRam00000000026d9a00 = 0;
      _DAT_026d9a08 = 0;
      uRam00000000026d9a10 = 0;
      DAT_026d9a33 = 0;
      _DAT_026d9a2b = 0;
      ___cxa_guard_release();
    }
    pplVar12 = (longlong **)&DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar12 = &local_88;
      if (cVar4 == '\0') {
        pplVar12 = (longlong **)&DAT_02802688;
      }
    }
    plVar9 = local_78;
    plVar8 = local_88;
    if (*pplVar12 != (longlong *)0x0) {
      bVar2 = false;
      bVar13 = true;
      bVar3 = true;
      if (local_38[0] != '\0') goto LAB_006546d8;
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = false;
      plVar11 = (longlong *)*local_60;
      if (plVar11 == plVar8) goto LAB_006546ef;
      goto LAB_006546a4;
    }
  } while (local_88 != (longlong *)0x0);
  bVar2 = true;
  plVar8 = (longlong *)0x0;
  bVar3 = false;
LAB_006546d8:
  bVar13 = bVar3;
  plVar11 = (longlong *)*local_60;
  if (plVar11 == plVar8) {
LAB_006546ef:
    if (!bVar2 && plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_006546a4:
    if (!bVar13 && plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
      plVar11 = (longlong *)*local_60;
    }
    *local_60 = (longlong)plVar8;
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = local_60;
  plVar8 = (longlong *)*local_60;
  FUN_000b6330();
  if (plVar8 == (longlong *)0x0) {
LAB_00654768:
    plVar9 = &DAT_02802688;
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
      if (local_58 != (longlong *)0x0) {
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
    if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = local_60;
    if (plVar9 != (longlong *)0x0) {
      FUN_01e40eb0();
      plVar8 = (longlong *)*plVar8;
      if (plVar8 != local_48) {
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar8 = (longlong *)*local_60;
            plVar9 = local_48;
          }
        }
        else {
          local_40[0] = '\0';
          plVar9 = local_48;
        }
        *local_60 = (longlong)plVar9;
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00212c70();
      FUN_00d50b20();
    }
  }
  if ((longlong *)*local_60 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_60 + 0x990))();
    uVar15 = (**(code **)(*(longlong *)*local_60 + 0x9b0))();
    if (unaff_RDI[0x18] != 0) {
      uVar15 = FUN_0009b2d0(uVar15,0);
    }
    if (unaff_RDI[0x19] != 0) {
      FUN_0009b2d0(uVar15,0);
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00654911:
  FUN_01e561b0();
  if (local_48 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e561b0();
    FUN_01d8b220();
    bVar13 = local_58 != (longlong *)0x0;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    (**(code **)(*unaff_RDI + 0x400))();
  }
  return;
}


