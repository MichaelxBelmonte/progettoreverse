// Function: FUN_002bbb70
// Address: 002bbb70
// Size: 2461 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MUPercussivePitchSystem"


/* WARNING: Removing unreachable block (ram,0x002bc20b) */
/* WARNING: Removing unreachable block (ram,0x002bc21b) */
/* WARNING: Removing unreachable block (ram,0x002bc321) */
/* WARNING: Removing unreachable block (ram,0x002bc331) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bbb70(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  int local_74;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_90 = unaff_RDI;
    do {
      plVar11 = local_90;
      (**(code **)(*local_90 + 0x370))();
      plVar10 = local_70;
      if (local_70 == plVar11) {
        if (((local_38[0] == '\0') && (local_70 != (longlong *)0x0)) && (local_68[0] != '\0')) {
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
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026f8cd8 = FUN_00074a70();
        _DAT_026f8cc0 = "MDEditorScrollView";
        _DAT_026f8cc8 = 0x260;
        _DAT_026f8cd0 = FUN_000749b0;
        _DAT_026f8ce0 = 0;
        uRam00000000026f8ce8 = 0;
        _DAT_026f8cf0 = 0;
        _DAT_026f8d68 = 0;
        uRam00000000026f8d70 = 0;
        _DAT_026f8d78 = 0;
        DAT_026f8d7a = 1;
        _DAT_026f8cf8 = 0;
        uRam00000000026f8d00 = 0;
        _DAT_026f8d08 = 0;
        uRam00000000026f8d10 = 0;
        _DAT_026f8d18 = 0;
        uRam00000000026f8d20 = 0;
        _DAT_026f8d28 = 0;
        uRam00000000026f8d30 = 0;
        _DAT_026f8d38 = 0;
        uRam00000000026f8d40 = 0;
        _DAT_026f8d48 = 0;
        uRam00000000026f8d50 = 0;
        _DAT_026f8d58 = 0;
        uRam00000000026f8d60 = 0;
        DAT_026f8d83 = 0;
        _DAT_026f8d7b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar11 = local_90;
      if (*pplVar8 != (longlong *)0x0) {
        bVar2 = false;
        if (local_38[0] == '\0') {
          if (local_90 == (longlong *)0x0) goto LAB_002bbde1;
          FUN_00d50b00();
          plVar10 = (longlong *)*unaff_RSI;
          cVar5 = (char)unaff_RSI[1];
        }
        else {
          plVar10 = (longlong *)*unaff_RSI;
          cVar5 = (char)unaff_RSI[1];
        }
        bVar3 = false;
        bVar2 = false;
        if (plVar10 != plVar11) goto LAB_002bbdef;
        goto LAB_002bbdb6;
      }
    } while (local_90 != (longlong *)0x0);
    bVar2 = true;
    plVar11 = (longlong *)0x0;
LAB_002bbde1:
    plVar10 = (longlong *)*unaff_RSI;
    cVar5 = (char)unaff_RSI[1];
    bVar3 = bVar2;
    if (plVar10 == plVar11) {
LAB_002bbdb6:
      if ((cVar5 == '\0') && (plVar11 != (longlong *)0x0)) {
        if (bVar2) {
          FUN_00d50b00();
        }
        goto LAB_002bbe2c;
      }
      if (!bVar2 && plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
LAB_002bbdef:
      if (bVar3) {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar11;
        if ((cVar5 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = (longlong)plVar11;
        if ((cVar5 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_002bbe2c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (*unaff_RSI == 0) {
      return;
    }
  }
  FUN_0197b900();
  plVar11 = local_70;
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    bVar2 = false;
    local_48 = (longlong *)0x0;
  }
  else {
    FUN_0197b900();
    pplVar8 = &local_70;
    (**(code **)(*local_90 + 0xa28))();
    plVar11 = local_70;
    if ((DAT_027c0150 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (longlong *)0x0) {
LAB_002bbed3:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_002bbed3;
    }
    local_48 = *pplVar8;
    if (*pplVar8 == (longlong *)0x0) {
      bVar2 = false;
      local_48 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      bVar2 = true;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar8 = &local_70;
  FUN_01d98320();
  plVar11 = local_70;
  FUN_00275460();
  if (plVar11 == (longlong *)0x0) {
LAB_002bbf98:
    pplVar8 = (longlong **)&DAT_02802688;
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
  local_90 = (longlong *)CONCAT71(local_90._1_7_,*(char *)(pplVar8 + 1));
  *(undefined1 *)pplVar9 = 0;
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    local_74 = 0;
    if (local_48 != (longlong *)0x0) goto LAB_002bbfea;
LAB_002bc034:
    lVar12 = DAT_026f6f70;
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_026fc750;
    if (DAT_026fc750 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar4;
    local_c8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d31230(&local_c0,&local_d0);
    local_80 = local_70;
    if (local_70 == (longlong *)0x0) {
      bVar3 = false;
    }
    else if (local_68[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
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
    if (local_48 == (longlong *)0x0) goto LAB_002bc034;
LAB_002bbfea:
    bVar3 = false;
    local_80 = (longlong *)0x0;
  }
  uVar13 = (**(code **)(*unaff_RDI + 0x4a0))();
  plVar10 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_002bc357;
    FUN_00d50b00();
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_002bc357;
  local_68[0] = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  if (0 < *(int *)((longlong)plVar10 + 0xc)) {
    if (local_48 == (longlong *)0x0) {
      lVar12 = 0;
      do {
        plVar1 = *(longlong **)(plVar10[2] + lVar12 * 8);
        local_70 = plVar1;
        FUN_000f5df0();
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_002bc2bd;
          }
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
          if (plVar1 != (longlong *)0x0) {
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
      } while ((int)lVar12 < *(int *)((longlong)plVar10 + 0xc));
    }
    else {
      lVar12 = 0;
      do {
        plVar1 = *(longlong **)(plVar10[2] + lVar12 * 8);
        local_70 = plVar1;
        FUN_000f5df0();
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_002bc1bd;
          }
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
          if (plVar1 != (longlong *)0x0) {
LAB_002bc1bd:
            (**(code **)(*plVar1 + 0x998))();
            (**(code **)(*plVar1 + 0x918))();
            (**(code **)(*plVar1 + 0x6a8))();
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar12);
      } while ((int)lVar12 < *(int *)((longlong)plVar10 + 0xc));
    }
  }
  FUN_000a9680();
  uVar13 = FUN_00d50b20();
LAB_002bc357:
  if ((local_48 != (longlong *)0x0) && (local_74 != 0)) {
    FUN_00502230(uVar13,0);
  }
  if ((bVar3) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


