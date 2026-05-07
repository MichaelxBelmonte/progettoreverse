// Function: FUN_01858fc0
// Address: 01858fc0
// Size: 1581 bytes
// Class: Unknown

void FUN_01858fc0(int64_t *param_1,int64_t *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  char cVar7;
  uint uVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar11;
  uint32_t local_88;
  uint32_t uStack_84;
  char local_80;
  
  if ((((*arg1 != 0) && (*param_2 != 0)) && (*param_1 != 0)) &&
     (*(int64_t *)(this_ptr + 0x88) != 0)) {
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124f820();
    lVar4 = g_027df658;
    if (g_027df658 != 0) {
      FUN_00d50b00();
    }
    FUN_018d9a10();
    FUN_018e1cf0();
    if ((local_80 != '\0') && (CONCAT44(uStack_84,local_88) != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_01716350();
    if (*(char *)MACH_HEADER._16_8_ != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 1) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 2) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 3) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 4) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 5) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 6) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 7) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 8) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 9) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 10) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 0xb) != '\0') {
      FUN_0171a310();
    }
    iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x88) + 0x18);
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    lVar4 = *arg1;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar11 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar11 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(int *)(*(int64_t *)(lVar4 + 0x18) + 0xc) != 0) {
          lVar10 = *(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x10);
          if (iVar1 >> 3 <= *(int *)(lVar4 + 0x10)) {
            lVar10 = *(int64_t *)
                      ((int64_t)*(int *)(*(int64_t *)(this_ptr + 0x88) + 0x18) + -8 + lVar10);
          }
          pVar9 = (void*)lVar10;
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e7c260();
          uVar5 = FUN_016c4760();
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar10 = *(int64_t *)(this_ptr + 0x3c);
          FUN_00e7c260();
          uVar6 = FUN_016c4760();
          if (uVar11 == 0) {
            uVar5 = FUN_00e7bdb0();
          }
          if (uVar11 == *(int *)(*arg1 + 0xc) - 1) {
            uVar6 = FUN_00e7bdb0();
          }
          iVar2 = *(int *)(**(int64_t **)(*(int64_t *)(lVar4 + 0x18) + 0x10) + 0xc);
          FUN_01716260();
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          iVar2 = iVar2 * 7;
          iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
          cVar7 = ((byte)(iVar2 >> 0x1f) & 0xc) + (char)iVar2 + '\x06';
          uVar8 = cVar7 * 0x2b;
          pVar9 = (void*)
                  (char)(cVar7 + ((char)((uVar8 & 0xffff) >> 0xf) + (char)(uVar8 >> 9)) * -0xc + -6)
          ;
          FUN_01715d30();
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012502a0(uVar6,uVar5,0);
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        uVar11 = uVar11 + 1;
        lVar4 = *arg1;
      } while ((int64_t)uVar11 < (int64_t)*(int *)(lVar4 + 0xc));
    }
  }
  return;
}

