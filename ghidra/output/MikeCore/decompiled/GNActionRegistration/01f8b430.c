// Function: FUN_01f8b430
// Address: 01f8b430
// Size: 1115 bytes
// Class: GNActionRegistration
// String references:
//   "GNActionRegistration"


/* WARNING: Removing unreachable block (ram,0x01f8b598) */
/* WARNING: Removing unreachable block (ram,0x01f8b5a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f8b430(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_c8;
  char local_c0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  FUN_01eda0f0();
  plVar1 = local_40;
  if ((DAT_026e7b78 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f8b493:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01f8b493;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_01caf470();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01f8b7c7;
    local_68 = local_40;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = local_40;
    if (local_40 == (longlong *)0x0) goto LAB_01f8b7c7;
  }
  iVar4 = FUN_01dd4c80();
  if (-1 < iVar4) {
    uVar6 = FUN_01da4890();
    local_a8 = local_68;
    local_a0 = '\0';
    FUN_01da4a10(uVar6,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f8bbb0();
  if (local_40 != (longlong *)0x0) {
    lVar2 = *unaff_RSI;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      plVar1 = (longlong *)unaff_RDI[0x12];
      FUN_01d3d730();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_98 = *unaff_RSI;
      local_90 = '\0';
      FUN_01d68520();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x920))();
  FUN_01da4890();
  FUN_01f27fe0();
  FUN_01f28c30();
  local_50 = local_88;
  local_48 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_48 = '\x01';
  FUN_01da8a40();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  lVar2 = unaff_RDI[0x10];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_78 = lVar2;
  (**(code **)(*unaff_RDI + 0x5e8))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f8b7c7:
  FUN_00d50b20();
  return;
}


