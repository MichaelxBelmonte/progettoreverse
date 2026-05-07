// Function: FUN_00dde270
// Address: 00dde270
// Size: 2509 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dde270(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *in_RDX;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined4)param_2;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  plVar9 = (longlong *)*in_RDX;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_00dde2f3:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar9 = in_RDX;
    if (cVar4 == '\0') goto LAB_00dde2f3;
  }
  lVar1 = *plVar9;
  cVar4 = (char)plVar9[1];
  if ((cVar4 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      plVar9 = (longlong *)*in_RDX;
      if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        _DAT_026d4340 = FUN_00053cb0;
        _DAT_026d4350 = 0;
        uRam00000000026d4358 = 0;
        _DAT_026d4360 = 0;
        uRam00000000026d4368 = 0;
        _DAT_026d4370 = 0;
        uRam00000000026d4378 = 0;
        _DAT_026d4380 = 0;
        uRam00000000026d4388 = 0;
        _DAT_026d4390 = 0;
        uRam00000000026d4398 = 0;
        _DAT_026d43a0 = 0;
        uRam00000000026d43a8 = 0;
        _DAT_026d43b0 = 0;
        uRam00000000026d43b8 = 0;
        _DAT_026d43c0 = 0;
        uRam00000000026d43c8 = 0;
        _DAT_026d43d0 = 0;
        uRam00000000026d43d8 = 0;
        _DAT_026d43e0 = 0;
        uRam00000000026d43e8 = 0;
        _DAT_026d43f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar9 == (longlong *)0x0) {
LAB_00dde501:
        in_RDX = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00dde501;
      }
      lVar1 = *in_RDX;
      lVar10 = in_RDX[1];
      if (((char)lVar10 == '\0') || (lVar1 == 0)) {
        if (lVar1 == 0) {
          if (*(longlong *)(unaff_RSI + 0x18) != 0) {
            *(undefined8 *)(unaff_RSI + 0x18) = 0;
            FUN_00d50b20();
          }
          goto LAB_00ddeaba;
        }
      }
      else {
        FUN_00d50b00();
        FUN_00d50b00();
      }
      lVar2 = *(longlong *)(unaff_RSI + 0x18);
      if (lVar2 != lVar1) {
        FUN_00d50b00();
        *(longlong *)(unaff_RSI + 0x18) = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(char *)(unaff_RSI + 0x10) == '\0') {
        uVar5 = FUN_00dd6e50();
        *(undefined1 *)(unaff_RSI + 0x10) = uVar5;
      }
      uVar5 = FUN_00dd6e50();
      switch(uVar5) {
      case 0x45:
        if (*(char *)(unaff_RSI + 0xc) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xd) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0(extraout_XMM0_Db);
        }
        if (*(char *)(unaff_RSI + 0xe) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0(uVar11);
        }
        if (*(char *)(unaff_RSI + 0xf) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0(uVar12);
        }
        break;
      case 0x50:
        if (*(char *)(unaff_RSI + 0xc) != '\0') {
          FUN_00dd6bf0();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xd) != '\0') {
          FUN_00dd6bf0();
          FUN_00dddff0(extraout_XMM0_Db_01);
        }
        break;
      case 0x52:
        if (*(char *)(unaff_RSI + 0xc) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xd) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0(extraout_XMM0_Db_00);
        }
        if (*(char *)(unaff_RSI + 0xe) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0(uVar11);
        }
        if (*(char *)(unaff_RSI + 0xf) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0(uVar12);
        }
        break;
      case 0x53:
        if (*(char *)(unaff_RSI + 0xe) != '\0') {
          FUN_00dd6c90();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xf) != '\0') {
          FUN_00dd6c90();
          FUN_00dddff0(extraout_XMM0_Db_02);
        }
      }
      if ((char)lVar10 != '\0') {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      goto LAB_00ddeaba;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_31 = cVar4;
  if (*(longlong *)(unaff_RSI + 0x18) != 0) {
    *(undefined8 *)(unaff_RSI + 0x18) = 0;
    FUN_00d50b20();
  }
  lVar10 = DAT_0276cc80;
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar10;
  local_80 = '\x01';
  FUN_00d91000(1,&local_88);
  lVar10 = local_48;
  if (local_48 == 0) {
    bVar3 = true;
    lVar10 = 0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_40 == '\0') || (local_48 == 0)) goto LAB_00dde3a2;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_00dde3a2:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = *(int *)(lVar10 + 0xc);
  if (iVar6 == 4) {
    if (*(char *)(unaff_RSI + 0xc) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    if (*(char *)(unaff_RSI + 0xd) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    if (*(char *)(unaff_RSI + 0xe) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    if (*(char *)(unaff_RSI + 0xf) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    local_70 = '\0';
    local_78 = lVar1;
    FUN_00d96410();
    FUN_00dd6480();
    lVar2 = *(longlong *)(unaff_RSI + 0x18);
    lVar8 = lVar2;
    if (lVar2 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == 0) {
          lVar8 = 0;
          goto LAB_00dde4b3;
        }
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RSI + 0x18);
        *(longlong *)(unaff_RSI + 0x18) = local_48;
        lVar8 = local_48;
      }
      else {
        local_40 = '\0';
        lVar8 = local_48;
LAB_00dde4b3:
        *(longlong *)(unaff_RSI + 0x18) = lVar8;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar8 = local_48;
      }
    }
    if ((local_40 != '\0') && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)(unaff_RSI + 0x10) == '\0') {
      *(undefined1 *)(unaff_RSI + 0x10) = 0x52;
    }
    iVar6 = *(int *)(lVar10 + 0xc);
  }
  if (iVar6 == 2) {
    if (*(char *)(unaff_RSI + 0xc) == '\0') {
      if (*(char *)(unaff_RSI + 0xd) != '\0') goto LAB_00dde5e6;
      if (*(char *)(unaff_RSI + 0xe) != '\0') {
        FUN_00d8d7b0();
        FUN_00dddff0();
      }
      if (*(char *)(unaff_RSI + 0xf) != '\0') {
        FUN_00d8d7b0();
        FUN_00dddff0();
      }
      local_50 = '\0';
      local_58 = lVar1;
      FUN_00d96b50();
      FUN_00dd6740();
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      lVar10 = lVar1;
      if (lVar1 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar10 = 0;
            goto LAB_00dde879;
          }
          FUN_00d50b00();
          lVar1 = *(longlong *)(unaff_RSI + 0x18);
          *(longlong *)(unaff_RSI + 0x18) = local_48;
          lVar10 = local_48;
        }
        else {
          local_40 = '\0';
          lVar10 = local_48;
LAB_00dde879:
          *(longlong *)(unaff_RSI + 0x18) = lVar10;
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
          lVar10 = local_48;
        }
      }
      if ((local_40 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RSI + 0x10) == '\0') {
        *(undefined1 *)(unaff_RSI + 0x10) = 0x53;
      }
    }
    else {
      FUN_00d8d7b0();
      FUN_00dddff0();
      if (*(char *)(unaff_RSI + 0xd) != '\0') {
LAB_00dde5e6:
        FUN_00d8d7b0();
        FUN_00dddff0();
      }
      local_60 = '\0';
      local_68 = lVar1;
      FUN_00d96ea0();
      FUN_00dd65e0();
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      lVar10 = lVar1;
      if (lVar1 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar10 = 0;
            goto LAB_00dde646;
          }
          FUN_00d50b00();
          lVar1 = *(longlong *)(unaff_RSI + 0x18);
          *(longlong *)(unaff_RSI + 0x18) = local_48;
          lVar10 = local_48;
        }
        else {
          local_40 = '\0';
          lVar10 = local_48;
LAB_00dde646:
          *(longlong *)(unaff_RSI + 0x18) = lVar10;
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
          lVar10 = local_48;
        }
      }
      if ((local_40 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RSI + 0x10) == '\0') {
        *(undefined1 *)(unaff_RSI + 0x10) = 0x50;
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
LAB_00ddeaba:
  FUN_00d8c7d0();
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


