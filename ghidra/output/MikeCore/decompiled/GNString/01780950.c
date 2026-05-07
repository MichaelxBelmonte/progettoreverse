// Function: FUN_01780950
// Address: 01780950
// Size: 1701 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01780f88) */
/* WARNING: Removing unreachable block (ram,0x01780b2e) */
/* WARNING: Removing unreachable block (ram,0x017809bd) */
/* WARNING: Removing unreachable block (ram,0x017809c9) */
/* WARNING: Removing unreachable block (ram,0x01780b6a) */
/* WARNING: Removing unreachable block (ram,0x01780b6f) */
/* WARNING: Removing unreachable block (ram,0x01780b33) */
/* WARNING: Removing unreachable block (ram,0x01780cec) */
/* WARNING: Removing unreachable block (ram,0x01780cf8) */
/* WARNING: Removing unreachable block (ram,0x01780f94) */
/* WARNING: Removing unreachable block (ram,0x01780b48) */
/* WARNING: Removing unreachable block (ram,0x01780b79) */

int FUN_01780950(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  char *pcVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_70;
  longlong *local_58;
  char local_50 [8];
  undefined8 *local_48;
  char local_40;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    return -0x80000000;
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00d95590();
  if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  (**(code **)(*local_58 + 0x3e0))();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  local_70 = (longlong *)0x0;
  FUN_00d23310();
  pcVar12 = local_38;
  if (local_50[0] != '\0') {
    pcVar12 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar12 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar8 = FUN_00d8c7a0();
  if ((local_38[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = (**(code **)(*local_58 + 0x3d0))();
  if (cVar7 != '\0') {
    FUN_00d8a110();
    if (local_58 == (longlong *)0x0) {
LAB_01780b85:
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_70 = local_58;
        bVar3 = true;
        goto LAB_01780b85;
      }
      local_70 = local_58;
      bVar3 = true;
    }
    plVar6 = local_70;
    lVar5 = DAT_027ce8c8;
    if (iVar8 == 2) {
      if (DAT_027ce8c8 != 0) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*local_70 + 0x50))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      plVar4 = DAT_027ce790;
      if (cVar7 != '\0') {
        if (DAT_027ce790 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (local_70 == plVar4) {
          if ((!bVar3) && (plVar4 != (longlong *)0x0)) goto LAB_01780c43;
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = plVar4;
          if ((bVar3) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01780c43:
          bVar3 = true;
        }
        lVar5 = DAT_027ce8d0;
        if (DAT_027ce8d0 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*local_58 + 0x3e0))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_025795a8;
    (*DAT_025795c0)();
    FUN_00d8dbf0();
    lVar5 = DAT_027ce8d8;
    if (DAT_027ce8d8 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_58 + 0x3e0))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    iVar8 = 0;
    if (cVar7 != '\0') {
      iVar8 = 0;
      cVar7 = FUN_00d8ca70();
      if (cVar7 == '#') {
        iVar8 = FUN_00d8c7a0();
      }
      cVar7 = FUN_00d8ca70();
      if (cVar7 == 'b') {
        iVar9 = FUN_00d8c7a0();
        iVar8 = iVar8 - iVar9;
      }
    }
    local_40 = '\0';
    local_48 = puVar11;
    cVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18) + 0x50))();
    if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = 0;
    if (cVar7 == '\0') {
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(*(longlong *)**(undefined8 **)(lVar1 + 0x10) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 1;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x20) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 2;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 3;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x28) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 4;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x10) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 5;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      iVar10 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x30) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 6;
      if ((char)iVar10 != '\0') goto LAB_01780f5c;
      bVar2 = false;
    }
    else {
LAB_01780f5c:
      iVar10 = iVar8 * 7 + iVar9 + -1;
      bVar2 = true;
    }
    FUN_00d50b20();
    if (bVar2) goto LAB_01780f82;
  }
  iVar10 = -0x80000000;
LAB_01780f82:
  if ((bVar3) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return iVar10;
}


