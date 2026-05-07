// Function: FUN_00c2fa50
// Address: 00c2fa50
// Size: 1187 bytes
// Class: GNOverloudTapedesk

uint64_t FUN_00c2fa50(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t local_118;
  uint8_t local_110;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  *(void*)(this_ptr + 0xb0) = 0;
  lVar1 = g_0276cb18;
  plVar6 = (int64_t *)*param_1;
  if (g_0276cb18 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_0276caf8;
  if (cVar2 == '\0') {
    plVar6 = (int64_t *)*param_1;
    if (g_0276caf8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    uVar3 = (**(code **)(*plVar6 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 == '\0') {
      local_118 = *param_2;
      local_110 = 0;
      local_a0 = *param_1;
      local_98 = '\0';
      local_90 = *param_3;
      local_88 = '\0';
      uVar5 = FUN_00c17aa0(&local_a0,&local_118,&local_90);
      uVar7 = (uint64_t)uVar5;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_00d45870();
      *(void*)(*param_2 + 0xd8) = uVar4;
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    }
  }
  else {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar1 = g_0276cb20;
    if (g_0276cb20 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    local_60 = local_80;
    local_58 = 0;
    lVar1 = g_0276cb28;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
        lVar1 = g_0276cb28;
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    g_0276cb28 = lVar1;
    if (lVar1 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_0276cb30;
    if (g_0276cb30 != 0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_c8 = '\0';
    local_d0 = plVar6;
    local_70 = this_ptr;
    FUN_00d40470(&local_d0,&local_70,3,3);
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0276cb28;
    if (g_0276cb28 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    FUN_000175c0();
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
    uVar5 = FUN_00c70bc0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar5 != '\0') {
      *(void*)(this_ptr + 0xb0) = 1;
    }
    FUN_00d50b20();
    uVar7 = (uint64_t)uVar5 ^ 1;
  }
  return uVar7;
}

