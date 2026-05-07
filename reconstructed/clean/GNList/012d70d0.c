// Function: FUN_012d70d0
// Address: 012d70d0
// Size: 5657 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012d70d0(void* param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  uint uVar7;
  int64_t lVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  void* pVar13;
  uint64_t uVar14;
  int iVar15;
  char *pcVar16;
  int64_t lVar17;
  int iVar18;
  int64_t *this_ptr;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint uVar22;
  uint64_t uVar23;
  double dVar24;
  uint8_t auVar25 [16];
  int64_t lVar26;
  uint8_t auVar27 [16];
  int64_t local_910;
  char local_908;
  int64_t local_900;
  char local_8f8;
  int64_t local_8d8;
  char local_8d0;
  uint64_t local_8c8;
  double local_8c0;
  int local_8b4;
  uint64_t local_8b0;
  int64_t local_8a8;
  uint local_89c;
  int64_t *local_898;
  char local_890;
  double local_888;
  void* local_87c;
  int64_t *local_878;
  char local_870 [8];
  uint64_t local_868;
  uint64_t local_860;
  int local_858;
  char local_848 [8];
  int64_t *local_840;
  int64_t local_838 [256];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_8a8 = param_2;
  local_87c = param_1;
  cVar6 = (**(code **)(*this_ptr + 0x6c0))();
  if (cVar6 != '\0') goto LAB_012d80c3;
  if (this_ptr[0x21] != 0) {
    local_870[0] = '\0';
    local_878 = (int64_t *)0x0;
    local_860 = 0xffffffff;
    local_858 = 0;
    local_868 = this_ptr[0x21];
    while( true ) {
      lVar8 = (int64_t)(int)local_860;
      iVar15 = (int)local_860 + 1;
      local_860 = CONCAT44(local_860._4_4_,iVar15);
      if (*(int *)(local_868 + 0xc) <= iVar15) break;
      lVar10 = *(int64_t *)(local_868 + 0x10);
      local_878 = *(int64_t **)(lVar10 + 8 + lVar8 * 8);
      FUN_01308710();
      pvVar9 = _pthread_getspecific((void*)lVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar23 = FUN_012f4ab0();
      if ((local_890 != '\0') && (local_898 != (int64_t *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
      FUN_013123c0(uVar23,0);
      if (local_860._4_4_ != 0) {
        if (local_860 < 0) {
          iVar15 = -local_860._4_4_;
        }
        else {
          local_860 = CONCAT44(local_860._4_4_,(int)local_860 - local_860._4_4_);
          FUN_00d23690();
          local_858 = local_858 + local_860._4_4_;
          iVar15 = 0;
        }
        local_860 = CONCAT44(iVar15,(int)local_860);
      }
    }
    uVar14 = local_868;
    FUN_01312d90();
    param_1 = (void*)uVar14;
  }
  FUN_012ddd50();
  plVar5 = local_878;
  plVar11 = this_ptr;
  if (local_870[0] == '\0') {
    if (local_878 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_870[0] != '\0') && (local_878 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_012d729a;
    }
    if ((char)this_ptr[0x33] != '\0') goto LAB_012d73f7;
LAB_012d744a:
    local_888 = (double)this_ptr[0x15];
    this_ptr[0x16] = (int64_t)local_888;
    this_ptr[0x17] = 0;
    local_888 = local_888 - local_888;
    cVar6 = *(char *)((int64_t)this_ptr + 0x199);
joined_r0x012d7483:
    if (cVar6 == '\0') goto LAB_012d7387;
LAB_012d7489:
    this_ptr[0x24] = (int64_t)local_888;
    if ((local_888 == 0.0) && (dVar24 = g_0238fee8, !NAN(local_888))) goto LAB_012d74a5;
  }
  else {
LAB_012d729a:
    if ((char)this_ptr[0x33] == '\0') goto LAB_012d744a;
    if (plVar5 != (int64_t *)0x0) {
      pvVar9 = _pthread_getspecific(param_1);
      plVar12 = plVar5;
      if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar12 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      local_888 = (double)(**(code **)(*plVar12 + 0x378))(this_ptr[0x15],this_ptr[3]);
      this_ptr[0x16] = (int64_t)local_888;
      local_888 = local_888 - (double)this_ptr[0x15];
      cVar6 = *(char *)((int64_t)this_ptr + 0x199);
      goto joined_r0x012d7483;
    }
LAB_012d73f7:
    local_888 = (double)(int)local_87c / (double)this_ptr[3] + (double)this_ptr[0x15];
    this_ptr[0x16] = (int64_t)local_888;
    this_ptr[0x17] = 0x3ff0000000000000;
    local_888 = local_888 - (double)this_ptr[0x15];
    if (*(char *)((int64_t)this_ptr + 0x199) != '\0') goto LAB_012d7489;
LAB_012d7387:
    if ((((double)this_ptr[0x24] < 0.0) && (0.0 < local_888)) ||
       ((0.0 < (double)this_ptr[0x24] && (local_888 < 0.0)))) {
      (**(code **)(*this_ptr + 0x608))();
      dVar24 = local_888;
LAB_012d74a5:
      this_ptr[0x24] = (int64_t)dVar24;
    }
  }
  pVar13 = (void*)plVar11;
  if (((this_ptr[0x39] != 0) || ((char)this_ptr[0x33] == '\0')) || (local_888 <= 0.0))
  goto LAB_012d74c9;
  if (plVar5 == (int64_t *)0x0) {
LAB_012d7e3e:
    FUN_012dde10();
    if (local_870[0] == '\0') {
      if (local_878 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_870[0] != '\0') && (local_878 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012d7e96;
      }
    }
    else if (local_878 != (int64_t *)0x0) {
LAB_012d7e96:
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01530870(this_ptr[0x15]);
      local_840 = local_878;
      plVar11 = local_878;
      if (local_878 == (int64_t *)0x0) {
        local_8b0 = CONCAT44(local_8b0._4_4_,1);
        local_840 = (int64_t *)0x0;
        local_8c8 = 0;
      }
      else {
        local_8c8 = CONCAT71((int7)((uint64_t)local_878 >> 8),1);
        if (local_870[0] == '\0') {
          FUN_00d50b00();
          local_8b0 = (uint64_t)local_8b0._4_4_ << 0x20;
          if ((local_870[0] == '\0') || (local_878 == (int64_t *)0x0)) goto LAB_012d8103;
          FUN_00d50b20();
        }
        local_8b0 = local_8b0 & 0xffffffff00000000;
      }
LAB_012d8103:
      pVar13 = (void*)plVar11;
      FUN_00d50b20();
      if (local_840 != (int64_t *)0x0) {
        if (this_ptr[0x37] != 0) {
          dVar24 = (double)FUN_0141c190();
          if (((dVar24 != g_023b2568) || (NAN(dVar24) || NAN(g_023b2568))) &&
             ((double)this_ptr[0x15] <= dVar24)) {
            if ((char)local_8b0 == '\0') {
              local_8c8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
              local_840 = (int64_t *)0x0;
              FUN_00d50b20();
            }
            goto LAB_012d74c9;
          }
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar13 = (void*)local_840;
        }
        dVar24 = (double)FUN_013201b0();
        if ((dVar24 != 0.0) || (NAN(dVar24))) {
          pvVar9 = _pthread_getspecific(pVar13);
          plVar11 = local_840;
          if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar11 = local_840, lVar8 != 0))
          {
            plVar11 = (int64_t *)local_840[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          local_8c0 = (((double)plVar11[7] - (double)this_ptr[0x15]) * (double)this_ptr[3]) /
                      (double)this_ptr[0x17];
          uVar7 = (**(code **)(*this_ptr + 0x3b0))();
          plVar11 = (int64_t *)(uint64_t)uVar7;
          iVar15 = (int)local_8c0;
          local_8b4 = local_87c - iVar15;
          if ((uVar7 != 0) && (iVar18 = iVar15 % (int)uVar7, iVar18 != 0)) {
            FUN_00b335e0();
            iVar15 = iVar15 - iVar18;
            local_8b4 = local_8b4 + iVar18;
          }
          if (local_8b4 < 1) {
            iVar15 = (**(code **)(*this_ptr + 0x3b0))();
            local_8b4 = 1;
            if (iVar15 != 0) {
              local_8b4 = iVar15;
            }
            iVar15 = local_87c - local_8b4;
          }
          local_8c0 = (double)CONCAT44(local_8c0._4_4_,iVar15);
          this_ptr[0x16] =
               (int64_t)
               (local_888 * ((double)iVar15 / (double)(int)local_87c) + (double)this_ptr[0x15]);
          plVar12 = (int64_t *)this_ptr[0x39];
          if (plVar12 != local_840) {
            FUN_00d50b00();
            this_ptr[0x39] = (int64_t)local_840;
            plVar11 = local_840;
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (0 < local_8c0._0_4_) {
            *(void*)((int64_t)this_ptr + 0x19c) = 1;
            plVar11 = (int64_t *)((uint64_t)local_8c0 & 0xffffffff);
            FUN_012d70d0(plVar11,local_8a8);
            *(void*)((int64_t)this_ptr + 0x19c) = 0;
          }
          pvVar9 = _pthread_getspecific((void*)plVar11);
          iVar15 = local_8b4;
          plVar12 = local_840;
          if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_840, lVar8 != 0))
          {
            plVar12 = (int64_t *)local_840[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            plVar11 = local_840;
          }
          local_888 = (double)plVar12[8];
          pvVar9 = _pthread_getspecific((void*)plVar11);
          plVar12 = local_840;
          if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_840, lVar8 != 0))
          {
            plVar12 = (int64_t *)local_840[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            plVar11 = local_840;
          }
          pVar13 = (void*)plVar11;
          dVar24 = (local_888 - (double)plVar12[7]) + (double)this_ptr[0x15];
          this_ptr[0x15] = (int64_t)dVar24;
          if (plVar5 == (int64_t *)0x0) {
            dVar24 = dVar24 + (double)iVar15 / (double)this_ptr[3];
          }
          else {
            pvVar9 = _pthread_getspecific(pVar13);
            plVar11 = plVar5;
            if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar11 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar11 + 0x370))(this_ptr[0x15]);
            pvVar9 = _pthread_getspecific(pVar13);
            iVar15 = local_8b4;
            plVar11 = plVar5;
            if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar11 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            dVar24 = (double)(**(code **)(*plVar11 + 0x378))(this_ptr[0x15],this_ptr[3]);
          }
          this_ptr[0x16] = (int64_t)dVar24;
          if (0 < iVar15) {
            *(void*)((int64_t)this_ptr + 0x19d) = 1;
            uVar7 = FUN_00b33120();
            if (0 < (int)uVar7) {
              lVar8 = (int64_t)local_8c0._0_4_;
              if (uVar7 < 4) {
                uVar14 = 0;
              }
              else {
                uVar14 = (uint64_t)(uVar7 & 0xfffffffc);
                uVar19 = (uVar14 - 4 >> 2) + 1;
                uVar20 = (uint64_t)((uint)uVar19 & 3);
                if (uVar14 - 4 < 0xc) {
                  lVar10 = 0;
                }
                else {
                  lVar21 = -(uVar19 & 0xfffffffffffffffc);
                  lVar10 = 0;
                  auVar27._0_8_ = (int64_t)local_8c0._0_4_;
                  auVar27._8_4_ = local_8c0._0_4_;
                  auVar27._12_4_ = local_8c0._0_4_ >> 0x1f;
                  lVar17 = auVar27._0_8_ * 4;
                  lVar26 = auVar27._8_8_ * 4;
                  do {
                    plVar11 = (int64_t *)(local_8a8 + lVar10 * 8);
                    lVar2 = plVar11[1];
                    plVar12 = (int64_t *)(local_8a8 + 0x10 + lVar10 * 8);
                    lVar3 = *plVar12;
                    lVar4 = plVar12[1];
                    local_838[lVar10] = *plVar11 + lVar17;
                    local_838[lVar10 + 1] = lVar2 + lVar26;
                    local_838[lVar10 + 2] = lVar3 + lVar17;
                    local_838[lVar10 + 3] = lVar4 + lVar26;
                    plVar11 = (int64_t *)(local_8a8 + 0x20 + lVar10 * 8);
                    lVar2 = plVar11[1];
                    plVar12 = (int64_t *)(local_8a8 + 0x30 + lVar10 * 8);
                    lVar3 = *plVar12;
                    lVar4 = plVar12[1];
                    local_838[lVar10 + 4] = *plVar11 + lVar17;
                    local_838[lVar10 + 5] = lVar2 + lVar26;
                    local_838[lVar10 + 6] = lVar3 + lVar17;
                    local_838[lVar10 + 7] = lVar4 + lVar26;
                    plVar11 = (int64_t *)(local_8a8 + 0x40 + lVar10 * 8);
                    lVar2 = plVar11[1];
                    plVar12 = (int64_t *)(local_8a8 + 0x50 + lVar10 * 8);
                    lVar3 = *plVar12;
                    lVar4 = plVar12[1];
                    local_838[lVar10 + 8] = *plVar11 + lVar17;
                    local_838[lVar10 + 9] = lVar2 + lVar26;
                    local_838[lVar10 + 10] = lVar3 + lVar17;
                    local_838[lVar10 + 0xb] = lVar4 + lVar26;
                    plVar11 = (int64_t *)(local_8a8 + 0x60 + lVar10 * 8);
                    lVar2 = plVar11[1];
                    plVar12 = (int64_t *)(local_8a8 + 0x70 + lVar10 * 8);
                    lVar3 = *plVar12;
                    lVar4 = plVar12[1];
                    local_838[lVar10 + 0xc] = *plVar11 + lVar17;
                    local_838[lVar10 + 0xd] = lVar2 + lVar26;
                    local_838[lVar10 + 0xe] = lVar3 + lVar17;
                    local_838[lVar10 + 0xf] = lVar4 + lVar26;
                    lVar10 = lVar10 + 0x10;
                    lVar21 = lVar21 + 4;
                  } while (lVar21 != 0);
                }
                if (uVar20 != 0) {
                  lVar21 = local_8a8 + lVar10 * 8;
                  lVar17 = 0;
                  auVar25._0_8_ = (int64_t)local_8c0._0_4_;
                  auVar25._8_4_ = local_8c0._0_4_;
                  auVar25._12_4_ = local_8c0._0_4_ >> 0x1f;
                  lVar26 = auVar25._8_8_ * 4;
                  do {
                    plVar12 = (int64_t *)(lVar21 + lVar17);
                    lVar2 = plVar12[1];
                    plVar11 = (int64_t *)(lVar21 + 0x10 + lVar17);
                    lVar3 = *plVar11;
                    lVar4 = plVar11[1];
                    plVar11 = (int64_t *)((int64_t)local_838 + lVar17 + lVar10 * 8);
                    *plVar11 = *plVar12 + auVar25._0_8_ * 4;
                    plVar11[1] = lVar2 + lVar26;
                    plVar11 = (int64_t *)((int64_t)local_838 + lVar17 + lVar10 * 8 + 0x10);
                    *plVar11 = lVar3 + auVar25._0_8_ * 4;
                    plVar11[1] = lVar4 + lVar26;
                    lVar17 = lVar17 + 0x20;
                  } while (uVar20 << 5 != lVar17);
                }
                if (uVar14 == uVar7) goto LAB_012d86e3;
              }
              do {
                local_838[uVar14] = *(int64_t *)(local_8a8 + uVar14 * 8) + lVar8 * 4;
                uVar14 = uVar14 + 1;
              } while (uVar7 != uVar14);
            }
LAB_012d86e3:
            FUN_012d70d0(iVar15,local_838);
            *(void*)((int64_t)this_ptr + 0x19d) = 0;
          }
          if (this_ptr[0x39] != 0) {
            this_ptr[0x39] = 0;
            FUN_00d50b20();
          }
          if ((char)local_8b0 == '\0') {
            FUN_00d50b20();
          }
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_012d80c3;
        }
        if ((char)local_8b0 == '\0') {
          FUN_00d50b20();
        }
      }
    }
LAB_012d74c9:
    if (plVar5 != (int64_t *)0x0) goto LAB_012d74ce;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar13);
    plVar11 = plVar5;
    if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar11 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    cVar6 = (**(code **)(*plVar11 + 0x380))();
    if (cVar6 != '\0') goto LAB_012d7e3e;
LAB_012d74ce:
    FUN_00d50b20();
  }
  lVar8 = (int64_t)(int)local_87c;
  uVar14 = this_ptr[0x12] + lVar8;
  local_8b0 = uVar14;
  if ((g_028ac879 != '\0') && (g_028ac868 != 0)) {
    cVar6 = (**(code **)(*this_ptr + 0x420))();
    if (cVar6 == '\0') {
      uVar23 = FUN_00e313d0();
      this_ptr[0x41] = local_8b0;
      if (this_ptr[0x21] != 0) {
        local_870[0] = '\0';
        local_878 = (int64_t *)0x0;
        local_860 = 0xffffffff;
        local_858 = 0;
        iVar15 = 0;
        local_888 = (double)((int64_t)this_ptr + 0x204);
        local_868 = this_ptr[0x21];
        while( true ) {
          if (iVar15 != 0) {
            if (iVar15 < 1) {
              iVar15 = -iVar15;
            }
            else {
              local_860 = CONCAT44(local_860._4_4_,(int)local_860 - iVar15);
              uVar23 = FUN_00d23690(uVar23,iVar15);
              local_858 = local_858 + local_860._4_4_;
              iVar15 = 0;
            }
            local_860 = CONCAT44(iVar15,(int)local_860);
          }
          lVar10 = (int64_t)(int)local_860;
          iVar15 = (int)local_860 + 1;
          local_860 = CONCAT44(local_860._4_4_,iVar15);
          if (*(int *)(local_868 + 0xc) <= iVar15) break;
          local_878 = *(int64_t **)(*(int64_t *)(local_868 + 0x10) + 8 + lVar10 * 8);
          local_8d0 = 0;
          lVar10 = this_ptr[0x2d];
          if (lVar10 != 0) {
            uVar23 = FUN_00d50b00();
          }
          local_8d0 = '\x01';
          local_8d8 = lVar10;
          uVar23 = FUN_01308790(uVar23,&local_8d8);
          if ((local_908 != '\0') && (local_910 != 0)) {
            uVar23 = FUN_00d50b20();
          }
          if ((local_8d0 != '\0') && (local_8d8 != 0)) {
            uVar23 = FUN_00d50b20();
          }
          iVar15 = local_860._4_4_;
        }
        uVar14 = local_868;
        FUN_01312d90();
      }
      if (this_ptr[0x2d] == 0) {
        FUN_00d216c0();
      }
      else {
        local_870[0] = '\0';
        local_878 = (int64_t *)0x0;
        local_860 = 0xffffffff;
        local_858 = 0;
        local_860._4_4_ = 0;
        iVar15 = 0;
        local_868 = this_ptr[0x2d];
        while( true ) {
          if (local_860._4_4_ != 0) {
            if (local_860._4_4_ < 1) {
              iVar18 = -local_860._4_4_;
            }
            else {
              iVar18 = (int)local_860 - local_860._4_4_;
              local_860 = CONCAT44(local_860._4_4_,iVar18);
              FUN_00d23690();
              local_858 = local_858 + local_860._4_4_;
              iVar18 = 0;
            }
            local_860 = CONCAT44(iVar18,(int)local_860);
          }
          lVar10 = (int64_t)(int)local_860;
          iVar18 = (int)local_860 + 1;
          local_860 = CONCAT44(local_860._4_4_,iVar18);
          if (*(int *)(local_868 + 0xc) <= iVar18) break;
          local_878 = *(int64_t **)(*(int64_t *)(local_868 + 0x10) + 8 + lVar10 * 8);
          (**(code **)(*local_878 + 0x5c8))();
          iVar18 = *(int *)((int64_t)local_898 + 0xc);
          if ((local_890 != '\0') && (local_898 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar18 == 0) {
            iVar15 = FUN_00e31650();
            local_898 = local_878;
            local_890 = '\0';
            FUN_00e323f0();
            if ((local_890 != '\0') && (local_898 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar14 = local_868;
        FUN_01312d90();
        FUN_00d216c0();
        if (iVar15 != 0) {
          if (0 < *(int *)(g_028ac868 + 0xc)) {
            iVar15 = 0;
            do {
              FUN_00dee620();
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(g_028ac868 + 0xc));
          }
          do {
            FUN_00dee5a0(g_023908c8);
            iVar15 = FUN_00e31390();
          } while (iVar15 != 0);
        }
      }
    }
  }
  uVar23 = FUN_00b33590();
  uVar7 = (uint)uVar14;
  local_8c0 = (double)CONCAT44(local_8c0._4_4_,(int)uVar23);
  local_89c = (uint)CONCAT71((int7)((uint64_t)uVar23 >> 8),(char)this_ptr[0x3e]);
  uVar22 = local_89c;
  if (*(int *)(this_ptr[0x2f] + 0xc) != 0) {
    FUN_00d23310();
    plVar5 = local_878;
    pVar13 = (void*)CONCAT71((int7)(uVar14 >> 8),local_870[0]);
    pcVar16 = local_848;
    if (local_870[0] != '\0') {
      pcVar16 = local_870;
    }
    local_848[0] = local_870[0];
    *pcVar16 = '\0';
    if ((local_870[0] != '\0') && (local_878 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    plVar11 = local_898;
    if ((local_890 != '\0') && (local_898 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_848[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar7 = 1;
    uVar22 = uVar7;
    if (plVar11 != (int64_t *)0x0) {
      uVar7 = local_89c & 0xff;
      uVar22 = uVar7;
    }
  }
  local_89c = uVar22;
  lVar10 = this_ptr[0x2d];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_012d5e20();
  if ((local_8f8 != '\0') && (local_900 != 0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  uVar22 = (uint)local_8c0._0_1_;
  local_840 = (int64_t *)CONCAT44(local_840._4_4_,(uint)local_8c0._0_1_);
  if (this_ptr[0x2d] == 0) {
    local_888 = (double)CONCAT44(local_888._4_4_,local_89c);
    uVar23 = FUN_00d216c0();
    lVar10 = this_ptr[0x22];
  }
  else {
    cVar6 = (char)local_89c != '\0';
    local_870[0] = '\0';
    local_878 = (int64_t *)0x0;
    local_860 = 0xffffffff;
    local_858 = 0;
    local_888 = (double)CONCAT44(local_888._4_4_,local_89c);
    local_8b4 = CONCAT31(local_8b4._1_3_,cVar6);
    local_868 = this_ptr[0x2d];
    while( true ) {
      lVar10 = (int64_t)(int)local_860;
      iVar15 = (int)local_860 + 1;
      local_860 = CONCAT44(local_860._4_4_,iVar15);
      if (*(int *)(local_868 + 0xc) <= iVar15) break;
      local_878 = *(int64_t **)(*(int64_t *)(local_868 + 0x10) + 8 + lVar10 * 8);
      FUN_0130f550();
      uVar7 = FUN_00b33590();
      if (uVar22 < (uVar7 & 0xff) || cVar6 != '\0') {
        FUN_01308b10();
        uVar23 = FUN_011ee630(local_87c,this_ptr[0x12],(uint64_t)local_8c0 & 0xffffffff);
        if ((local_890 != '\0') && (local_898 != (int64_t *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
        local_888 = (double)CONCAT44(local_888._4_4_,(int)CONCAT71((int7)((uint64_t)uVar23 >> 8),1)
                                    );
      }
      else {
        local_8c8 = CONCAT44(local_8c8._4_4_,uVar7);
        if ((uVar7 & 0xff) != 0) {
          uVar14 = 0;
          do {
            iVar15 = FUN_0130b1e0();
            if ((((iVar15 != -1) && (((uint64_t)local_888 & 1) == 0)) && (this_ptr[0x22] != 0)) &&
               (lVar10 = *(int64_t *)(this_ptr[0x22] + 0x100), lVar10 != 0)) {
              iVar18 = *(int *)(lVar10 + 0x18);
              lVar21 = (int64_t)iVar18;
              iVar1 = iVar18 + 3;
              if (-1 < lVar21) {
                iVar1 = iVar18;
              }
              if (3 < lVar21) {
                lVar17 = 0;
                do {
                  if (*(int *)(*(int64_t *)(lVar10 + 0x10) + lVar17 * 4) == iVar15)
                  goto LAB_012d7c50;
                  lVar17 = lVar17 + 1;
                } while (iVar1 >> 2 != (int)lVar17);
              }
              FUN_00c8e340();
              *(int *)(*(int64_t *)(lVar10 + 0x10) + lVar21) = iVar15;
            }
LAB_012d7c50:
            if (iVar15 == -1) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if (iVar15 < (int)(uint)local_840) {
                lVar10 = *(int64_t *)(local_8a8 + (int64_t)iVar15 * 8);
              }
            }
            local_838[uVar14] = lVar10;
            uVar14 = uVar14 + 1;
          } while (uVar14 != (uVar7 & 0xff));
        }
        FUN_01308b10();
        FUN_011ee630(local_87c,this_ptr[0x12],local_8c8 & 0xffffffff);
        cVar6 = (char)local_8b4;
        uVar22 = (uint)local_840;
        if ((local_890 != '\0') && (local_898 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_860._4_4_ != 0) {
        if (local_860._4_4_ < 1) {
          iVar15 = -local_860._4_4_;
        }
        else {
          iVar15 = (int)local_860 - local_860._4_4_;
          local_860._4_4_ = (int)((uint64_t)local_860 >> 0x20);
          local_860 = CONCAT44(local_860._4_4_,iVar15);
          FUN_00d23690();
          local_858 = local_858 + local_860._4_4_;
          iVar15 = 0;
        }
        local_860 = CONCAT44(iVar15,(int)local_860);
      }
    }
    uVar14 = local_868;
    FUN_01312d90();
    uVar7 = (uint)uVar14;
    uVar23 = FUN_00d216c0();
    lVar10 = this_ptr[0x22];
  }
  if ((lVar10 != 0) && (*(int64_t *)(lVar10 + 0x100) != 0)) {
    if ((((uint64_t)local_888 & 1) == 0) &&
       (*(int *)(*(int64_t *)(lVar10 + 0x100) + 0x18) + 3U < 7)) {
      uVar23 = FUN_012dde10();
      if (local_870[0] == '\0') {
        if (local_878 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_870[0] != '\0') && (local_878 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_012d7f87;
        }
      }
      else if (local_878 != (int64_t *)0x0) {
LAB_012d7f87:
        pvVar9 = _pthread_getspecific(uVar7);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_01530ac0();
        uVar7 = 1;
        if (cVar6 == '\0') {
          uVar7 = (uint)local_888._0_1_;
        }
        local_888 = (double)CONCAT44(local_888._4_4_,uVar7);
        uVar23 = FUN_00d50b20();
      }
    }
    if (((uint64_t)local_888 & 1) != 0) {
      if ((char)local_89c == '\0') {
        uVar23 = FUN_00c8e340(uVar23,0);
      }
      iVar15 = (uint)local_840;
      if ((uint)local_840 != 0) {
        iVar18 = 0;
        do {
          lVar10 = *(int64_t *)(this_ptr[0x22] + 0x100);
          iVar1 = *(int *)(lVar10 + 0x18);
          uVar23 = FUN_00c8e340(uVar23,1);
          *(int *)(*(int64_t *)(lVar10 + 0x10) + (int64_t)iVar1) = iVar18;
          iVar18 = iVar18 + 1;
        } while (iVar15 != iVar18);
      }
    }
  }
  if ((int64_t *)this_ptr[0x23] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x23] + 0x400))(local_87c,local_8a8);
  }
  if ((int64_t *)this_ptr[0x22] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x22] + 0x400))(local_87c,local_8a8);
  }
  this_ptr[0x12] = this_ptr[0x12] + lVar8;
  this_ptr[0x15] = this_ptr[0x16];
LAB_012d80c3:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

