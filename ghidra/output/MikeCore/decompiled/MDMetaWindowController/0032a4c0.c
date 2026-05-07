// Function: FUN_0032a4c0
// Address: 0032a4c0
// Size: 2746 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x0032abb5) */
/* WARNING: Removing unreachable block (ram,0x0032abef) */
/* WARNING: Removing unreachable block (ram,0x0032ac03) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0032a4c0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_88;
  char local_80;
  longlong *plVar13;
  char local_70;
  longlong *local_58;
  longlong *local_50;
  char local_48 [8];
  char local_38 [8];
  
  uVar12 = FUN_01e3f820();
  cVar5 = FUN_00d05410(param_1,uVar12,param_2);
  if (cVar5 == '\0') {
    local_58 = (longlong *)0x0;
    bVar11 = false;
    bVar2 = false;
    if (unaff_RSI != (longlong *)0x0) goto LAB_0032a576;
    bVar2 = true;
  }
  else {
    (**(code **)(*unaff_RSI + 0x6f0))();
    local_58 = local_50;
    if (local_50 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0032a576:
    bVar11 = bVar2;
    FUN_00d50b00();
    bVar2 = false;
  }
  local_38[0] = '\0';
  plVar13 = unaff_RSI;
  do {
    (**(code **)(*plVar13 + 0x370))();
    if (local_50 == plVar13) {
      if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0032a607;
      }
    }
    else {
      plVar13 = local_50;
      if (local_48[0] == '\0') {
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
LAB_0032a607:
        local_38[0] = '\x01';
        pcVar7 = local_48;
      }
      *pcVar7 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar9 = &DAT_02802688;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar9 = (longlong *)&stack0xffffffffffffff88;
      if (cVar5 == '\0') {
        plVar9 = &DAT_02802688;
      }
    }
    if (*plVar9 != 0) {
      if ((local_38[0] == '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar9 = plVar13;
      if (bVar2) goto LAB_0032a7a1;
      goto LAB_0032a799;
    }
  } while (plVar13 != (longlong *)0x0);
  if (!bVar2) {
    plVar9 = (longlong *)0x0;
LAB_0032a799:
    FUN_00d50b20();
LAB_0032a7a1:
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x5e0))();
      if (local_48[0] == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0032a7f4;
        }
      }
      else if (local_50 != (longlong *)0x0) {
LAB_0032a7f4:
        cVar5 = FUN_00751ba0();
        if (cVar5 != '\0') {
LAB_0032a830:
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if ((!bVar11) && (local_58 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          *unaff_RDI = local_58;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00d50b20();
          FUN_00d50b20();
          return unaff_RDI;
        }
        FUN_01f27fe0();
        cVar5 = (**(code **)(*local_50 + 0x450))();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') goto LAB_0032a830;
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if ((DAT_02806d88 == (longlong *)0x0) || (DAT_02806d91 == '\0')) {
    uVar12 = FUN_00e8cb50();
    lVar3 = DAT_02702518;
    if (DAT_02806d88 == (longlong *)0x0) {
      if (DAT_02702518 != 0) {
        uVar12 = FUN_00d50b00();
      }
      lVar4 = DAT_02702520;
      if (DAT_02702520 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = '\x01';
      FUN_01d61e70(uVar12,&local_d8);
      plVar9 = DAT_02806d88;
      if (DAT_02806d88 != local_50) {
        if (local_48[0] == '\0') {
          if (local_50 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar9 = local_50;
          }
        }
        else {
          local_48[0] = '\0';
          plVar9 = local_50;
        }
        bVar2 = DAT_02806d88 != (longlong *)0x0;
        DAT_02806d88 = plVar9;
        if (bVar2) {
          FUN_00d50b20();
          plVar9 = local_50;
        }
      }
      if ((plVar9 != (longlong *)0x0) && (DAT_02806d90 == '\0')) {
        DAT_02806d90 = '\x01';
        FUN_00e8cb90();
        plVar9 = local_50;
      }
      if ((local_48[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_02806d91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02806d91 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_02806d88 != (longlong *)0x0) goto LAB_0032a8a1;
LAB_0032af2d:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar11) goto LAB_0032af55;
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0032af55;
    }
  }
  else {
    if (DAT_02806d88 == (longlong *)0x0) goto LAB_0032af2d;
LAB_0032a8a1:
    plVar9 = DAT_02806d88;
    if (local_58 != (longlong *)0x0) {
      plVar8 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar8 + 0x18))();
      plVar9 = (longlong *)unaff_RSI[0x36];
      if (plVar9 == plVar8) {
        FUN_00d50b20();
      }
      else {
        unaff_RSI[0x36] = (longlong)plVar8;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      local_c8 = local_58;
      local_c0 = '\0';
      FUN_01d614c0();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5dc80();
      bVar2 = false;
      plVar9 = (longlong *)0x0;
      for (iVar10 = 0; iVar6 = FUN_01d5b230(), iVar10 < iVar6; iVar10 = iVar10 + 1) {
        FUN_01d5b240(extraout_XMM0_Da,iVar10);
        if (local_50 == plVar9) {
          plVar8 = plVar9;
          bVar1 = bVar2;
          if ((bVar2) || (plVar9 == (longlong *)0x0)) goto joined_r0x0032aaf9;
          bVar1 = true;
          if (local_48[0] == '\0') {
            FUN_00d50b00();
            goto LAB_0032aae5;
          }
        }
        else {
          plVar8 = local_50;
          if (local_48[0] == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar2) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar9 = local_50;
LAB_0032aae5:
              plVar8 = plVar9;
              bVar1 = true;
            }
joined_r0x0032aaf9:
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar1 = true;
            if ((bVar2) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar2 = bVar1;
        cVar5 = FUN_01d65330();
        if (cVar5 == '\0') {
          FUN_01d64cb0();
          if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 == (longlong *)0x0) {
            (**(code **)(*unaff_RSI + 0x7b8))();
            FUN_01d97850();
            if (local_48[0] != '\0') {
              local_48[0] = '\0';
            }
            FUN_01d651e0();
            if ((local_70 != '\0') && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        plVar9 = plVar8;
      }
      FUN_01d5b240(extraout_XMM0_Da,0);
      if (local_50 == plVar9) {
        plVar8 = plVar9;
        bVar1 = bVar2;
        if ((!bVar2) && (local_50 != (longlong *)0x0)) {
          bVar1 = true;
          if (local_48[0] != '\0') goto LAB_0032acdc;
          FUN_00d50b00();
          bVar1 = true;
        }
joined_r0x0032accc:
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar8 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar2) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar1 = true;
          }
          goto joined_r0x0032accc;
        }
        bVar1 = true;
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_0032acdc:
      FUN_01d65230();
      if (local_48[0] == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48[0] = '\0';
      }
      uVar12 = FUN_01d65460();
      local_80 = 0;
      if (local_70 == '\0') {
        if (plVar13 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar13;
      FUN_01d5d9b0(uVar12,&local_88);
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = (longlong *)unaff_RSI[0x36];
      if (plVar13 == local_58) {
        if ((!bVar11) && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar13 = local_58;
          goto joined_r0x0032ae16;
        }
      }
      else {
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar11) {
          FUN_00d50b20();
        }
joined_r0x0032ae16:
        bVar11 = true;
        local_58 = plVar13;
      }
      if ((bVar1) && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0032af2d;
    }
    if (DAT_02806d88 != (longlong *)0x0) {
      FUN_00d50b00();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      local_58 = plVar9;
      goto LAB_0032af55;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  local_58 = (longlong *)0x0;
LAB_0032af55:
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


