// Function: FUN_006d7f00
// Address: 006d7f00
// Size: 899 bytes
// Class: Unknown
// String references:
//   "%I"
//   "+%I"

uint64_t FUN_006d7f00(void*param_1,int64_t *param_2,uint64_t param_3,int param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void*puVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t arg1;
  uint64_t this_ptr;
  float fVar10;
  float local_44;
  int64_t *local_40;
  uint local_38;
  int local_34;
  
  plVar1 = (int64_t *)*param_1;
  FUN_00e99dd0();
  plVar3 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_34 = param_4 / 3;
    local_38 = 1;
    local_40 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_40);
    return this_ptr;
  }
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3a560();
  iVar6 = FUN_01d3b590();
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e05950();
  local_44 = (float)(**(code **)(*local_40 + 0x380))();
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = *param_2;
  if (*(int64_t *)(arg1 + 0x170) == lVar2) {
    fVar10 = g_02391090;
    if (iVar6 != 4) {
      fVar10 = *(float *)(&g_023b67d0 + (uint64_t)(iVar5 == 8) * 4);
    }
    lVar8 = *(int64_t *)(arg1 + 0x168);
LAB_006d81ce:
    local_44 = local_44 + (float)param_4 * fVar10;
    if (lVar8 != lVar2) goto LAB_006d8238;
  }
  else {
    lVar8 = *(int64_t *)(arg1 + 0x168);
    if (lVar8 != lVar2) {
      if (*(int64_t *)(arg1 + 0x178) == lVar2) {
        fVar10 = g_02390d28;
        if (iVar6 != 4) {
          fVar10 = *(float *)(&g_023b67c8 + (uint64_t)(iVar5 == 8) * 4);
        }
      }
      else {
        pfVar9 = (float *)(&g_023b67c0 + (uint64_t)(iVar5 == 8) * 4);
        if (iVar6 == 4) {
          pfVar9 = (float *)(&g_023b67b8 +
                            (uint64_t)(*(int64_t *)(arg1 + 0x180) != lVar2) * 4);
        }
        if (*(int64_t *)(arg1 + 0x180) != lVar2) {
          pfVar9 = (float *)(&g_023b67b8 +
                            (uint64_t)(*(int64_t *)(arg1 + 0x180) != lVar2) * 4);
        }
        fVar10 = *pfVar9;
      }
      goto LAB_006d81ce;
    }
    fVar10 = g_02391090;
    if (iVar6 != 4) {
      fVar10 = *(float *)(&g_023b67d0 + (uint64_t)(iVar5 == 8) * 4);
    }
    local_44 = local_44 + (float)param_4 * fVar10;
  }
  fVar10 = (float)(**(code **)(**(int64_t **)(arg1 + 0x130) + 0xad0))();
  if (local_44 <= fVar10) {
    fVar10 = (float)(**(code **)(**(int64_t **)(arg1 + 0x130) + 0xac0))();
    if (fVar10 <= local_44) goto LAB_006d8238;
    puVar7 = (void*)(**(int64_t **)(arg1 + 0x130) + 0xac0);
  }
  else {
    puVar7 = (void*)(**(int64_t **)(arg1 + 0x130) + 0xad0);
  }
  local_44 = (float)(**puVar7)();
LAB_006d8238:
  FUN_01e05950();
  (**(code **)(*local_40 + 0x378))(local_44);
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

