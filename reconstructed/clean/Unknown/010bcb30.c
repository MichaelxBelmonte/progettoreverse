// Function: FUN_010bcb30
// Address: 010bcb30
// Size: 643 bytes
// Class: Unknown

int FUN_010bcb30(dword *param_1,uint param_2,size_t param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *arg1;
  int *this_ptr;
  int iVar6;
  uint64_t uStack_60;
  byte abStack_49 [17];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*this_ptr == 1) {
    piVar2 = (int *)**(void**)(this_ptr + 2);
    iVar3 = *piVar2;
    iVar4 = -1;
    if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
    if (0 < iVar3) {
      param_1 = &MACH_HEADER.ncmds;
      uStack_60 = (void*)0x10bccbe;
      ___memcpy_chk();
      if ((*(uint64_t *)(piVar2 + 4) & 7) != 0) {
        param_1 = (dword *)(int64_t)*piVar2;
        *(byte *)((int64_t)param_1 + (int64_t)abStack_49) =
             *(byte *)((int64_t)param_1 + (int64_t)abStack_49) &
             ~(byte)(0xff >> (8U - (char)(*(uint64_t *)(piVar2 + 4) & 7) & 0x1f));
      }
    }
    uStack_60 = (void*)0x10bccf3;
    ___bzero();
    iVar6 = param_2 * 8;
    iVar3 = *arg1;
    if (iVar3 == 1) goto LAB_010bcd07;
LAB_010bcbfc:
    iVar5 = 0;
    if (iVar3 == 0) {
      piVar2 = *(int **)(arg1 + 2);
      iVar3 = *piVar2;
      iVar4 = -1;
      if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
      if (0 < iVar3) {
        uStack_60 = (void*)0x10bcc3b;
        ___memcpy_chk(0x10);
        if ((*(uint64_t *)(piVar2 + 4) & 7) != 0) {
          pbVar1 = (byte *)((int64_t)&uStack_60 + (int64_t)*piVar2 + 7);
          *pbVar1 = *pbVar1 & ~(byte)(0xff >> (8U - (char)(*(uint64_t *)(piVar2 + 4) & 7) & 0x1f));
        }
      }
      uStack_60 = (void*)0x10bcc70;
      ___bzero();
      iVar3 = **(int **)(arg1 + 2);
      param_1 = (dword *)(uint64_t)(uint)(iVar3 * 8);
      iVar5 = ((*(int **)(arg1 + 2))[4] & 7U) + iVar3 * -8;
    }
  }
  else {
    iVar6 = 0;
    if (*this_ptr == 0) {
      piVar2 = *(int **)(this_ptr + 2);
      iVar3 = *piVar2;
      iVar4 = -1;
      if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
      if (0 < iVar3) {
        param_1 = &MACH_HEADER.ncmds;
        uStack_60 = (void*)0x10bcba5;
        ___memcpy_chk();
        if ((*(uint64_t *)(piVar2 + 4) & 7) != 0) {
          param_1 = (dword *)(int64_t)*piVar2;
          *(byte *)((int64_t)param_1 + (int64_t)abStack_49) =
               *(byte *)((int64_t)param_1 + (int64_t)abStack_49) &
               ~(byte)(0xff >> (8U - (char)(*(uint64_t *)(piVar2 + 4) & 7) & 0x1f));
        }
      }
      uStack_60 = (void*)0x10bcbdc;
      ___bzero();
      iVar6 = **(int **)(this_ptr + 2) * 8 - ((*(int **)(this_ptr + 2))[4] & 7U);
    }
    iVar3 = *arg1;
    if (iVar3 != 1) goto LAB_010bcbfc;
LAB_010bcd07:
    piVar2 = (int *)**(void**)(arg1 + 2);
    iVar3 = *piVar2;
    iVar4 = -1;
    if ((iVar3 < 0) || ((int)param_2 < iVar3)) goto LAB_010bcd8f;
    if (0 < iVar3) {
      param_1 = &MACH_HEADER.ncmds;
      uStack_60 = (void*)0x10bcd37;
      ___memcpy_chk();
      if ((*(uint64_t *)(piVar2 + 4) & 7) != 0) {
        param_1 = (dword *)(int64_t)*piVar2;
        pbVar1 = (byte *)((int64_t)param_1 + (int64_t)&uStack_60 + 7);
        *pbVar1 = *pbVar1 & ~(byte)(0xff >> (8U - (char)(*(uint64_t *)(piVar2 + 4) & 7) & 0x1f));
      }
    }
    uStack_60 = (void*)0x10bcd6c;
    ___bzero();
    iVar5 = param_2 * -8;
  }
  uStack_60 = (void*)0x10bcd86;
  iVar4 = _memcmp(param_1,(void *)(uint64_t)param_2,param_3);
  if (iVar4 == 0) {
    iVar4 = iVar5 + iVar6;
  }
LAB_010bcd8f:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return iVar4;
  }
                      uStack_60 = &UNK_010bcdb3;
  ___stack_chk_fail();
}

