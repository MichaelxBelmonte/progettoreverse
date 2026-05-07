// Function: FUN_00ac8330
// Address: 00ac8330
// Size: 804 bytes
// Class: Unknown

uint64_t FUN_00ac8330(char *param_1,mode_t param_2)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void*puVar5;
  ulong uVar6;
  uint64_t unaff_RBX;
  uint64_t uVar7;
  int *arg1;
  byte *this_ptr;
  uint32_t uVar8;
  int local_48;
  
  if ((*this_ptr & 1) == 0) {
    iVar2 = _mkdir(param_1,param_2);
    uVar6 = (ulong)param_1;
  }
  else {
    iVar2 = _mkdir(param_1,param_2);
    uVar6 = (ulong)param_1;
  }
  if (iVar2 == 0) {
    uVar7 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    if (arg1 != (int *)0x0) {
      *arg1 = 0;
      *(void*)(arg1 + 1) = 0;
      if ((g_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
      }
      *(void***)(arg1 + 2) = &g_02754560;
    }
    goto LAB_00ac8481;
  }
  piVar4 = ___error();
  iVar2 = *piVar4;
  if ((g_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02754568 = 0x8fafd21e25c5e09b;
    uVar6 = 0x2520080;
    g_02754560 = &g_02520080;
    ___cxa_guard_release();
  }
  FUN_00ac92d0();
  if (local_48 == 3) {
    if (arg1 != (int *)0x0) {
      *arg1 = 0;
      *(void*)(arg1 + 1) = 0;
      if ((g_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
      }
      goto LAB_00ac847b;
    }
  }
  else {
    if (arg1 == (int *)0x0) {
      ___cxa_allocate_exception();
      puVar5 = operator_new(uVar6);
      puVar5[3] = 0x7463657269645f65;
      puVar5[2] = 0x74616572633a3a6d;
      puVar5[1] = 0x6574737973656c69;
      *puVar5 = 0x663a3a74736f6f62;
      *(void*)((int64_t)puVar5 + 0x1f) = 0x79726f74;
      *(void*)((int64_t)puVar5 + 0x23) = 0;
      if ((g_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
      }
      uVar1 = (**(code **)(g_02754560 + 0x30))();
      uVar8 = FUN_00ac4640((uint64_t)CONCAT14(uVar1,iVar2));
                          ___cxa_throw(uVar8,FUN_00ac46f0);
    }
    if ((g_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_02754568 = 0x8fafd21e25c5e09b;
      g_02754560 = &g_02520080;
      ___cxa_guard_release();
    }
    *arg1 = iVar2;
    uVar1 = (**(code **)(g_02754560 + 0x30))();
    *(void*)(arg1 + 1) = uVar1;
LAB_00ac847b:
    *(void***)(arg1 + 2) = &g_02754560;
  }
  uVar7 = 0;
LAB_00ac8481:
  return uVar7 & 0xffffffff;
}

