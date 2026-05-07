// Function: FUN_016d63b0
// Address: 016d63b0
// Size: 2202 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016d63b0(void* param_1)

{
  void* pVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  void* pVar13;
  int iVar14;
  int iVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t this_ptr;
  int iVar18;
  bool bVar19;
  double dVar20;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint64_t local_80;
  char local_78;
  uint64_t local_68;
  char local_60;
  
  uVar4 = local_68;
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    dVar20 = (double)FUN_016cd860();
    if (3 < *(int *)(local_68 + 0xc)) {
      dVar20 = g_02390108 / dVar20;
      iVar12 = 1;
      do {
        lVar8 = *(int64_t *)(uVar4 + 0x10);
        lVar2 = *(int64_t *)(lVar8 + (int64_t)iVar12 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar8 = *(int64_t *)(uVar4 + 0x10);
        }
        lVar3 = *(int64_t *)(lVar8 + 8 + (int64_t)iVar12 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pVar13 = (void*)lVar8;
        pvVar7 = _pthread_getspecific(pVar13);
        pVar1 = (void*)lVar2;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar13 = pVar1;
        }
        uVar9 = FUN_019079b0();
        FUN_016ebc80(extraout_XMM0_Qa,uVar9);
        bVar19 = true;
        if (local_68 == 0) {
          pvVar7 = _pthread_getspecific(pVar13);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar13 = (void*)lVar3;
          }
          uVar9 = FUN_019079b0();
          FUN_016ebc80(extraout_XMM0_Qa_00,uVar9);
          bVar19 = true;
          if (local_80 == 0) {
            pvVar7 = _pthread_getspecific(pVar13);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_019079b0();
            lVar8 = *(int64_t *)(this_ptr + 0x70);
            if (7 < *(int *)(lVar8 + 0x18)) {
              uVar11 = uVar10 >> 0x20;
              lVar16 = 1;
              iVar18 = 0;
              iVar6 = *(int *)(*(int64_t *)(lVar8 + 0x10) + 4);
              while( true ) {
                if ((iVar6 != 0) && ((int)uVar11 != 0)) {
                  cVar5 = FUN_00e7c000();
                  pVar13 = (void*)lVar8;
                  if (cVar5 != '\0') {
                    if (iVar18 == -8) goto LAB_016d6666;
                    goto LAB_016d6753;
                  }
                  lVar8 = *(int64_t *)(this_ptr + 0x70);
                }
                iVar6 = *(int *)(lVar8 + 0x18);
                iVar14 = iVar6 + 7;
                if (-1 < iVar6) {
                  iVar14 = iVar6;
                }
                if (iVar14 >> 3 <= lVar16) break;
                uVar11 = uVar10 >> 0x20;
                iVar18 = iVar18 + 8;
                lVar16 = lVar16 + 1;
                iVar6 = *(int *)(*(int64_t *)(lVar8 + 0x10) + -4 + lVar16 * 8);
              }
            }
            pVar13 = (void*)lVar8;
LAB_016d6666:
            pvVar7 = _pthread_getspecific(pVar13);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_019079b0();
            lVar8 = *(int64_t *)(this_ptr + 0x70);
            if (*(int *)(lVar8 + 0x18) < 8) {
              bVar19 = false;
            }
            else {
              uVar11 = uVar10 >> 0x20;
              lVar16 = 1;
              iVar18 = 0;
              iVar6 = *(int *)(*(int64_t *)(lVar8 + 0x10) + 4);
              while( true ) {
                if ((iVar6 != 0) && ((int)uVar11 != 0)) {
                  cVar5 = FUN_00e7c000();
                  if (cVar5 != '\0') {
                    bVar19 = iVar18 != -8;
                    goto LAB_016d6753;
                  }
                  lVar8 = *(int64_t *)(this_ptr + 0x70);
                }
                iVar6 = *(int *)(lVar8 + 0x18);
                iVar14 = iVar6 + 7;
                if (-1 < iVar6) {
                  iVar14 = iVar6;
                }
                if (iVar14 >> 3 <= lVar16) break;
                uVar11 = uVar10 >> 0x20;
                iVar18 = iVar18 + 8;
                lVar16 = lVar16 + 1;
                iVar6 = *(int *)(*(int64_t *)(lVar8 + 0x10) + -4 + lVar16 * 8);
              }
              bVar19 = false;
            }
          }
LAB_016d6753:
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        iVar6 = iVar12 + 1;
        if (!bVar19) {
          uVar10 = uVar4;
          if (iVar12 < *(int *)(uVar4 + 0xc) + -2) {
            do {
              uVar10 = *(uint64_t *)(uVar4 + 0x10);
              lVar8 = *(int64_t *)(uVar10 + (int64_t)iVar6 * 8);
              if (lVar8 != 0) {
                FUN_00d50b00();
                uVar10 = *(uint64_t *)(uVar4 + 0x10);
              }
              lVar16 = *(int64_t *)(uVar10 + 8 + (int64_t)iVar6 * 8);
              if (lVar16 != 0) {
                FUN_00d50b00();
              }
              pvVar7 = _pthread_getspecific((void*)uVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar9 = FUN_019079b0();
              FUN_016ebc80(extraout_XMM0_Qa_01,uVar9);
              if (local_68 == 0) {
                pvVar7 = _pthread_getspecific((void*)uVar10);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = FUN_019079b0();
                uVar10 = *(uint64_t *)(this_ptr + 0x70);
                if (7 < *(int *)(uVar10 + 0x18)) {
                  uVar11 = local_80 >> 0x20;
                  lVar17 = 1;
                  iVar14 = 0;
                  iVar18 = *(int *)(*(int64_t *)(uVar10 + 0x10) + 4);
                  do {
                    if ((iVar18 != 0) && ((int)uVar11 != 0)) {
                      cVar5 = FUN_00e7c000();
                      if (cVar5 != '\0') {
                        cVar5 = '\x05';
                        if (iVar14 != -8) goto LAB_016d6bf4;
                        break;
                      }
                      uVar10 = *(uint64_t *)(this_ptr + 0x70);
                    }
                    iVar18 = *(int *)(uVar10 + 0x18);
                    iVar15 = iVar18 + 7;
                    if (-1 < iVar18) {
                      iVar15 = iVar18;
                    }
                    if (iVar15 >> 3 <= lVar17) break;
                    uVar11 = local_80 >> 0x20;
                    iVar14 = iVar14 + 8;
                    lVar17 = lVar17 + 1;
                    iVar18 = *(int *)(*(int64_t *)(uVar10 + 0x10) + -4 + lVar17 * 8);
                  } while( true );
                }
                pVar13 = (void*)uVar10;
                pvVar7 = _pthread_getspecific(pVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar21 = (double)FUN_01907950();
                pvVar7 = _pthread_getspecific(pVar13);
                if ((pvVar7 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  pVar13 = pVar1;
                }
                dVar22 = (double)FUN_01907950();
                pvVar7 = _pthread_getspecific(pVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_019079b0();
                pvVar7 = _pthread_getspecific(pVar13);
                if ((pvVar7 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  pVar13 = pVar1;
                }
                FUN_019079b0();
                FUN_00e7b970();
                dVar23 = (double)FUN_00e7c860();
                pvVar7 = _pthread_getspecific(pVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar24 = (double)FUN_01907950();
                pvVar7 = _pthread_getspecific(pVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar25 = (double)FUN_01907950();
                pvVar7 = _pthread_getspecific(pVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = FUN_019079b0();
                pvVar7 = _pthread_getspecific(pVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_019079b0();
                FUN_00e7b970();
                dVar26 = (double)FUN_00e7c860();
                dVar21 = (double)((uint64_t)
                                  ((dVar24 - dVar25) / dVar26 - (dVar21 - dVar22) / dVar23) &
                                 g_023908f0);
                uVar10 = (uint64_t)(dVar20 < dVar21);
                iVar18 = iVar6 + 1;
                if (dVar20 < dVar21) {
                  iVar18 = iVar6;
                }
                iVar6 = iVar18;
                cVar5 = (dVar20 < dVar21) * '\x05';
                local_68 = local_80;
              }
              else {
                if (local_60 != '\0') {
                  FUN_00d50b20();
                }
                cVar5 = '\x05';
              }
LAB_016d6bf4:
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
            } while ((cVar5 == '\0') && (uVar10 = uVar4, iVar6 <= *(int *)(uVar4 + 0xc) + -2));
          }
          iVar18 = (iVar6 - iVar12) + -2;
          if (0 < iVar18) {
            iVar6 = iVar12 + 2;
            do {
              pvVar7 = _pthread_getspecific((void*)uVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_018fc0b0();
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        iVar12 = iVar6;
      } while (iVar6 <= *(int *)(uVar4 + 0xc) + -3);
    }
    FUN_00d50b20();
  }
  return;
}

