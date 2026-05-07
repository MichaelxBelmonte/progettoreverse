// Function: FUN_01d27270
// Address: 01d27270
// Size: 941 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d27270(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_31;
  
  local_78 = param_2;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0xc) < 2) {
    iVar5 = FUN_01d26e20();
    if (iVar5 == -1) {
      return;
    }
    local_98 = *unaff_RSI;
    local_90 = 0;
    local_88 = *local_78;
    local_80 = 0;
    FUN_01d27780(iVar5,&local_88);
    return;
  }
  plVar7 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar7 == (longlong *)0x0) {
LAB_01d272d0:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar7 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_01d272d0;
  }
  local_40 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 == '\0') || (local_40 == 0)) {
    if (local_40 == 0) {
      lVar6 = *(longlong *)(unaff_RDI + 0x20);
      if (*(int *)(lVar6 + 0xc) < 1) {
        return;
      }
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = 0;
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar6;
        uVar4 = FUN_00d237a0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = *unaff_RSI;
        local_b0 = 0;
        local_a8 = *local_78;
        local_a0 = 0;
        FUN_01d27780(uVar4,&local_a8);
        lVar8 = lVar8 + 1;
        lVar6 = *(longlong *)(unaff_RDI + 0x20);
      } while (lVar8 < *(int *)(lVar6 + 0xc));
      bVar2 = true;
      goto joined_r0x01d27568;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987b0();
  iVar5 = *(int *)(local_70 + 0xc);
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x20) + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar5 == iVar1) && (lVar6 = *(longlong *)(unaff_RDI + 0x20), 0 < *(int *)(lVar6 + 0xc))) {
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
      local_58 = 0;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar6;
      uVar4 = FUN_00d237a0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e987b0();
      lVar6 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar8 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_c8 = *local_78;
      local_c0 = 0;
      FUN_01d27780(uVar4,&local_c8);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      lVar6 = *(longlong *)(unaff_RDI + 0x20);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
  }
  bVar2 = false;
joined_r0x01d27568:
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return;
}


