// Function: FUN_019a7590
// Address: 019a7590
// Size: 638 bytes
// Class: MUEditorSubview


undefined8 * FUN_019a7590(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar8;
  ulonglong local_80;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  local_50 = puVar3;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar6 = *(uint *)(lVar4 + 0xc);
  local_80 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    do {
      uVar6 = uVar6 - 1;
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar6 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar5 = FUN_0082d880();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 == local_38) {
        if (((char)local_48 == '\0') && (plVar7 != (longlong *)0x0)) {
          plVar7 = local_38;
          if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a7696;
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          FUN_00d50b00();
          plVar7 = local_38;
        }
        else {
          local_40 = local_48;
          plVar7 = local_38;
        }
      }
      else if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar7 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a7696:
        *(undefined1 *)(pplVar8 + 1) = 0;
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      local_38 = plVar7;
      if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = local_40;
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar1 = local_38;
        FUN_01e437f0(param_1);
        cVar2 = (**(code **)(*plVar1 + 0x920))();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_60 = local_38;
          local_58 = '\0';
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)local_80 < 2) goto LAB_019a77ce;
      local_80 = local_80 - 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x38);
      local_48 = uVar5;
    } while( true );
  }
  uVar5 = 0;
  local_38 = (longlong *)0x0;
LAB_019a77ce:
  puVar3 = local_50;
  if (*(int *)((longlong)local_50 + 0xc) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar5 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


