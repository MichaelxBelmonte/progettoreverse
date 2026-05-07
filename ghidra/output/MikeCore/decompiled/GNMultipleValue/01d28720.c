// Function: FUN_01d28720
// Address: 01d28720
// Size: 1014 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01d28720(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_31;
  
  local_80 = param_1;
  local_78 = param_2;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0xc) < 2) {
    iVar7 = FUN_01d26e20();
    if (iVar7 != -1) {
      local_a0 = *unaff_RSI;
      local_98 = 0;
      local_90 = *local_78;
      local_88 = 0;
      uVar6 = FUN_01d28c90(iVar7,&local_90,local_80);
      uVar10 = (ulonglong)uVar6;
      goto LAB_01d28a58;
    }
LAB_01d28a2b:
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_01d28a58;
  }
  plVar9 = (longlong *)*unaff_RSI;
  if (DAT_0277a3a0 == '\0') {
    iVar7 = ___cxa_guard_acquire();
    if (iVar7 != 0) {
      _DAT_026d3c38 = FUN_00d4fe50();
      _DAT_026d3c20 = "GNMultipleValue";
      _DAT_026d3c28 = 0x18;
      _DAT_026d3c30 = FUN_00050c70;
      _DAT_026d3c40 = 0;
      uRam00000000026d3c48 = 0;
      _DAT_026d3c50 = 0;
      uRam00000000026d3c58 = 0;
      _DAT_026d3c60 = 0;
      uRam00000000026d3c68 = 0;
      _DAT_026d3c70 = 0;
      uRam00000000026d3c78 = 0;
      _DAT_026d3c80 = 0;
      uRam00000000026d3c88 = 0;
      _DAT_026d3c90 = 0;
      uRam00000000026d3c98 = 0;
      _DAT_026d3ca0 = 0;
      uRam00000000026d3ca8 = 0;
      _DAT_026d3cb0 = 0;
      uRam00000000026d3cb8 = 0;
      _DAT_026d3cc0 = 0;
      uRam00000000026d3cc8 = 0;
      _DAT_026d3cd0 = 0;
      uRam00000000026d3cd8 = 0;
      _DAT_026d3ce0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01d28785:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar9 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01d28785;
  }
  lVar2 = *plVar9;
  local_31 = (char)plVar9[1];
  if ((local_31 == '\0') || (lVar2 == 0)) {
    if (lVar2 != 0) goto LAB_01d28809;
    lVar8 = *(longlong *)(unaff_RDI + 0x20);
    if (*(int *)(lVar8 + 0xc) < 1) goto LAB_01d28a2b;
    lVar11 = 0;
    local_40 = lVar2;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar11 * 8);
      local_48 = 0;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      uVar6 = FUN_00d237a0();
      uVar10 = (ulonglong)uVar6;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_c0 = *unaff_RSI;
      local_b8 = 0;
      local_b0 = *local_78;
      local_a8 = 0;
      cVar4 = FUN_01d28c90(uVar10,&local_b0,local_80);
      if (cVar4 == '\0') goto LAB_01d28a56;
      lVar11 = lVar11 + 1;
      lVar8 = *(longlong *)(unaff_RDI + 0x20);
    } while (lVar11 < *(int *)(lVar8 + 0xc));
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
LAB_01d28809:
    FUN_00e987b0();
    uVar6 = *(uint *)(local_70 + 0xc);
    uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x20) + 0xc);
    uVar10 = (ulonglong)uVar1;
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if (uVar6 != uVar1) {
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
LAB_01d28a56:
      uVar10 = 0;
      goto LAB_01d28a58;
    }
    lVar8 = *(longlong *)(unaff_RDI + 0x20);
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar3 = false;
    }
    else {
      lVar11 = 0;
      local_40 = lVar2;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar11 * 8);
        local_58 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar2;
        uVar5 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e987b0();
        lVar2 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar11 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_d0 = *local_78;
        local_c8 = 0;
        uVar6 = FUN_01d28c90(uVar5,&local_d0,local_80);
        uVar10 = (ulonglong)uVar6;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((char)uVar6 == '\0') {
          if (local_31 != '\0') {
            FUN_00d50b20();
          }
          goto LAB_01d28a56;
        }
        lVar11 = lVar11 + 1;
        lVar8 = *(longlong *)(unaff_RDI + 0x20);
      } while (lVar11 < *(int *)(lVar8 + 0xc));
      bVar3 = false;
    }
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  if ((local_31 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
LAB_01d28a58:
  return uVar10 & 0xffffffff;
}


