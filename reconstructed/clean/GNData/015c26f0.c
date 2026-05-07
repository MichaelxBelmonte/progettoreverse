// Function: FUN_015c26f0
// Address: 015c26f0
// Size: 1141 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t * FUN_015c26f0(void)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  uint64_t uVar6;
  void*puVar7;
  uint64_t uVar8;
  int unaff_ESI;
  uint64_t *this_ptr;
  int iVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  bool bVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar17;
  uint64_t local_50;
  char local_48;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (0 < unaff_ESI) {
    iVar12 = 2;
    do {
      iVar11 = 0;
      do {
        uVar6 = FUN_00e7bcc0();
        iVar9 = *(int *)(puVar5 + 3);
        uVar17 = extraout_XMM0_Da;
        if ((7 < iVar9) && (uVar6 >> 0x20 != 0)) {
          lVar14 = 1;
          lVar10 = 0;
          do {
            if (*(int *)(puVar5[2] + 4 + lVar10) != 0) {
              cVar3 = FUN_00e7c000();
              if (cVar3 != '\0') goto LAB_015c27a0;
              iVar9 = *(int *)(puVar5 + 3);
              uVar17 = extraout_XMM0_Da_00;
            }
            do {
              iVar4 = iVar9 + 7;
              if (-1 < iVar9) {
                iVar4 = iVar9;
              }
              if (iVar4 >> 3 <= lVar14) goto LAB_015c2825;
              local_50._4_4_ = (int)(uVar6 >> 0x20);
              lVar10 = lVar10 + 8;
              lVar14 = lVar14 + 1;
            } while (local_50._4_4_ == 0);
          } while( true );
        }
LAB_015c2825:
        FUN_00c8e340(uVar17,1);
        *(uint64_t *)(puVar5[2] + (int64_t)iVar9) = uVar6;
LAB_015c27a0:
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar12);
      bVar16 = iVar12 != unaff_ESI + 1;
      local_50 = uVar6;
      iVar12 = iVar12 + 1;
    } while (bVar16);
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  iVar12 = *(int *)(puVar5 + 3);
  while (0xe < iVar12 + 7U) {
    uVar6 = FUN_00e7bcc0();
    iVar12 = 0;
    local_50 = uVar6;
    if (7 < *(int *)(puVar5 + 3)) {
      iVar11 = (int)(uVar6 >> 0x20);
      lVar10 = 0;
      uVar15 = 0;
      uVar13 = 0;
      iVar12 = *(int *)(puVar5[2] + 4);
      while( true ) {
        if (((iVar12 != 0) && (iVar11 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          local_50 = *(uint64_t *)(puVar5[2] + lVar10);
          uVar13 = uVar15 & 0xffffffff;
        }
        iVar12 = (int)uVar13;
        uVar15 = uVar15 + 1;
        iVar11 = *(int *)(puVar5 + 3);
        iVar9 = iVar11 + 7;
        if (-1 < iVar11) {
          iVar9 = iVar11;
        }
        uVar6 = (uint64_t)(uint)(iVar9 >> 3);
        if ((int64_t)(iVar9 >> 3) <= (int64_t)uVar15) break;
        iVar11 = (int)(local_50 >> 0x20);
        lVar10 = lVar10 + 8;
        iVar12 = *(int *)(puVar5[2] + 4 + lVar10);
      }
    }
    lVar10 = puVar5[2];
    iVar11 = *(int *)(puVar7 + 3);
    FUN_00c8e340(uVar6,1);
    *(void*)(puVar7[2] + (int64_t)iVar11) = *(void*)(lVar10 + (int64_t)iVar12 * 8);
    FUN_00e7b4e0();
    FUN_00c921e0();
    iVar12 = *(int *)(puVar5 + 3);
  }
  iVar12 = *(int *)(puVar7 + 3);
  iVar11 = iVar12 + 7;
  if (-1 < iVar12) {
    iVar11 = iVar12;
  }
  uVar1 = (iVar11 >> 3) - 1;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0xf < iVar12) {
    uVar6 = 1;
    if (1 < (int)uVar1) {
      uVar6 = (uint64_t)uVar1;
    }
    lVar10 = 0;
    do {
      *(void*)(*(int64_t *)(local_50 + 0x10) + lVar10 * 2) =
           *(void*)(puVar7[2] + lVar10);
      uVar8 = FUN_00e7bcc0();
      *(void*)(*(int64_t *)(local_50 + 0x10) + 8 + lVar10 * 2) = uVar8;
      lVar10 = lVar10 + 8;
    } while (uVar6 * 8 != lVar10);
  }
  *(void*)(*(int64_t *)(local_50 + 0x10) + (int64_t)((iVar11 >> 3) * 2 + -2) * 8) =
       *(void*)(puVar7[2] + (int64_t)(int)uVar1 * 8);
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (7 < *(int *)(local_50 + 0x18)) {
    lVar10 = 0;
    do {
      uVar17 = FUN_00e7c810();
      *(void*)(*(int64_t *)(local_50 + 0x10) + lVar10 * 4) = uVar17;
      lVar10 = lVar10 + 1;
      iVar12 = *(int *)(local_50 + 0x18);
      iVar11 = iVar12 + 7;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
    } while (lVar10 < iVar11 >> 3);
  }
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

