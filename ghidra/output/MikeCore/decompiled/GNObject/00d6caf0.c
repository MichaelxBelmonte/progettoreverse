// Function: FUN_00d6caf0
// Address: 00d6caf0
// Size: 1350 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d6cf49) */
/* WARNING: Removing unreachable block (ram,0x00d6cf55) */
/* WARNING: Removing unreachable block (ram,0x00d6cf77) */
/* WARNING: Removing unreachable block (ram,0x00d6cf83) */

undefined8 * FUN_00d6caf0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_80;
  undefined8 *local_40;
  
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    puVar12 = *(undefined8 **)(unaff_RSI + 0x18);
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d50b00();
      bVar2 = false;
      goto LAB_00d6cb5d;
    }
  }
  bVar2 = true;
  puVar12 = (undefined8 *)0x0;
LAB_00d6cb5d:
  bVar3 = true;
  FUN_00d6be80();
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_80 == '\0') {
    if (CONCAT62(uStack_86,local_88) != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  uVar10 = FUN_00d90650();
  if (CONCAT62(uStack_86,local_88) != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT62(uStack_86,local_88) != 0)) {
    FUN_00d50b20();
  }
  pcVar5 = DAT_025795c0;
  if ((int)uVar10 < 1) {
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    iVar13 = (int)((ulonglong)uVar10 >> 0x20) + (int)uVar10;
    bVar4 = false;
    local_40 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    sVar14 = 0;
    bVar2 = false;
    while (iVar8 = FUN_00d8c7a0(), iVar13 < iVar8) {
      sVar7 = FUN_00d8cbc0();
      if (local_40 == (undefined8 *)0x0) {
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &DAT_025795a8;
          (*pcVar5)();
          bVar2 = true;
        }
        if (sVar7 != 0x3d) {
          FUN_00d8ea20();
          local_40 = (undefined8 *)0x0;
          goto LAB_00d6cdaa;
        }
        FUN_00d8c7d0();
        lVar6 = DAT_027259e0;
        if (DAT_027259e0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d97f20();
        if (puVar12 == puVar11) {
          bVar15 = bVar2;
          if ((!bVar2) && (puVar12 != (undefined8 *)0x0)) {
            if (!bVar3) {
              FUN_00d50b00();
              goto LAB_00d6ce5c;
            }
            goto LAB_00d6ce8a;
          }
joined_r0x00d6ce83:
          if ((bVar3) && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar11 = puVar12;
          if (bVar3) {
            if (bVar2) {
              FUN_00d50b20();
            }
LAB_00d6ce8a:
            bVar3 = false;
            bVar15 = true;
          }
          else {
            if (puVar12 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar15 = true;
            if (bVar2) {
              FUN_00d50b20();
LAB_00d6ce5c:
              bVar15 = true;
              goto joined_r0x00d6ce83;
            }
          }
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_40 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &DAT_025795a8;
        (*pcVar5)();
        bVar4 = true;
        sVar14 = 0;
        iVar13 = iVar13 + 1;
        bVar2 = bVar15;
      }
      else if ((sVar7 == 0x20) && (sVar14 == 0)) {
        sVar14 = 0;
        iVar13 = iVar13 + 1;
      }
      else {
        bVar15 = sVar14 == 0;
        if ((bVar15) && (sVar7 == 0x27)) {
          sVar14 = 0x27;
          iVar13 = iVar13 + 1;
        }
        else if (bVar15 && sVar7 == 0x22) {
          sVar14 = 0x22;
          iVar13 = iVar13 + 1;
        }
        else if (sVar14 == sVar7) {
          FUN_00d8c7d0();
          FUN_00d6a330();
          if (bVar3) {
            bVar3 = false;
          }
          else if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00cd2930();
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (puVar11 != (undefined8 *)0x0) {
            if (bVar2) {
              FUN_00d50b20();
            }
            bVar2 = false;
          }
          if (bVar4) {
            FUN_00d50b20();
          }
          bVar4 = false;
          local_40 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)0x0;
          iVar13 = iVar13 + 1;
        }
        else {
          FUN_00d8ea20(bVar15,1);
LAB_00d6cdaa:
          iVar13 = iVar13 + 1;
        }
      }
    }
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (puVar11 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


