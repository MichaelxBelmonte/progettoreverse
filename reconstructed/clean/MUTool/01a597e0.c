// Function: FUN_01a597e0
// Address: 01a597e0
// Size: 507 bytes
// Class: MUTool

void FUN_01a597e0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  local_38 = *arg1;
  local_30 = '\0';
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*this_ptr + 0x428))();
  if (cVar1 != '\0') {
    *(void*)(this_ptr + 6) = 1;
    (**(code **)(*(int64_t *)*arg1 + 0xa00))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_50 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_50 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    local_58 = this_ptr + 2;
    FUN_0006e1c0();
    FUN_00e86210();
    local_78 = g_027e1390;
    if (g_027e1390 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00c841b0();
    local_48 = local_68;
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_40 = '\x01';
    FUN_00cbad30(&local_48,&local_88,0x20);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      (**(code **)(*local_58 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x458))();
  return;
}

