// Function: FUN_017583c0
// Address: 017583c0
// Size: 877 bytes
// Class: Unknown

byte FUN_017583c0(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void* pVar6;
  uint uVar7;
  int iVar8;
  uint64_t uVar9;
  byte bVar10;
  uint64_t uVar11;
  int64_t lVar12;
  char unaff_SIL;
  int64_t this_ptr;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_017708d0();
  if (cVar2 == '\0') {
    bVar10 = 0;
  }
  else {
    FUN_0174c730();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    iVar3 = *(int *)(local_40 + 0x18);
    if (3 < iVar3) {
      param_1 = *(int64_t *)(local_40 + 0x10);
      uVar11 = 0;
      do {
        iVar8 = *(int *)(param_1 + uVar11 * 4);
        uVar11 = uVar11 + 1;
        if (iVar8 != 0) {
          uVar9 = uVar11 >> 1 & 0x7fffffff;
          if ((int)uVar9 == 0xc) {
            uVar9 = 0xb;
          }
          if (*(int *)(*(int64_t *)(local_40 + 0x10) + uVar9 * 4) < iVar8) {
            *(int *)(*(int64_t *)(local_40 + 0x10) + uVar9 * 4) = iVar8;
            iVar3 = *(int *)(local_40 + 0x18);
          }
        }
        iVar8 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar8 = iVar3;
        }
      } while ((int64_t)uVar11 < (int64_t)(iVar8 >> 2));
    }
    pVar6 = (void*)param_1;
    lVar12 = *(int64_t *)(this_ptr + 0x58);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    fVar14 = (float)FUN_01742280();
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    uVar4 = *(uint *)(local_40 + 0x18);
    bVar13 = 0;
    if (3 < (int)uVar4) {
      if (unaff_SIL == '\0') {
        uVar11 = 0;
        do {
          if (*(int *)(*(int64_t *)(local_40 + 0x10) + uVar11 * 4) == 0) {
            bVar13 = 1;
            bVar10 = 1;
            goto joined_r0x01758736;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar4 >> 2);
        bVar13 = 0;
      }
      else {
        lVar12 = 0;
        bVar13 = 0;
        do {
          if (*(int *)(*(int64_t *)(local_40 + 0x10) + lVar12 * 4) == 0) {
            fVar15 = (float)(int)lVar12 * g_023908e0;
            FUN_01742490(*(int64_t *)(local_40 + 0x10),0);
            fVar16 = (float)FUN_01742280();
            FUN_01749eb0((fVar15 + fVar14) - fVar16);
            uVar4 = *(uint *)(local_40 + 0x18);
            bVar13 = 1;
          }
          lVar12 = lVar12 + 1;
          uVar7 = uVar4 + 3;
          if (-1 < (int)uVar4) {
            uVar7 = uVar4;
          }
        } while (lVar12 < (int)uVar7 >> 2);
      }
    }
    bVar10 = 0;
joined_r0x01758736:
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    bVar10 = bVar10 | bVar13;
    if (local_40 == 0) goto LAB_01758703;
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
LAB_01758703:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return bVar10;
}

