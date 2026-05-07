// Function: FUN_01a759a0
// Address: 01a759a0
// Size: 1227 bytes
// Class: MUChord
// String references:
//   "%I_%I_%I"


/* WARNING: Removing unreachable block (ram,0x01a75b12) */
/* WARNING: Removing unreachable block (ram,0x01a75b1e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01a759a0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 in_register_00001244 [12];
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  undefined4 local_6c;
  longlong *local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  local_6c = param_1;
  iVar3 = FUN_00e7d780();
  iVar4 = FUN_00e7d780();
  if ((DAT_028b2ff8 == (longlong *)0x0) || (uVar11 = extraout_XMM0_Qa, DAT_028b3001 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2ff8 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028b2ff8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = DAT_028b2ff8 != (longlong *)0x0;
        DAT_028b2ff8 = plVar5;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b3000 == '\0') {
        DAT_028b3000 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
    else {
      DAT_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
  }
  local_3c = *(undefined4 *)(unaff_RSI + 0x1d0);
  local_40 = 3;
  local_48 = &DAT_0253a1a8;
  local_38 = iVar3;
  local_34 = iVar4;
  uVar11 = FUN_00d8cb40(uVar11,&local_48);
  if ((local_b0 == '\0') && (local_b8 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b00();
  }
  local_78 = local_b8;
  local_a8 = local_b8;
  local_a0 = '\0';
  uVar11 = FUN_000175c0(uVar11,&local_a8);
  plVar5 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    FUN_01a75080(uVar11,(char)local_6c);
    local_50 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00152930();
    (**(code **)(*plVar5 + 0x18))();
    FUN_01cfbc00();
    local_68 = local_48;
    local_60 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_60 = '\x01';
    auVar12._4_12_ = in_register_00001244;
    auVar12._0_4_ = (float)iVar4;
    auVar12 = insertps(ZEXT416((uint)(float)iVar3),auVar12,0x10);
    FUN_01d4eaa0(auVar12._0_8_);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52700();
    uVar11 = FUN_01d52740();
    local_98 = local_50;
    local_90 = '\0';
    (**(code **)(*local_48 + 0x420))(uVar11,&local_98);
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = FUN_01d52770();
    local_80 = '\0';
    local_48 = local_78;
    local_40 = local_40 & 0xffffff00;
    local_88 = plVar5;
    FUN_00ca0840(uVar11,&local_48);
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_6c == '\0') {
      if ((1 < iVar4) && (0 < iVar3)) {
        do {
          iVar8 = 0;
          do {
            FUN_01d53270(0,0,0,iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
          bVar1 = 3 < iVar4;
          iVar4 = iVar4 + -2;
        } while (bVar1);
      }
    }
    else if ((1 < iVar3) && (0 < iVar4)) {
      iVar8 = 1;
      do {
        iVar6 = 0;
        do {
          FUN_01d53270(0,0,0,iVar8);
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
        iVar8 = iVar8 + 2;
      } while (iVar8 < iVar3);
    }
    cVar9 = (char)local_58;
    plVar7 = local_50;
  }
  else {
    cVar9 = '\0';
    plVar7 = (longlong *)0x0;
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


