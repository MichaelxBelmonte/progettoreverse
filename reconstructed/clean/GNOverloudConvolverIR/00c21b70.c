// Function: FUN_00c21b70
// Address: 00c21b70
// Size: 995 bytes
// Class: GNOverloudConvolverIR
// String references:
//   "_samples"
//   "GNOverloudConvolverIR"

void FUN_00c21b70(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a5e88 != 0) && (g_028a5e91 != '\0')) goto LAB_00c21dc3;
  uVar5 = FUN_00e8cb50();
  if (g_028a5e88 != 0) {
    g_028a5e91 = '\x01';
    FUN_00e8cb70();
    goto LAB_00c21dc3;
  }
  local_88 = *param_2;
  local_80 = '\0';
  FUN_00d630a0(uVar5,&local_88);
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
  uVar5 = FUN_01e33cd0();
  lVar4 = g_028a5e88;
  if (g_028a5e88 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
      }
      else {
        uVar5 = FUN_00d50b00();
        lVar4 = local_40;
      }
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
    }
    bVar1 = g_028a5e88 != 0;
    g_028a5e88 = lVar4;
    if (bVar1) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((lVar4 != 0) && (g_028a5e90 == '\0')) {
    g_028a5e90 = '\x01';
    uVar5 = FUN_00e8cb90();
    lVar4 = local_40;
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((g_0276df80 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_01, iVar3 != 0)) {
    g_0276ded0 = FUN_00d4fe50();
    g_0276deb8 = "GNOverloudConvolverIR";
    g_0276dec0 = 0x38;
    g_0276dec8 = FUN_00c40fb0;
    g_0276ded8 = 0;
    ram_000000000276dee0 = 0;
    g_0276dee8 = 0;
    ram_000000000276def0 = 0;
    g_0276def8 = 0;
    ram_000000000276df00 = 0;
    g_0276df08 = 0;
    ram_000000000276df10 = 0;
    g_0276df18 = 0;
    ram_000000000276df20 = 0;
    g_0276df28 = 0;
    ram_000000000276df30 = 0;
    g_0276df38 = 0;
    ram_000000000276df40 = 0;
    g_0276df48 = 0;
    ram_000000000276df50 = 0;
    g_0276df58 = 0;
    ram_000000000276df60 = 0;
    g_0276df68 = 0;
    ram_000000000276df70 = 0;
    g_0276df78 = 0;
    uVar5 = ___cxa_guard_release();
  }
  lVar4 = FUN_00e85ef0(uVar5,1);
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0(extraout_XMM0_Da,1);
    if (lVar4 == 0) {
      local_68 = 0;
    }
    else {
      lVar4 = *(int64_t *)(lVar4 + 0x28);
      local_68 = lVar4;
      if (lVar4 != 0) goto LAB_00c21d32;
    }
LAB_00c21d78:
    bVar1 = true;
    lVar4 = 0;
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x30);
    local_68 = lVar4;
    if (lVar4 == 0) goto LAB_00c21d78;
LAB_00c21d32:
    FUN_00d50b00();
    bVar1 = false;
    local_68 = lVar4;
  }
  local_38 = '\0';
  local_40 = lVar4;
  FUN_00d23f50();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  g_028a5e91 = '\x01';
  FUN_00e8cb70();
LAB_00c21dc3:
  (**(code **)(*(int64_t *)*param_2 + 0x5e0))();
  lVar4 = g_0276ca08;
  if (g_0276ca08 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar4;
  local_38 = '\0';
  cVar2 = FUN_00c9ff50();
  uVar5 = extraout_XMM0_Da_00;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_78 = *param_2;
    local_70 = '\0';
    FUN_00d630a0(uVar5,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = g_028a5e88;
    if (g_028a5e88 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

