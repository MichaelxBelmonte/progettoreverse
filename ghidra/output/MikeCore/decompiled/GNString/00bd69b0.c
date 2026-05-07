// Function: FUN_00bd69b0
// Address: 00bd69b0
// Size: 1918 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00bd6bed) */
/* WARNING: Removing unreachable block (ram,0x00bd6bf9) */
/* WARNING: Removing unreachable block (ram,0x00bd6d67) */
/* WARNING: Removing unreachable block (ram,0x00bd6d70) */
/* WARNING: Removing unreachable block (ram,0x00bd6ee7) */
/* WARNING: Removing unreachable block (ram,0x00bd6ef0) */

void FUN_00bd69b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  undefined7 uVar10;
  undefined8 uVar9;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  longlong *local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_40;
  char local_38;
  
  plVar7 = (longlong *)*unaff_RSI;
  if (plVar7 == (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x58) == DAT_028a5780) {
      return;
    }
  }
  else {
    FUN_00b68110();
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    local_98 = local_40;
    cVar5 = (**(code **)(*plVar7 + 0x50))();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return;
    }
  }
  (**(code **)(*DAT_028a5770 + 0x368))();
  plVar7 = DAT_028a5780;
  if (*unaff_RSI == 0) {
    if (DAT_028a5780 == (longlong *)0x0) {
      bVar4 = true;
      uVar9 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      uVar9 = 1;
      bVar4 = false;
    }
  }
  else {
    uVar10 = (undefined7)((ulonglong)DAT_028a5790 >> 8);
    if (DAT_028a5790 == 0) {
LAB_00bd6b9b:
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00bdab20();
      (**(code **)(*plVar7 + 0x18))();
      FUN_00b68140();
      FUN_00b67990();
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_40;
      FUN_00b679c0();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00b67c20();
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_40;
      FUN_00b67c50();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00b67e20();
      FUN_00b67e30();
      local_38 = '\0';
      FUN_00d7a410();
      uVar9 = CONCAT71(uVar10,1);
      bVar4 = false;
      local_40 = plVar7;
    }
    else {
      iVar6 = FUN_00c8d620();
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      local_58 = CONCAT44(local_58._4_4_,iVar6 + -1);
      iVar6 = -1;
      do {
        if (iVar6 == (int)local_58) goto LAB_00bd6b9b;
        iVar6 = iVar6 + 1;
        do {
          plVar7 = (longlong *)FUN_00c8df10();
        } while (plVar7 == (longlong *)0x0);
        plVar1 = (longlong *)*unaff_RSI;
        FUN_00b68110();
        local_80 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        local_88 = local_40;
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      } while (cVar5 == '\0');
      FUN_00d50b00();
      uVar9 = CONCAT71(uVar10,1);
      bVar4 = false;
    }
  }
  iVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0xb0))();
  if ((iVar6 == 1) || (DAT_02802510 != '\0')) {
    FUN_00b67ff0();
  }
  local_58 = uVar9;
  FUN_00b691d0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  cVar5 = FUN_00bd5c60();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x58);
  if (plVar1 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) goto LAB_00bd6e93;
  }
  else {
    FUN_00d50b00();
    plVar8 = *(longlong **)(unaff_RDI + 0x58);
    if (plVar8 == plVar7) goto LAB_00bd6e93;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *(longlong **)(unaff_RDI + 0x58) = plVar7;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00bd6e93:
  if (plVar1 != DAT_028a5780) {
    FUN_00b68000();
    iVar6 = *(int *)((longlong)local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_38 = '\0';
      FUN_00d7a770();
      FUN_00d50130();
      local_40 = plVar1;
    }
  }
  (**(code **)(*DAT_028a5770 + 0x378))();
  FUN_00d403d0();
  lVar3 = DAT_0270b7a0;
  if (DAT_0270b7a0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_b8 = lVar2;
  FUN_00d40470(&local_e8,&local_b8,3,3);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d403d0();
    local_d8 = DAT_0270b7b0;
    if (DAT_0270b7b0 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_a0 = 0;
    lVar3 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    local_a8 = lVar3;
    FUN_00d40470(&local_c8,&local_a8,1,3);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4 && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


