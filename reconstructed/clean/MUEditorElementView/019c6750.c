// Function: FUN_019c6750
// Address: 019c6750
// Size: 881 bytes
// Class: MUEditorElementView

uint64_t FUN_019c6750(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  void*puVar5;
  int64_t local_d0 [2];
  uint8_t local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  char local_70;
  uint64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  uVar4 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0xe20))();
    if (local_a8 == (void*)0x0) {
      uVar4 = 1;
    }
    else {
      (**(code **)(*this_ptr + 0xe20))();
      uVar4 = (uint64_t)(*(int *)(local_48 + 0xc) == 0);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      (**(code **)(*this_ptr + 0xe20))();
      lVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c0 = 1;
      uVar3 = FUN_019c5150();
      puVar5 = local_a8;
      if (local_a8 == (void*)0x0) {
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        puVar5 = (void*)0x0;
      }
      else {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        local_34 = 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (((param_2 != '\0') && (puVar5 != (void*)0x0)) &&
         (*(int *)((int64_t)puVar5 + 0xc) != 0)) {
        FUN_019c5bf0();
        FUN_00d403d0();
        local_b8 = g_026de568;
        if (g_026de568 != 0) {
          FUN_00d50b00();
        }
        local_b0 = '\x01';
        FUN_00d50b00();
        lVar1 = g_026de560;
        if (g_026de560 != 0) {
          FUN_00d50b00();
        }
        local_d0[0] = lVar1;
        FUN_00083ea0(2,local_d0);
        FUN_000b4da0();
        uVar4 = local_78;
        local_50 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_50 = '\x01';
        local_58 = uVar4;
        FUN_00d40470(&local_58,&stack0xffffffffffffff98,1,0);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = (void*)&g_0253d630;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = &g_024c5048;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0xda0))();
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if ((char)local_34 == '\0' && puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffff;
}

