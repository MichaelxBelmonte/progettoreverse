// Function: FUN_01d95980
// Address: 01d95980
// Size: 706 bytes
// Class: GNMultiRulerView

void FUN_01d95980(void)

{
  void*puVar1;
  uint64_t uVar2;
  void*puVar3;
  int64_t *this_ptr;
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
  int64_t local_30;
  char local_28;
  
  FUN_01e3b710();
  uVar2 = g_02420c88;
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  *(void*)((int64_t)this_ptr + 0x114) = uVar2;
  *(void*)(this_ptr + 5) = 1;
  *(void*)(this_ptr + 0x33) = 0;
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar3 = &g_02678958;
  puVar3[2] = &g_02679280;
  puVar3[0x27] = 0;
  *(void*)(puVar3 + 0x28) = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x164) = 0;
  *(void*)((int64_t)puVar3 + 0x16c) = 0;
  (*g_02678970)();
  puVar1 = (void*)this_ptr[0x27];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x27] = (int64_t)puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))
            ((int)*(void*)((int64_t)this_ptr + 0x10c),
             *(void*)((int64_t)this_ptr + 0x114));
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x558))();
  local_58 = 0;
  local_60 = this_ptr[0x27];
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x450))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = g_027f1660;
  if (g_027f1660 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_80 = g_027f0e30;
  if (g_027f0e30 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}

