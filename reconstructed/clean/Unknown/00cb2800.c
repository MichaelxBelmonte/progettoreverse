// Function: FUN_00cb2800
// Address: 00cb2800
// Size: 558 bytes
// Class: Unknown

void FUN_00cb2800(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  int64_t local_40;
  char local_38;
  
  FUN_00d36e30();
  plVar1 = (int64_t *)*arg1;
  FUN_00e8b690();
  if (plVar1 == (int64_t *)0x0) {
LAB_00cb284e:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00cb284e;
  }
  lVar2 = *arg1;
  if (lVar2 == 0) {
    return;
  }
  uVar9 = (uint64_t)(~*(uint *)(this_ptr + 0x154) & 1);
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = FUN_00e8bc10();
    lVar6 = *(int64_t *)(lVar7 + uVar9 * 8);
  }
  else {
    lVar7 = FUN_00e8bc10();
    lVar6 = *(int64_t *)(lVar7 + uVar9 * 8);
  }
  if (lVar6 != lVar2) {
    return;
  }
  FUN_00cbc520();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00cbc710();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_00d21140();
  *(int64_t *)(lVar7 + uVar9 * 8) = local_40;
  uVar4 = FUN_00e31390();
  cVar3 = FUN_00e314a0(3,uVar4 & 1 ^ 1);
  if (cVar3 == '\0') {
    iVar8 = 0x800;
    do {
      uVar4 = uVar4 & 1;
      if (1 < uVar4) {
        if (iVar8 < 2) {
          iVar8 = 0x800;
          FUN_00da6800();
        }
        else {
          iVar8 = iVar8 + -1;
        }
      }
      cVar3 = FUN_00e314a0(3,uVar4 ^ 1);
    } while (cVar3 == '\0');
    if (lVar7 == 0) goto LAB_00cb2a12;
  }
  *(int64_t *)(lVar7 + (uint64_t)(~*(uint *)(this_ptr + 0x154) & 1) * 8) = local_40;
LAB_00cb2a12:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

