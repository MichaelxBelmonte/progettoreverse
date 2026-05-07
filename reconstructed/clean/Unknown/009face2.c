// Function: FUN_009face2
// Address: 009face2
// Size: 729 bytes
// Class: Unknown

void FUN_009face2(int64_t *param_1,int64_t *param_2,uint64_t param_3,ulong param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  void*puVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  void *pvVar8;
  bad_cast *this;
  ushort uVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint uVar12;
  int64_t *arg1;
  allocator *in_stack_ffffffffffffff98;
  int64_t lVar13;
  bad_cast *local_58;
  uint64_t local_48;
  uint64_t uStack_40;
  bad_cast *local_38;
  
  puVar3 = PTR___DefaultRuneLocale_0249c238;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (bad_cast *)0x0;
  plVar7 = param_1;
LAB_009fad19:
  plVar11 = (int64_t *)*arg1;
  if (plVar11 == (int64_t *)0x0) {
LAB_009fad48:
    plVar11 = (int64_t *)0x0;
  }
  else if (plVar11[3] == plVar11[4]) {
    iVar5 = (**(code **)(*plVar11 + 0x48))();
    if (iVar5 == -1) {
      *arg1 = 0;
      goto LAB_009fad48;
    }
    plVar11 = (int64_t *)*arg1;
  }
  plVar1 = (int64_t *)*param_2;
  if (plVar1 == (int64_t *)0x0) {
LAB_009fad8f:
    if (plVar11 == (int64_t *)0x0) goto LAB_009fae0a;
  }
  else if (plVar1[3] == plVar1[4]) {
    iVar5 = (**(code **)(*plVar1 + 0x48))();
    if (iVar5 == -1) {
      *param_2 = 0;
      goto LAB_009fad8f;
    }
    plVar7 = (int64_t *)(uint64_t)(*param_2 == 0);
    if ((plVar11 == (int64_t *)0x0) == (*param_2 == 0)) goto LAB_009fae0a;
  }
  else if (plVar11 != (int64_t *)0x0) goto LAB_009fae0a;
  plVar11 = (int64_t *)*arg1;
  if ((char *)plVar11[3] == (char *)plVar11[4]) {
    cVar4 = (**(code **)(*plVar11 + 0x48))();
  }
  else {
    cVar4 = *(char *)plVar11[3];
  }
  if ((0xff < (uint)(int)cVar4) || ((puVar3[(uint64_t)(uint)(int)cVar4 * 4 + 0x3d] & 4) == 0))
  goto LAB_009fae0a;
  plVar11 = (int64_t *)*arg1;
  if (plVar11[3] == plVar11[4]) {
    (**(code **)(*plVar11 + 0x48))();
  }
  std::string::push_back((char)plVar7);
  plVar11 = (int64_t *)*arg1;
  if (plVar11[3] == plVar11[4]) {
    (**(code **)(*plVar11 + 0x50))();
  }
  else {
    plVar11[3] = plVar11[3] + 1;
  }
  goto LAB_009fad19;
LAB_009fae0a:
  pvVar8 = (void *)(CONCAT71((int7)((uint64_t)plVar7 >> 8),(byte)local_48) & 0xffffffffffffff01);
  uVar6 = uStack_40;
  if ((local_48 & 1) == 0) {
    uVar6 = (uint64_t)((byte)local_48 >> 1);
  }
  if (uVar6 != 0) {
    if (uVar6 < 6) {
      lVar13 = 0;
      this = local_38;
      if ((local_48 & 1) == 0) {
        this = (bad_cast *)((int64_t)&local_48 + 1);
      }
      cVar4 = FUN_009f5ffe();
      if (cVar4 == '\0') {
        std::bad_cast::bad_cast(this);
        FUN_009af240();
LAB_009fafb9:
                            pcVar2 = invalidInstructionException();
        (*pcVar2)();
      }
      *param_1 = lVar13;
      pvVar8 = (void *)(CONCAT71((int7)((uint64_t)param_1 >> 8),(byte)local_48) &
                       0xffffffffffffff01);
      if ((local_48 & 1) == 0) {
        uVar9 = (ushort)((byte)local_48 >> 1);
      }
      else {
        uVar9 = (ushort)uStack_40;
      }
      if ((ushort)(6 - uVar9) == 0) {
        lVar10 = 1;
      }
      else {
        uVar12 = (uint)(ushort)(6 - uVar9);
        lVar10 = 1;
        do {
          lVar10 = lVar10 * 10;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      *param_1 = lVar10 * lVar13;
    }
    else {
      std::string::string((string *)((int64_t)&MACH_HEADER.cputype + 2),(string *)0x0,
                          (ulong)&local_48,param_4,in_stack_ffffffffffffff98);
      if (((uint64_t)in_stack_ffffffffffffff98 & 1) == 0) {
        local_58 = (bad_cast *)&stack0xffffffffffffff99;
      }
      cVar4 = FUN_009f5ffe();
      if (cVar4 == '\0') {
        std::bad_cast::bad_cast(local_58);
        FUN_009af240();
        goto LAB_009fafb9;
      }
      *param_1 = 0;
      if (((uint64_t)in_stack_ffffffffffffff98 & 1) != 0) {
        operator_delete(param_1);
      }
      pvVar8 = (void *)(CONCAT71((int7)((uint64_t)param_1 >> 8),(byte)local_48) &
                       0xffffffffffffff01);
    }
  }
  if ((char)pvVar8 != '\0') {
    operator_delete(pvVar8);
  }
  return;
}

