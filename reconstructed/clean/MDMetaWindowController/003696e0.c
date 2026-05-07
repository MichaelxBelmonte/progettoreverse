// Function: FUN_003696e0
// Address: 003696e0
// Size: 515 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint64_t FUN_003696e0(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  FUN_01f2e7e0();
  plVar1 = local_48;
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_0036980c;
  }
  pplVar5 = &local_48;
  FUN_01e5c650();
  plVar1 = local_48;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_0036979e:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0036979e;
  }
  plVar1 = *pplVar5;
  local_58 = *(char *)(pplVar5 + 1);
  pplVar5 = pplVar5 + 1;
  if (local_58 == '\0') {
    pplVar5 = (int64_t **)&local_58;
  }
  *(void*)pplVar5 = 0;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (param_2 != '\0')) {
    FUN_0064dc10();
  }
  uVar6 = CONCAT71((int7)((uint64_t)pplVar5 >> 8),plVar1 != (int64_t *)0x0);
  if ((local_58 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
LAB_0036980c:
  return uVar6 & 0xffffffff;
}

