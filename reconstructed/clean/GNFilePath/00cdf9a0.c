// Function: FUN_00cdf9a0
// Address: 00cdf9a0
// Size: 708 bytes
// Class: GNFilePath

void FUN_00cdf9a0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  local_58 = g_02775668;
  lVar2 = g_02704030;
  if (cVar4 == '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_02775668 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    iVar5 = (**(code **)(*plVar1 + 0x598))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 1) {
      (**(code **)(*(int64_t *)*arg1 + 0x470))();
      lVar2 = local_38;
      if ((((local_30 == '\0') && (local_38 != 0)) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02704030;
      if (g_02704030 != 0) {
        FUN_00d50b00();
      }
      local_48 = lVar3;
      local_40 = '\x01';
      FUN_000175c0(param_1,&local_48);
      lVar3 = *(int64_t *)(this_ptr + 0x10);
      if (lVar3 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            *(void*)(this_ptr + 0x10) = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = *(int64_t *)(this_ptr + 0x10);
            *(int64_t *)(this_ptr + 0x10) = local_38;
          }
        }
        else {
          local_30 = '\0';
          *(int64_t *)(this_ptr + 0x10) = local_38;
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x470))();
      lVar2 = *(int64_t *)(this_ptr + 0x10);
      if (lVar2 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            *(void*)(this_ptr + 0x10) = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = *(int64_t *)(this_ptr + 0x10);
            *(int64_t *)(this_ptr + 0x10) = local_38;
          }
        }
        else {
          local_30 = '\0';
          *(int64_t *)(this_ptr + 0x10) = local_38;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar1 = (int64_t *)*arg1;
    if (g_02704030 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_68);
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(void*)(this_ptr + 0x10) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0x10);
          *(int64_t *)(this_ptr + 0x10) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(int64_t *)(this_ptr + 0x10) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

