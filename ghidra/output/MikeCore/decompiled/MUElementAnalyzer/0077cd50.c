// Function: FUN_0077cd50
// Address: 0077cd50
// Size: 2462 bytes
// Class: MUElementAnalyzer
// String references:
//   "GNJob"
//   "MUElementAnalyzer"
//   "MUAmplitudeAnalyzer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077cd50(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((DAT_0272a440 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272a390 = FUN_000fddb0();
    _DAT_0272a378 = "MUAmplitudeAnalyzer";
    _DAT_0272a380 = 0x90;
    _DAT_0272a388 = FUN_0079c0e0;
    _DAT_0272a398 = 0;
    uRam000000000272a3a0 = 0;
    _DAT_0272a3a8 = 0;
    _DAT_0272a420 = 0;
    uRam000000000272a428 = 0;
    _DAT_0272a430 = 0;
    DAT_0272a432 = 1;
    _DAT_0272a3b0 = 0;
    uRam000000000272a3b8 = 0;
    _DAT_0272a3c0 = 0;
    uRam000000000272a3c8 = 0;
    _DAT_0272a3d0 = 0;
    uRam000000000272a3d8 = 0;
    _DAT_0272a3e0 = 0;
    uRam000000000272a3e8 = 0;
    _DAT_0272a3f0 = 0;
    uRam000000000272a3f8 = 0;
    _DAT_0272a400 = 0;
    uRam000000000272a408 = 0;
    _DAT_0272a410 = 0;
    uRam000000000272a418 = 0;
    DAT_0272a43b = 0;
    _DAT_0272a433 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0077cdaf:
    pplVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077cdaf;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    FUN_00d3ecf0();
    plVar2 = local_58;
    if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_00e34240();
    if (cVar5 == '\0') {
      pplVar8 = &local_68;
      FUN_00d3ecf0();
      plVar3 = local_68;
      if ((DAT_0278c910 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026d1ef8 = FUN_00d4fe50();
        _DAT_026d1ee0 = "GNJob";
        _DAT_026d1ee8 = 0x60;
        _DAT_026d1ef0 = FUN_000443f0;
        _DAT_026d1f00 = 0;
        uRam00000000026d1f08 = 0;
        _DAT_026d1f10 = 0;
        _DAT_026d1f88 = 0;
        uRam00000000026d1f90 = 0;
        _DAT_026d1f98 = 0;
        DAT_026d1f9a = 1;
        _DAT_026d1f18 = 0;
        uRam00000000026d1f20 = 0;
        _DAT_026d1f28 = 0;
        uRam00000000026d1f30 = 0;
        _DAT_026d1f38 = 0;
        uRam00000000026d1f40 = 0;
        _DAT_026d1f48 = 0;
        uRam00000000026d1f50 = 0;
        _DAT_026d1f58 = 0;
        uRam00000000026d1f60 = 0;
        _DAT_026d1f68 = 0;
        uRam00000000026d1f70 = 0;
        _DAT_026d1f78 = 0;
        uRam00000000026d1f80 = 0;
        DAT_026d1fa3 = 0;
        _DAT_026d1f9b = 0;
        ___cxa_guard_release();
      }
      if (plVar3 == (longlong *)0x0) {
LAB_0077d0f1:
        pplVar8 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0077d0f1;
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      local_50 = '\0';
      local_58 = plVar3;
      FUN_00e8adb0();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((DAT_026e0c38 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026e0b88 = FUN_000fddb0();
        _DAT_026e0b70 = "MUElementAnalyzer";
        _DAT_026e0b78 = 0x180;
        _DAT_026e0b80 = FUN_000fdd80;
        _DAT_026e0b90 = 0;
        uRam00000000026e0b98 = 0;
        _DAT_026e0ba0 = 0;
        _DAT_026e0c18 = 0;
        uRam00000000026e0c20 = 0;
        _DAT_026e0c28 = 0;
        DAT_026e0c2a = 1;
        _DAT_026e0ba8 = 0;
        uRam00000000026e0bb0 = 0;
        _DAT_026e0bb8 = 0;
        uRam00000000026e0bc0 = 0;
        _DAT_026e0bc8 = 0;
        uRam00000000026e0bd0 = 0;
        _DAT_026e0bd8 = 0;
        uRam00000000026e0be0 = 0;
        _DAT_026e0be8 = 0;
        uRam00000000026e0bf0 = 0;
        _DAT_026e0bf8 = 0;
        uRam00000000026e0c00 = 0;
        _DAT_026e0c08 = 0;
        uRam00000000026e0c10 = 0;
        DAT_026e0c33 = 0;
        _DAT_026e0c2b = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (longlong *)0x0) {
LAB_0077ceed:
        if (DAT_02802688 != (longlong *)0x0) goto LAB_0077d1f7;
LAB_0077d1ae:
        uVar10 = FUN_0079bbe0();
        plVar3 = DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar10 = extraout_XMM0_Da_00;
          plVar3 = DAT_02802688;
          if (cVar5 != '\0') {
            plVar3 = plVar2;
          }
        }
        if (plVar3 != (longlong *)0x0) goto LAB_0077d1f7;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0077ceed;
        if (plVar2 == (longlong *)0x0) goto LAB_0077d1ae;
LAB_0077d1f7:
        uVar10 = FUN_00e33de0();
        local_c8 = DAT_0270b920;
        if (DAT_0270b920 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_c0 = '\x01';
        pplVar8 = &local_58;
        FUN_000175c0(uVar10,&local_c8);
        plVar3 = local_58;
        FUN_0006e1c0();
        if (plVar3 == (longlong *)0x0) {
LAB_0077d26b:
          pplVar8 = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar3 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_0077d26b;
        }
        plVar3 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x610))();
        plVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0077d31c;
          }
        }
        else if (local_58 != (longlong *)0x0) {
LAB_0077d31c:
          local_50 = '\0';
          local_58 = (longlong *)0x0;
          local_48 = plVar4;
          local_38 = 0;
          local_40 = 0;
          if (0 < *(int *)((longlong)plVar4 + 0xc)) {
            lVar9 = 0;
            do {
              local_58 = *(longlong **)(plVar4[2] + lVar9 * 8);
              local_b8 = plVar2;
              local_b0 = '\0';
              local_a0 = '\0';
              local_98 = 0;
              local_90 = '\0';
              local_a8 = plVar3;
              FUN_006fe880(&local_98,&local_a8);
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar9 = lVar9 + 1;
              local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
            } while ((int)lVar9 < *(int *)((longlong)plVar4 + 0xc));
          }
          FUN_000e3600();
          FUN_00d50b20();
        }
        uVar10 = FUN_0076f320();
        if (plVar3 != (longlong *)0x0) {
          uVar10 = FUN_00d50b20();
        }
      }
      FUN_0074ea80(uVar10,1);
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0077d47c;
  }
  uVar10 = FUN_00e33de0();
  local_f8 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  pplVar8 = &local_58;
  FUN_000175c0(uVar10,&local_f8);
  plVar2 = local_58;
  FUN_0006e1c0();
  if (plVar2 == (longlong *)0x0) {
LAB_0077ce69:
    pplVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077ce69;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = (**(code **)(*unaff_RDI + 0x610))();
  plVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      goto LAB_0077cfa4;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_0077cfa4:
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar3;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((longlong)plVar3 + 0xc)) {
      lVar9 = 0;
      do {
        local_58 = *(longlong **)(plVar3[2] + lVar9 * 8);
        local_e0 = '\0';
        local_d0 = '\0';
        local_e8 = plVar1;
        local_d8 = plVar2;
        uVar10 = FUN_006fe4f0(uVar10,&local_d8);
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((longlong)plVar3 + 0xc));
    }
    FUN_000e3600();
    FUN_00d50b20();
  }
  uVar6 = FUN_00e34240();
  FUN_0074ea80(extraout_XMM0_Da,uVar6);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0077d47c:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


