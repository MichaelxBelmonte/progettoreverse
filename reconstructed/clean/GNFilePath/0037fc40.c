// Function: FUN_0037fc40
// Address: 0037fc40
// Size: 1391 bytes
// Class: GNFilePath
// String references:
//   "*%@*"

void FUN_0037fc40(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  uint local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x970))();
  local_68 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0037fca1;
    }
LAB_0037fcf8:
    bVar1 = true;
  }
  else {
    if (local_58 == 0) goto LAB_0037fcf8;
LAB_0037fca1:
    iVar4 = FUN_00d8c7a0();
    if (iVar4 != 0) {
      iVar4 = FUN_00d8c7a0();
      if (2 < iVar4) {
        FUN_00d95590();
        local_98 = local_b8;
        local_90 = 0;
        if ((char)local_b0 == '\0') {
          if (local_b8 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_b0 = local_b0 & 0xffffff00;
        }
        local_90 = '\x01';
        FUN_00d91bc0();
        local_60 = local_58;
        if (local_50 == '\0') {
          if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (local_60 != 0) {
          local_50 = '\0';
          local_58 = 0;
          local_48 = local_60;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar4 = -local_40._4_4_;
              }
              else {
                iVar4 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar4);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar4 = 0;
              }
              local_40 = CONCAT44(iVar4,(int)local_40);
            }
            lVar2 = g_02704020;
            lVar6 = (int64_t)(int)local_40;
            iVar4 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar4);
            if (*(int *)(local_48 + 0xc) <= iVar4) break;
            local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar6 * 8);
            if (g_02704020 != 0) {
              FUN_00d50b00();
            }
            lVar6 = g_02704028;
            if (g_02704028 != 0) {
              FUN_00d50b00();
            }
            lVar3 = local_58;
            local_108 = lVar6;
            local_100 = '\x01';
            local_b0 = 1;
            local_b8 = &g_024c5048;
            local_a0 = 0;
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            local_a8 = lVar3;
            local_a0 = '\x01';
            FUN_00d8cb40();
            local_88 = local_c8;
            local_80 = 0;
            if (local_c0 == '\0') {
              if (local_c8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c0 = '\0';
            }
            local_80 = '\x01';
            FUN_00d14780(&local_88,&local_108);
            lVar6 = local_d8;
            if (local_d0 == '\0') {
              if (local_d8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d0 = '\0';
            }
            FUN_00d21140();
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            local_b8 = &g_024c5048;
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00018280();
        }
        if (*(int *)((int64_t)puVar5 + 0xc) != 0) {
          local_f0 = '\0';
          local_f8 = puVar5;
          FUN_00c6d890();
          local_78 = local_58;
          local_70 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_70 = '\x01';
          FUN_01c21720();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_003801b7;
    }
    bVar1 = false;
  }
  local_e0 = '\0';
  local_e8 = 0;
  FUN_01c21720();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    return;
  }
LAB_003801b7:
  FUN_00d50b20();
  return;
}

