// Function: FUN_015fc150
// Address: 015fc150
// Size: 901 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fc410) */
/* WARNING: Removing unreachable block (ram,0x015fc419) */
/* WARNING: Removing unreachable block (ram,0x015fc1ae) */
/* WARNING: Removing unreachable block (ram,0x015fc1b7) */
/* WARNING: Removing unreachable block (ram,0x015fc32e) */
/* WARNING: Removing unreachable block (ram,0x015fc337) */
/* WARNING: Removing unreachable block (ram,0x015fc3a8) */
/* WARNING: Removing unreachable block (ram,0x015fc3b1) */
/* WARNING: Removing unreachable block (ram,0x015fc4dd) */
/* WARNING: Removing unreachable block (ram,0x015fc4ea) */

undefined8 * FUN_015fc150(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *unaff_RDI;
  int iVar9;
  undefined4 uVar10;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_40;
  FUN_015fc700();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (0 < *(int *)((longlong)local_40 + 0xc)) {
    iVar9 = 0;
    do {
      plVar4 = local_40;
      lVar1 = *(longlong *)(plVar3[2] + (longlong)iVar9 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_d8 = *param_2;
      local_d0 = 0;
      local_c8 = *param_3;
      local_c0 = 0;
      FUN_015f9f10(param_1,&local_d8,&local_c8);
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_b8 = *param_2;
      local_b0 = 0;
      local_a8 = *param_3;
      local_a0 = 0;
      uVar10 = FUN_015fa320(param_1,&local_b8,&local_a8);
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b00();
      }
      FUN_00d23370(uVar10,0);
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_011e4bb0();
      (**(code **)(*plVar7 + 0x18))();
      plVar2 = (longlong *)plVar7[2];
      if (plVar2 != local_40) {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar7[2] = (longlong)local_40;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d21140();
      plVar2 = plVar7;
      if (*(int *)((longlong)local_40 + 0xc) < 1) {
LAB_015fc464:
        local_40 = plVar2;
        FUN_00d50b20();
      }
      else {
        lVar8 = 0;
        do {
          plVar2 = *(longlong **)(local_40[2] + lVar8 * 8);
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          iVar5 = FUN_00d237a0();
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (iVar5 != -1) {
            FUN_00d23620();
            iVar9 = iVar9 - (uint)(iVar5 <= iVar9);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((longlong)local_40 + 0xc));
        local_40 = plVar2;
        if (plVar7 != (longlong *)0x0) goto LAB_015fc464;
      }
      local_38 = '\0';
      FUN_00d50b20();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((longlong)plVar3 + 0xc));
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


