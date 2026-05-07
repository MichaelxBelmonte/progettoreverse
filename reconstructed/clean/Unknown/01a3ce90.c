// Function: FUN_01a3ce90
// Address: 01a3ce90
// Size: 1209 bytes
// Class: Unknown

void FUN_01a3ce90(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
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
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_011a15f0();
  FUN_00e86210();
  lVar2 = g_027e1fd0;
  if (g_027e1fd0 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_68 = 0;
  plVar4 = (int64_t *)(this_ptr + 0x138);
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  local_e0 = lVar3;
  local_d8 = '\0';
  local_70 = plVar4;
  FUN_00cbad30(&local_e0,&local_f0,0xa0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  FUN_011c5770();
  FUN_00e86210();
  local_d0 = g_026d83d8;
  if (g_026d83d8 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_00c841b0();
  lVar2 = local_40;
  if (lVar3 == local_40) {
LAB_01a3d0f1:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar5 = lVar3 != 0;
      lVar3 = lVar2;
      if (bVar5) {
        FUN_00d50b20();
      }
      goto LAB_01a3d0f1;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    lVar3 = lVar2;
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 0;
  (**(code **)(*plVar4 + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_a8 = '\0';
  local_b0 = lVar3;
  local_60 = plVar4;
  FUN_00cbad30(&local_b0,&local_c0,0xa0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  FUN_011c5770();
  FUN_00e86210();
  local_a0 = g_027e1fd8;
  if (g_027e1fd8 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00c841b0();
  lVar2 = local_40;
  if (lVar3 != local_40) {
    if (local_38 != '\0') {
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      lVar3 = local_40;
      goto LAB_01a3d26e;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar5 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01a3d26e:
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_48 = 0;
  (**(code **)(*plVar4 + 0x10))();
  FUN_00d50b00();
  local_48 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  local_78 = '\0';
  local_80 = lVar3;
  local_50 = plVar4;
  FUN_00cbad30(&local_80,&local_90,0xa0);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

