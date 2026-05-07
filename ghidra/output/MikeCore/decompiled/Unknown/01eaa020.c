// Function: FUN_01eaa020
// Address: 01eaa020
// Size: 1928 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01eaa542) */
/* WARNING: Removing unreachable block (ram,0x01eaa54e) */
/* WARNING: Removing unreachable block (ram,0x01eaa34d) */
/* WARNING: Removing unreachable block (ram,0x01eaa356) */
/* WARNING: Removing unreachable block (ram,0x01eaa3ec) */
/* WARNING: Removing unreachable block (ram,0x01eaa3f5) */
/* WARNING: Removing unreachable block (ram,0x01eaa5e6) */
/* WARNING: Removing unreachable block (ram,0x01eaa5ef) */
/* WARNING: Removing unreachable block (ram,0x01eaa08a) */
/* WARNING: Removing unreachable block (ram,0x01eaa093) */

void FUN_01eaa020(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  
  uVar17 = param_2 >> 0x20;
  if (uVar17 == 0) {
    return;
  }
  uVar1 = *(uint *)((longlong)unaff_RDI + 0x54);
  FUN_01eaaab0();
  local_70 = local_68;
  if (local_68 == 0) {
    bVar5 = true;
    local_70 = 0;
  }
  else if (local_60 == '\0') {
    FUN_00d50b00();
    bVar5 = false;
  }
  else {
    bVar5 = false;
  }
  lVar14 = unaff_RDI[0xb];
  local_48 = **(longlong **)(lVar14 + 0x10);
  if (local_48 == 0) {
    iVar2 = *(int *)(lVar14 + 0xc);
  }
  else {
    FUN_00d50b00();
    lVar14 = unaff_RDI[0xb];
    iVar2 = *(int *)(lVar14 + 0xc);
  }
  bVar6 = local_48 != 0;
  if ((iVar2 < 2) || (local_50 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 8), local_50 == 0)) {
    bVar7 = false;
    local_50 = 0;
  }
  else {
    bVar7 = true;
    FUN_00d50b00();
  }
  if (0 < (int)uVar1) {
    iVar2 = 0;
    uVar16 = 0;
    do {
      if (local_50 == 0) {
        local_50 = 0;
        lVar14 = *(longlong *)(local_48 + 0x10);
      }
      else if (uVar16 == *(uint *)(local_50 + 0xc)) {
        if (local_48 == local_50) {
          lVar14 = local_48;
          bVar19 = bVar6;
          if ((bVar7) && (!bVar6)) {
            FUN_00d50b00();
            bVar19 = true;
          }
        }
        else {
          if (bVar7) {
            FUN_00d50b00();
          }
          lVar14 = local_50;
          bVar19 = bVar7;
          if ((bVar6) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        local_48 = lVar14;
        bVar6 = bVar19;
        if (iVar2 + 2 < *(int *)(unaff_RDI[0xb] + 0xc)) {
          lVar11 = *(longlong *)(*(longlong *)(unaff_RDI[0xb] + 0x10) + (longlong)(iVar2 + 2) * 8);
          if (local_50 == lVar11) {
            bVar19 = bVar7;
            if (!bVar7) {
              FUN_00d50b00();
              bVar19 = true;
            }
          }
          else {
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            bVar19 = true;
            local_50 = lVar11;
            if (bVar7) {
              FUN_00d50b20();
            }
          }
        }
        else {
          bVar19 = false;
          if (bVar7) {
            FUN_00d50b20();
            local_50 = 0;
            lVar14 = *(longlong *)(lVar14 + 0x10);
            iVar2 = iVar2 + 1;
            bVar7 = bVar19;
            goto joined_r0x01eaa1e4;
          }
          local_50 = 0;
        }
        lVar14 = *(longlong *)(lVar14 + 0x10);
        iVar2 = iVar2 + 1;
        bVar7 = bVar19;
      }
      else {
        lVar14 = *(longlong *)(local_48 + 0x10);
      }
joined_r0x01eaa1e4:
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar16);
  }
  if (0 < (int)(param_2 >> 0x20)) {
    do {
      FUN_00d233f0();
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 != 0);
  }
  lVar14 = unaff_RDI[0xb];
  if (lVar14 == 0) {
    lVar11 = 0;
  }
  else {
    FUN_00d50b00();
    lVar11 = lVar14;
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_02572358;
  (*DAT_02572370)();
  puVar13 = (undefined8 *)unaff_RDI[0xb];
  if (puVar13 == puVar12) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xb] = (longlong)puVar12;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((int)uVar1 < 1) {
    local_40 = (longlong *)0x0;
    cVar10 = '\0';
  }
  else {
    uVar17 = 0;
    local_40 = (longlong *)0x0;
    cVar15 = '\0';
    do {
      lVar18 = *(longlong *)(*(longlong *)(local_70 + 0x10) + uVar17 * 8);
      lVar3 = *unaff_RSI;
      lVar8 = unaff_RSI[1];
      if (lVar3 == lVar18) {
        if (((char)lVar8 == '\0') && (lVar18 != 0)) {
          FUN_00d50b00();
          goto LAB_01eaa502;
        }
      }
      else {
        if (lVar18 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = lVar18;
        if (((char)lVar8 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
LAB_01eaa502:
        *(undefined1 *)(unaff_RSI + 1) = 1;
      }
      if ((local_40 == (longlong *)0x0) ||
         (cVar10 = (**(code **)(*local_40 + 0x50))(), cVar10 == '\0')) {
        puVar13 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &DAT_024d77e8;
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
        puVar13[2] = 0;
        FUN_00d500e0();
        *(int *)((longlong)puVar13 + 0xc) = (int)uVar17;
        lVar18 = *unaff_RSI;
        lVar3 = puVar13[2];
        if (lVar3 != lVar18) {
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          puVar13[2] = lVar18;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        FUN_00d50b20();
      }
      plVar4 = (longlong *)*unaff_RSI;
      cVar10 = (char)unaff_RSI[1];
      if (plVar4 == local_40) {
        bVar19 = cVar10 != '\0';
        plVar9 = local_40;
        cVar10 = cVar15;
        if (((bVar19) && (cVar15 == '\0')) && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b00();
          cVar10 = '\x01';
        }
      }
      else {
        if ((cVar10 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        plVar9 = plVar4;
        if ((cVar15 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_40 = plVar9;
      uVar17 = uVar17 + 1;
      cVar15 = cVar10;
    } while (uVar1 != uVar17);
  }
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar18 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar18 * 8);
      if (local_48 == lVar3) {
        if ((!bVar6) && (local_48 != 0)) {
          bVar6 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (local_48 != 0)) {
          FUN_00d50b20();
          bVar6 = true;
          local_48 = lVar3;
        }
        else {
          bVar6 = true;
          local_48 = lVar3;
        }
      }
      if (*(longlong *)(local_48 + 0x10) != 0) {
        *(undefined8 *)(local_48 + 0x10) = 0;
        FUN_00d50b20();
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(lVar11 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x3a8))();
  if ((cVar10 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar5 && local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


