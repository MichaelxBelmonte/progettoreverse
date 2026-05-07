// Function: FUN_01ec9880
// Address: 01ec9880
// Size: 776 bytes
// Class: GNMultipleValue

void FUN_01ec9880(uint64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xc] == 0) {
    local_38 = '\0';
    local_40 = 0;
    local_78 = '\0';
    local_80 = 0;
    FUN_01ccd250(param_1,&local_80);
    lVar5 = local_40;
    lVar6 = this_ptr[0xc];
    if (lVar6 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0xc] = lVar5;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    lVar5 = local_80;
    lVar6 = this_ptr[0xd];
    if (lVar6 != local_80) {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0xd] = lVar5;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar6;
  local_88 = '\x01';
  FUN_01ccab60(param_1,&local_90);
  lVar6 = local_40;
  if (local_40 == 0) {
    bVar2 = true;
    lVar6 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01ec99b7;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar2 = false;
  }
LAB_01ec99b7:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) goto LAB_01ec9b7d;
  FUN_01ccad60();
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
joined_r0x01ec9a07:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01ec9a07;
  }
  local_70 = lVar5;
  FUN_01d6f8d0();
  (**(code **)(*this_ptr + 0x520))();
  lVar3 = local_40;
  if (local_40 != 0) {
    local_48 = lVar6;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
        local_60 = 0;
        lVar5 = this_ptr[0xd];
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar5;
        (**(code **)(*plVar1 + 0x98))(param_1,&local_68);
        lVar4 = local_40;
        local_50 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar5 = local_70;
        local_50 = '\x01';
        local_58 = lVar4;
        FUN_01d6f990();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
    *(void*)((int64_t)this_ptr + 0x72) = 1;
    FUN_00d50b20();
    lVar6 = local_48;
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
LAB_01ec9b7d:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}

