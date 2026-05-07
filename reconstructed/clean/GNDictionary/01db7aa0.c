// Function: FUN_01db7aa0
// Address: 01db7aa0
// Size: 1857 bytes
// Class: GNDictionary

void FUN_01db7aa0(uint64_t param_1)

{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  bool bVar8;
  byte bVar9;
  bool bVar10;
  uint8_t auVar11 [12];
  char cVar12;
  bool bVar13;
  int64_t *arg1;
  uint64_t uVar14;
  int64_t *this_ptr;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t in_XMM0_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [4];
  float fVar22;
  float fVar23;
  float fVar24;
  int64_t local_e8;
  char local_e0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint8_t local_68 [4];
  uint8_t auStack_64 [8];
  float fStack_5c;
  float local_48;
  
  if ((char)this_ptr[0x27] != '\0') goto LAB_01db7f0a;
  fStack_94 = (float)((uint64_t)param_1 >> 0x20);
  fStack_8c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  if ((fStack_94 == 0.0) && (!NAN(fStack_94))) goto LAB_01db7f0a;
  fVar24 = fStack_94;
  FUN_01db2340();
  if ((local_e0 == '\0') && (local_e8 != 0)) {
    FUN_00d50b00();
  }
  local_48 = 0.0;
  fVar17 = 0.0;
  auVar11 = _auStack_64;
  auVar20._12_4_ = 0;
  auVar20._0_12_ = _auStack_64;
  _local_68 = auVar20 << 0x20;
  if (0 < *(int *)(local_e8 + 0xc)) {
    local_48 = 0.0;
    lVar16 = 0;
    fVar17 = 0.0;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar11;
    _local_68 = auVar7 << 0x20;
    lVar15 = 0;
    bVar10 = false;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(local_e8 + 0x10) + lVar16 * 8);
      if (lVar15 == lVar3) {
        if ((!bVar10) && (lVar15 != 0)) {
          bVar10 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar10) && (lVar15 != 0)) {
          FUN_00d50b20();
          bVar10 = true;
          lVar15 = lVar3;
        }
        else {
          bVar10 = true;
          lVar15 = lVar3;
        }
      }
      fVar22 = fVar24;
      if (*(int64_t **)(lVar15 + 0x20) != (int64_t *)*arg1) {
        (**(code **)(**(int64_t **)(lVar15 + 0x20) + 0x4d8))();
        fVar22 = 0.0;
        local_48 = local_48 + fVar24;
        fVar17 = fVar17 + *(float *)(lVar15 + 0x14);
        local_68 = (uint8_t  [4])((float)local_68 + *(float *)(lVar15 + 0x1c));
      }
      lVar16 = lVar16 + 1;
      fVar24 = fVar22;
    } while (lVar16 < *(int *)(local_e8 + 0xc));
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  lVar15 = 0;
  bVar9 = 1;
  bVar10 = false;
  local_98 = (float)param_1;
  if ((g_0239424c < fStack_94) && (fStack_94 < local_48 - fVar17)) {
    fVar24 = fStack_94;
    fVar17 = fStack_94;
    (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
    uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
    if (0 < (int)uVar2) {
      lVar15 = *(int64_t *)(this_ptr[0x28] + 0x10);
      uVar14 = 0;
      do {
        fVar22 = (float)MACH_HEADER.reserved;
        if (*(int64_t *)(*(int64_t *)(lVar15 + uVar14 * 8) + 0x20) == *arg1) {
          lVar16 = *(int64_t *)(lVar15 + uVar14 * 8);
          if (lVar16 != 0) {
            FUN_00d50b00(lVar15,fVar24 + local_98);
            fVar22 = *(float *)(lVar16 + 0x1c);
            FUN_00d50b20();
          }
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
      if (fVar17 + fStack_94 < fVar22) {
        uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
        if (0 < (int)uVar2) {
          lVar15 = *(int64_t *)(this_ptr[0x28] + 0x10);
          uVar14 = 0;
          do {
            if (*(int64_t *)(*(int64_t *)(lVar15 + uVar14 * 8) + 0x20) == *arg1) {
              lVar15 = *(int64_t *)(lVar15 + uVar14 * 8);
              if (lVar15 != 0) {
                FUN_00d50b00();
                bVar10 = true;
                bVar9 = 0;
                goto LAB_01db7d84;
              }
              break;
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != uVar14);
        }
      }
    }
    bVar10 = false;
    lVar15 = 0;
  }
LAB_01db7d84:
  fStack_90 = (float)in_XMM0_Qb;
  auVar21 = (uint8_t  [4])fStack_94;
  fVar22 = fStack_94;
  fVar24 = fStack_8c;
  fVar17 = fStack_8c;
  if (fStack_94 < 0.0) {
    fVar22 = 0.0;
    fVar24 = 0.0;
    fVar17 = 0.0;
    auVar21 = local_68;
    if (local_48 - fStack_94 < (float)local_68) {
      (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
      auVar21 = (uint8_t  [4])((float)local_68 + local_98);
      fVar22 = fVar22 + fStack_94;
      fVar24 = fVar24 + fStack_90;
      fVar17 = fVar17 + fStack_8c;
      uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
      if ((int)uVar2 < 1) {
        if ((float)MACH_HEADER.sizeofcmds < fVar22) {
          bVar8 = true;
          bVar13 = true;
          lVar16 = 0;
          if (lVar15 != 0) goto LAB_01db811d;
LAB_01db8197:
          if ((bool)(bVar9 & lVar15 != 0)) {
            bVar10 = true;
            if (bVar8) {
              FUN_00d50b00();
            }
            goto LAB_01db7e74;
          }
          if (!bVar8 && lVar15 != 0) {
            FUN_00d50b20();
            goto LAB_01db7e74;
          }
        }
      }
      else {
        lVar16 = *(int64_t *)(this_ptr[0x28] + 0x10);
        uVar14 = 0;
        do {
          fVar23 = fVar22;
          fVar1 = (float)MACH_HEADER.sizeofcmds;
          if (*(int64_t *)(*(int64_t *)(lVar16 + uVar14 * 8) + 0x20) == *arg1) {
            lVar16 = *(int64_t *)(lVar16 + uVar14 * 8);
            if (lVar16 != 0) {
              FUN_00d50b00();
              fVar1 = *(float *)(lVar16 + 0x14);
              FUN_00d50b20();
            }
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar2 != uVar14);
        bVar13 = fVar1 < fVar22;
        fVar22 = fVar23;
        if (bVar13) {
          uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
          bVar8 = true;
          bVar13 = true;
          if (0 < (int)uVar2) {
            lVar16 = *(int64_t *)(this_ptr[0x28] + 0x10);
            uVar14 = 0;
            do {
              if (*(int64_t *)(*(int64_t *)(lVar16 + uVar14 * 8) + 0x20) == *arg1) {
                lVar16 = *(int64_t *)(lVar16 + uVar14 * 8);
                if (lVar16 == 0) {
                  lVar16 = 0;
                }
                else {
                  FUN_00d50b00();
                }
                bVar8 = false;
                bVar13 = false;
                fVar22 = fVar23;
                if (lVar15 != lVar16) goto LAB_01db811d;
                goto LAB_01db8197;
              }
              uVar14 = uVar14 + 1;
            } while (uVar2 != uVar14);
          }
          lVar16 = 0;
          if (lVar15 == 0) goto LAB_01db8197;
LAB_01db811d:
          if (bVar13) {
            if (lVar16 != 0) {
              FUN_00d50b00();
            }
            bVar13 = (bool)(bVar10 & lVar15 != 0);
            bVar10 = true;
            lVar15 = lVar16;
            if (bVar13) {
              FUN_00d50b20();
            }
          }
          else {
            bVar13 = (bool)(bVar10 & lVar15 != 0);
            bVar10 = true;
            lVar15 = lVar16;
            if (bVar13) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  if (lVar15 == 0) {
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
LAB_01db7f0a:
    plVar4 = (int64_t *)this_ptr[6];
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar4 + 0x5a8))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x4d8))();
    cVar12 = FUN_01e4ce30();
    if (cVar12 == '\0') {
      (**(code **)(*this_ptr + 0x4d0))();
    }
    else {
      FUN_01e3b180();
    }
    (**(code **)(*this_ptr + 0x920))();
    return;
  }
LAB_01db7e74:
  plVar4 = *(int64_t **)(lVar15 + 0x20);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x4d8))();
  auStack_64._0_4_ = fVar22;
  local_68 = auVar21;
  auStack_64._4_4_ = fVar24;
  fStack_5c = fVar17;
  FUN_00d50b20();
  cVar12 = FUN_01e4ce30();
  auVar19._0_4_ = (float)auVar21 + local_98;
  auVar19._4_4_ = fVar22 + fStack_94;
  auVar19._8_4_ = fVar24 + fStack_90;
  auVar19._12_4_ = fVar17 + fStack_8c;
  auVar20 = blendps(auVar19,_local_68,0xd);
  plVar4 = *(int64_t **)(lVar15 + 0x20);
  local_68 = auVar20._0_4_;
  auStack_64._0_4_ = auVar20._4_4_;
  if (cVar12 == '\0') {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x4d0))();
    FUN_00d50b20();
  }
  else {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01e3b180();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar5 = *(void*)(lVar15 + 0x10);
  uVar6 = *(void*)(lVar15 + 0x18);
  plVar4 = *(int64_t **)(lVar15 + 0x20);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x4d8))();
  FUN_00d50b20();
  uVar18 = CONCAT44((float)auStack_64._0_4_ + fStack_94,(float)local_68 + local_98);
  *(void*)(lVar15 + 0x10) = uVar18;
  *(void*)(lVar15 + 0x18) = uVar18;
  (**(code **)(*this_ptr + 0x920))();
  *(void*)(lVar15 + 0x10) = uVar5;
  *(void*)(lVar15 + 0x18) = uVar6;
  if (local_e8 != 0) {
    FUN_00d50b20();
  }
  if (!bVar10) {
    return;
  }
  FUN_00d50b20();
  return;
}

