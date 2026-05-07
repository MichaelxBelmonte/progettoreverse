// Function: FUN_019a6f50
// Address: 019a6f50
// Size: 657 bytes
// Class: MUEditorSubview


undefined8 * FUN_019a6f50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  char cVar10;
  longlong **pplVar11;
  ulonglong local_68;
  longlong *local_58;
  char local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RSI + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  local_68 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    plVar9 = (longlong *)0x0;
    local_40 = 0;
    local_48 = puVar4;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar7 * 8);
      local_50 = '\0';
      local_58 = plVar2;
      uVar6 = FUN_0082d880();
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar11 = &local_58;
        if ((char)uVar6 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      puVar4 = local_48;
      plVar8 = *pplVar11;
      if (plVar8 == plVar9) {
        plVar3 = plVar9;
        local_38 = local_40;
        if (((char)local_40 == '\0') && (plVar8 != (longlong *)0x0)) {
          plVar8 = plVar9;
          if (*(char *)(pplVar11 + 1) != '\0') goto LAB_019a7055;
          local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          FUN_00d50b00();
        }
      }
      else if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        puVar4 = local_48;
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar3 = plVar8;
        if (((char)local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_019a7055:
        *(undefined1 *)(pplVar11 + 1) = 0;
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar3 = plVar8;
        puVar4 = local_48;
      }
      plVar9 = plVar3;
      if ((local_50 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x928))();
        plVar8 = local_58;
        plVar2 = (longlong *)*param_2;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == plVar2) {
          local_50 = '\0';
          local_58 = plVar9;
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)local_68 < 2) goto LAB_019a718f;
      local_68 = local_68 - 1;
      lVar5 = *(longlong *)(unaff_RSI + 0x38);
      local_40 = local_38;
    } while( true );
  }
  cVar10 = '\0';
  plVar9 = (longlong *)0x0;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
joined_r0x019a71b2:
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((cVar10 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_019a718f:
  cVar10 = (char)local_38;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  goto joined_r0x019a71b2;
}


