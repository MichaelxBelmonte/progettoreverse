// Function: FUN_01d99db0
// Address: 01d99db0
// Size: 601 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void* FUN_01d99db0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x1b0) == 0) goto LAB_01d99f4f;
  pplVar7 = &local_70;
  FUN_01cf3f40();
  plVar1 = local_70;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_01d99e43:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d99e43;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = plVar1[0x27];
  if (lVar2 != 0) {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_50 = 0;
    local_58 = 0;
    local_60 = lVar2;
    local_38 = plVar1;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar8 = 0;
      do {
        local_70 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 8);
        lVar3 = local_70[2];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = lVar3;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)(lVar2 + 0xc));
    }
    FUN_01da2210();
    if (local_38 == (int64_t *)0x0) goto LAB_01d99f4f;
  }
  FUN_00d50b20();
LAB_01d99f4f:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

