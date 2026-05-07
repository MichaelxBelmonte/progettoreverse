// Function: FUN_01a7fb40
// Address: 01a7fb40
// Size: 790 bytes
// Class: Unknown

void FUN_01a7fb40(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t local_88;
  char local_80;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar2 = FUN_01a87c60();
  if (cVar2 == '\0') {
    FUN_01a81c00();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01a78a20(param_1,&local_60);
    if ((local_80 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == 0) {
      FUN_01a81c00();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01a76d90();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01a81c00();
      local_48 = '\x01';
      local_50 = local_88;
      FUN_01a804e0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a77150();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar3 = 0;
      do {
        FUN_01a87c80();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_01a81420();
  }
  return;
}

