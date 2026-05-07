// Function: FUN_01edcd90
// Address: 01edcd90
// Size: 1199 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNImage"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01edcd90(undefined4 param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  (**(code **)(*unaff_RDI + 0x4c8))(param_1,&local_80);
  plVar5 = local_40;
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
      local_48 = '\x01';
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      local_48 = '\x01';
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = '\x01';
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((DAT_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_01edce32:
    plVar5 = DAT_02802688;
    plVar6 = DAT_02802688;
    cVar3 = DAT_02802690;
    if (DAT_02802690 == '\0') goto LAB_01edce9c;
LAB_01edce8d:
    plVar6 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) goto LAB_01edce9c;
    FUN_00d50b00();
LAB_01edcea5:
    FUN_00e987e0();
    plVar6 = local_40;
    cVar2 = local_48;
    plVar5 = local_50;
    if (local_50 == local_40) {
      if ((local_48 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_01edcef1;
        FUN_00d50b00();
        goto LAB_01edcf37;
      }
LAB_01edcf3b:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar6;
        if ((cVar2 != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01edcf37:
        local_48 = '\x01';
        goto LAB_01edcf3b;
      }
      local_50 = local_40;
      if ((local_48 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01edcef1:
      local_48 = '\x01';
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01edce32;
    plVar5 = local_50;
    plVar6 = local_50;
    cVar3 = local_48;
    if (local_48 != '\0') goto LAB_01edce8d;
LAB_01edce9c:
    if (plVar6 != (longlong *)0x0) goto LAB_01edcea5;
  }
  FUN_01ccad60();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_50;
  if ((DAT_026ed470 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027f7318 = FUN_00d4fe50();
    DAT_027f7300 = "GNImage";
    _DAT_027f7308 = 0x68;
    _DAT_027f7310 = FUN_001cdcc0;
    _DAT_027f7320 = 0;
    uRam00000000027f7328 = 0;
    _DAT_027f7330 = 0;
    uRam00000000027f7338 = 0;
    _DAT_027f7340 = 0;
    uRam00000000027f7348 = 0;
    _DAT_027f7350 = 0;
    uRam00000000027f7358 = 0;
    _DAT_027f7360 = 0;
    uRam00000000027f7368 = 0;
    _DAT_027f7370 = 0;
    uRam00000000027f7378 = 0;
    _DAT_027f7380 = 0;
    uRam00000000027f7388 = 0;
    _DAT_027f7390 = 0;
    uRam00000000027f7398 = 0;
    _DAT_027f73a0 = 0;
    uRam00000000027f73a8 = 0;
    _DAT_027f73b0 = 0;
    uRam00000000027f73b8 = 0;
    _DAT_027f73c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01edcfca:
    plVar6 = DAT_02802688;
    cVar3 = DAT_02802690;
    if (DAT_02802690 == '\0') goto LAB_01edcffe;
LAB_01edcfef:
    if (plVar6 == (longlong *)0x0) goto LAB_01edcffe;
    FUN_00d50b00();
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01edcfca;
    plVar6 = local_50;
    cVar3 = local_48;
    if (local_48 != '\0') goto LAB_01edcfef;
LAB_01edcffe:
    if (plVar6 == (longlong *)0x0) {
      local_68 = '\0';
      local_70 = 0;
      (**(code **)(*plVar5 + 0x958))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01edd08e;
    }
  }
  (**(code **)(*plVar6 + 0x148))();
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
  (**(code **)(*plVar5 + 0x958))();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
LAB_01edd08e:
  FUN_00d50b20();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


