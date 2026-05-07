// Function: FUN_01a96f20
// Address: 01a96f20
// Size: 741 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01a970c7) */
/* WARNING: Removing unreachable block (ram,0x01a970d4) */
/* WARNING: Removing unreachable block (ram,0x01a96fb7) */
/* WARNING: Removing unreachable block (ram,0x01a96fe0) */
/* WARNING: Removing unreachable block (ram,0x01a96fb9) */
/* WARNING: Removing unreachable block (ram,0x01a96fe2) */

undefined8 * FUN_01a96f20(undefined4 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  bool bVar8;
  longlong *plVar9;
  float fVar10;
  float local_98;
  int local_68;
  longlong *local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar7 != 0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_68) break;
      plVar6 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + 8 + lVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        FUN_01a58dc0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e437f0(param_1);
        cVar3 = (**(code **)(*plVar6 + 0x920))();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = plVar6;
        }
      }
    }
    FUN_01a80d20();
    if (puVar4 == (undefined8 *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
  }
  if (*(int *)((longlong)puVar4 + 0xc) < 1) {
    bVar8 = false;
    plVar6 = (longlong *)0x0;
  }
  else {
    local_98 = DAT_0241c4b8;
    lVar7 = 0;
    bVar8 = false;
    plVar9 = (longlong *)0x0;
    do {
      plVar1 = *(longlong **)(puVar4[2] + lVar7 * 8);
      fVar10 = (float)(**(code **)(*plVar1 + 0x4d8))();
      plVar6 = plVar9;
      bVar2 = bVar8;
      if (local_98 < fVar10) {
        local_98 = fVar10;
        if (plVar9 == plVar1) {
          if ((!bVar8) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b00();
            bVar2 = true;
          }
        }
        else {
          FUN_00d50b00();
          plVar6 = plVar1;
          bVar2 = true;
          if ((bVar8) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
          }
        }
      }
      bVar8 = bVar2;
      lVar7 = lVar7 + 1;
      plVar9 = plVar6;
    } while ((int)lVar7 < *(int *)((longlong)puVar4 + 0xc));
  }
  FUN_01a80d20();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar8) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


