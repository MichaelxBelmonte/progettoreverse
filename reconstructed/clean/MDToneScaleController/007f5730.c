// Function: FUN_007f5730
// Address: 007f5730
// Size: 767 bytes
// Class: MDToneScaleController

void FUN_007f5730(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint32_t uVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_f8;
  char local_f0;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e534b0();
  FUN_007f5d00(this_ptr + 0x80,this_ptr + 0x78,this_ptr + 0x88,this_ptr + 0x90);
  FUN_007f5c60();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_007f5e30();
  FUN_0027c9f0();
  if ((local_f0 == '\0') && (local_f8 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar5 * 8);
        (**(code **)(*plVar1 + 0xa18))();
        local_58 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_58 = '\x01';
        local_60 = local_78;
        uVar4 = (**(code **)(*plVar1 + 0xa88))();
        FUN_01d5eb20(uVar4,&local_60);
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_01d65230();
          local_50 = local_40;
          local_48 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_48 = '\x01';
          (**(code **)(*plVar1 + 0x6a8))();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar2 + 0xc));
    }
    FUN_007f7b50();
  }
  if (local_f8 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

