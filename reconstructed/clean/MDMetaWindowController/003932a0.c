// Function: FUN_003932a0
// Address: 003932a0
// Size: 652 bytes
// Class: MDMetaWindowController

void FUN_003932a0(uint32_t param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  void*this_ptr;
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
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0034db80();
  *plVar2 = (int64_t)&g_024e70f0;
  plVar2[2] = (int64_t)&g_024e89d0;
  plVar2[0x28] = (int64_t)&g_024e8a10;
  plVar2[0x29] = (int64_t)&g_024e8a60;
  plVar2[0x2a] = (int64_t)&g_024e8a90;
  plVar2[0xc0] = 0;
  plVar2[0xc1] = 0;
  *(void*)((int64_t)plVar2 + 0x60a) = 0;
  *(void*)((int64_t)plVar2 + 0x612) = 0;
  (*g_024e7108)();
  FUN_01cf5bb0();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(&UNK_000016b8 + *plVar2))();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001890 + *plVar2))();
  (**(code **)(*arg1 + 0xa00))();
  lVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = *param_3;
  local_98 = '\0';
  (**(code **)(&UNK_00001690 + *plVar2))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_90 = *param_2;
  local_88 = '\0';
  (**(code **)(&g_00001680 + *plVar2))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_78 = '\0';
  local_80 = 0;
  FUN_019a4000();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_70 = *param_3;
  local_68 = '\0';
  FUN_01953260();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

