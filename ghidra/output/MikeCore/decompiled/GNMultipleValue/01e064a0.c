// Function: FUN_01e064a0
// Address: 01e064a0
// Size: 1547 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e064a0(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01e064f2:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01e064f2;
  }
  lVar1 = *plVar6;
  lVar3 = plVar6[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
LAB_01e0651d:
    plVar6 = (longlong *)unaff_RDI[0x3b];
    if (plVar6 == (longlong *)0x0) {
      FUN_00e99c70();
      if ((((local_40 != (longlong *)0x0) && (plVar6 = local_40, local_38 == '\0')) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
    }
    local_c8 = '\0';
    local_88 = 0;
    lVar2 = unaff_RDI[0x3a];
    local_d0 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar2;
    FUN_00d8ede0();
    local_50 = local_a0;
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar6 + 0x368))(&local_90,&local_d0,&local_50);
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
    (**(code **)(*unaff_RDI + 0x968))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((char)lVar3 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (lVar1 != 0) goto LAB_01e0651d;
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 == (longlong *)0x0) {
    FUN_00d8ede0();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*unaff_RDI + 0x968))();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((longlong *)unaff_RDI[0x3a] != (longlong *)0x0) {
    local_b8 = '\0';
    local_c0 = plVar6;
    (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x388))(param_1,&local_c0);
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*unaff_RDI + 0x958))();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b8 == '\0') {
      return;
    }
    if (local_c0 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = unaff_RSI;
  if (cVar4 == '\0') {
    plVar6 = &DAT_02802688;
  }
  if (*plVar6 != 0) {
    local_b0 = *unaff_RSI;
    local_a8 = '\0';
    (**(code **)(*unaff_RDI + 0x968))();
    if (local_a8 == '\0') {
      return;
    }
    if (local_b0 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar6 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01e06924;
  }
  unaff_RSI = &DAT_02802688;
LAB_01e06924:
  if (*unaff_RSI == 0) {
    return;
  }
  FUN_00d459e0();
                    /* WARNING: Could not recover jumptable at 0x01e06955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x928))();
  return;
}


