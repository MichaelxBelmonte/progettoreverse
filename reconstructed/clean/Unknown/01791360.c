// Function: FUN_01791360
// Address: 01791360
// Size: 817 bytes
// Class: Unknown

void FUN_01791360(void)

{
  int iVar1;
  void*puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *arg1;
  void*this_ptr;
  int iVar9;
  uint32_t uVar10;
  int64_t lVar11;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  iVar4 = *(int *)(puVar2 + 3);
  FUN_00c8e340();
  lVar8 = puVar2[2];
  *(void*)(lVar8 + iVar4) = 0;
  uVar5 = (uint)*(void*)(*arg1 + 0x18);
  iVar4 = 0;
  if ((~uVar5 & 0xff000) == 0) {
    uVar6 = (uint64_t)~uVar5;
    if ((~uVar5 & 0xf00) == 0) {
      iVar4 = 0;
      if ((~uVar5 & 0xf00000) == 0) goto LAB_017914d0;
      iVar4 = *(int *)(puVar2 + 3);
      iVar9 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      if (3 < iVar4) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 4) == 5) {
            iVar4 = 4;
            goto LAB_017914d0;
          }
          uVar6 = uVar6 + 1;
        } while (iVar9 >> 2 != (int)uVar6);
      }
      uVar10 = 5;
      FUN_00c8e340(uVar6,1);
    }
    else {
      iVar4 = *(int *)(puVar2 + 3);
      iVar9 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      if (3 < iVar4) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 4) == 2) {
            iVar4 = 4;
            goto LAB_017914d0;
          }
          uVar6 = uVar6 + 1;
        } while (iVar9 >> 2 != (int)uVar6);
      }
      uVar10 = 2;
      FUN_00c8e340(uVar6,1);
    }
    lVar8 = puVar2[2];
    *(void*)(lVar8 + iVar4) = uVar10;
    iVar4 = 4;
  }
LAB_017914d0:
  do {
    iVar9 = iVar4 + 4;
    iVar3 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
    iVar3 = (iVar3 >> 0x1f & 0xcU) + iVar3;
    uVar6 = (uint64_t)(uint)(iVar3 * 4);
    if ((~(uint)(*(uint64_t *)(*arg1 + 0x18) >> ((byte)(iVar3 * 4) & 0x3f)) & 0xf) == 0) {
      iVar9 = iVar4 + 3;
      iVar4 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
      iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
      uVar6 = (uint64_t)(uint)(iVar4 * 4);
      if ((~(uint)(*(uint64_t *)(*arg1 + 0x18) >> ((byte)(iVar4 * 4) & 0x3f)) & 0xf) != 0) {
        iVar3 = *(int *)(puVar2 + 3);
        lVar11 = (int64_t)iVar3;
        iVar1 = iVar3 + 3;
        if (-1 < lVar11) {
          iVar1 = iVar3;
        }
        if (3 < lVar11) {
          uVar6 = 0;
          do {
            if (*(int *)(lVar8 + uVar6 * 4) == iVar4) goto LAB_017914c3;
            uVar6 = uVar6 + 1;
          } while (iVar1 >> 2 != (int)uVar6);
        }
        FUN_00c8e340(uVar6,1);
        lVar8 = puVar2[2];
        *(int *)(lVar8 + lVar11) = iVar4;
      }
    }
    else {
      iVar4 = *(int *)(puVar2 + 3);
      lVar11 = (int64_t)iVar4;
      iVar1 = iVar4 + 3;
      if (-1 < lVar11) {
        iVar1 = iVar4;
      }
      if (3 < lVar11) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 4) == iVar3) goto LAB_017914c3;
          uVar6 = uVar6 + 1;
        } while (iVar1 >> 2 != (int)uVar6);
      }
      FUN_00c8e340(uVar6,1);
      lVar8 = puVar2[2];
      *(int *)(lVar8 + lVar11) = iVar3;
    }
LAB_017914c3:
    iVar4 = iVar9;
  } while (iVar9 < 0x18);
  uVar6 = 1;
  do {
    uVar5 = (int)uVar6 * 4;
    uVar7 = (uint64_t)uVar5;
    if ((~(uint)(*(uint64_t *)(*arg1 + 0x18) >> ((byte)uVar5 & 0x3f)) & 0xf) != 0) {
      iVar4 = *(int *)(puVar2 + 3);
      lVar11 = (int64_t)iVar4;
      iVar9 = iVar4 + 3;
      if (-1 < lVar11) {
        iVar9 = iVar4;
      }
      if (3 < lVar11) {
        uVar7 = 0;
        do {
          if (uVar6 == *(uint *)(lVar8 + uVar7 * 4)) goto LAB_01791610;
          uVar7 = uVar7 + 1;
        } while (iVar9 >> 2 != (int)uVar7);
      }
      FUN_00c8e340(uVar7,1);
      lVar8 = puVar2[2];
      *(int *)(lVar8 + lVar11) = (int)uVar6;
    }
LAB_01791610:
    uVar6 = uVar6 + 1;
    if (uVar6 == 0xc) {
      *this_ptr = puVar2;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  } while( true );
}

