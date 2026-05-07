// Function: FUN_012523c0
// Address: 012523c0
// Size: 681 bytes
// Class: GNNull

void* FUN_012523c0(double param_1,char param_2,void*param_3,int *param_4)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  void*in_RCX;
  int iVar5;
  int64_t arg1;
  int iVar6;
  void*this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  
  if ((((*(int *)(*(int64_t *)(arg1 + 0x48) + 0x18) < 8) || (NAN(param_1))) ||
      (**(uint64_t **)(*(int64_t *)(arg1 + 0x48) + 0x10) >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
    iVar3 = 0;
  }
  else {
    FUN_00e7bcc0();
    uVar10 = FUN_00e7cd00(param_1);
    iVar3 = FUN_01251eb0(uVar10,param_4);
    if (iVar3 < 1) goto LAB_012524a0;
    while (uVar4 = *(uint64_t *)
                    (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) +
                    (uint64_t)(iVar3 - 1) * 8), !NAN(param_1)) {
      while( true ) {
        if ((uVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c720(), cVar2 == '\0'))
        goto joined_r0x012524dc;
        iVar3 = iVar3 + -1;
        if (0 < iVar3) break;
LAB_012524a0:
        uVar4 = FUN_00e7bdb0();
        if (NAN(param_1)) goto joined_r0x012524dc;
      }
    }
  }
joined_r0x012524dc:
  if (((param_4 != (int *)0x0) && (*param_4 = iVar3, param_2 != '\0')) &&
     (*(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10) + (int64_t)iVar3 * 8) ==
      0)) {
    *param_4 = iVar3 + (uint)(iVar3 < 1) * 2 + -1;
  }
  iVar7 = *(int *)(*(int64_t *)(arg1 + 0x48) + 0x18);
  iVar6 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar9 = iVar3;
  iVar5 = iVar3;
  if ((param_2 == '\0') || (iVar7 < 8)) goto joined_r0x0125257d;
  plVar1 = *(int64_t **)(*(int64_t *)(arg1 + 0x50) + 0x10);
  if (plVar1[iVar3] == 0) {
    if (iVar3 == 0) {
      iVar3 = 1;
      iVar7 = 0;
    }
    else {
      iVar8 = iVar3 + -1;
      iVar7 = 1;
      if (iVar8 != 1) goto LAB_0125255d;
    }
LAB_012525a2:
    iVar5 = 0;
    if (*plVar1 != 0) {
      iVar5 = iVar7;
    }
    iVar8 = 1;
    iVar9 = 1;
    if (iVar6 >> 3 < 2) goto joined_r0x0125257d;
  }
  else {
    iVar7 = 1;
    iVar8 = iVar3;
    if (iVar3 == 1) goto LAB_012525a2;
LAB_0125255d:
    iVar5 = iVar8;
    iVar9 = iVar8;
    if (iVar6 >> 3 <= iVar8) goto joined_r0x0125257d;
  }
  iVar9 = iVar8;
  if (plVar1[(int64_t)iVar8 + 1] == 0) {
    iVar3 = iVar8 + 1;
  }
joined_r0x0125257d:
  if (in_RCX != (void*)0x0) {
    if (iVar5 < 1) {
      uVar10 = FUN_00e7bdb0();
      *in_RCX = uVar10;
    }
    else {
      *in_RCX = *(void*)
                 (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) + (uint64_t)(iVar5 - 1) * 8
                 );
    }
  }
  if (param_3 != (void*)0x0) {
    iVar7 = *(int *)(*(int64_t *)(arg1 + 0x48) + 0x18);
    iVar6 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar3 < iVar6 >> 3) {
      uVar10 = *(void*)
                (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) + (int64_t)iVar3 * 8);
    }
    else {
      uVar10 = FUN_00e7bdb0();
    }
    *param_3 = uVar10;
  }
  *this_ptr = *(void*)
                (*(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10) + (int64_t)iVar9 * 8);
  *(void*)(this_ptr + 1) = 0;
  return this_ptr;
}

