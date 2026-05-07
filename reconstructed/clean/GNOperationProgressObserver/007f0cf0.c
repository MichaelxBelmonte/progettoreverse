// Function: FUN_007f0cf0
// Address: 007f0cf0
// Size: 1080 bytes
// Class: GNOperationProgressObserver

void FUN_007f0cf0(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  char cVar4;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar5;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar5 = FUN_01f27fe0();
  local_b0 = *arg1;
  local_a8 = '\0';
  FUN_002a0320(uVar5,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar1 = local_40;
    FUN_014ffc90();
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_90 = *arg1;
      local_88 = '\0';
      FUN_01500300();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        uVar5 = FUN_01f27fe0();
        local_80 = plVar1;
        local_78 = '\0';
        FUN_002a0320(uVar5,&local_80);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_70 = plVar1;
          local_68 = '\0';
          uVar3 = FUN_00742b20();
          FUN_01500530(0,uVar3);
          plVar1 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            if (param_2 != (void*)0x0) {
              uVar5 = FUN_00b7a6e0();
              *param_2 = uVar5;
            }
            *this_ptr = plVar1;
            *(void*)(this_ptr + 1) = 1;
            FUN_00d50b20();
            FUN_00d50b20();
            return;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_a0 = *arg1;
    local_98 = '\0';
    uVar3 = FUN_00742b20();
    FUN_01500530(0,uVar3);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      if (param_2 != (void*)0x0) {
        uVar5 = FUN_00b7a6e0();
        *param_2 = uVar5;
      }
      *this_ptr = plVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    FUN_00d50b20();
  }
  return;
}

