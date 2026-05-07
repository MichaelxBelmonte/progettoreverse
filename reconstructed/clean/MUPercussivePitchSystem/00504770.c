// Function: FUN_00504770
// Address: 00504770
// Size: 580 bytes
// Class: MUPercussivePitchSystem

void FUN_00504770(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t **pplVar5;
  int64_t **pplVar6;
  int unaff_ESI;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  *(int *)(this_ptr + 0x220) = unaff_ESI;
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_005047c9:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_005047c9;
  }
  plVar1 = *pplVar6;
  local_38[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (int64_t **)local_38;
  if (local_38[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(void*)pplVar5 = 0;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  iVar3 = FUN_01b18580();
  if ((iVar3 == 0) || (-1 < unaff_ESI)) {
    if (unaff_ESI == 0) {
      FUN_01d9aea0();
      plVar1 = local_48;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01d9aea0();
        plVar1 = local_48;
        if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d9ade0();
        FUN_00d50130();
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_005048ee;
    }
  }
  else {
    FUN_00502230(extraout_XMM0_Da,0);
  }
  FUN_01d9aea0();
  plVar1 = local_48;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &g_024dc470;
    puVar4[2] = &g_024dcdc0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    (*g_024dc488)();
    FUN_01d9ade0();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01d9aea0();
  FUN_002ba3c0();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_005048ee:
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

