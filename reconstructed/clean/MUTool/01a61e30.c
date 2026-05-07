// Function: FUN_01a61e30
// Address: 01a61e30
// Size: 1147 bytes
// Class: MUTool

void FUN_01a61e30(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  uint64_t uVar4;
  void* pVar5;
  char *pcVar6;
  uint32_t uVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  byte bVar9;
  char cVar10;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  lVar8 = local_58;
  pVar5 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
  pcVar6 = local_38;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = FUN_00e8b990();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_01a62243;
  FUN_0006e1c0();
  local_68 = FUN_00e86210();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_027e3ba0;
  if (g_027e3ba0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  lVar2 = local_58;
  if (local_58 == 0) {
    bVar9 = 1;
    local_3c = 0;
  }
  else {
    if (local_50[0] == '\0') {
      uVar4 = FUN_00d50b00();
      local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      bVar9 = 0;
      if ((local_50[0] == '\0') || (bVar9 = 0, local_58 == 0)) goto LAB_01a61f96;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_50[0] = '\0';
    }
    local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar9 = 0;
  }
LAB_01a61f96:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)(this_ptr + 0x1f8);
  local_80 = 0;
  local_48 = lVar2;
  (**(code **)(*(int64_t *)(this_ptr + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_80 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_d8 = lVar2;
  local_d0 = '\0';
  local_88 = plVar1;
  FUN_00cbadd0(&local_d8,&local_e8);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    (**(code **)(*local_88 + 0x10))();
    FUN_00d50b20();
  }
  lVar8 = g_026d83e0;
  if (g_026d83e0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar8;
  local_c0 = '\x01';
  FUN_00c841b0();
  lVar8 = local_48;
  lVar2 = local_58;
  if (local_48 == local_58) {
    uVar7 = local_3c;
    if ((bool)(bVar9 & local_48 != 0)) {
      if (local_50[0] != '\0') goto LAB_01a620e4;
      FUN_00d50b00();
      uVar7 = 1;
    }
LAB_01a62138:
    cVar10 = (char)uVar7;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar8 = lVar2;
      uVar7 = 1;
      if (((byte)local_3c & local_48 != 0) == 1) {
        local_48 = lVar2;
        FUN_00d50b20();
      }
      goto LAB_01a62138;
    }
    lVar8 = local_58;
    if (((byte)local_3c & local_48 != 0) == 1) {
      local_48 = local_58;
      FUN_00d50b20();
    }
LAB_01a620e4:
    local_50[0] = '\0';
    cVar10 = '\x01';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_70 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a0 = '\0';
  local_a8 = lVar8;
  local_78 = plVar1;
  FUN_00cbadd0(&local_a8,&local_b8);
  lVar2 = local_68;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    (**(code **)(*local_78 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01a62243:
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01a18830();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}

