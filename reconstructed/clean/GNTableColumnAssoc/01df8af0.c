// Function: FUN_01df8af0
// Address: 01df8af0
// Size: 983 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"

void FUN_01df8af0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01db9a80();
  plVar2 = local_40;
  local_58 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
  }
  if (plVar2 != (int64_t *)0x0) {
    if ((g_026f20e8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026f2038 = FUN_001ba850();
      g_026f2020 = "GNTableColumnAssoc";
      g_026f2028 = 0x58;
      g_026f2030 = FUN_001f28d0;
      g_026f2040 = 0;
      ram_00000000026f2048 = 0;
      g_026f2050 = 0;
      ram_00000000026f2058 = 0;
      g_026f2060 = 0;
      ram_00000000026f2068 = 0;
      g_026f2070 = 0;
      ram_00000000026f2078 = 0;
      g_026f2080 = 0;
      ram_00000000026f2088 = 0;
      g_026f2090 = 0;
      ram_00000000026f2098 = 0;
      g_026f20a0 = 0;
      ram_00000000026f20a8 = 0;
      g_026f20b0 = 0;
      ram_00000000026f20b8 = 0;
      g_026f20c0 = 0;
      ram_00000000026f20c8 = 0;
      g_026f20d0 = 0;
      ram_00000000026f20d8 = 0;
      g_026f20e0 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar2 = local_58;
    plVar5 = local_58;
    if (cVar3 == '\0') {
      plVar5 = g_02802688;
    }
    if (plVar5 != (int64_t *)0x0) {
      uVar6 = extraout_XMM0_Da;
      if (local_58 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
      }
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      uVar6 = FUN_01ccab60(uVar6,&local_b8);
      local_50 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      lVar1 = g_027edfd0;
      if (local_50 != (int64_t *)0x0) {
        if (g_027edfd0 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_a8 = lVar1;
        local_a0 = '\x01';
        FUN_01ccaae0(uVar6,&local_a8);
        local_48 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_98 = *param_2;
        local_90 = '\0';
        local_88 = *param_1;
        local_80 = '\0';
        local_78 = local_50;
        local_70 = '\0';
        FUN_01d27890(&local_78,&local_88);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        local_68 = *param_1;
        local_60 = '\0';
        uVar6 = FUN_01ed2ec0();
        FUN_01dd3d20(uVar6,0);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x510))();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

