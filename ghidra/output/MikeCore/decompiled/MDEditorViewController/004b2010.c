// Function: FUN_004b2010
// Address: 004b2010
// Size: 1689 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_004b2010(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a68ad0();
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_004b2190;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) {
LAB_004b2190:
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar10 = unaff_RSI;
  do {
    (**(code **)(*plVar10 + 0x370))();
    if (local_48 == plVar10) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0'))
      goto LAB_004b20f7;
    }
    else {
      plVar10 = local_48;
      if (local_40[0] == '\0') {
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
LAB_004b20f7:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar8 = &DAT_02802688;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar8 = (longlong *)&stack0xffffffffffffff98;
      if (cVar5 == '\0') {
        plVar8 = &DAT_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar10 != (longlong *)0x0);
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (longlong *)0x0) && (cVar5 = FUN_00751ba0(), cVar5 != '\0')) {
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = unaff_RSI;
    do {
      (**(code **)(*plVar8 + 0x370))();
      if (local_48 == plVar8) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_004b2267;
        }
      }
      else {
        plVar8 = local_48;
        if (local_40[0] == '\0') {
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
LAB_004b2267:
          local_38[0] = '\x01';
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_0270aa58 = FUN_00015ff0();
        _DAT_0270aa40 = "MDEditorViewController";
        _DAT_0270aa48 = 0x1e8;
        _DAT_0270aa50 = FUN_00074eb0;
        _DAT_0270aa60 = 0;
        uRam000000000270aa68 = 0;
        _DAT_0270aa70 = 0;
        _DAT_0270aae8 = 0;
        uRam000000000270aaf0 = 0;
        _DAT_0270aaf8 = 0;
        DAT_0270aafa = 1;
        _DAT_0270aa78 = 0;
        uRam000000000270aa80 = 0;
        _DAT_0270aa88 = 0;
        uRam000000000270aa90 = 0;
        _DAT_0270aa98 = 0;
        uRam000000000270aaa0 = 0;
        _DAT_0270aaa8 = 0;
        uRam000000000270aab0 = 0;
        _DAT_0270aab8 = 0;
        uRam000000000270aac0 = 0;
        _DAT_0270aac8 = 0;
        uRam000000000270aad0 = 0;
        _DAT_0270aad8 = 0;
        uRam000000000270aae0 = 0;
        DAT_0270ab03 = 0;
        _DAT_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar9 = &DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = (longlong *)&stack0xffffffffffffff98;
        if (cVar5 == '\0') {
          plVar9 = &DAT_02802688;
        }
      }
      if (*plVar9 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        goto joined_r0x004b23e2;
      }
    } while (plVar8 != (longlong *)0x0);
    plVar8 = (longlong *)0x0;
joined_r0x004b23e2:
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar11 = FUN_0027c9f0();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        goto LAB_004b243f;
      }
LAB_004b25f0:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    else {
      if (local_48 == (longlong *)0x0) goto LAB_004b25f0;
LAB_004b243f:
      lVar4 = DAT_02708ef0;
      if (DAT_02708ef0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = '\x01';
      uVar11 = FUN_01d5e6e0(uVar11,&local_b8);
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      lVar4 = DAT_027e2670;
      if (DAT_027e2670 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      FUN_01d5e6e0(uVar11,&local_a8);
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
        FUN_01d66e50();
        local_90 = '\0';
        local_88 = local_48;
        local_80 = '\0';
        local_98 = local_48;
        uVar11 = FUN_01d5e2e0();
        FUN_01d5d7f0(extraout_XMM0_Da,uVar11);
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar8;
        FUN_01d651e0();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_004b2621;
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  bVar3 = false;
LAB_004b2621:
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    return unaff_RDI;
  }
  FUN_00d50b20();
  return unaff_RDI;
}


