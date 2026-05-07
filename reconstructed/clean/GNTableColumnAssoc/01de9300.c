// Function: FUN_01de9300
// Address: 01de9300
// Size: 1123 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"
//   "GNString"

void* FUN_01de9300(uint32_t param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  void*this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01db9a80();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01de9346;
    }
    local_48 = (int64_t *)0x0;
  }
  else {
LAB_01de9346:
    local_48 = local_40;
    if (local_40 != (int64_t *)0x0) {
      if ((g_026f20e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      (**(code **)(*local_40 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = local_40;
      if (cVar2 == '\0') {
        plVar4 = g_02802688;
      }
      if (plVar4 != (int64_t *)0x0) {
        local_98 = *param_2;
        local_90 = '\0';
        local_88 = *param_3;
        local_80 = '\0';
        (**(code **)(*local_40 + 0x528))(param_1,&local_98,&local_88);
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          *this_ptr = local_40;
          *(void*)(this_ptr + 1) = 1;
          goto LAB_01de95b0;
        }
      }
    }
  }
  lVar1 = g_02724b68;
  if (g_02724b68 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_01ccc2f0(param_1,&local_78);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_50 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*local_50 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = local_50;
    if (cVar2 == '\0') {
      plVar4 = g_02802688;
    }
    if (plVar4 == (int64_t *)0x0) {
      *this_ptr = local_50;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      local_68 = local_50;
      local_60 = '\0';
      FUN_01cfb480();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_48 == (int64_t *)0x0) {
    return this_ptr;
  }
LAB_01de95b0:
  FUN_00d50b20();
  return this_ptr;
}

