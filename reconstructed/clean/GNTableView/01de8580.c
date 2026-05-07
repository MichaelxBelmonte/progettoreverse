// Function: FUN_01de8580
// Address: 01de8580
// Size: 1078 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


uint64_t FUN_01de8580(uint64_t param_1,char param_2)

{
  int iVar1;
  uint3 uVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  char cVar7;
  uint32_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  undefined7 uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  int64_t *local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar12 = local_40;
  lVar4 = g_027f2e58;
  if (g_027f2e58 != 0) {
    FUN_00d50b00();
  }
  uVar8 = (**(code **)(*plVar12 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 != '\0') {
      (**(code **)(*this_ptr + 0x540))();
    }
    goto LAB_01de899b;
  }
  FUN_01cae990();
  plVar12 = local_40;
  lVar4 = g_027ef970;
  if (g_027ef970 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar12 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = g_02800140;
  if (cVar6 == '\0') {
    FUN_01cae990();
    plVar12 = local_40;
    local_80 = g_027ef978;
    if (g_027ef978 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    cVar6 = (**(code **)(*plVar12 + 0x50))();
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      FUN_01cae990();
      local_70 = g_02725a10;
      if (g_02725a10 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      cVar7 = (**(code **)(*local_c0 + 0x50))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_02800140;
    if (cVar7 == '\0') {
      local_50 = *arg1;
      local_48 = '\0';
      uVar9 = FUN_01d827c0(param_1,param_2);
      uVar10 = (uint64_t)uVar9;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01de899b;
    }
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar4;
    local_58 = '\x01';
    FUN_01ccaae0(param_1,&local_60);
    plVar12 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar12 = (int64_t *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) {
      uVar10 = 0;
      goto LAB_01de899b;
    }
    (**(code **)(*plVar12 + 0x3f8))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      uVar10 = 0;
    }
    else {
      (**(code **)(*plVar12 + 0x3f8))();
      iVar1 = *(int *)((int64_t)local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      uVar2 = (uint3)((uint)iVar1 >> 8);
      uVar10 = (uint64_t)CONCAT31(uVar2,iVar1 != 0);
      if ((iVar1 != 0) && (param_2 != '\0')) {
        uVar10 = CONCAT71((uint7)uVar2,1);
        FUN_01d25b00();
      }
    }
  }
  else {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar4;
    local_88 = '\x01';
    FUN_01ccaae0(param_1,&local_90);
    plVar12 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar12 = (int64_t *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    uVar11 = (undefined7)((uint64_t)lVar4 >> 8);
    uVar10 = CONCAT71(uVar11,plVar12 != (int64_t *)0x0);
    if ((plVar12 != (int64_t *)0x0) && (param_2 != '\0')) {
      uVar10 = CONCAT71(uVar11,1);
      FUN_01d25910();
    }
  }
  if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01de899b:
  return uVar10 & 0xffffffff;
}

