// Function: FUN_01c87160
// Address: 01c87160
// Size: 980 bytes
// Class: Unknown

void FUN_01c87160(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t this_ptr;
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
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00d50b00();
    plVar1 = (int64_t *)(this_ptr + 0x138);
    local_90 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    local_90 = '\x01';
    local_80 = 0;
    local_88 = *(int64_t *)(this_ptr + 0x158);
    local_98 = plVar1;
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00cbad80(&local_e8,&local_88,0x20);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_78 = plVar1;
    FUN_000be210();
    FUN_00e86210();
    local_c8 = g_026dc288;
    if (g_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_00c841b0();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00cbad30(&local_58,&local_d8,0x20);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_60 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    local_68 = plVar1;
    FUN_002771e0();
    FUN_00e86210();
    local_a8 = g_026dc288;
    if (g_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_00c841b0();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_00cbad30(&local_48,&local_b8,0x20);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

