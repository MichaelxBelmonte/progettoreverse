// Function: FUN_0183d890
// Address: 0183d890
// Size: 817 bytes
// Class: Unknown

void FUN_0183d890(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t *in_RCX;
  int64_t *in_RDX;
  int64_t *this_ptr;
  int64_t *in_R8;
  int64_t lVar5;
  uint32_t uVar6;
  int64_t local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*this_ptr != 0) {
    local_b8 = in_R8;
    local_b0 = in_RCX;
    local_a8 = in_RDX;
    local_70 = param_4;
    local_6c = param_3;
    local_68 = param_2;
    local_64 = param_1;
    pvVar3 = _pthread_getspecific((void*)in_RCX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    local_50 = local_60;
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    uVar6 = FUN_0147ce20();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 0xc) != 0) && (FUN_00d242c0(uVar6,0), 0 < *(int *)(lVar2 + 0xc))) {
        lVar5 = 0;
        do {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific((void*)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pVar4 = (void*)in_RCX;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0183da80;
            }
          }
          else if (local_40 != 0) {
LAB_0183da80:
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a0 = *local_a8;
            local_98 = '\0';
            local_90 = *local_b0;
            local_88 = '\0';
            local_80 = *local_b8;
            local_78 = '\0';
            in_RCX = &local_c0;
            FUN_014c7490(local_64,local_68,local_6c,local_70);
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(lVar2 + 0xc));
      }
      FUN_00d50b20();
    }
  }
  return;
}

