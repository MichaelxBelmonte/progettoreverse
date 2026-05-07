// Function: FUN_0009e200
// Address: 0009e200
// Size: 1555 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0009e34f) */
/* WARNING: Removing unreachable block (ram,0x0009e358) */
/* WARNING: Removing unreachable block (ram,0x0009e69f) */
/* WARNING: Removing unreachable block (ram,0x0009e6ab) */
/* WARNING: Removing unreachable block (ram,0x0009e4a8) */
/* WARNING: Removing unreachable block (ram,0x0009e4b1) */
/* WARNING: Removing unreachable block (ram,0x0009e5b8) */
/* WARNING: Removing unreachable block (ram,0x0009e5c1) */
/* WARNING: Removing unreachable block (ram,0x0009e5f0) */
/* WARNING: Removing unreachable block (ram,0x0009e610) */
/* WARNING: Removing unreachable block (ram,0x0009e4e0) */
/* WARNING: Removing unreachable block (ram,0x0009e500) */
/* WARNING: Removing unreachable block (ram,0x0009e4e2) */
/* WARNING: Removing unreachable block (ram,0x0009e502) */
/* WARNING: Removing unreachable block (ram,0x0009e5f2) */
/* WARNING: Removing unreachable block (ram,0x0009e612) */

void FUN_0009e200(undefined8 param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *plVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong local_b0;
  char local_a8;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  int local_40;
  
  bVar2 = 1;
  if ((*(longlong *)(unaff_RDI + 0x78) != 0) && (*(longlong *)(unaff_RDI + 0x88) != 0)) {
    FUN_01e40eb0();
    if (local_58 == (longlong *)0x0) {
      bVar3 = 0;
    }
    else {
      FUN_01f27fe0();
      bVar3 = (**(code **)(*local_68 + 0x450))();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = 1;
    if (bVar3 != 0) {
      if (*(longlong *)(unaff_RDI + 0xd8) == 0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        lVar6 = *(longlong *)(unaff_RDI + 0xd8);
        *(undefined8 **)(unaff_RDI + 0xd8) = puVar4;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d216c0();
      FUN_006c5ea0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_58 = local_68;
      local_50 = '\0';
      FUN_00d214d0();
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = 0;
    }
  }
  plVar7 = local_58;
  if ((((param_2 != '\0') && (*(longlong *)(unaff_RDI + 0x88) == 0)) &&
      (FUN_01e53c20(), local_a8 != '\0')) && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)*unaff_RSI;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar8 = *(longlong **)(unaff_RDI + 0x78);
    if (plVar8 == (longlong *)0x0) goto LAB_0009e6b0;
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x90) == 0) {
      FUN_0009ddd0();
      plVar5 = (longlong *)*unaff_RSI;
    }
    plVar8 = *(longlong **)(unaff_RDI + 0x78);
    if (plVar8 == plVar5) goto LAB_0009e6b0;
  }
  if (plVar8 == (longlong *)0x0) {
    if (plVar5 == (longlong *)0x0) goto LAB_0009e6b0;
    lVar6 = *(longlong *)(unaff_RDI + 0x10);
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar6 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x10) = lVar1;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    plVar7 = (longlong *)*unaff_RSI;
joined_r0x0009e450:
    if (plVar7 == (longlong *)0x0) goto LAB_0009e6b0;
  }
  else {
    (**(code **)(*plVar8 + 0x478))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4a0))();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0009e4b6;
      }
    }
    else if (local_58 != (longlong *)0x0) {
LAB_0009e4b6:
      local_50 = '\0';
      local_58 = (longlong *)0x0;
      local_40 = -1;
      while( true ) {
        lVar6 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)plVar7 + 0xc) <= local_40) break;
        local_58 = *(longlong **)(plVar7[2] + 8 + lVar6 * 8);
        (**(code **)(*local_58 + 0x560))();
        (**(code **)(*local_58 + 0x558))();
      }
      FUN_000a9680();
      FUN_00d50b20();
    }
    plVar7 = (longlong *)*unaff_RSI;
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x478))();
      plVar7 = (longlong *)*unaff_RSI;
      goto joined_r0x0009e450;
    }
  }
  plVar5 = local_58;
  (**(code **)(*plVar7 + 0x4a0))();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0009e5c6;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_0009e5c6:
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = -1;
    while( true ) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)plVar5 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(plVar5[2] + 8 + lVar6 * 8);
      (**(code **)(*local_58 + 0x560))();
      (**(code **)(*local_58 + 0x558))();
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x9e0))();
LAB_0009e6b0:
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    FUN_01e40eb0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x478))();
    }
  }
  if (param_2 != '\0') {
    if (*unaff_RSI == 0) {
      lVar6 = *(longlong *)(unaff_RDI + 0x10);
      lVar1 = *(longlong *)(unaff_RDI + 0x88);
      if (lVar6 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x10) = lVar1;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar6 = *(longlong *)(unaff_RDI + 0x88);
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0x450))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((*(longlong *)(unaff_RDI + 0x78) != 0) && (*(longlong *)(unaff_RDI + 0x88) != 0)) {
    FUN_01e40eb0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((bool)(bVar2 & local_58 != (longlong *)0x0)) &&
       (lVar6 = *(longlong *)(unaff_RDI + 0xd8), lVar6 != 0)) {
      FUN_00d50b00();
      FUN_006c5ee0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(longlong *)(unaff_RDI + 0x78) = *unaff_RSI;
  return;
}


