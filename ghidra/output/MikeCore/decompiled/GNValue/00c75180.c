// Function: FUN_00c75180
// Address: 00c75180
// Size: 1053 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00c75498) */
/* WARNING: Removing unreachable block (ram,0x00c754a0) */
/* WARNING: Removing unreachable block (ram,0x00c7550d) */
/* WARNING: Removing unreachable block (ram,0x00c754a5) */
/* WARNING: Removing unreachable block (ram,0x00c75399) */
/* WARNING: Removing unreachable block (ram,0x00c753a2) */
/* WARNING: Removing unreachable block (ram,0x00c7534f) */
/* WARNING: Removing unreachable block (ram,0x00c75358) */
/* WARNING: Removing unreachable block (ram,0x00c753e3) */
/* WARNING: Removing unreachable block (ram,0x00c753ec) */
/* WARNING: Removing unreachable block (ram,0x00c75531) */
/* WARNING: Removing unreachable block (ram,0x00c75540) */
/* WARNING: Removing unreachable block (ram,0x00c75549) */
/* WARNING: Removing unreachable block (ram,0x00c7557a) */
/* WARNING: Removing unreachable block (ram,0x00c75587) */

void FUN_00c75180(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong local_40;
  
  *(undefined4 *)(unaff_RDI + 0x50) = 1;
  FUN_00d216c0();
  FUN_00d216c0();
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x28) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x48) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x30);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x30) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(1,1);
  lVar7 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00d7a410();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x58);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x120))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00e3a1c0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00e39f80();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  local_40 = *(longlong *)(unaff_RDI + 0x38);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00e39f80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x28);
  if (0 < *(int *)(*(longlong *)(lVar7 + 0x10) + 0xc)) {
    lVar8 = 0;
    bVar3 = false;
    lVar9 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x10) + lVar8 * 8) +
                  0x128))();
      if (local_40 == lVar9) {
        lVar10 = lVar9;
        bVar4 = bVar3;
        if ((!bVar3) && (local_40 != 0)) {
          FUN_00d50b00();
          goto LAB_00c75505;
        }
      }
      else {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        lVar10 = local_40;
        bVar4 = true;
        if ((bVar3) && (lVar9 != 0)) {
          FUN_00d50b20();
          lVar9 = local_40;
LAB_00c75505:
          lVar10 = lVar9;
          bVar4 = true;
        }
      }
      bVar3 = bVar4;
      if (lVar10 != 0) {
        FUN_00e3a1c0();
        local_40 = lVar10;
      }
      lVar8 = lVar8 + 1;
      lVar7 = *(longlong *)(unaff_RDI + 0x28);
      lVar9 = lVar10;
    } while (lVar8 < *(int *)(*(longlong *)(lVar7 + 0x10) + 0xc));
    if ((bVar3) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


