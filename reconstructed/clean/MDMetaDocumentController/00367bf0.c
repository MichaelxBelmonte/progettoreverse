// Function: FUN_00367bf0
// Address: 00367bf0
// Size: 521 bytes
// Class: MDMetaDocumentController

void FUN_00367bf0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x518))();
  plVar1 = (int64_t *)*arg1;
  local_40 = 0;
  local_48 = this_ptr[0x2a];
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x528))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x390))();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x370))();
  }
  plVar1 = (int64_t *)this_ptr[0x2a];
  FUN_00b335d0();
  (**(code **)(*plVar1 + 0x398))();
  (**(code **)(*(int64_t *)*arg1 + 0x660))();
  FUN_00b33530();
  (**(code **)(*(int64_t *)*arg1 + 0x668))();
  FUN_00b335a0();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
  }
  (**(code **)(*this_ptr + 0x770))();
  g_028077a0 = (**(code **)(*(int64_t *)*arg1 + 0x6d0))();
  FUN_00d403d0();
  lVar2 = g_027294a0;
  if (g_027294a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&stack0xffffffffffffffc8,1,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

