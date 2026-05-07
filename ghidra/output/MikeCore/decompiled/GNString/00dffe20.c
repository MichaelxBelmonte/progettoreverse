// Function: FUN_00dffe20
// Address: 00dffe20
// Size: 1237 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00dfffde) */
/* WARNING: Removing unreachable block (ram,0x00dfffea) */
/* WARNING: Removing unreachable block (ram,0x00e001cc) */
/* WARNING: Removing unreachable block (ram,0x00e001d8) */
/* WARNING: Removing unreachable block (ram,0x00e00015) */
/* WARNING: Removing unreachable block (ram,0x00e00022) */
/* WARNING: Removing unreachable block (ram,0x00e0004b) */
/* WARNING: Removing unreachable block (ram,0x00e00058) */
/* WARNING: Removing unreachable block (ram,0x00e00207) */
/* WARNING: Removing unreachable block (ram,0x00e00214) */
/* WARNING: Removing unreachable block (ram,0x00dffee3) */
/* WARNING: Removing unreachable block (ram,0x00dffee1) */
/* WARNING: Removing unreachable block (ram,0x00dfff00) */
/* WARNING: Removing unreachable block (ram,0x00dfff02) */
/* WARNING: Removing unreachable block (ram,0x00e0007d) */
/* WARNING: Removing unreachable block (ram,0x00e0008a) */

longlong * FUN_00dffe20(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong local_80;
  char local_78;
  int local_68;
  longlong local_50;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00e00580();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00e000af;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_00e000af;
  local_68 = -1;
  while( true ) {
    lVar8 = DAT_02787820;
    lVar10 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_80 + 0xc) <= local_68) break;
    plVar1 = *(longlong **)(*(longlong *)(local_80 + 0x10) + 8 + lVar10 * 8);
    if (DAT_02787820 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      cVar5 = (**(code **)(*local_40 + 0x398))();
      if (cVar5 != '\0') {
        FUN_00ca94c0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_40 != (longlong *)0x0) {
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_00115910();
  FUN_00d50b20();
  if (puVar6 == (undefined8 *)0x0) {
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
LAB_00e000af:
  if (*(int *)((longlong)puVar6 + 0xc) < 1) {
    lVar8 = 0;
    bVar3 = false;
  }
  else {
    lVar10 = -1;
    lVar9 = 0;
    bVar3 = false;
    local_50 = 0;
    do {
      lVar8 = DAT_02784ac0;
      lVar2 = *(longlong *)(puVar6[2] + lVar9 * 8);
      if (DAT_02784ac0 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = local_50;
      bVar4 = bVar3;
      if (local_40 == (longlong *)0x0) {
        lVar7 = 0;
        if (lVar10 < 0) goto LAB_00e0022c;
      }
      else {
        lVar7 = FUN_00c71940();
        FUN_00d50b20();
        if (lVar10 < lVar7) {
LAB_00e0022c:
          lVar10 = lVar7;
          if (local_50 == lVar2) {
            if ((!bVar3) && (local_50 != 0)) {
              FUN_00d50b00();
              bVar4 = true;
            }
          }
          else {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            lVar8 = lVar2;
            if ((bVar3) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      bVar3 = bVar4;
      lVar9 = lVar9 + 1;
      local_50 = lVar8;
    } while ((int)lVar9 < *(int *)((longlong)puVar6 + 0xc));
  }
  FUN_015ac3a0();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar3) && (lVar8 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


