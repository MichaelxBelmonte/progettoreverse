// Function: FUN_0194d580
// Address: 0194d580
// Size: 1423 bytes
// Class: Unknown

int64_t * FUN_0194d580(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t *plVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  uint8_t local_e8;
  uint8_t local_d8;
  int64_t local_c8;
  char local_c0;
  int64_t local_40;
  char local_38;
  
  FUN_0194d210();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4ba0();
  lVar1 = g_027e0940;
  if (g_027e0940 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6520();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar4 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f020();
  FUN_0194d210();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar4 + 0x18))();
  local_100 = lVar1;
  local_f8 = 0;
  local_e8 = 0;
  pplVar6 = &local_f0;
  local_f0 = plVar4;
  FUN_0194de10(pplVar6,&local_100);
  pVar5 = (void*)pplVar6;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(&UNK_000016a8 + *arg1))();
  FUN_0132b1c0();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ddd0();
  FUN_00e7bdb0();
  FUN_01287c80();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01390340();
  if (cVar2 == '\0') {
    local_d8 = 0;
    FUN_01947890();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

