// Function: FUN_00cd94d0
// Address: 00cd94d0
// Size: 868 bytes
// Class: GNString


void FUN_00cd94d0(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  bool bVar11;
  longlong local_b0;
  char local_a8;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  int local_64;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  undefined8 *local_40;
  char local_31;
  
  lVar2 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x20) + 0x10);
  lVar10 = (ulonglong)(param_2 - 1) * 0x23c;
  if (*(longlong *)(lVar2 + 8 + lVar10) == 0) {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    goto LAB_00cd981a;
  }
  FUN_00c8e690();
  puVar7 = local_50;
  if ((((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_48 != '\0')
      ) && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = puVar7;
  FUN_00c92170();
  local_31 = puVar7 != (undefined8 *)0x0;
  plVar3 = *(longlong **)(*unaff_RSI + 0x38);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x3a0))();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  piVar9 = (int *)(lVar2 + lVar10 + 8);
  local_64 = *piVar9;
  (**(code **)(*plVar3 + 0x380))(&local_64,local_40[2]);
  if (local_50 == (undefined8 *)0x0) {
    if (local_64 != *piVar9) goto LAB_00cd9638;
  }
  else {
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
LAB_00cd9638:
    lVar5 = DAT_02774d90;
    if (DAT_02774d90 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(longlong **)(*(longlong *)(*unaff_RSI + 0x48) + 0x20);
  puVar7 = local_40;
  if (plVar4 != (longlong *)0x0) {
    local_88 = local_40;
    local_80 = '\0';
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      if (*(short *)(lVar2 + lVar10 + 0x24 + uVar8 * 2) == 0) break;
      bVar11 = uVar8 < 0x100;
      uVar8 = uVar1;
    } while (bVar11);
    if ((int)uVar1 == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0();
    }
    lVar5 = local_78;
    local_58 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    puVar7 = local_40;
    local_58 = '\x01';
    local_60 = lVar5;
    (**(code **)(*plVar4 + 0x20))
              (&local_60,&local_88,*(undefined4 *)(lVar2 + 0x1c + lVar10),
               *(undefined4 *)(lVar2 + 0x18 + lVar10));
    puVar6 = local_50;
    if (puVar7 == local_50) {
LAB_00cd97a1:
      if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_31 = '\x01';
        bVar11 = puVar7 != (undefined8 *)0x0;
        puVar7 = puVar6;
        if (bVar11) {
          FUN_00d50b20();
        }
        goto LAB_00cd97a1;
      }
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_48 = '\0';
      local_31 = '\x01';
      puVar7 = local_50;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((local_31 == '\0') && (puVar7 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
LAB_00cd981a:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


