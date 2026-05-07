// Function: FUN_01a5c3e0
// Address: 01a5c3e0
// Size: 545 bytes
// Class: MUTool

void FUN_01a5c3e0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_01e1f170();
  if (iVar3 == -1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    iVar3 = FUN_01e1f180();
    if (iVar3 == -1) {
      uVar4 = FUN_01e1f170();
      FUN_01e1f230(param_1,uVar4);
      lVar5 = local_40;
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      uVar4 = FUN_01e1f170();
      FUN_01e1f230(param_1,uVar4);
      uVar4 = FUN_01e1f180();
      FUN_01e26090(param_1,uVar4);
      lVar5 = local_40;
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e26150();
    local_60 = g_026f6e60;
    if (g_026f6e60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_000175c0(param_1,&local_60);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((bVar1) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

