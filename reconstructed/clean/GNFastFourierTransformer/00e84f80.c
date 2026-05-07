// Function: FUN_00e84f80
// Address: 00e84f80
// Size: 892 bytes
// Class: GNFastFourierTransformer

void FUN_00e84f80(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int iVar17;
  int iVar18;
  uint local_40;
  
  if ((g_028025d8 != 0) && (iVar2 = FUN_00c8d620(), iVar2 != 0)) {
    iVar3 = FUN_00c8d630();
    iVar17 = 0;
    if (0 < iVar3) {
      iVar13 = 0;
      do {
        lVar7 = FUN_00c8df10();
        if (lVar7 != 0) {
          iVar17 = iVar17 + *(int *)(lVar7 + 0x18);
        }
        iVar13 = iVar13 + 1;
      } while (iVar3 != iVar13);
    }
    puVar8 = (void*)FUN_00e99bf0();
    g_028025e0 = (**puVar8)();
    if (iVar17 != 0) {
      puVar8 = (void*)FUN_00e99bf0();
      g_028025e8 = (**puVar8)();
    }
    lVar7 = FUN_00d4fe50();
    if (0 < iVar3) {
      iVar13 = *(int *)(lVar7 + 8);
      uVar4 = iVar13 + 7U & 0xfffffff8;
      iVar14 = 0;
      do {
        puVar8 = (void*)FUN_00c8df10();
        lVar10 = g_028025e0;
        if (puVar8 != (void*)0x0) {
          iVar5 = uVar4 + *(int *)(puVar8 + 3) * 8;
          if (*(int *)(puVar8 + 3) == 0) {
            iVar5 = iVar13;
          }
          iVar2 = iVar2 + -1;
          lVar15 = (int64_t)iVar2 * 200;
          lVar1 = g_028025e0 + lVar15;
          *(void*)(g_028025e0 + lVar15) = *puVar8;
          *(int *)(lVar10 + 8 + lVar15) = iVar5;
          *(void*)(lVar10 + 0x10 + lVar15) = 0;
          *(int64_t *)(lVar10 + 0x18 + lVar15) = lVar7;
          puVar8 = (void*)(lVar10 + 0x20 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x30 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x40 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x50 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x60 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x70 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x80 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0x90 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0xa0 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = (void*)(lVar10 + 0xb0 + lVar15);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(void*)(lVar10 + 0xc0 + lVar15) = 0;
          iVar5 = FUN_00e38d70();
          if (0 < iVar5) {
            plVar9 = (int64_t *)(lVar10 + lVar15 + 0x28);
            iVar18 = 0;
            local_40 = uVar4;
            do {
              plVar11 = (int64_t *)FUN_00e38d90();
              lVar10 = g_028025e8;
              if (*plVar11 == 0) {
                lVar10 = plVar11[1];
LAB_00e85175:
                *(int64_t *)(lVar10 + 0x20) = lVar1;
              }
              else {
                iVar17 = iVar17 + -1;
                lVar16 = (int64_t)iVar17 * 0x38;
                lVar15 = g_028025e8 + lVar16;
                *(int64_t *)(g_028025e8 + lVar16) = *plVar11;
                *(int64_t *)(lVar10 + 8 + lVar16) = lVar1;
                *(void*)(lVar10 + 0x18 + lVar16) = 0x40;
                puVar8 = (void*)(lVar10 + 0x20 + lVar16);
                *puVar8 = 0;
                puVar8[1] = 0;
                *(void*)(lVar10 + 0x30 + lVar16) = 0;
                *(int64_t *)(lVar10 + 0x20 + lVar16) = plVar11[1];
                *(int64_t *)(lVar10 + 0x10 + lVar16) = (int64_t)(int)local_40;
                plVar12 = plVar9;
                lVar10 = *plVar9;
                if (*plVar9 != 0) {
                  do {
                    lVar16 = lVar10;
                    lVar10 = *(int64_t *)(lVar16 + 0x30);
                  } while (lVar10 != 0);
                  plVar12 = (int64_t *)(lVar16 + 0x30);
                }
                local_40 = local_40 + 8;
                *plVar12 = lVar15;
                lVar10 = plVar11[1];
                if (*plVar11 == 0) goto LAB_00e85175;
                for (lVar15 = *plVar9; lVar15 != 0; lVar15 = *(int64_t *)(lVar15 + 0x30)) {
                  iVar6 = FUN_00e7ddf0();
                  if (iVar6 == 0) {
                    *(int64_t *)(lVar10 + 0x20) = lVar15;
                    goto LAB_00e8517d;
                  }
                }
                FUN_00e82970();
              }
LAB_00e8517d:
              lVar10 = FUN_00e99bf0();
              (**(code **)(lVar10 + 0x10))();
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar5);
          }
          iVar5 = FUN_00e38d70();
          if (0 < iVar5) {
            iVar18 = 0;
            do {
              lVar10 = FUN_00e38d90();
              *(int64_t *)(lVar10 + 8) = lVar1;
              *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) | 2;
              iVar18 = iVar18 + 1;
            } while (iVar5 != iVar18);
          }
          FUN_00e38ce0();
          FUN_00e38ce0();
          lVar10 = FUN_00e99bf0();
          (**(code **)(lVar10 + 0x10))();
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar3);
    }
    FUN_00c8d5b0();
    g_028025d8 = 0;
  }
  return;
}

