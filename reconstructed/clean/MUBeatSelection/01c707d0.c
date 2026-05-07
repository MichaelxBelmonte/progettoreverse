// Function: FUN_01c707d0
// Address: 01c707d0
// Size: 869 bytes
// Class: MUBeatSelection
// String references:
//   "MUBeatSelection"
// === MUBeatSelection properties ===
//                   _selectionIsTemporary
//                   _isResizable
//                   _drawsBottomBorder
//                   _drawsTopBorder
//                   _showsRegionBar
//                   _tempoEditorDelegate
//                   _showsDestinationRegionStart
//                   _destinationRegionStartAlpha
//                   _destinationRegionStart
//                   _currentRegionStart
//                   _selectedSubdivisionIndex
//                   _enabledRegionIndex


uint64_t FUN_01c707d0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar8 = FUN_01ca6970();
  local_88 = g_027ebec8;
  if (g_027ebec8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar7 = &local_50;
  FUN_01cacbe0(uVar8,&local_88);
  plVar1 = local_50;
  FUN_0119c4c0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01c7084f:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c7084f;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_01c70a5e;
  }
  local_58 = CONCAT44(local_58._4_4_,param_2);
  uVar8 = FUN_01ca6970();
  local_78 = g_027ebed0;
  if (g_027ebed0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_50;
  uVar8 = FUN_01cacbe0(uVar8,&local_78);
  plVar1 = local_50;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_01c70930:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01c70930;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
  }
  else {
    local_60 = '\0';
    local_68 = plVar1;
    uVar4 = FUN_016bf700(uVar8,0);
    uVar6 = (uint64_t)uVar4;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)local_58 & (byte)uVar4) != 0) {
      plVar2 = *(int64_t **)(this_ptr + 0x170);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_58 = (**(code **)(*plVar2 + 0x388))(*(void*)(this_ptr + 0x254));
      FUN_00d50b20();
      local_90 = 0;
      uVar6 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
      local_98 = plVar1;
      FUN_01c70ce0((int)local_58,&local_98);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c70a5e:
  return uVar6 & 0xffffffff;
}

