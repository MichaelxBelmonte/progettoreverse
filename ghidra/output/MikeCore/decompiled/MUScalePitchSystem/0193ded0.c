// Function: FUN_0193ded0
// Address: 0193ded0
// Size: 997 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x0193e252) */
/* WARNING: Removing unreachable block (ram,0x0193e25e) */
/* WARNING: Removing unreachable block (ram,0x0193e17d) */
/* WARNING: Removing unreachable block (ram,0x0193e189) */
/* WARNING: Removing unreachable block (ram,0x0193e28d) */
/* WARNING: Removing unreachable block (ram,0x0193e296) */

void FUN_0193ded0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  lVar7 = unaff_RDI[0x41];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xb10))();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d216c0();
  lVar7 = *unaff_RSI;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
      local_38 = '\0';
      local_40 = plVar1;
      FUN_0006e1c0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar2 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
        if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
        local_38 = '\0';
        local_40 = plVar2;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar1 = *(longlong **)(*(longlong *)(*unaff_RSI + 0x10) + lVar9 * 8);
      local_38 = '\0';
      local_40 = plVar1;
      FUN_007ef2d0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
        if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != (longlong *)0x0) {
        local_38 = '\0';
        local_40 = plVar3;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
      lVar7 = *unaff_RSI;
    } while (lVar9 < *(int *)(lVar7 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0xdc8))();
  (**(code **)(*unaff_RDI + 0xb10))();
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_40 = local_70;
  local_38 = '\0';
  FUN_00d23480();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  (**(code **)(*unaff_RDI + 0xeb8))();
  (**(code **)(*unaff_RDI + 0x400))();
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


