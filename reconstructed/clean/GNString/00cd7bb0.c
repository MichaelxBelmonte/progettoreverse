// Function: FUN_00cd7bb0
// Address: 00cd7bb0
// Size: 1043 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00cd7bb0(int64_t *param_1,void*param_2)

{
  int64_t lVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void*puVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  bool bVar10;
  int64_t local_48;
  char local_40;
  
  cVar5 = (**(code **)(*arg1 + 0x3a0))();
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar9 = 0;
    bVar4 = false;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    goto LAB_00cd7f9b;
  }
  (**(code **)(*arg1 + 0x368))();
  lVar9 = local_48;
  if (local_48 == 0) {
    bVar3 = 1;
    lVar9 = 0;
    bVar4 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar3 = 0;
    bVar4 = true;
  }
  else {
    bVar3 = 0;
    bVar4 = true;
  }
  if ((*param_1 == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) {
LAB_00cd7da9:
    puVar8 = (void*)*param_2;
    if (puVar8 == (void*)0x0) {
      puVar8 = (void*)0x0;
      cVar5 = '\0';
    }
    else {
      cVar5 = *(char *)(param_2 + 1);
      if (cVar5 != '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    iVar6 = FUN_00d8c7a0();
    iVar7 = FUN_00d8c7a0();
    if (iVar7 <= iVar6) {
      FUN_00d8c7a0();
      FUN_00d8c7a0();
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      iVar6 = FUN_00d92590();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar6 == 0) goto LAB_00cd7da9;
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025795a8;
    (*g_025795c0)();
    FUN_00d8dbf0();
    cVar5 = '\x01';
  }
  FUN_00d8ef00();
  if (local_48 == lVar9) {
    if ((bool)(bVar3 & local_48 != 0)) {
      if (local_40 != '\0') goto LAB_00cd7e30;
      bVar4 = true;
      FUN_00d50b00();
    }
LAB_00cd7e8c:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar10 = (bool)(bVar4 & lVar9 != 0);
      bVar4 = true;
      lVar9 = local_48;
      if (bVar10) {
        FUN_00d50b20();
      }
      goto LAB_00cd7e8c;
    }
    bVar10 = lVar9 != 0;
    lVar9 = local_48;
    if ((bool)(bVar4 & bVar10)) {
      FUN_00d50b20();
    }
LAB_00cd7e30:
    local_40 = '\0';
    bVar4 = true;
  }
  lVar1 = arg1[8];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00cd0c90();
  if (local_48 == 0) {
    bVar2 = true;
    bVar10 = true;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar2 = false;
    bVar10 = false;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    bVar10 = bVar2;
  }
  *(void*)(this_ptr + 1) = 0;
  if (bVar10) {
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  if ((cVar5 != '\0') && (puVar8 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_00cd7f9b:
  if ((bVar4) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

