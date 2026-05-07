// Function: FUN_000b41e0
// Address: 000b41e0
// Size: 609 bytes
// Class: MDAsyncProcess
// String references:
//   "MDAsyncProcess"

void FUN_000b41e0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t **pplVar6;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  char local_28 [8];
  
  lVar2 = g_026dc0d0;
  if (g_026dc0d0 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar6 = &local_38;
  FUN_000175c0(param_1,&local_78);
  plVar1 = local_38;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_000b425f;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_000b425f:
  plVar1 = *pplVar6;
  local_28[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (int64_t **)local_28;
  if (local_28[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(void*)pplVar5 = 0;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ca1340();
  (**(code **)(*plVar1 + 0x380))();
  FUN_00d403d0();
  local_68 = g_026dc0d8;
  if (g_026dc0d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_50 = '\0';
  local_48 = 0;
  local_40 = '\0';
  local_58 = plVar1;
  FUN_00d40470(&local_48,&local_58,1,3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

