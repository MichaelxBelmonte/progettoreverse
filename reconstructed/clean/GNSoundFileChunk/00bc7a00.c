// Function: FUN_00bc7a00
// Address: 00bc7a00
// Size: 1116 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bc7a00(void)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  uint64_t arg1;
  uint64_t uVar12;
  int iVar13;
  int64_t this_ptr;
  int64_t lVar14;
  uint64_t uVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  uint8_t auVar19 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint local_838 [2];
  int64_t local_830 [255];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (arg1 >> 0x20 != 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar10 = (int)(arg1 >> 0x20);
    if (0 < iVar10) {
      lVar8 = (int64_t)(int)arg1;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        local_838[0] = FUN_00e31390();
LAB_00bc7aa0:
        if (0xf < local_838[0]) {
LAB_00bc7ab3:
          uVar5 = local_838[0];
          if ((local_838[0] & 1) != 0) goto LAB_00bc7af0;
          uVar11 = local_838[0] | 1;
          cVar2 = FUN_00e314a0(2,uVar11);
          if (cVar2 == '\0') goto code_r0x00bc7ad9;
          if (*(int64_t *)(lVar6 + 0x18) == 0) {
            if (g_028024fc == 0) {
              iVar4 = FUN_00e83090();
              iVar13 = iVar4 + 3;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              g_028024fc = iVar13 >> 2;
            }
            lVar6 = FUN_00e83010();
            uVar5 = FUN_00b7a700();
            iVar13 = *(int *)(this_ptr + 0x20);
            uVar15 = (uint64_t)uVar5;
            if ((int)uVar5 < 1) goto LAB_00bc7d4a;
            if (uVar5 < 4) {
              uVar7 = 0;
              goto LAB_00bc7d29;
            }
            uVar7 = (uint64_t)(uVar5 & 0xfffffffc);
            auVar16._4_4_ = iVar13;
            auVar16._0_4_ = iVar13;
            auVar16._8_8_ = 0;
            uVar12 = (uVar7 - 4 >> 2) + 1;
            if (uVar7 - 4 == 0) {
              lVar9 = 0;
              auVar19 = g_02392fe0;
              goto LAB_00bc7cdb;
            }
            lVar14 = -(uVar12 & 0xfffffffffffffffe);
            lVar9 = 0;
            auVar19 = g_02392fe0;
            do {
              iVar4 = auVar19._0_4_;
              auVar24._0_4_ = iVar4 + g_023d92d0;
              iVar20 = auVar19._4_4_;
              auVar24._4_4_ = iVar20 + _UNK_023d92d4;
              iVar21 = auVar19._8_4_;
              iVar22 = auVar19._12_4_;
              auVar24._8_4_ = iVar21 + _UNK_023d92d8;
              auVar24._12_4_ = iVar22 + _UNK_023d92dc;
              auVar23 = pmulld(auVar16,auVar19);
              auVar19 = pmulld(auVar24,auVar16);
              auVar24 = pmovsxdq(auVar23,auVar23);
              auVar19 = pmovsxdq(auVar19,auVar19);
              *(int64_t *)(local_838 + lVar9 * 2) = auVar24._0_8_ * 4 + lVar6;
              local_830[lVar9] = auVar24._8_8_ * 4 + lVar6;
              local_830[lVar9 + 1] = auVar19._0_8_ * 4 + lVar6;
              local_830[lVar9 + 2] = auVar19._8_8_ * 4 + lVar6;
              auVar23._0_4_ = iVar4 + g_023d92e0;
              auVar23._4_4_ = iVar20 + _UNK_023d92e4;
              auVar23._8_4_ = iVar21 + _UNK_023d92e8;
              auVar23._12_4_ = iVar22 + _UNK_023d92ec;
              auVar25._0_4_ = iVar4 + g_023d92f0;
              auVar25._4_4_ = iVar20 + _UNK_023d92f4;
              auVar25._8_4_ = iVar21 + _UNK_023d92f8;
              auVar25._12_4_ = iVar22 + _UNK_023d92fc;
              auVar19 = pmulld(auVar23,auVar16);
              auVar24 = pmulld(auVar25,auVar16);
              auVar19 = pmovsxdq(auVar19,auVar19);
              auVar24 = pmovsxdq(auVar24,auVar24);
              local_830[lVar9 + 3] = auVar19._0_8_ * 4 + lVar6;
              local_830[lVar9 + 4] = auVar19._8_8_ * 4 + lVar6;
              local_830[lVar9 + 5] = auVar24._0_8_ * 4 + lVar6;
              local_830[lVar9 + 6] = auVar24._8_8_ * 4 + lVar6;
              lVar9 = lVar9 + 8;
              auVar19._0_4_ = iVar4 + g_02410ff0;
              auVar19._4_4_ = iVar20 + _UNK_02410ff4;
              auVar19._8_4_ = iVar21 + _UNK_02410ff8;
              auVar19._12_4_ = iVar22 + _UNK_02410ffc;
              lVar14 = lVar14 + 2;
            } while (lVar14 != 0);
            if ((uVar12 & 1) != 0) {
LAB_00bc7cdb:
              auVar24 = pmulld(auVar16,auVar19);
              auVar18._0_4_ = auVar19._0_4_ + g_023d92d0;
              auVar18._4_4_ = auVar19._4_4_ + _UNK_023d92d4;
              auVar18._8_4_ = auVar19._8_4_ + _UNK_023d92d8;
              auVar18._12_4_ = auVar19._12_4_ + _UNK_023d92dc;
              auVar19 = pmulld(auVar18,auVar16);
              auVar16 = pmovsxdq(auVar16,auVar24);
              auVar19 = pmovsxdq(auVar19,auVar19);
              auVar17._8_4_ = (int)lVar6;
              auVar17._0_8_ = lVar6;
              auVar17._12_4_ = (int)((uint64_t)lVar6 >> 0x20);
              *(int64_t *)(local_838 + lVar9 * 2) = auVar16._0_8_ * 4 + lVar6;
              local_830[lVar9] = auVar16._8_8_ * 4 + auVar17._8_8_;
              local_830[lVar9 + 1] = auVar19._0_8_ * 4 + lVar6;
              local_830[lVar9 + 2] = auVar19._8_8_ * 4 + auVar17._8_8_;
            }
            if (uVar7 != uVar15) {
LAB_00bc7d29:
              iVar4 = (int)uVar7 * iVar13;
              do {
                *(int64_t *)(local_838 + uVar7 * 2) = lVar6 + (int64_t)iVar4 * 4;
                uVar7 = uVar7 + 1;
                iVar4 = iVar4 + iVar13;
              } while (uVar15 != uVar7);
            }
LAB_00bc7d4a:
            bVar3 = FUN_00b870b0((int64_t)iVar13,iVar13 * lVar8);
            if ((bVar3 == 0) && (0 < (int)uVar5)) {
              uVar7 = 0;
              do {
                (**(code **)(g_02786500 + 0x40))();
                uVar7 = uVar7 + 1;
              } while (uVar15 != uVar7);
            }
            lVar9 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
            *(int64_t *)(lVar9 + 0x18) = lVar6;
            *(byte *)(lVar9 + 0xc) = bVar3 ^ 1;
            uVar5 = FUN_00e31390();
            do {
              cVar2 = FUN_00e314a0(3,uVar5 & 0xfffffffe);
            } while (cVar2 == '\0');
            goto LAB_00bc7b53;
          }
          local_838[0] = uVar11;
          cVar2 = FUN_00e314a0(0,uVar5 & 0xfffffffe);
          while (cVar2 == '\0') {
            cVar2 = FUN_00e314a0(0,local_838[0] & 0xfffffffe);
          }
        }
LAB_00bc7b53:
        lVar8 = lVar8 + 1;
        if (iVar10 + (int)arg1 <= lVar8) break;
      } while( true );
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
code_r0x00bc7ad9:
  if (local_838[0] < 0x10) goto LAB_00bc7b53;
  goto LAB_00bc7ab3;
LAB_00bc7af0:
  FUN_00da6800();
  local_838[0] = FUN_00e31390();
  goto LAB_00bc7aa0;
}

