// Function: FUN_01db5400
// Address: 01db5400
// Size: 1084 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01db56c7) */
/* WARNING: Removing unreachable block (ram,0x01db56d4) */
/* WARNING: Removing unreachable block (ram,0x01db54b1) */
/* WARNING: Removing unreachable block (ram,0x01db54ba) */
/* WARNING: Removing unreachable block (ram,0x01db54d5) */
/* WARNING: Removing unreachable block (ram,0x01db54e1) */
/* WARNING: Removing unreachable block (ram,0x01db57a1) */
/* WARNING: Removing unreachable block (ram,0x01db57aa) */
/* WARNING: Removing unreachable block (ram,0x01db57d6) */
/* WARNING: Removing unreachable block (ram,0x01db57df) */

undefined8 * FUN_01db5400(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong local_88;
  char local_80;
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar8 = DAT_027f22c8;
  if (DAT_027f22c8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  pcVar5 = DAT_02575d98;
  lVar8 = unaff_RSI[0x28];
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    puVar12 = (undefined8 *)0x0;
  }
  else {
    lVar10 = 0;
    puVar12 = (undefined8 *)0x0;
    bVar3 = false;
    lVar11 = 0;
    bVar2 = false;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar10 * 8);
      if (lVar11 == lVar8) {
        if ((!bVar2) && (lVar11 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar11 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar11 = lVar8;
        }
        else {
          bVar2 = true;
          lVar11 = lVar8;
        }
      }
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_02575d80;
      (*pcVar5)();
      if (puVar9 == puVar12) {
        if (bVar3) {
          FUN_00d50b20();
LAB_01db562e:
          cVar1 = *(char *)(lVar11 + 0xd);
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          bVar3 = true;
        }
      }
      else {
        bVar4 = true;
        if (bVar3) {
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
            puVar12 = puVar9;
            bVar3 = bVar4;
            goto LAB_01db562e;
          }
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
      }
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(lVar11 + 0x20) + 0x4d8))();
      }
      FUN_00d46080();
      FUN_00d21140();
      lVar10 = lVar10 + 1;
      lVar8 = unaff_RSI[0x28];
    } while (lVar10 < *(int *)(lVar8 + 0xc));
  }
  lVar8 = DAT_027f22d0;
  if (DAT_027f22d0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RSI + 0x88))();
  lVar10 = DAT_027f22d0;
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
    lVar10 = DAT_027f22d0;
  }
  DAT_027f22d0 = lVar10;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (puVar12 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


