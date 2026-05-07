// Function: FUN_01c0cd20
// Address: 01c0cd20
// Size: 1034 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c0cd20(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  char local_48;
  char local_39;
  char local_38 [8];
  
  if (*param_2 == 0) goto LAB_01c0d085;
  FUN_01c19440();
  plVar5 = local_60;
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != arg1) goto LAB_01c0d085;
  pplVar6 = &local_60;
  FUN_01c0a900();
  pcVar4 = local_38;
  if (local_58[0] != '\0') {
    pcVar4 = local_58;
  }
  local_38[0] = local_58[0];
  *pcVar4 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_60 + 0x3f0))();
  plVar5 = local_50;
  local_60 = local_50;
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) {
      local_60 = (int64_t *)0x0;
      local_58[0] = '\x01';
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_58[0] = '\x01';
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = '\x01';
  }
  FUN_01c0e5e0();
  iVar1 = *(int *)((int64_t)local_50 + 0xc);
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00276fd0();
    if (plVar5 == (int64_t *)0x0) {
LAB_01c0ce1d:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c0ce1d;
    }
    local_39 = *(char *)(pplVar6 + 1);
    if ((local_39 == '\0') || (*pplVar6 == (int64_t *)0x0)) {
      if (*pplVar6 == (int64_t *)0x0) goto joined_r0x01c0d0e0;
    }
    else {
      FUN_00d50b00();
    }
    FUN_00cd64a0();
    FUN_00cd0de0();
    cVar3 = (**(code **)(*local_50 + 0x50))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00cd64a0();
      FUN_00cd0b60();
      plVar2 = local_50;
      plVar7 = plVar5;
      if (plVar5 == local_50) {
LAB_01c0cfa4:
        if ((local_48 != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = plVar2;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_60 = plVar2;
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_58[0] = '\x01';
          plVar5 = local_50;
          goto LAB_01c0cfa4;
        }
        local_60 = local_50;
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        local_58[0] = '\x01';
        local_48 = '\0';
      }
      plVar5 = plVar7;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_39 != '\0') {
      FUN_00d50b20();
    }
  }
joined_r0x01c0d0e0:
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)arg1[2] + 0x3f0))();
    plVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar3 = (**(code **)(*plVar5 + 0x50))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01c0ec80();
      *(void*)(this_ptr + 1) = 0;
      if (local_48 == '\0') {
        if (local_50 == (int64_t *)0x0) {
          local_50 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      *this_ptr = local_50;
      *(void*)(this_ptr + 1) = 1;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_38[0] == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
LAB_01c0d085:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

