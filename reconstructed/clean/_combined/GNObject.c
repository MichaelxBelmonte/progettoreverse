// ===================================================================
// GNObject — Complete reconstructed pseudocode
// 34 functions
// ===================================================================

// Registered properties (24):
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


// ============================================================
// 00d5af30
// ============================================================
// Function: FUN_00d5af30
// Address: 00d5af30
// Size: 17348 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNValue"
//   "Cannot set value for key: No Property"
//   "Cannot set value %@ for key %@ directly."
//   "GNString"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d5af30(uint32_t param_1,uint64_t param_2,char param_3)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  int64_t lVar5;
  char cVar6;
  uint8_t uVar7;
  uint16_t uVar8;
  int extraout_var;
  int64_t lVar9;
  int64_t *plVar10;
  double dVar11;
  void*puVar12;
  uint64_t uVar13;
  uint64_t in_RCX;
  double *pdVar14;
  int iVar15;
  int64_t *in_RDX;
  int64_t *plVar16;
  double *arg1;
  int64_t *this_ptr;
  double *pdVar17;
  byte bVar18;
  void*puVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint32_t extraout_XMM0_Da_18;
  uint32_t extraout_XMM0_Da_19;
  uint32_t extraout_XMM0_Da_20;
  uint32_t extraout_XMM0_Da_21;
  uint32_t extraout_XMM0_Da_22;
  uint32_t extraout_XMM0_Da_23;
  uint32_t extraout_XMM0_Da_24;
  uint32_t extraout_XMM0_Da_25;
  uint32_t extraout_XMM0_Da_26;
  uint32_t extraout_XMM0_Da_27;
  uint32_t extraout_XMM0_Da_28;
  uint32_t extraout_XMM0_Da_29;
  uint32_t extraout_XMM0_Da_30;
  float fVar20;
  uint32_t extraout_XMM0_Da_31;
  uint32_t extraout_XMM0_Da_32;
  uint32_t extraout_XMM0_Da_33;
  uint32_t extraout_XMM0_Da_34;
  uint32_t extraout_XMM0_Da_35;
  uint32_t extraout_XMM0_Da_36;
  uint32_t extraout_XMM0_Da_37;
  uint32_t extraout_XMM0_Da_38;
  uint32_t extraout_XMM0_Da_39;
  uint32_t extraout_XMM0_Da_40;
  uint32_t extraout_XMM0_Da_41;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Da_42;
  uint32_t extraout_XMM0_Da_43;
  uint32_t extraout_XMM0_Da_44;
  uint32_t extraout_XMM0_Da_45;
  uint32_t extraout_XMM0_Da_46;
  uint32_t extraout_XMM0_Da_47;
  uint32_t extraout_XMM0_Da_48;
  uint32_t extraout_XMM0_Da_49;
  uint32_t extraout_XMM0_Da_50;
  uint32_t extraout_XMM0_Da_51;
  uint32_t extraout_XMM0_Da_52;
  uint32_t extraout_XMM0_Da_53;
  uint32_t extraout_XMM0_Da_54;
  uint32_t extraout_XMM0_Da_55;
  uint32_t extraout_XMM0_Da_56;
  uint32_t extraout_XMM0_Da_57;
  uint32_t extraout_XMM0_Da_58;
  uint32_t extraout_XMM0_Da_59;
  uint32_t extraout_XMM0_Da_60;
  uint32_t extraout_XMM0_Da_61;
  uint32_t extraout_XMM0_Da_62;
  uint32_t extraout_XMM0_Da_63;
  uint32_t extraout_XMM0_Da_64;
  uint32_t extraout_XMM0_Da_65;
  uint32_t extraout_XMM0_Da_66;
  uint32_t extraout_XMM0_Da_67;
  double local_270;
  char local_268;
  double local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  double local_210;
  char local_208;
  double local_200;
  char local_1f8;
  double local_1f0;
  char local_1e8;
  double local_1e0;
  char local_1d8;
  double local_1d0;
  char local_1c8;
  double local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  void*local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  uint64_t local_90;
  int64_t *local_88;
  char local_80 [8];
  void*local_78;
  uint64_t local_70;
  int local_68;
  uint32_t uStack_64;
  char local_60;
  void*local_58;
  int64_t *local_50;
  void*puVar22;
  char local_34;
  
  lVar9 = g_0277ddb0;
  if (in_RDX == (int64_t *)0x0) {
    if (g_0277ddb0 != 0) {
      param_1 = FUN_00e31530(in_RCX,0);
    }
    FUN_00cc7b40(param_1,g_025908a0);
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  local_58 = (void*)in_RDX[2];
  if ((param_3 == '\0') || (cVar6 = (**(code **)(*this_ptr + 0x1e0))(), cVar6 == '\0')) {
    local_34 = '\0';
  }
  else {
    (**(code **)(*this_ptr + 0x150))();
    local_34 = '\x01';
  }
  cVar6 = (**(code **)(*in_RDX + 0x368))();
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*in_RDX + 0x370))();
    uVar21 = extraout_XMM0_Da_01;
    if (cVar6 == '\0') goto switchD_00d5afda_caseD_2b;
    uVar21 = FUN_00d77bd0();
    if ((char)in_RCX == '\0') {
      local_80[0] = '\0';
      local_50 = (int64_t *)0x0;
    }
    else {
      uVar21 = FUN_00d77be0();
      local_50 = local_88;
    }
    plVar10 = local_50;
    plVar16 = &local_a8;
    if (local_80[0] != '\0') {
      plVar16 = (int64_t *)local_80;
    }
    local_a8 = CONCAT71(local_a8._1_7_,local_80[0]);
    local_88 = local_50;
    *(char *)plVar16 = '\0';
    if ((local_80[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_00d77bd0();
      local_98 = local_98 >> 0x20;
      uVar21 = extraout_XMM0_Da_02;
    }
    if (extraout_var < 2) {
      if (extraout_var != 1) {
        if (((char)local_a8 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        goto joined_r0x00d5b3a4;
      }
      local_58 = (void*)(int64_t)*(int *)((int64_t)in_RDX + 0x24);
      if (in_RDX[0xe] == 0) {
        plVar10 = *(int64_t **)((int64_t)this_ptr + (int64_t)local_58);
        bVar18 = 0;
      }
      else {
        bVar1 = *(byte *)(in_RDX[0xe] + 0x18);
        bVar18 = bVar1 >> 7;
        plVar10 = *(int64_t **)((int64_t)this_ptr + (int64_t)local_58);
        if (((char)bVar1 < '\0') && (plVar10 != (int64_t *)0x0)) {
          plVar10 = (int64_t *)(**(code **)(*plVar10 + 0x10))();
          bVar18 = 1;
          uVar21 = extraout_XMM0_Da_03;
        }
      }
      if ((local_50 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
        if ((int)local_98 < 2) {
          if ((int)local_98 == 1) {
            local_158 = '\0';
            local_160 = 0;
            uVar21 = (**(code **)(*plVar10 + 0x200))(0,local_50,local_34);
            if ((local_158 != '\0') && (local_160 != 0)) {
              uVar21 = FUN_00d50b20();
            }
          }
        }
        else {
          local_108 = 0;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00e31530(uVar21,0);
          }
          local_108 = '\x01';
          local_110 = this_ptr;
          uVar21 = (**(code **)(*plVar10 + 0x228))(0,local_50,1);
          if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
        }
      }
      if (bVar18 == 0) {
        cVar6 = FUN_00d77e30();
        dVar11 = *arg1;
        uVar21 = extraout_XMM0_Da_24;
        if (cVar6 == '\0') {
          *(double *)((int64_t)this_ptr + (int64_t)local_58) = dVar11;
        }
        else {
          dVar2 = *(double *)((int64_t)this_ptr + (int64_t)local_58);
          if (dVar2 != dVar11) {
            if (dVar11 != 0.0) {
              uVar21 = FUN_00e31530(local_58,0);
            }
            *(double *)((int64_t)this_ptr + (int64_t)local_58) = dVar11;
            if (dVar2 != 0.0) {
              uVar21 = FUN_00d50b20();
            }
          }
        }
        goto LAB_00d5cf7c;
      }
      if (*arg1 == 0.0) {
LAB_00d5be5e:
        lVar9 = 0;
      }
      else {
        cVar6 = FUN_00d77e30();
        uVar21 = extraout_XMM0_Da_23;
        if (cVar6 != '\0') {
          uVar21 = FUN_00e31530(extraout_XMM0_Da_23,0);
        }
        if ((int64_t *)*arg1 == (int64_t *)0x0) goto LAB_00d5be5e;
        uVar21 = (**(code **)(*(int64_t *)*arg1 + 0x360))();
        lVar9 = FUN_00e86120(uVar21,1);
        lVar9 = lVar9 + (int64_t)*arg1;
        uVar21 = extraout_XMM0_Da_42;
      }
      *(int64_t *)((int64_t)this_ptr + (int64_t)local_58) = lVar9;
      if ((plVar10 != (int64_t *)0x0) &&
         (cVar6 = FUN_00d77e30(), uVar21 = extraout_XMM0_Da_43, cVar6 != '\0')) {
        uVar21 = FUN_00d50b20();
      }
LAB_00d5cf7c:
      if ((local_50 != (int64_t *)0x0) &&
         (plVar10 = (int64_t *)*arg1, plVar10 != (int64_t *)0x0)) {
        if ((int)local_98 < 2) {
          if ((int)local_98 == 1) {
            local_128 = 0;
            if (this_ptr != (int64_t *)0x0) {
              FUN_00e31530(uVar21,0);
            }
            local_128 = '\x01';
            local_130 = this_ptr;
            (**(code **)(*plVar10 + 0x200))(0,local_50,local_34);
            if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_138 = 0;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00e31530(uVar21,0);
          }
          local_138 = '\x01';
          local_140 = this_ptr;
          (**(code **)(*plVar10 + 0x220))(0xffffffff,local_50,0,local_34);
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (local_34 == '\0') {
        if ((char)local_a8 == '\0') {
          return;
        }
        if (local_50 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      (**(code **)(*this_ptr + 0x158))();
      if ((char)local_a8 == '\0') {
        return;
      }
      if (local_50 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_b8 = (int64_t *)(int64_t)*(int *)((int64_t)in_RDX + 0x24);
    puVar12 = *(void**)((int64_t)local_b8 + (int64_t)this_ptr);
    if (puVar12 == (void*)0x0) {
      puVar19 = (void*)*arg1;
      if (local_50 == (int64_t *)0x0) {
        bVar3 = false;
        puVar22 = (void*)0x0;
        local_90 = 0;
        local_58 = (void*)0x0;
        goto LAB_00d5c009;
      }
LAB_00d5bd08:
      iVar15 = (int)local_98;
      if (puVar19 != (void*)0x0) {
        puVar22 = (void*)0x0;
        bVar3 = false;
        local_90 = 0;
        local_58 = (void*)0x0;
        uVar13 = FUN_00e31530();
        local_90 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        local_58 = puVar19;
        goto LAB_00d5c020;
      }
      local_58 = (void*)0x0;
      local_90 = 0;
      puVar22 = (void*)0x0;
      bVar3 = false;
    }
    else {
      FUN_00e31530();
      pcVar4 = g_02572370;
      puVar19 = (void*)*arg1;
      if (local_50 == (int64_t *)0x0) {
        bVar3 = false;
        puVar22 = (void*)0x0;
        local_90 = 0;
        local_58 = (void*)0x0;
      }
      else {
        if (*(int *)((int64_t)puVar12 + 0xc) == 0) goto LAB_00d5bd08;
        if ((puVar19 == (void*)0x0) || (*(int *)((int64_t)puVar19 + 0xc) == 0)) {
          local_90 = 0;
          local_58 = (void*)0x0;
          FUN_00e31530();
          bVar3 = true;
          local_58 = (void*)0x0;
          puVar22 = puVar12;
          local_90 = 0;
        }
        else {
          local_80[0] = 0;
          local_88 = (int64_t *)0x0;
          local_70._0_4_ = -1;
          local_70._4_4_ = 0;
          local_68 = 0;
          bVar3 = false;
          puVar22 = (void*)0x0;
          local_b0 = puVar12;
          local_78 = puVar12;
          while( true ) {
            lVar9 = (int64_t)(int)local_70;
            local_70._0_4_ = (int)local_70 + 1;
            if (*(int *)((int64_t)local_78 + 0xc) <= (int)local_70) break;
            local_1b0 = *(int64_t **)(local_78[2] + 8 + lVar9 * 8);
            local_1a8 = '\0';
            local_88 = local_1b0;
            cVar6 = FUN_00d24090();
            if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') {
              if (puVar22 == (void*)0x0) {
                puVar22 = (void*)FUN_00e8fc40();
                *(void*)(puVar22 + 1) = 0;
                *puVar22 = &g_02572358;
                (*pcVar4)();
                bVar3 = true;
              }
              local_1a0 = local_88;
              local_198 = '\0';
              FUN_00d21140();
              if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                local_70._4_4_ = -local_70._4_4_;
              }
              else {
                local_70._0_4_ = (int)local_70 - local_70._4_4_;
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                local_70._4_4_ = 0;
              }
            }
          }
          FUN_00083b20();
          local_80[0] = '\0';
          local_88 = (int64_t *)0x0;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_90 = 0;
          local_58 = (void*)0x0;
          local_78 = puVar19;
          while( true ) {
            lVar9 = (int64_t)(int)local_70;
            iVar15 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar15);
            if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
            local_190 = *(int64_t **)(local_78[2] + 8 + lVar9 * 8);
            local_188 = '\0';
            local_88 = local_190;
            cVar6 = FUN_00d24090();
            if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') {
              if (local_58 == (void*)0x0) {
                puVar12 = (void*)FUN_00e8fc40();
                *(void*)(puVar12 + 1) = 0;
                *puVar12 = &g_02572358;
                uVar13 = (*pcVar4)();
                local_90 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                local_58 = puVar12;
              }
              local_180 = local_88;
              local_178 = '\0';
              FUN_00d21140();
              if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
            }
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ == 0 || local_70 < 0) {
                iVar15 = -local_70._4_4_;
              }
              else {
                iVar15 = (int)local_70 - local_70._4_4_;
                local_70._4_4_ = (int)((uint64_t)local_70 >> 0x20);
                local_70 = CONCAT44(local_70._4_4_,iVar15);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar15 = 0;
              }
              local_70 = CONCAT44(iVar15,(int)local_70);
            }
          }
          FUN_00083b20();
          puVar12 = local_b0;
        }
      }
LAB_00d5c009:
      iVar15 = (int)local_98;
      if (puVar19 != (void*)0x0) {
LAB_00d5c020:
        uVar21 = FUN_00e88810();
        goto LAB_00d5c044;
      }
    }
    uVar21 = FUN_00d216c0();
LAB_00d5c044:
    if (local_50 != (int64_t *)0x0) {
      local_b0 = puVar12;
      if (local_58 != (void*)0x0) {
        local_80[0] = '\0';
        local_88 = (int64_t *)0x0;
        local_78 = local_58;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        if (iVar15 < 2) {
          if (this_ptr == (int64_t *)0x0) {
            while( true ) {
              if (local_70._4_4_ != 0) {
                if (local_70._4_4_ < 1) {
                  iVar15 = -local_70._4_4_;
                }
                else {
                  iVar15 = (int)local_70 - local_70._4_4_;
                  local_70 = CONCAT44(local_70._4_4_,iVar15);
                  FUN_00d23690();
                  local_68 = local_68 + local_70._4_4_;
                  iVar15 = 0;
                }
                local_70 = CONCAT44(iVar15,(int)local_70);
              }
              lVar9 = (int64_t)(int)local_70;
              iVar15 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
              local_88 = *(int64_t **)(local_78[2] + 8 + lVar9 * 8);
              if ((local_88 != (int64_t *)0x0) && ((int)local_98 == 1)) {
                local_d0 = '\x01';
                local_d8 = this_ptr;
                (**(code **)(*local_88 + 0x200))(0,local_50,local_34);
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            while( true ) {
              if (local_70._4_4_ != 0) {
                if (local_70._4_4_ < 1) {
                  iVar15 = -local_70._4_4_;
                }
                else {
                  iVar15 = (int)local_70 - local_70._4_4_;
                  local_70 = CONCAT44(local_70._4_4_,iVar15);
                  FUN_00d23690();
                  local_68 = local_68 + local_70._4_4_;
                  iVar15 = 0;
                }
                local_70 = CONCAT44(iVar15,(int)local_70);
              }
              lVar9 = (int64_t)(int)local_70;
              iVar15 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
              plVar10 = *(int64_t **)(local_78[2] + 8 + lVar9 * 8);
              local_88 = plVar10;
              if ((plVar10 != (int64_t *)0x0) && ((int)local_98 == 1)) {
                local_d0 = 0;
                FUN_00e31530(local_78[2],0);
                local_d0 = '\x01';
                local_d8 = this_ptr;
                (**(code **)(*plVar10 + 0x200))(0,local_50,local_34);
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        else if (this_ptr == (int64_t *)0x0) {
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar15 = -local_70._4_4_;
              }
              else {
                iVar15 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar15);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar15 = 0;
              }
              local_70 = CONCAT44(iVar15,(int)local_70);
            }
            lVar9 = (int64_t)(int)local_70;
            iVar15 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar15);
            if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
            local_88 = *(int64_t **)(local_78[2] + 8 + lVar9 * 8);
            if (local_88 != (int64_t *)0x0) {
              local_e0 = '\x01';
              local_e8 = this_ptr;
              (**(code **)(*local_88 + 0x220))(0xffffffff,local_50,0,local_34);
              if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar15 = -local_70._4_4_;
              }
              else {
                iVar15 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar15);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar15 = 0;
              }
              local_70 = CONCAT44(iVar15,(int)local_70);
            }
            lVar9 = (int64_t)(int)local_70;
            iVar15 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar15);
            if (*(int *)((int64_t)local_78 + 0xc) <= iVar15) break;
            plVar10 = *(int64_t **)(local_78[2] + 8 + lVar9 * 8);
            local_88 = plVar10;
            if (plVar10 != (int64_t *)0x0) {
              local_e0 = 0;
              FUN_00e31530(local_78[2],0);
              local_e0 = '\x01';
              local_e8 = this_ptr;
              (**(code **)(*plVar10 + 0x220))(0xffffffff,local_50,0,local_34);
              if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        uVar21 = FUN_00083b20();
        iVar15 = (int)local_98;
      }
      puVar12 = local_b0;
      if (puVar22 != (void*)0x0) {
        local_80[0] = '\0';
        local_88 = (int64_t *)0x0;
        local_68 = 0;
        local_70 = 0;
        local_78 = puVar22;
        if (iVar15 < 2) {
          local_b8 = in_RDX;
          if (0 < *(int *)((int64_t)puVar22 + 0xc)) {
            lVar9 = 0;
            do {
              local_88 = *(int64_t **)(puVar22[2] + lVar9 * 8);
              if ((local_88 != (int64_t *)0x0) && (iVar15 == 1)) {
                local_168 = '\0';
                local_170 = 0;
                (**(code **)(*local_88 + 0x200))(0,local_50,local_34);
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
              }
              lVar9 = lVar9 + 1;
              local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
            } while ((int)lVar9 < *(int *)((int64_t)puVar22 + 0xc));
          }
        }
        else {
          local_b8 = in_RDX;
          if (0 < *(int *)((int64_t)puVar22 + 0xc)) {
            if (this_ptr == (int64_t *)0x0) {
              lVar9 = 0;
              do {
                local_88 = *(int64_t **)(puVar22[2] + lVar9 * 8);
                if (local_88 != (int64_t *)0x0) {
                  local_c0 = '\x01';
                  local_c8 = this_ptr;
                  (**(code **)(*local_88 + 0x228))(0,local_50,local_34);
                  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                lVar9 = lVar9 + 1;
                local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
              } while ((int)lVar9 < *(int *)((int64_t)puVar22 + 0xc));
            }
            else {
              lVar9 = 0;
              do {
                plVar10 = *(int64_t **)(puVar22[2] + lVar9 * 8);
                local_88 = plVar10;
                if (plVar10 != (int64_t *)0x0) {
                  local_c0 = 0;
                  FUN_00e31530(uVar21,0);
                  local_c0 = '\x01';
                  local_c8 = this_ptr;
                  uVar21 = (**(code **)(*plVar10 + 0x228))(0,local_50,local_34);
                  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                    uVar21 = FUN_00d50b20();
                  }
                }
                lVar9 = lVar9 + 1;
                local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
              } while ((int)lVar9 < *(int *)((int64_t)puVar22 + 0xc));
            }
          }
        }
        FUN_00083b20();
        puVar12 = local_b0;
      }
    }
    if (local_34 != '\0') {
      (**(code **)(*this_ptr + 0x158))();
    }
    if ((bVar3) && (puVar22 != (void*)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = local_50;
    if (((char)local_90 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar12 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((char)local_a8 == '\0') {
      return;
    }
    if (plVar10 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  uVar21 = extraout_XMM0_Da;
  if (0x49 < (int)*(char *)(in_RDX[0xc] + 0x19) - 0x2aU) goto switchD_00d5afda_caseD_2b;
  pdVar17 = (double *)((int64_t)*(int *)((int64_t)in_RDX + 0x24) + (int64_t)this_ptr);
  switch((int)*(char *)(in_RDX[0xc] + 0x19)) {
  case 0x2a:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_45, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b6ff:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_12;
      if (cVar6 == '\0') goto LAB_00d5b6ff;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00d8b910();
    goto LAB_00d5c98d;
  case 0x40:
    FUN_00c77cd0();
    plVar10 = local_88;
    plVar16 = &local_100;
    if (local_80[0] != '\0') {
      plVar16 = (int64_t *)local_80;
    }
    local_100 = CONCAT71(local_100._1_7_,local_80[0]);
    *(char *)plVar16 = '\0';
    if ((local_80[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = plVar10;
    cVar6 = FUN_00c7b7e0();
    uVar21 = extraout_XMM0_Da_08;
    if (cVar6 == '\0') goto LAB_00d5d26e;
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_54, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b58d:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_09;
      if (cVar6 == '\0') goto LAB_00d5b58d;
    }
    dVar11 = *pdVar14;
    if (dVar11 == 0.0) goto LAB_00d5d26e;
    uVar21 = FUN_00c798d0();
    local_f8 = local_120;
    local_f0 = 0;
    if (local_118 == '\0') {
      if (local_120 != 0) {
        FUN_00e31530(uVar21,0);
      }
    }
    else {
      local_118 = '\0';
    }
    local_f0 = '\x01';
    uVar21 = FUN_00c80cd0();
    local_268 = '\0';
    local_270 = dVar11;
    uVar21 = FUN_00c884c0(uVar21,&local_270);
    plVar16 = local_88;
    plVar10 = (int64_t *)*arg1;
    if (plVar10 == local_88) {
      if ((*(char *)(arg1 + 1) == '\0') && (local_88 != (int64_t *)0x0)) {
        local_b8 = in_RDX;
        if (local_80[0] != '\0') goto LAB_00d5d18b;
        uVar21 = FUN_00e31530(uVar21,0);
        goto LAB_00d5d1e3;
      }
LAB_00d5d1f2:
      if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      cVar6 = *(char *)(arg1 + 1);
      if (local_80[0] == '\0') {
        local_b8 = in_RDX;
        if (local_88 != (int64_t *)0x0) {
          uVar21 = FUN_00e31530(uVar21,0);
        }
        *arg1 = (double)plVar16;
        if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
LAB_00d5d1e3:
        *(void*)(arg1 + 1) = 1;
        goto LAB_00d5d1f2;
      }
      *arg1 = (double)local_88;
      local_b8 = in_RDX;
      if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
LAB_00d5d18b:
      *(void*)(arg1 + 1) = 1;
      local_80[0] = '\0';
    }
    if ((local_268 != '\0') && (local_270 != 0.0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      uVar21 = FUN_00d50b20();
    }
LAB_00d5d26e:
    dVar11 = *arg1;
    dVar2 = *pdVar17;
    if (dVar2 != dVar11) {
      if (dVar11 != 0.0) {
        FUN_00e31530(uVar21,0);
      }
      *pdVar17 = dVar11;
      if (dVar2 != 0.0) {
        FUN_00d50b20();
      }
    }
    if (local_34 != '\0') {
      (**(code **)(*this_ptr + 0x158))();
    }
    if ((char)local_100 == '\0') {
      return;
    }
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  case 0x43:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_47, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b7f0:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_14;
      if (cVar6 == '\0') goto LAB_00d5b7f0;
    }
    if (*pdVar14 != 0.0) {
      local_208 = '\0';
      local_210 = *pdVar14;
      dVar11 = (double)FUN_00d97540();
      *pdVar17 = dVar11;
      if ((local_208 != '\0') && (local_210 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_61, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c6b2:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_34;
      if (cVar6 == '\0') goto LAB_00d5c6b2;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd63c0();
    goto LAB_00d5c98d;
  case 0x45:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_46, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b758:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_13;
      if (cVar6 == '\0') goto LAB_00d5b758;
    }
    if (*pdVar14 != 0.0) {
      local_1d8 = '\0';
      local_1e0 = *pdVar14;
      dVar11 = (double)FUN_00d967b0();
      *pdVar17 = dVar11;
      *(int *)(pdVar17 + 1) = (int)param_2;
      *(int *)((int64_t)pdVar17 + 0xc) = (int)((uint64_t)param_2 >> 0x20);
      if ((local_1d8 != '\0') && (local_1e0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_60, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c65d:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_33;
      if (cVar6 == '\0') goto LAB_00d5c65d;
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00dd6b50();
      goto LAB_00d5c71f;
    }
    break;
  case 0x49:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_06;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d45870();
      *(void*)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_56, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c4b7:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_29;
      if (cVar6 == '\0') goto LAB_00d5c4b7;
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d8d560();
      *(void*)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    break;
  case 0x50:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_44, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b621:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_10;
      if (cVar6 == '\0') goto LAB_00d5b621;
    }
    if (*pdVar14 != 0.0) {
      local_1c8 = '\0';
      local_1d0 = *pdVar14;
      dVar11 = (double)FUN_00d96ea0();
      *pdVar17 = dVar11;
      if ((local_1c8 != '\0') && (local_1d0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_58, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c591:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_31;
      if (cVar6 == '\0') goto LAB_00d5c591;
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00dd6bf0();
      *pdVar17 = dVar11;
      goto LAB_00d5c991;
    }
    break;
  case 0x52:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_48, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b884:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_15;
      if (cVar6 == '\0') goto LAB_00d5b884;
    }
    if (*pdVar14 != 0.0) {
      local_1e8 = '\0';
      local_1f0 = *pdVar14;
      dVar11 = (double)FUN_00d96410();
      *pdVar17 = dVar11;
      *(int *)(pdVar17 + 1) = (int)param_2;
      *(int *)((int64_t)pdVar17 + 0xc) = (int)((uint64_t)param_2 >> 0x20);
      if ((local_1e8 != '\0') && (local_1f0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_62, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c707:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_35;
      if (cVar6 == '\0') goto LAB_00d5c707;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd6ab0();
LAB_00d5c71f:
    *pdVar17 = dVar11;
    *(int *)(pdVar17 + 1) = (int)param_2;
    *(int *)((int64_t)pdVar17 + 0xc) = (int)((uint64_t)param_2 >> 0x20);
    goto LAB_00d5c991;
  case 0x53:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_49, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b91c:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_16;
      if (cVar6 == '\0') goto LAB_00d5b91c;
    }
    if (*pdVar14 != 0.0) {
      local_1f8 = '\0';
      local_200 = *pdVar14;
      dVar11 = (double)FUN_00d96b50();
      *pdVar17 = dVar11;
      if ((local_1f8 != '\0') && (local_200 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_63, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c764:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_36;
      if (cVar6 == '\0') goto LAB_00d5c764;
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00dd6c90();
      *pdVar17 = dVar11;
      goto LAB_00d5c991;
    }
    break;
  case 0x55:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_19;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
LAB_00d5c815:
      uVar8 = FUN_00d45870();
      *(void*)pdVar17 = uVar8;
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_65, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c85c:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_38;
      if (cVar6 == '\0') goto LAB_00d5c85c;
    }
    if (*pdVar14 != 0.0) {
      uVar8 = FUN_00dd6d30();
      *(void*)pdVar17 = uVar8;
      goto LAB_00d5c991;
    }
    goto LAB_00d5c87a;
  case 0x5e:
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_50, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5b9fa:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_18;
      if (cVar6 == '\0') goto LAB_00d5b9fa;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd6dc0();
    goto LAB_00d5c98d;
  case 0x62:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_05;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar7 = FUN_00d45ad0();
      *(void*)pdVar17 = uVar7;
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_55, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c2c9:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_25;
      if (cVar6 == '\0') goto LAB_00d5c2c9;
    }
    lVar9 = g_0277ddb8;
    if (*pdVar14 != 0.0) {
      plVar10 = (int64_t *)*arg1;
      if (g_0277ddb8 != 0) {
        FUN_00e31530(pdVar14,0);
      }
      local_250 = lVar9;
      local_248 = '\x01';
      cVar6 = (**(code **)(*plVar10 + 0x50))();
      lVar9 = g_0275e480;
      uVar7 = 1;
      if (cVar6 == '\0') {
        plVar10 = (int64_t *)*arg1;
        if (g_0275e480 != 0) {
          FUN_00e31530(extraout_XMM0_Da_26,0);
        }
        local_240 = lVar9;
        local_238 = '\x01';
        cVar6 = (**(code **)(*plVar10 + 0x50))();
        lVar9 = g_0277ddc0;
        uVar7 = 1;
        if (cVar6 == '\0') {
          plVar10 = (int64_t *)*arg1;
          if (g_0277ddc0 != 0) {
            FUN_00e31530(extraout_XMM0_Da_27,0);
          }
          local_230 = lVar9;
          local_228 = '\x01';
          cVar6 = (**(code **)(*plVar10 + 0x50))();
          lVar9 = g_027e3c48;
          uVar7 = 1;
          if (cVar6 == '\0') {
            plVar10 = (int64_t *)*arg1;
            if (g_027e3c48 != 0) {
              FUN_00e31530(extraout_XMM0_Da_28,0);
            }
            local_220 = lVar9;
            local_218 = '\x01';
            uVar7 = (**(code **)(*plVar10 + 0x50))();
            if ((local_218 != '\0') && (local_220 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_238 != '\0') && (local_240 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      *(void*)pdVar17 = uVar7;
      goto LAB_00d5c991;
    }
    break;
  case 99:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_11;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 == 0.0) {
      plVar10 = (int64_t *)*arg1;
      if ((g_026fd0c0 == '\0') &&
         (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_59, iVar15 != 0)) {
        if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
          g_028a7cd0 = "GNObject";
          g_028a7cd8 = 0x10;
          g_028a7ce0 = FUN_00d4ff10;
          g_028a7ce8 = 0;
          ram_00000000028a7cf0 = 0;
          g_028a7cf8 = 0;
          ram_00000000028a7d00 = 0;
          g_028a7d08 = 0;
          ram_00000000028a7d10 = 0;
          g_028a7d18 = 0;
          ram_00000000028a7d20 = 0;
          g_028a7d28 = 0;
          ram_00000000028a7d30 = 0;
          g_028a7d38 = 0;
          ram_00000000028a7d40 = 0;
          g_028a7d48 = 0;
          ram_00000000028a7d50 = 0;
          g_028a7d58 = 0;
          ram_00000000028a7d60 = 0;
          g_028a7d68 = 0;
          ram_00000000028a7d70 = 0;
          g_028a7d78 = 0;
          ram_00000000028a7d80 = 0;
          g_028a7d84 = 0;
          ram_00000000028a7d88 = 0;
          ram_00000000028a7d8c = 0;
          ___cxa_guard_release();
        }
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e58 = &g_028a7cd0;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        uVar21 = ___cxa_guard_release();
      }
      if (plVar10 == (int64_t *)0x0) {
LAB_00d5c604:
        pdVar14 = (double *)&g_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pdVar14 = arg1;
        uVar21 = extraout_XMM0_Da_32;
        if (cVar6 == '\0') goto LAB_00d5c604;
      }
      if (*pdVar14 == 0.0) break;
      uVar7 = FUN_00d8d560();
    }
    else {
      uVar7 = FUN_00d45870();
    }
    *(void*)pdVar17 = uVar7;
    goto LAB_00d5c991;
  case 100:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_07;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00d45bc0();
      *pdVar17 = dVar11;
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_57, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c532:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_30;
      if (cVar6 == '\0') goto LAB_00d5c532;
    }
    if (*pdVar14 != 0.0) {
      fVar20 = (float)FUN_00d8d7b0();
      *pdVar17 = (double)fVar20;
      goto LAB_00d5c991;
    }
    break;
  case 0x65:
  case 0x69:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_00;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d460c0();
      *(void*)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_52, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5bc3c:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_22;
      if (cVar6 == '\0') goto LAB_00d5bc3c;
    }
    dVar11 = *pdVar14;
    if (dVar11 != 0.0) {
      uVar21 = FUN_00c77cd0();
      local_258 = '\0';
      local_260 = dVar11;
      cVar6 = FUN_00c7b320(uVar21,pdVar17);
      if ((local_258 != '\0') && (local_260 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        uVar21 = FUN_00d8d560();
        *(void*)pdVar17 = uVar21;
      }
      goto LAB_00d5c991;
    }
    break;
  case 0x66:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_17;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d459e0();
      *(void*)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_64, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c7e0:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_37;
      if (cVar6 == '\0') goto LAB_00d5c7e0;
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d8d7b0();
      *(void*)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    break;
  case 0x6c:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_21;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 == 0.0) {
      plVar10 = (int64_t *)*arg1;
      if ((g_026fd0c0 == '\0') &&
         (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_67, iVar15 != 0)) {
        if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
          g_028a7cd0 = "GNObject";
          g_028a7cd8 = 0x10;
          g_028a7ce0 = FUN_00d4ff10;
          g_028a7ce8 = 0;
          ram_00000000028a7cf0 = 0;
          g_028a7cf8 = 0;
          ram_00000000028a7d00 = 0;
          g_028a7d08 = 0;
          ram_00000000028a7d10 = 0;
          g_028a7d18 = 0;
          ram_00000000028a7d20 = 0;
          g_028a7d28 = 0;
          ram_00000000028a7d30 = 0;
          g_028a7d38 = 0;
          ram_00000000028a7d40 = 0;
          g_028a7d48 = 0;
          ram_00000000028a7d50 = 0;
          g_028a7d58 = 0;
          ram_00000000028a7d60 = 0;
          g_028a7d68 = 0;
          ram_00000000028a7d70 = 0;
          g_028a7d78 = 0;
          ram_00000000028a7d80 = 0;
          g_028a7d84 = 0;
          ram_00000000028a7d88 = 0;
          ram_00000000028a7d8c = 0;
          ___cxa_guard_release();
        }
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e58 = &g_028a7cd0;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        uVar21 = ___cxa_guard_release();
      }
      if (plVar10 == (int64_t *)0x0) {
LAB_00d5c977:
        pdVar14 = (double *)&g_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pdVar14 = arg1;
        uVar21 = extraout_XMM0_Da_41;
        if (cVar6 == '\0') goto LAB_00d5c977;
      }
      if (*pdVar14 == 0.0) break;
      iVar15 = FUN_00d8d560();
      dVar11 = (double)(int64_t)iVar15;
    }
    else {
      dVar11 = (double)FUN_00d45790();
    }
    goto LAB_00d5c98d;
  case 0x71:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_51, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5ba9c:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_20;
      if (cVar6 == '\0') goto LAB_00d5ba9c;
    }
    if (*pdVar14 != 0.0) {
      local_1b8 = '\0';
      local_1c0 = *pdVar14;
      dVar11 = (double)FUN_00d971f0();
      *pdVar17 = dVar11;
      if ((local_1b8 != '\0') && (local_1c0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (int64_t *)*arg1;
    if ((g_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_66, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d4330 = "GNValue";
      g_026d4338 = 0x18;
      g_026d4340 = FUN_00053cb0;
      g_026d4348 = &g_028a7cd0;
      g_026d4350 = 0;
      ram_00000000026d4358 = 0;
      g_026d4360 = 0;
      ram_00000000026d4368 = 0;
      g_026d4370 = 0;
      ram_00000000026d4378 = 0;
      g_026d4380 = 0;
      ram_00000000026d4388 = 0;
      g_026d4390 = 0;
      ram_00000000026d4398 = 0;
      g_026d43a0 = 0;
      ram_00000000026d43a8 = 0;
      g_026d43b0 = 0;
      ram_00000000026d43b8 = 0;
      g_026d43c0 = 0;
      ram_00000000026d43c8 = 0;
      g_026d43d0 = 0;
      ram_00000000026d43d8 = 0;
      g_026d43e0 = 0;
      ram_00000000026d43e8 = 0;
      g_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c90c:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_40;
      if (cVar6 == '\0') goto LAB_00d5c90c;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd6320();
LAB_00d5c98d:
    *pdVar17 = dVar11;
LAB_00d5c991:
    if (local_34 != '\0') {
      (**(code **)(*this_ptr + 0x158))();
    }
    return;
  case 0x73:
    plVar10 = (int64_t *)*arg1;
    uVar21 = FUN_00d68120();
    if (plVar10 == (int64_t *)0x0) {
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_04;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&g_02802688;
      }
    }
    if (*pdVar14 != 0.0) goto LAB_00d5c815;
LAB_00d5c87a:
    plVar10 = (int64_t *)*arg1;
    if ((g_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_53, iVar15 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e58 = &g_028a7cd0;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00d5c8b2:
      pdVar14 = (double *)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = arg1;
      uVar21 = extraout_XMM0_Da_39;
      if (cVar6 == '\0') goto LAB_00d5c8b2;
    }
    if (*pdVar14 != 0.0) {
      uVar8 = FUN_00d8d560();
      *(void*)pdVar17 = uVar8;
      goto LAB_00d5c991;
    }
  }
switchD_00d5afda_caseD_2b:
joined_r0x00d5b3a4:
  if (local_34 != '\0') {
    uVar21 = (**(code **)(*this_ptr + 0x158))();
  }
  lVar9 = g_0277ddb0;
  if (g_0277ddb0 != 0) {
    uVar21 = FUN_00e31530(uVar21,0);
  }
  lVar5 = g_0277d7d8;
  local_150 = lVar9;
  local_148 = '\x01';
  if ((int64_t *)*arg1 == (int64_t *)0x0) {
    local_a0 = 0;
    if (g_0277d7d8 != 0) {
      FUN_00e31530(uVar21,0);
    }
    local_a8 = lVar5;
    local_a0 = '\x01';
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 400))();
  }
  local_100 = (int64_t)local_58;
  local_120 = local_a8;
  uVar21 = FUN_00083ea0(2,&local_100);
  FUN_00cc7b40(uVar21,&local_88);
  local_88 = (int64_t *)&g_0253d630;
  if ((local_60 != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
    FUN_00d50b20();
  }
  local_88 = &g_024c5048;
  if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_148 == '\0') {
    return;
  }
  if (local_150 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00d630e0
// ============================================================
// Function: FUN_00d630e0
// Address: 00d630e0
// Size: 3052 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d630e0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  void*puVar6;
  char *pcVar7;
  uint uVar8;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  uint8_t local_250;
  int64_t *local_248;
  char local_240;
  int64_t local_238;
  uint64_t local_230;
  uint32_t local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  uint64_t uVar9;
  
  local_220 = *arg1;
  local_218 = '\0';
  uVar12 = (**(code **)(*this_ptr + 600))(param_1,&local_220);
  plVar3 = local_248;
  if (local_240 == '\0') {
    if (((local_248 != (int64_t *)0x0) && (FUN_00e31530(uVar12,0), local_240 != '\0')) &&
       (local_248 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_240 = '\0';
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_240 = 0;
    local_248 = (int64_t *)0x0;
    local_238 = (int64_t)plVar3;
    local_228 = 0;
    local_230 = 0;
    if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
      lVar11 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)((int64_t)plVar3 + 0x10) + lVar11 * 8);
        local_248 = plVar1;
        FUN_00d74120();
        local_40[0] = local_50[0];
        pcVar7 = local_50;
        if (local_50[0] == '\0') {
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        local_48 = local_58;
        cVar5 = (**(code **)(*plVar1 + 0x368))();
        if (cVar5 == '\0') {
          cVar5 = FUN_00d77e10();
          plVar2 = (int64_t *)*arg1;
          if (cVar5 == '\0') {
            uVar12 = (**(code **)(*this_ptr + 0x210))(extraout_XMM0_Qa,plVar1);
            local_68 = 0;
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_68 = '\x01';
            local_70 = local_58;
            local_f0 = local_48;
            local_e8 = '\0';
            (**(code **)(*plVar2 + 0x4f8))(uVar12,&local_f0);
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar12 = (**(code **)(*this_ptr + 0x210))(extraout_XMM0_Qa,plVar1);
            local_78 = 0;
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_78 = '\x01';
            local_80 = local_58;
            local_100 = local_48;
            local_f8 = '\0';
            (**(code **)(*plVar2 + 0x4f0))(uVar12,&local_100);
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_00d637d0;
        }
        cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x388))();
        if (cVar5 == '\0') {
          FUN_00c77cd0();
          local_38[0] = local_50[0];
          pcVar7 = local_50;
          if (local_50[0] == '\0') {
            pcVar7 = local_38;
          }
          *pcVar7 = '\0';
          lVar4 = local_48;
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          cVar5 = FUN_00c7b220();
          uVar12 = extraout_XMM0_Qa_00;
          if (cVar5 == 'e') {
            uVar12 = FUN_00c7b2d0();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            if (local_58 == 0) goto LAB_00d63447;
            plVar1 = (int64_t *)*arg1;
            local_130 = lVar4;
            local_128 = '\0';
            uVar12 = (**(code **)(*this_ptr + 0x1f8))(uVar12,&local_130);
            local_90 = local_e0;
            local_88 = 0;
            if (local_d8 == '\0') {
              if (local_e0 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_d8 = '\0';
            }
            local_88 = '\x01';
            uVar12 = FUN_00c7b3d0(uVar12,&local_90);
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_120 = local_48;
            local_118 = '\0';
            (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_120);
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_00d63447:
            plVar1 = (int64_t *)*arg1;
            local_258 = lVar4;
            local_250 = 0;
            uVar12 = FUN_00d603c0(uVar12,&local_258);
            if ((local_50[0] == '\0') && (local_58 != 0)) {
              uVar12 = FUN_00e31530(uVar12,0);
            }
            local_110 = local_48;
            local_108 = '\0';
            (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_110);
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00d637d0;
        }
        puVar6 = (void*)(**(code **)(*this_ptr + 0x218))();
        uVar8 = (int)*(char *)(plVar1[0xc] + 0x19) - 0x43;
        uVar9 = (uint64_t)uVar8;
        uVar10 = uVar9;
        if (uVar8 < 0x2f) {
          uVar10 = (int64_t)&switchD_00d63280::switchdataD_00d644fc +
                   (int64_t)(int)(&switchD_00d63280::switchdataD_00d644fc)[uVar9];
          switch(uVar9) {
          case 0:
            local_190 = local_48;
            local_188 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4e0))(uVar10,&local_190);
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            break;
          default:
            goto switchD_00d63280_caseD_1;
          case 2:
            local_1a0 = local_48;
            local_198 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4c8))(*puVar6,puVar6[1]);
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 6:
            local_200 = local_48;
            local_1f8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x498))(uVar10,&local_200);
            if ((local_1f8 != '\0') && (local_200 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0xd:
            local_1d0 = local_48;
            local_1c8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4d8))(*puVar6);
            if ((local_1c8 != '\0') && (local_1d0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0xf:
            local_1b0 = local_48;
            local_1a8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4c0))(*puVar6,puVar6[1]);
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x10:
            local_1c0 = local_48;
            local_1b8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4d0))(*puVar6);
            if ((local_1b8 != '\0') && (local_1c0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x1f:
            local_180 = local_48;
            local_178 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x488))(uVar10,&local_180);
            if ((local_178 != '\0') && (local_180 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x20:
            local_210 = local_48;
            local_208 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x490))(uVar10,&local_210);
            if ((local_208 != '\0') && (local_210 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x21:
            local_1e0 = local_48;
            local_1d8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4b8))(*puVar6);
            if ((local_1d8 != '\0') && (local_1e0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x22:
          case 0x26:
            local_170 = local_48;
            local_168 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4a0))(uVar10,&local_170);
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x23:
            local_1f0 = local_48;
            local_1e8 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4b0))(*(void*)puVar6);
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x29:
            local_160 = local_48;
            local_158 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4a8))(uVar10,&local_160);
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x2e:
            local_150 = local_48;
            local_148 = '\0';
            (**(code **)(*(int64_t *)*arg1 + 0x4e8))(uVar10,&local_150);
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
switchD_00d63280_caseD_1:
          plVar1 = (int64_t *)*arg1;
          local_268 = local_48;
          local_260 = 0;
          uVar12 = FUN_00d603c0(uVar10,&local_268);
          if ((local_50[0] == '\0') && (local_58 != 0)) {
            uVar12 = FUN_00e31530(uVar12,0);
          }
          local_140 = local_48;
          local_138 = '\0';
          (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_140);
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
        }
LAB_00d637d0:
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
        local_230 = CONCAT44(local_230._4_4_,(int)lVar11);
      } while ((int)lVar11 < *(int *)((int64_t)plVar3 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d61ea0
// ============================================================
// Function: FUN_00d61ea0
// Address: 00d61ea0
// Size: 2607 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d61ea0(uint32_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  uint32_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_208;
  char local_200;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint8_t local_51;
  int64_t local_40;
  uint32_t uStack_38;
  
  local_1e0 = *arg1;
  local_1d8 = '\0';
  uVar7 = (**(code **)(*this_ptr + 600))(param_1,&local_1e0);
  if ((local_200 == '\0') && (local_208 != 0)) {
    FUN_00e31530(uVar7,0);
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  local_51 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (local_208 != 0) {
    if (0 < *(int *)(local_208 + 0xc)) {
      lVar6 = 0;
      do {
        lVar2 = local_40;
        plVar1 = *(int64_t **)(*(int64_t *)(local_208 + 0x10) + lVar6 * 8);
        uVar7 = FUN_00d74120();
        if (((char)uStack_38 == '\0') && (local_40 != 0)) {
          FUN_00e31530(uVar7,0);
        }
        local_1d0 = local_40;
        local_1c8 = '\0';
        cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x590))();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*plVar1 + 0x368))();
          if (cVar3 == '\0') {
            local_b0 = local_40;
            local_a8 = '\0';
            uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da,&local_b0);
            local_60 = 0;
            if ((char)uStack_38 == '\0') {
              if (local_40 != 0) {
                FUN_00e31530(uVar7,0);
              }
            }
            else {
              uStack_38 = 0;
            }
            local_60 = '\x01';
            local_a0 = local_40;
            local_98 = '\0';
            local_68 = local_a0;
            (**(code **)(*this_ptr + 0x1f0))(local_51,&local_a0,0);
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (((char)uStack_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x390))();
            if (cVar3 == '\0') {
              local_d0 = local_40;
              local_c8 = '\0';
              uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x578))(extraout_XMM0_Da_00,&local_d0);
              local_70 = 0;
              if ((char)uStack_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00e31530(uVar7,0);
                }
              }
              else {
                uStack_38 = 0;
              }
              local_70 = '\x01';
              local_c0 = local_40;
              local_b8 = '\0';
              local_78 = local_c0;
              (**(code **)(*this_ptr + 0x1f0))(0);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar7 = local_40._4_4_;
              switch(*(void*)(plVar1[0xc] + 0x19)) {
              case 0x43:
                local_140 = local_40;
                local_138 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x568))();
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              default:
                local_f0 = local_40;
                local_e8 = '\0';
                uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x578))
                                  (extraout_XMM0_Da_00,&local_f0);
                local_80 = 0;
                if ((char)uStack_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00e31530(uVar7,0);
                  }
                }
                else {
                  uStack_38 = 0;
                }
                local_80 = '\x01';
                local_e0 = local_40;
                local_d8 = '\0';
                local_88 = local_e0;
                (**(code **)(*this_ptr + 0x1f0))();
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
                if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 0x45:
                local_150 = local_40;
                local_148 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x550))();
                uStack_38 = (uint32_t)param_2;
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x49:
                local_1b0 = local_40;
                local_1a8 = '\0';
                uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x520))();
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x50:
                local_180 = local_40;
                local_178 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x560))();
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x52:
                local_160 = local_40;
                local_158 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x548))();
                uStack_38 = (uint32_t)param_2;
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x53:
                local_170 = local_40;
                local_168 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x558))();
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x62:
                local_130 = local_40;
                local_128 = '\0';
                uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x510))();
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 99:
                local_1c0 = local_40;
                local_1b8 = '\0';
                uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x518))();
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 100:
                local_190 = local_40;
                local_188 = '\0';
                local_90 = (**(code **)(*(int64_t *)*arg1 + 0x540))();
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = local_90;
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x65:
              case 0x69:
                local_120 = local_40;
                local_118 = '\0';
                uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x528))();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x66:
                local_1a0 = local_40;
                local_198 = '\0';
                uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x538))();
                local_90 = CONCAT44(local_90._4_4_,uVar5);
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,(uint32_t)local_90);
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x6c:
                local_110 = local_40;
                local_108 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x530))();
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
                break;
              case 0x71:
                local_100 = local_40;
                local_f8 = '\0';
                local_40 = (**(code **)(*(int64_t *)*arg1 + 0x570))();
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0x208))();
              }
            }
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_208 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d605b0
// ============================================================
// Function: FUN_00d605b0
// Address: 00d605b0
// Size: 2095 bytes
// Class: GNObject
// String references:
//   "Cannot get stored value for key %@ directly"
//   "Cannot get value for property %@ directly. Ivar not registered."
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_00d605b0(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int extraout_var;
  int extraout_var_00;
  int64_t lVar5;
  uint uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint32_t local_48 [2];
  int64_t local_40;
  char local_38;
  
  lVar5 = g_0277ddb0;
  if (*(int *)((int64_t)param_2 + 0x24) == 0) {
    if (g_0277ddb0 != 0) {
      FUN_00e31530(param_1,0);
    }
    uVar7 = FUN_00d74120();
    lVar2 = g_0277ddc8;
    if (local_90 == 0) {
      if (g_0277ddc8 != 0) {
        uVar7 = FUN_00e31530(uVar7,0);
      }
      local_60 = lVar2;
      local_58 = '\x01';
    }
    else {
      uVar7 = FUN_00d74120();
    }
    local_48[0] = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_60 != 0) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_38 = '\x01';
    local_40 = local_60;
    FUN_00cc7b40(uVar7,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*param_2 + 0x368))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_2 + 0x370))();
    uVar7 = extraout_XMM0_Qa_00;
    if (cVar3 != '\0') {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        uVar7 = FUN_00d77bd0();
        if (extraout_var_00 != 1) goto switchD_00d6060d_caseD_2b;
        if ((param_2[0xe] != 0) && (*(char *)(param_2[0xe] + 0x18) < '\0')) {
          cVar3 = FUN_00d77e30();
          iVar1 = *(int *)((int64_t)param_2 + 0x24);
          if (cVar3 == '\0') {
            *(void*)(this_ptr + 1) = 0;
            plVar4 = *(int64_t **)(arg1 + iVar1);
            if (plVar4 != (int64_t *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x10))();
              goto LAB_00d606b5;
            }
          }
          else {
            *(void*)(this_ptr + 1) = 0;
            plVar4 = *(int64_t **)(arg1 + iVar1);
            if (plVar4 != (int64_t *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x10))();
              goto LAB_00d606b5;
            }
          }
          lVar5 = 0;
          goto LAB_00d606b5;
        }
        FUN_00d77e30();
      }
      lVar5 = *(int64_t *)(*(int *)((int64_t)param_2 + 0x24) + arg1);
LAB_00d606b5:
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 0;
      return this_ptr;
    }
switchD_00d6060d_caseD_2b:
    lVar5 = g_0277ddb0;
    if (g_0277ddb0 != 0) {
      FUN_00e31530(uVar7,0);
    }
    uVar7 = FUN_00d74120();
    local_48[0] = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_60 != 0) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_40 = local_60;
    local_38 = '\x01';
    FUN_00cc7b40(uVar7,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
LAB_00d607d7:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    uVar6 = (int)*(char *)(param_2[0xc] + 0x19) - 0x2a;
    uVar7 = extraout_XMM0_Qa;
    if (0x49 < uVar6) goto switchD_00d6060d_caseD_2b;
    plVar4 = (int64_t *)(*(int *)((int64_t)param_2 + 0x24) + arg1);
    switch((int)*(char *)(param_2[0xc] + 0x19)) {
    case 0x2a:
      if (*plVar4 != 0) {
        FUN_00d91a70((int64_t)&switchD_00d6060d::switchdataD_00d61008 +
                     (int64_t)(int)(&switchD_00d6060d::switchdataD_00d61008)[uVar6],1);
        plVar4 = this_ptr + 1;
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = (int64_t)local_50;
        if ((char)local_48[0] != '\0') {
          *(void*)plVar4 = 1;
          plVar4 = (int64_t *)local_48;
        }
        *(void*)plVar4 = 0;
        if ((char)local_48[0] == '\0') {
          return this_ptr;
        }
        if (local_50 == (void*)0x0) {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
      goto LAB_00d607d7;
    default:
      goto switchD_00d6060d_caseD_2b;
    case 0x40:
      lVar5 = *plVar4;
      goto LAB_00d606b5;
    case 0x43:
      FUN_00dd6690();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x45:
      FUN_00dd6530(*plVar4,plVar4[1]);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x49:
      FUN_00d46530();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x50:
      FUN_00dd65e0(*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x52:
      FUN_00dd6480(*plVar4,plVar4[1]);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x53:
      FUN_00dd6740(*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x55:
      FUN_00dd6950();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x5e:
      FUN_00dd6a00();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x62:
      FUN_00d46300();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 99:
      FUN_00dd68a0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 100:
      FUN_00d470c0(*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x65:
    case 0x69:
      FUN_00d46aa0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x66:
      FUN_00d46dc0((int)*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x6c:
      FUN_00d468f0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x71:
      FUN_00dd67f0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x73:
      FUN_00d46530();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}



// ============================================================
// 00d6a330
// ============================================================
// Function: FUN_00d6a330
// Address: 00d6a330
// Size: 2323 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_00d6a330(void)

{
  char cVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  void*puVar11;
  uint64_t uVar12;
  int iVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  int64_t local_118;
  int64_t local_110;
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  uint64_t local_d0;
  int local_c8;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  uint local_4c;
  int64_t local_48;
  byte local_31;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    cVar1 = (char)arg1[1];
    lVar14 = 0;
joined_r0x00d6ab28:
    if (cVar1 == '\0') {
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar14;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar14;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
    }
    return this_ptr;
  }
  iVar7 = FUN_00d8c7a0();
  lVar14 = g_02773310;
  if (iVar7 == 0) {
    lVar14 = *arg1;
    *(void*)(this_ptr + 1) = 0;
    cVar1 = (char)arg1[1];
    goto joined_r0x00d6ab28;
  }
  if (g_02773310 != 0) {
    FUN_00d50b00();
  }
  lVar9 = g_02773318;
  if (g_02773318 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02773300;
  if (g_02773300 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_02773308;
  if (g_02773308 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027732f8;
  if (g_027732f8 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_70 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &g_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  lVar14 = g_027845f0;
  if (g_027845f0 != 0) {
    FUN_00d50b00();
  }
  lVar9 = g_0277e578;
  if (g_0277e578 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_0277e580;
  if (g_0277e580 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_0277e588;
  if (g_0277e588 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0277e590;
  if (g_0277e590 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_48 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &g_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = g_025795c0;
  local_58 = (void*)0x0;
  local_f0 = 0;
  while( true ) {
    FUN_00d8c7a0();
    uVar8 = FUN_00e7b4e0();
    iVar7 = FUN_00d8c7a0();
    if ((iVar7 < 1) || (local_70 == 0)) break;
    local_f8 = uVar8 >> 0x20;
    local_e0 = '\0';
    local_e8 = (void*)0x0;
    local_d8 = local_70;
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d0._4_4_ = 0;
    lVar14 = 0;
    local_4c = 0;
    while( true ) {
      iVar7 = (int)uVar8;
      if (local_d0._4_4_ != 0) {
        if (local_d0._4_4_ < 1) {
          iVar13 = -local_d0._4_4_;
        }
        else {
          iVar13 = (int)local_d0 - local_d0._4_4_;
          local_d0 = CONCAT44(local_d0._4_4_,iVar13);
          FUN_00d23690();
          local_c8 = local_c8 + local_d0._4_4_;
          iVar13 = 0;
        }
        local_d0 = CONCAT44(iVar13,(int)local_d0);
      }
      lVar9 = (int64_t)(int)local_d0;
      iVar13 = (int)local_d0 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar13);
      if (*(int *)(local_d8 + 0xc) <= iVar13) break;
      local_e8 = *(void**)(*(int64_t *)(local_d8 + 0x10) + 8 + lVar9 * 8);
      uVar10 = FUN_00d90650();
      iVar13 = (int)uVar10;
      if ((iVar13 != -1) && ((lVar14 == 0 || (iVar13 < iVar7)))) {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(local_48 + 0x10) +
                 ((int64_t)local_c8 + (int64_t)(int)local_d0) * 8);
        if (lVar14 == lVar9) {
          local_31 = (byte)local_4c;
          if (((byte)local_4c == 0) && (lVar14 != 0)) {
            local_4c = 0;
            FUN_00d50b00();
            lVar9 = lVar14;
            goto LAB_00d6a810;
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          if (((byte)local_4c != '\0') && (lVar14 != 0)) {
            FUN_00d50b20();
          }
LAB_00d6a810:
          local_31 = 1;
          lVar14 = lVar9;
        }
        if (iVar13 == 0) {
          local_f8 = uVar10 >> 0x20;
          iVar7 = 0;
          goto LAB_00d6a866;
        }
        local_f8 = uVar10 >> 0x20;
        local_4c = (uint)local_31;
        uVar8 = uVar10 & 0xffffffff;
      }
    }
    local_31 = (byte)local_4c;
LAB_00d6a866:
    FUN_00018280();
    local_88 = lVar14;
    if (lVar14 == 0) break;
    if (local_58 == (void*)0x0) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_025795a8;
      uVar12 = (*pcVar2)();
      local_f0 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
      local_58 = puVar11;
    }
    if (0 < iVar7) {
      FUN_00d97ce0();
      puVar11 = local_e8;
      local_78 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_78 = '\x01';
      local_80 = puVar11;
      FUN_00d8dbf0();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
    FUN_00d8f140();
    puVar6 = local_e8;
    puVar11 = (void*)*arg1;
    if (puVar11 == local_e8) {
      if (((char)arg1[1] != '\0') || (local_e8 == (void*)0x0)) goto LAB_00d6aa48;
      if (local_e0 == '\0') {
        FUN_00d50b00();
        goto LAB_00d6aa40;
      }
LAB_00d6aa04:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar14 = arg1[1];
      if (local_e0 != '\0') {
        *arg1 = (int64_t)local_e8;
        if (((char)lVar14 != '\0') && (puVar11 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00d6aa04;
      }
      if (local_e8 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar6;
      if (((char)lVar14 != '\0') && (puVar11 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_00d6aa40:
      *(void*)(arg1 + 1) = 1;
LAB_00d6aa48:
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_31 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = local_48;
  lVar14 = local_70;
  if (local_58 == (void*)0x0) {
    *(void*)(this_ptr + 1) = 0;
    puVar11 = (void*)*arg1;
    if ((char)arg1[1] != '\0') {
      *this_ptr = (int64_t)puVar11;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      goto joined_r0x00d6ac05;
    }
    if (puVar11 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    iVar7 = FUN_00d8c7a0();
    if (0 < iVar7) {
      FUN_00d8dbf0();
    }
    FUN_00d8c7d0();
    puVar11 = local_58;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_f0 != '\0') {
      *this_ptr = (int64_t)local_58;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x00d6ac05;
    }
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)puVar11;
  *(void*)(this_ptr + 1) = 1;
joined_r0x00d6ac05:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 == 0) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00d59fc0
// ============================================================
// Function: FUN_00d59fc0
// Address: 00d59fc0
// Size: 1644 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNString"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00d59fc0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int local_54;
  int64_t *local_48;
  char local_40;
  
  if ((int64_t *)*param_1 == (int64_t *)0x0) {
    return 0;
  }
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*(int64_t *)*param_1 + 0x88))(param_1,&local_d8);
  local_88 = local_48;
  uVar8 = extraout_XMM0_Da;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) {
      local_88 = (int64_t *)0x0;
    }
    else {
      FUN_00e31530(extraout_XMM0_Da,0);
      uVar8 = extraout_XMM0_Da_03;
    }
  }
  else {
    local_40 = '\0';
  }
  plVar7 = local_88;
  local_80 = '\x01';
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_XMM0_Da_00;
  }
  plVar6 = (int64_t *)*arg1;
  local_54 = 1;
  if (plVar6 == plVar7) goto LAB_00d5a4a8;
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
    if (this_ptr == (int64_t *)0x0) goto LAB_00d5a10c;
  }
  else {
    if (plVar7 != (int64_t *)0x0) {
      local_c0 = '\0';
      local_c8 = plVar7;
      cVar3 = (**(code **)(*plVar6 + 0x50))();
      uVar8 = extraout_XMM0_Da_01;
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_02;
      }
      if (cVar3 != '\0') goto LAB_00d5a4a8;
      plVar6 = (int64_t *)*arg1;
    }
    if (plVar6 == this_ptr) {
LAB_00d5a10c:
      if ((int64_t *)*param_1 == plVar7) goto LAB_00d5a4a8;
    }
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x148))();
    if (local_48 == (int64_t *)0x0) {
      cVar3 = '\0';
      uVar8 = extraout_XMM0_Da_04;
    }
    else {
      (**(code **)(*plVar7 + 0x148))();
      local_b8 = *arg1;
      local_b0 = '\0';
      cVar3 = (**(code **)(*local_78 + 0x50))();
      uVar8 = extraout_XMM0_Da_05;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_06;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_07;
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar8 = extraout_XMM0_Da_08;
    }
    if (cVar3 != '\0') goto LAB_00d5a4a8;
    plVar6 = (int64_t *)*arg1;
  }
  if ((g_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_12, iVar5 != 0)) {
    if ((g_028a7d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_028a7cd0 = "GNObject";
      g_028a7cd8 = 0x10;
      g_028a7ce0 = FUN_00d4ff10;
      g_028a7ce8 = 0;
      ram_00000000028a7cf0 = 0;
      g_028a7cf8 = 0;
      ram_00000000028a7d00 = 0;
      g_028a7d08 = 0;
      ram_00000000028a7d10 = 0;
      g_028a7d18 = 0;
      ram_00000000028a7d20 = 0;
      g_028a7d28 = 0;
      ram_00000000028a7d30 = 0;
      g_028a7d38 = 0;
      ram_00000000028a7d40 = 0;
      g_028a7d48 = 0;
      ram_00000000028a7d50 = 0;
      g_028a7d58 = 0;
      ram_00000000028a7d60 = 0;
      g_028a7d68 = 0;
      ram_00000000028a7d70 = 0;
      g_028a7d78 = 0;
      ram_00000000028a7d80 = 0;
      g_028a7d84 = 0;
      ram_00000000028a7d88 = 0;
      ram_00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e58 = &g_028a7cd0;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    uVar8 = ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00d5a208:
    arg1 = (int64_t *)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_09;
    if (cVar3 == '\0') goto LAB_00d5a208;
  }
  plVar6 = (int64_t *)*arg1;
  lVar2 = arg1[1];
  if (((char)lVar2 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  plVar7 = local_88;
  uVar8 = FUN_00d68120();
  plVar1 = g_02802688;
  cVar3 = g_02802690;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_10;
    plVar1 = g_02802688;
    cVar3 = g_02802690;
    if (cVar4 != '\0') {
      plVar1 = local_88;
      cVar3 = local_80;
    }
  }
  if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  local_54 = 0;
  if ((plVar6 != (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
    (**(code **)(*this_ptr + 0x360))();
    FUN_00e86210();
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_00c837f0(local_a8,&local_a8);
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00e31530(extraout_XMM0_Da_11,0);
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00c77cd0();
      cVar4 = FUN_00c7b220();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == 'e') {
        uVar8 = FUN_00c77cd0();
        local_90 = '\0';
        local_98 = plVar1;
        uVar8 = FUN_00c7b3d0(uVar8,&local_98);
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00e31530(uVar8,0);
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        local_68 = local_48;
        cVar4 = (**(code **)(*plVar6 + 0x50))();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          local_54 = 1;
          FUN_00d50b20();
          goto LAB_00d5a484;
        }
      }
      FUN_00d50b20();
    }
  }
LAB_00d5a484:
  if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)lVar2 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00d5a4a8:
  if ((local_80 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_54 == 0) {
    return 0;
  }
  return 1;
}



// ============================================================
// 001c36b0
// ============================================================
// Function: FUN_001c36b0
// Address: 001c36b0
// Size: 3837 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNQualifier"
//   "GNClassDescription"
//   "GNEditingContext"
//   "GNObjectProvider"
//   "GNView"
//   "GNSortOrdering"
//   "_lastSelectedRow"
//   "GNAssociation"
//   "_emtpySelectionAllowed"
//   "_autoselectNewObjects"
//   "_autoselectObjects"
//   "_autofetchEnabled"
//   "_fetchesOnDemand"
//   "GNMasterDetailAssoc"
//   "_selectionDidUpdateAssociations"
//   "_isAddingObjectsEnabled"
//   "_isRemovingObjectsEnabled"
//   "_revertsObjectsByKeepingGlobalIDs"
//   ... +6 more
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_001c36b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00006550();
  *this_ptr = &g_0267f0d0;
  this_ptr[2] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c49e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  puVar4 = this_ptr + 3;
  this_ptr[3] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4ad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  this_ptr[4] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4bc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4cb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAssociation");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4da0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001c4e90();
  this_ptr[9] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5330();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5420();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSortOrdering");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5510();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObjectProvider");
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5600();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMasterDetailAssoc");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c56f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x99) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9b) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c57e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNGlobalID");
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c58d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  return;
}



// ============================================================
// 00e86b50
// ============================================================
// Function: FUN_00e86b50
// Address: 00e86b50
// Size: 1648 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00e86b50(void)

{
  uint uVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t arg1;
  void*this_ptr;
  int iVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  bool bVar14;
  int64_t *local_a0;
  char local_98;
  int64_t *local_78;
  char local_70;
  int local_60;
  int64_t *local_48;
  char local_40;
  
  plVar4 = local_78;
  uVar1 = *(uint *)(arg1 + 8);
  FUN_00d894f0();
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (0 < (int)uVar1) {
    uVar13 = 0;
    do {
      FUN_00d7e190();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = local_48;
      local_70 = '\0';
      FUN_00d21140();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar13);
  }
  plVar5 = local_78;
  FUN_00d9b9b0();
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  if (local_78 == (int64_t *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00d8c7a0();
  }
  do {
    iVar10 = iVar7;
    if ((iVar10 == 0) || (plVar4 == (int64_t *)0x0)) break;
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = -1;
    do {
      lVar8 = (int64_t)local_60;
      local_60 = local_60 + 1;
      iVar9 = *(int *)((int64_t)plVar4 + 0xc);
      if (iVar9 <= local_60) break;
      local_78 = *(int64_t **)(plVar4[2] + 8 + lVar8 * 8);
      cVar6 = FUN_00d99ce0();
    } while (cVar6 == '\0');
    FUN_00018280();
    iVar7 = iVar10 + -1;
  } while (local_60 < iVar9);
  FUN_00d9b9e0();
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_78 != (int64_t *)0x0) && (iVar7 = FUN_00d8c7a0(), iVar7 != 0)) {
    iVar9 = 0;
    do {
      cVar6 = FUN_00d99ce0();
      if (cVar6 == '\0') {
        bVar14 = iVar10 != 0;
        bVar2 = true;
        if (plVar4 == (int64_t *)0x0) goto LAB_00e871a1;
        goto LAB_00e86ea4;
      }
      iVar9 = iVar9 + 1;
    } while (iVar7 != iVar9);
  }
  if (iVar10 != 0) {
    bVar14 = true;
    bVar2 = false;
    if (plVar4 != (int64_t *)0x0) {
LAB_00e86ea4:
      for (lVar8 = 0; (int)lVar8 < *(int *)((int64_t)plVar4 + 0xc); lVar8 = lVar8 + 1) {
        plVar12 = *(int64_t **)(plVar4[2] + lVar8 * 8);
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar11 = plVar12;
        if (bVar14) {
          FUN_00d8f140();
          if (plVar12 == local_48) {
LAB_00e86f5e:
            plVar11 = plVar12;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            plVar11 = local_48;
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar12 = local_48;
              goto LAB_00e86f5e;
            }
          }
          else {
            plVar11 = local_48;
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        plVar12 = plVar11;
        if (bVar2) {
          FUN_00d8c7a0();
          FUN_00d97ce0();
          if (local_48 == plVar11) {
LAB_00e86fe7:
            plVar12 = plVar11;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar12 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar11 = local_48;
                goto LAB_00e86fe7;
              }
            }
            else if (plVar11 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        lVar3 = g_02789050;
        if (g_02789050 != 0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*plVar12 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        local_48 = g_02789058;
        if (cVar6 == '\0') {
          FUN_00e86820();
          if (local_98 == '\0') {
            if (local_a0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_48 = local_a0;
          FUN_00d233f0();
          if (local_a0 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_02789058 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d233f0();
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        local_40 = '\0';
        FUN_00d50b20();
      }
      FUN_00018280();
    }
  }
LAB_00e871a1:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00d6caf0
// ============================================================
// Function: FUN_00d6caf0
// Address: 00d6caf0
// Size: 1350 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d6caf0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int64_t lVar6;
  short sVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  void*puVar11;
  int64_t arg1;
  void*this_ptr;
  void*puVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  uint16_t local_88;
  undefined6 uStack_86;
  char local_80;
  void*local_40;
  
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    puVar12 = *(void**)(arg1 + 0x18);
    if (puVar12 != (void*)0x0) {
      FUN_00d50b00();
      bVar2 = false;
      goto LAB_00d6cb5d;
    }
  }
  bVar2 = true;
  puVar12 = (void*)0x0;
LAB_00d6cb5d:
  bVar3 = true;
  FUN_00d6be80();
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_80 == '\0') {
    if (CONCAT62(uStack_86,local_88) != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  uVar10 = FUN_00d90650();
  if (CONCAT62(uStack_86,local_88) != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT62(uStack_86,local_88) != 0)) {
    FUN_00d50b20();
  }
  pcVar5 = g_025795c0;
  if ((int)uVar10 < 1) {
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    iVar13 = (int)((uint64_t)uVar10 >> 0x20) + (int)uVar10;
    bVar4 = false;
    local_40 = (void*)0x0;
    puVar11 = (void*)0x0;
    sVar14 = 0;
    bVar2 = false;
    while (iVar8 = FUN_00d8c7a0(), iVar13 < iVar8) {
      sVar7 = FUN_00d8cbc0();
      if (local_40 == (void*)0x0) {
        if (puVar11 == (void*)0x0) {
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_025795a8;
          (*pcVar5)();
          bVar2 = true;
        }
        if (sVar7 != 0x3d) {
          FUN_00d8ea20();
          local_40 = (void*)0x0;
          goto LAB_00d6cdaa;
        }
        FUN_00d8c7d0();
        lVar6 = g_027259e0;
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d97f20();
        if (puVar12 == puVar11) {
          bVar15 = bVar2;
          if ((!bVar2) && (puVar12 != (void*)0x0)) {
            if (!bVar3) {
              FUN_00d50b00();
              goto LAB_00d6ce5c;
            }
            goto LAB_00d6ce8a;
          }
joined_r0x00d6ce83:
          if ((bVar3) && (puVar12 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar11 = puVar12;
          if (bVar3) {
            if (bVar2) {
              FUN_00d50b20();
            }
LAB_00d6ce8a:
            bVar3 = false;
            bVar15 = true;
          }
          else {
            if (puVar12 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar15 = true;
            if (bVar2) {
              FUN_00d50b20();
LAB_00d6ce5c:
              bVar15 = true;
              goto joined_r0x00d6ce83;
            }
          }
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_40 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &g_025795a8;
        (*pcVar5)();
        bVar4 = true;
        sVar14 = 0;
        iVar13 = iVar13 + 1;
        bVar2 = bVar15;
      }
      else if ((sVar7 == 0x20) && (sVar14 == 0)) {
        sVar14 = 0;
        iVar13 = iVar13 + 1;
      }
      else {
        bVar15 = sVar14 == 0;
        if ((bVar15) && (sVar7 == 0x27)) {
          sVar14 = 0x27;
          iVar13 = iVar13 + 1;
        }
        else if (bVar15 && sVar7 == 0x22) {
          sVar14 = 0x22;
          iVar13 = iVar13 + 1;
        }
        else if (sVar14 == sVar7) {
          FUN_00d8c7d0();
          FUN_00d6a330();
          if (bVar3) {
            bVar3 = false;
          }
          else if (puVar12 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00cd2930();
          if (puVar12 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (puVar11 != (void*)0x0) {
            if (bVar2) {
              FUN_00d50b20();
            }
            bVar2 = false;
          }
          if (bVar4) {
            FUN_00d50b20();
          }
          bVar4 = false;
          local_40 = (void*)0x0;
          puVar11 = (void*)0x0;
          iVar13 = iVar13 + 1;
        }
        else {
          FUN_00d8ea20(bVar15,1);
LAB_00d6cdaa:
          iVar13 = iVar13 + 1;
        }
      }
    }
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (puVar11 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00d6b9a0
// ============================================================
// Function: FUN_00d6b9a0
// Address: 00d6b9a0
// Size: 980 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_00d6b9a0(void)

{
  int iVar1;
  short *psVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  short sVar8;
  bool bVar9;
  int64_t local_60;
  uint8_t local_58;
  int64_t *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  uint32_t local_38;
  short local_32;
  
LAB_00d6b9bf:
  FUN_00c8e710();
  lVar3 = CONCAT71(uStack_47,local_48);
  if ((((local_40 == '\0') && (lVar3 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  do {
    *(void*)(arg1 + 0x30) = *(void*)(arg1 + 0x28);
    cVar5 = FUN_00d6b3f0();
    if (cVar5 == '\0') goto LAB_00d6bcfe;
    *(void*)(arg1 + 0x40) = 0;
  } while (local_32 != 0x3c);
  iVar1 = *(int *)(lVar3 + 0x18);
  local_50 = this_ptr;
  FUN_00c8e340();
  *(void*)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar1) = 0x3c;
  do {
    cVar5 = FUN_00d6b3f0();
    this_ptr = local_50;
    if (cVar5 == '\0') goto LAB_00d6bcfe;
    if (local_32 == 0x22) {
      sVar8 = 0x22;
      if (*(int *)(arg1 + 0x40) == 1) {
        *(void*)(arg1 + 0x40) = 0;
LAB_00d6bc24:
        local_38 = 1;
      }
      else {
        if (*(int *)(arg1 + 0x40) == 0) {
          *(void*)(arg1 + 0x40) = 1;
        }
LAB_00d6bafb:
        local_38 = 0;
      }
    }
    else if (local_32 == 0x27) {
      iVar1 = *(int *)(arg1 + 0x40);
      if (iVar1 != 2) {
        if (iVar1 == 0) {
          *(void*)(arg1 + 0x40) = 2;
          sVar8 = 0x27;
          goto LAB_00d6bafb;
        }
        goto LAB_00d6baf3;
      }
      *(void*)(arg1 + 0x40) = 0;
      local_38 = 1;
      sVar8 = 0x27;
    }
    else {
      iVar1 = *(int *)(arg1 + 0x40);
LAB_00d6baf3:
      sVar8 = local_32;
      if (iVar1 != 0) goto LAB_00d6bafb;
      if (((local_32 != 9) && (local_32 != 10)) && (local_32 != 0xd)) goto LAB_00d6bc24;
      local_38 = 1;
      local_32 = 0x20;
      sVar8 = 0x20;
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340();
    psVar2 = *(short **)(lVar3 + 0x10);
    *(short *)((int64_t)psVar2 + (int64_t)iVar1) = sVar8;
    iVar1 = *(int *)(lVar3 + 0x18);
    this_ptr = local_50;
    if (iVar1 < 8) {
      if (3 < iVar1) goto LAB_00d6bb60;
    }
    else {
      if (((psVar2[1] == 0x21) && (psVar2[2] == 0x2d)) && (psVar2[3] == 0x2d)) {
        FUN_00d6b840();
        if (CONCAT71(uStack_47,local_48) == 0) {
          *(void*)(local_50 + 1) = 0;
          *local_50 = 0;
          FUN_00d50b20();
          return local_50;
        }
        this_ptr = local_50;
        if (local_40 != '\0') {
          FUN_00d50b20();
        }
        goto LAB_00d6bc65;
      }
LAB_00d6bb60:
      if (psVar2[1] == 0x3f) {
        local_58 = 0;
        local_60 = lVar3;
        FUN_00d6b700(0x3f,&local_60);
        goto LAB_00d6bd0a;
      }
      if (((((0x11 < iVar1) && (*psVar2 == 0x3c)) && (psVar2[1] == 0x21)) &&
          ((psVar2[2] == 0x5b && (psVar2[3] == 0x43)))) &&
         ((((psVar2[4] == 0x44 && ((psVar2[5] == 0x41 && (psVar2[6] == 0x54)))) &&
           (psVar2[7] == 0x41)) && (psVar2[8] == 0x5b)))) break;
    }
    if (sVar8 == 0x3e) {
      if ((char)local_38 == '\0') goto LAB_00d6bcfe;
      *(void*)(arg1 + 0x38) = *(void*)(arg1 + 0x28);
      FUN_00d920f0(*(void*)(arg1 + 0x28),iVar1 / 2);
      *(void*)(local_50 + 1) = 0;
      lVar7 = CONCAT71(uStack_47,local_48);
      this_ptr = local_50;
      if (local_40 == '\0') {
        if (lVar7 != 0) {
          FUN_00d50b00();
          *local_50 = lVar7;
          *(void*)(local_50 + 1) = 1;
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00d6bd0a;
        }
        lVar7 = 0;
      }
      *local_50 = lVar7;
      *(void*)(local_50 + 1) = 1;
      goto LAB_00d6bd0a;
    }
  } while( true );
  local_48 = '\0';
  cVar5 = '\0';
  do {
    cVar4 = local_48;
    cVar6 = FUN_00d6b5b0();
    this_ptr = local_50;
    if (cVar6 == '\0') {
LAB_00d6bcfe:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
LAB_00d6bd0a:
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
    bVar9 = cVar5 != ']';
    cVar5 = cVar4;
  } while (((bVar9) || (cVar4 != ']')) || (local_48 != '>'));
  if (lVar3 != 0) {
LAB_00d6bc65:
    FUN_00d50b20();
  }
  goto LAB_00d6b9bf;
}



// ============================================================
// 0002a9b0
// ============================================================
// Function: FUN_0002a9b0
// Address: 0002a9b0
// Size: 1586 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "GNTypedStream"
//   "GNClassDescription"
//   "_usedCompressorIndex"
//   "_gatherOnly"
//   "GNBinaryArchiveTypeInfoContainer"
//   "GNBinaryKeyValueArchiverDelegate"
//   "GNOperationProgressObserver"
//   "GNInt"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_0002a9b0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00025ab0();
  *this_ptr = &g_0258cea8;
  *(void*)(this_ptr + 5) = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  this_ptr[9] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryArchiveTypeInfoContainer");
  }
  FUN_0002b730();
  this_ptr[0xb] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b810();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b900();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryArchiveTypeInfoContainer");
  }
  FUN_0002b9f0();
  this_ptr[0xe] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  FUN_0002bbc0();
  this_ptr[0x10] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  FUN_0002bd90();
  FUN_0002be70();
  this_ptr[0x13] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bf50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  FUN_0002c040();
  FUN_0002c120();
  FUN_0002c200();
  FUN_0002c2e0();
  FUN_0002c3c0();
  this_ptr[0x19] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002c4a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryKeyValueArchiverDelegate");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002c5e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNOperationProgressObserver");
  }
  return;
}



// ============================================================
// 00d68ce0
// ============================================================
// Function: FUN_00d68ce0
// Address: 00d68ce0
// Size: 827 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d68ce0(uint8_t param_1,int64_t *param_2)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  void*local_38;
  
  plVar4 = local_78;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x3d8))();
  local_40 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d68d7a;
    }
  }
  else if (local_78 != (int64_t *)0x0) {
LAB_00d68d7a:
    local_70[0] = '\0';
    local_78 = (int64_t *)0x0;
    local_40 = plVar4;
    local_68 = plVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_38 = puVar2;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar5 = -local_60._4_4_;
        }
        else {
          iVar5 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar5 = 0;
        }
        local_60 = CONCAT44(iVar5,(int)local_60);
      }
      lVar3 = (int64_t)(int)local_60;
      iVar5 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar5) break;
      local_78 = *(int64_t **)(local_68[2] + 8 + lVar3 * 8);
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*local_78 + 0x388))(param_1,&local_a0);
      lVar3 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        local_48 = '\0';
        local_50 = lVar3;
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00c6f7c0();
    puVar2 = local_38;
  }
  local_88 = '\0';
  local_90 = puVar2;
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (*(int *)((int64_t)puVar2 + 0xc) < 2) {
      if (*(int *)((int64_t)puVar2 + 0xc) != 1) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        goto LAB_00d6900d;
      }
      FUN_00d23340();
      plVar4 = &local_50;
      if (local_70[0] != '\0') {
        plVar4 = (int64_t *)local_70;
      }
      local_50 = CONCAT71(local_50._1_7_,local_70[0]);
      *(char *)plVar4 = '\0';
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if (((char)local_50 == '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d68760();
      *(void*)(this_ptr + 1) = 0;
      if (local_70[0] == '\0') {
        if (local_78 == (int64_t *)0x0) {
          local_78 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
    }
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = arg1;
    *(void*)(this_ptr + 1) = 1;
  }
LAB_00d6900d:
  FUN_00d50b20();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00d6de90
// ============================================================
// Function: FUN_00d6de90
// Address: 00d6de90
// Size: 784 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d6de90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00055590();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar4[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar4[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
  plVar5 = (int64_t *)plVar4[6];
  plVar7 = plVar5;
  if (plVar5 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        goto LAB_00d6df1a;
      }
      FUN_00d50b00();
      plVar5 = (int64_t *)plVar4[6];
      plVar4[6] = (int64_t)local_40;
      plVar7 = local_40;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_00d6df1a:
      plVar4[6] = (int64_t)plVar7;
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6e310();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00d6e047;
    }
  }
  else if (local_40 != (int64_t *)0x0) goto LAB_00d6e047;
  FUN_00d6ebd0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d6ebd0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d6e310();
    if ((local_40 != (int64_t *)0x0) && (plVar5 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00d6e047:
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar7 = (int64_t *)plVar4[3];
  if (plVar7 != plVar5) {
    FUN_00d50b00();
    plVar4[3] = (int64_t)plVar5;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02578b00;
  (*g_02578b18)();
  puVar3 = (void*)plVar4[4];
  if (puVar3 == puVar6) {
    FUN_00d50b20();
  }
  else {
    plVar4[4] = (int64_t)puVar6;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_60 = g_0277e5d8;
  if (g_0277e5d8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_48 = '\0';
  local_50 = plVar4;
  FUN_00d41430(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00e87d20
// ============================================================
// Function: FUN_00e87d20
// Address: 00e87d20
// Size: 889 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e87d20(void)

{
  byte bVar1;
  int iVar2;
  int64_t lVar3;
  void*puVar4;
  code *pcVar5;
  int64_t *plVar6;
  uint uVar7;
  int iVar8;
  
  FUN_00e316f0();
  iVar2 = g_02802628 + 1;
  if (0 < g_02802628) {
    g_02802628 = iVar2;
    FUN_00e31730();
    return;
  }
  uVar7 = g_02802630 | g_02802634;
  g_02802628 = iVar2;
  if (uVar7 == 0) {
    bVar1 = FUN_00da5b80();
    g_02802634 = (uint)bVar1 * 2 - 1;
  }
  if (g_02802634 != 0xffffffff) {
    if (g_02802630 == 0) {
      FUN_00e880e0();
      FUN_00e8f2a0();
      FUN_00d93000();
    }
    else {
      FUN_00e8f2a0();
      FUN_00d93000();
    }
    if (g_02802630 == 0) {
      FUN_00e99bf0();
      g_028025f8 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      g_02802600 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      g_02802608 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      g_02802610 = FUN_00e38c70();
      FUN_00e99bf0();
      g_02802618 = FUN_00e38c70();
      g_02802630 = 1;
      FUN_000064f0();
      FUN_000198f0();
      FUN_00020b20();
      FUN_0001b450();
      FUN_000191c0();
      FUN_00021930();
      FUN_0001e9a0();
      FUN_0001fe70();
      plVar6 = (int64_t *)FUN_0027a220();
      (**(code **)(*plVar6 + 0x10))();
      FUN_00e84f80();
    }
    g_02802630 = 2;
    FUN_00e8cc30();
    FUN_00d7e120();
    FUN_00d7e380();
    iVar2 = FUN_00c8d630();
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if (lVar3 != 0) {
          FUN_00e875e0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025736a8;
    puVar4[3] = 0;
    *(void*)(puVar4 + 4) = 0;
    (*g_025736c0)();
    FUN_00d50b00();
    g_028025f0 = puVar4;
    FUN_00da57f0();
    FUN_00d403f0();
    iVar2 = FUN_00c8d630();
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbb) != '\0')) {
          FUN_00e86210();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbb) != '\0')) {
          FUN_00e86210();
          FUN_00c88ec0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    g_02802630 = 3;
    for (iVar2 = 0; iVar8 = FUN_00e38d70(), iVar2 < iVar8; iVar2 = iVar2 + 1) {
      pcVar5 = FUN_00e38d90();
      (*pcVar5)();
    }
    g_02802630 = 4;
    plVar6 = (int64_t *)FUN_0027a220();
    (**(code **)(*plVar6 + 0x18))();
    FUN_00e31730();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    return;
  }
                      _exit(uVar7);
}



// ============================================================
// 00e85930
// ============================================================
// Function: FUN_00e85930
// Address: 00e85930
// Size: 875 bytes
// Class: GNObject
// String references:
//   "GNObject"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00e85930(void)

{
  byte bVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t local_70;
  int64_t local_40;
  int64_t local_30;
  char local_28;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &g_025783f8;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(void*)((int64_t)puVar2 + 0x5b) = 0;
  *(void*)((int64_t)puVar2 + 99) = 0;
  (*g_02578410)();
  FUN_00d7e190();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_00d73b40();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d73c80();
  *(void*)((int64_t)puVar2 + 0x24) = *(void*)(this_ptr + 0x10);
  bVar1 = *(byte *)(this_ptr + 0x18);
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x20) == 0) {
      FUN_00d76d00();
    }
    else {
      FUN_00d76d00();
    }
  }
  else if ((bVar1 & 0x20) == 0) {
    FUN_00d76d00();
  }
  else {
    FUN_00d76d00();
  }
  FUN_00d77e00();
  FUN_00d77e20();
  if ((char)*(byte *)(this_ptr + 0x18) < '\0') {
    FUN_00d7e190();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00d76cb0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((*(byte *)(this_ptr + 0x18) & 0x40) == 0) {
      if (*(int64_t *)(this_ptr + 0x20) != 0) goto LAB_00e85ada;
LAB_00e85b09:
      local_28 = '\0';
      local_30 = 0;
LAB_00e85b19:
      local_40 = 0;
    }
    else {
      if ((*(int64_t *)(this_ptr + 0x20) == 0) ||
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 8) == 0)) goto LAB_00e85b09;
LAB_00e85ada:
      FUN_00d7e190();
      if (local_28 == '\0') {
        if (local_30 == 0) goto LAB_00e85b19;
        FUN_00d50b00();
        local_40 = local_30;
      }
      else {
        local_40 = local_30;
        local_28 = '\0';
      }
    }
    FUN_00d76cb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((*(byte *)(this_ptr + 0x18) & 0x40) == 0) || (*(int64_t *)(this_ptr + 0x20) == 0)) {
    local_28 = '\0';
    local_30 = 0;
  }
  else {
    FUN_00d7e190();
    if (local_28 != '\0') {
      local_70 = local_30;
      local_28 = '\0';
      goto LAB_00e85c2c;
    }
    if (local_30 != 0) {
      FUN_00d50b00();
      local_70 = local_30;
      goto LAB_00e85c2c;
    }
  }
  local_70 = 0;
LAB_00e85c2c:
  FUN_00d76bf0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar2[0xe] = this_ptr;
  *(void**)(this_ptr + 0x28) = puVar2;
  return puVar2;
}



// ============================================================
// 00e86210
// ============================================================
// Function: FUN_00e86210
// Address: 00e86210
// Size: 899 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00e86210(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xb0) != 0) goto LAB_00e86231;
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if ((lVar1 != 0) && (*(int64_t *)(lVar1 + 0xb0) == 0)) {
    FUN_00e86210();
  }
  FUN_00d7e190();
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) goto LAB_00e8629f;
LAB_00e862ed:
    local_98 = '\0';
    local_a0 = 0;
LAB_00e86303:
    local_50 = 0;
  }
  else {
    local_a8 = '\0';
    if (lVar1 == 0) goto LAB_00e862ed;
LAB_00e8629f:
    FUN_00d7e190();
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
        local_50 = local_a0;
        goto LAB_00e8631c;
      }
      goto LAB_00e86303;
    }
    local_50 = local_a0;
    local_98 = '\0';
  }
LAB_00e8631c:
  local_48 = '\x01';
  FUN_00c81410(*(void*)(this_ptr + 0x10),&local_50,*(void*)(this_ptr + 8));
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(int64_t *)(this_ptr + 0xb0) = lVar1;
  if ((*(byte *)(this_ptr + 0xba) & 1) != 0) {
    FUN_00c83750();
  }
  for (lVar1 = *(int64_t *)(this_ptr + 0x20);
      (lVar1 != 0 && (*(int64_t *)(lVar1 + 8) == this_ptr)); lVar1 = *(int64_t *)(lVar1 + 0x38))
  {
    lVar2 = FUN_00e85330();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c808f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  for (lVar1 = *(int64_t *)(this_ptr + 0x28);
      (lVar1 != 0 && (*(int64_t *)(lVar1 + 8) == this_ptr)); lVar1 = *(int64_t *)(lVar1 + 0x30))
  {
    lVar2 = FUN_00e85930();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c807f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c811a0();
  for (lVar1 = *(int64_t *)(this_ptr + 0xa8); lVar1 != 0; lVar1 = *(int64_t *)(lVar1 + 8)) {
    FUN_00d7e190();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c822a0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00e86231:
  return *(void*)(this_ptr + 0xb0);
}



// ============================================================
// 00d69a70
// ============================================================
// Function: FUN_00d69a70
// Address: 00d69a70
// Size: 795 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_00d69a70(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  int64_t local_98;
  char local_90;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (*(int *)(arg1[3] + 0xc) != 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  (**(code **)(*arg1 + 0x3d8))();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00d69ceb;
    FUN_00d50b00();
LAB_00d69afb:
    if (*(int *)(local_98 + 0xc) < 1) {
      bVar2 = false;
      lVar3 = 0;
    }
    else {
      lVar4 = 0;
      lVar3 = 0;
      bVar2 = false;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_98 + 0x10) + lVar4 * 8);
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00c6f510();
          if (local_58 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar2 = true;
            }
            else {
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_58 = local_48;
          local_50 = '\0';
          FUN_00d7ad40();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_98 + 0xc));
    }
    FUN_00c6f7c0();
    FUN_00d50b20();
  }
  else {
    if (local_98 != 0) goto LAB_00d69afb;
LAB_00d69ceb:
    lVar3 = 0;
    bVar2 = false;
  }
  lVar4 = arg1[4];
  if (lVar4 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    arg1[4] = lVar3;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = arg1[4];
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x00d69d69;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar4 = lVar3;
joined_r0x00d69d69:
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 000493b0
// ============================================================
// Function: FUN_000493b0
// Address: 000493b0
// Size: 1047 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "GNClassDescription"
//   "GNKeyValueArchiverDelegate"
//   "_encodesGlobalIDsOfReferredObjects"
//   "_reflectsOwnerTree"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_000493b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00025ab0();
  *this_ptr = &g_02570f00;
  puVar4 = this_ptr + 5;
  this_ptr[5] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000499d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  this_ptr[6] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  FUN_00049ca0();
  FUN_00049d80();
  this_ptr[10] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049f50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueArchiverDelegate");
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a090();
    FUN_00e87980();
  }
  FUN_0004a200();
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x71) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a2e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004a3d0();
  FUN_0004a4b0();
  return;
}



// ============================================================
// 00d6c3d0
// ============================================================
// Function: FUN_00d6c3d0
// Address: 00d6c3d0
// Size: 796 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d6c3d0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_50;
  char local_48;
  
  plVar7 = (int64_t *)FUN_00be9900();
  (**(code **)(*plVar7 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar7[4] = *(int64_t *)(*param_2 + 0x38);
  if (*arg1 != 0) {
    FUN_00d8c7a0();
    sVar6 = FUN_00d8cbc0();
    if ((sVar6 == 0x2f) || ((*arg1 != 0 && (sVar6 = FUN_00d8cbc0(), sVar6 == 0x3f)))) {
      plVar7[5] = *(int64_t *)(*param_2 + 0x38);
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
  bVar4 = true;
  do {
    FUN_00d6b9a0();
    if (local_88 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      break;
    }
    sVar6 = FUN_00d8cbc0();
    if (sVar6 == 0x2f) {
      FUN_00d6be80();
      FUN_00d6be80();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      cVar5 = (**(code **)(*local_50 + 0x50))();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_00d6c6b0;
      plVar7[5] = *(int64_t *)(*param_2 + 0x30);
      *(void*)(this_ptr + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      bVar4 = false;
      bVar3 = false;
    }
    else {
      FUN_00d6c3d0();
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00d6c5bc;
        }
      }
      else if (local_50 != (int64_t *)0x0) {
LAB_00d6c5bc:
        local_48 = '\0';
        FUN_00d21140();
        bVar3 = true;
        FUN_00d50b20();
        goto joined_r0x00d6c6c2;
      }
LAB_00d6c6b0:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar3 = false;
    }
joined_r0x00d6c6c2:
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  } while (bVar3);
  if ((bVar4) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0004b1c0
// ============================================================
// Function: FUN_0004b1c0
// Address: 0004b1c0
// Size: 1082 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "_predictedDecodedValuesIndex"
//   "GNKeyValueUnarchiverDelegate"
//   "GNEditingContext"
//   "_reflectsOwnerTree"
//   "_awakesObjectsAfterDecodig"
//   "GNInt"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_0004b1c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00025ab0();
  *this_ptr = &g_02571d38;
  FUN_0004b7d0();
  this_ptr[6] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b8b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b9a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004ba90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004bb80();
  this_ptr[10] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004bc60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueUnarchiverDelegate");
  }
  *(void*)(this_ptr + 0xb) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0004bda0();
  puVar4 = this_ptr + 0xd;
  this_ptr[0xd] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004be80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext",param_3,param_4,puVar4);
  }
  FUN_0004bf70();
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0004c050();
  return;
}



// ============================================================
// 00d61870
// ============================================================
// Function: FUN_00d61870
// Address: 00d61870
// Size: 934 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d61870(char param_1,uint64_t param_2,char param_3)

{
  int64_t *plVar1;
  char cVar2;
  int extraout_var;
  uint64_t uVar3;
  char *pcVar4;
  void*arg1;
  int64_t *this_ptr;
  char cVar5;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x210))();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00e31530(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((param_3 == '\0') || (cVar2 = (**(code **)(*this_ptr + 0x1e0))(), cVar2 == '\0')) {
    cVar5 = '\0';
    cVar2 = '\0';
  }
  else {
    (**(code **)(*this_ptr + 0x168))();
    cVar5 = '\x01';
    cVar2 = '\x01';
  }
  if (param_1 != '\0') {
    FUN_00d77be0();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = cVar5;
    if (local_48 != 0) {
      FUN_00d77be0();
      FUN_00d77bd0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (extraout_var < 2) {
        FUN_00d77be0();
        uVar3 = FUN_00d77bd0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((uVar3 & 0xffffffff00000000) == 0x100000000) {
          plVar1 = (int64_t *)*arg1;
          FUN_00d77f60();
          local_60 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00e31530();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_60 = '\x01';
          local_68 = local_48;
          (**(code **)(*plVar1 + 0x1f0))(0,&local_68,cVar5);
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (int64_t *)*arg1;
        FUN_00e31530();
        (**(code **)(*plVar1 + 0x228))(0,local_48,1);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23f50();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0x178))();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d691c0
// ============================================================
// Function: FUN_00d691c0
// Address: 00d691c0
// Size: 1015 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00d691c0(void)

{
  int64_t *plVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar2)();
  (**(code **)(*arg1 + 0x3d8))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00d693a3;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_00d693a3;
  local_40 = -1;
  while( true ) {
    lVar5 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 400))();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_68 = local_80;
      local_60 = '\0';
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00c6f7c0();
  FUN_00d50b20();
LAB_00d693a3:
  lVar5 = g_02772078;
  if (1 < *(int *)((int64_t)puVar3 + 0xc)) {
    if (g_02772078 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_0277e4f0;
  if (g_0277e4f0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_00d21140();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = g_02772088;
  if (1 < *(int *)((int64_t)puVar3 + 0xc)) {
    if (g_02772088 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00d613b0
// ============================================================
// Function: FUN_00d613b0
// Address: 00d613b0
// Size: 617 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d613b0(int param_1,int64_t param_2,char param_3,char param_4)

{
  int64_t *plVar1;
  char cVar2;
  int extraout_var;
  int extraout_var_00;
  char *pcVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0 [8];
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  char local_3c;
  char local_38 [8];
  
  if (param_1 == -1) {
    param_1 = *(int *)(*(int64_t *)((int64_t)*(int *)(param_2 + 0x24) + (int64_t)this_ptr) + 0xc
                      );
  }
  if ((param_4 == '\0') || (cVar2 = (**(code **)(*this_ptr + 0x1e0))(), cVar2 == '\0')) {
    local_3c = '\0';
  }
  else {
    local_98 = *arg1;
    local_90 = '\0';
    (**(code **)(*this_ptr + 0x160))(param_1,param_2);
    local_3c = '\x01';
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  local_88 = *arg1;
  local_80 = '\0';
  FUN_00d23370();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 != '\0') {
    FUN_00d77be0();
    pcVar3 = local_38;
    if (local_a0[0] != '\0') {
      pcVar3 = local_a0;
    }
    local_38[0] = local_a0[0];
    *pcVar3 = '\0';
    if ((local_a0[0] != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        FUN_00d77bd0();
        if (extraout_var_00 == 1) {
          plVar1 = (int64_t *)*arg1;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00e31530();
          }
          (**(code **)(*plVar1 + 0x200))(0,local_a8,local_3c);
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (int64_t *)*arg1;
        if (this_ptr != (int64_t *)0x0) {
          FUN_00e31530();
        }
        (**(code **)(*plVar1 + 0x220))(0xffffffff,local_a8,0,local_3c);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if (local_3c != '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    (**(code **)(*this_ptr + 0x170))(param_1,param_2);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00d5a9c0
// ============================================================
// Function: FUN_00d5a9c0
// Address: 00d5a9c0
// Size: 574 bytes
// Class: GNObject
// String references:
//   "Cannot set scalar for key %@ directly. Property is not an attribute"
//   "Cannot set scalar for key %@ directly. Type mismatch."
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d5a9c0(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x360))();
  FUN_00e86210();
  local_88 = *param_1;
  local_80 = '\0';
  FUN_00c841b0(local_88,&local_88);
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar2 + 0x368))();
  lVar1 = g_0277ddb0;
  if (cVar3 == '\0') {
    local_54 = param_2;
    if (g_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_2 = local_54;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_0277ddb0;
  if (*(char *)(plVar2[0xc] + 0x19) != (char)param_2) {
    if (g_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x208))(1,plVar2);
  FUN_00d50b20();
  return;
}



// ============================================================
// 00d6be80
// ============================================================
// Function: FUN_00d6be80
// Address: 00d6be80
// Size: 674 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d6be80(void)

{
  int64_t lVar1;
  short sVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *arg1;
  char cVar5;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar4 = *arg1;
  if (lVar4 == 0) {
    FUN_00d8ede0();
    return;
  }
  cVar5 = (char)arg1[1];
  if (cVar5 != '\0') {
    FUN_00d50b00();
  }
  sVar2 = FUN_00d8cbc0();
  if (sVar2 == 0x2f) {
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
  }
  else {
    FUN_00d8c7a0();
    sVar2 = FUN_00d8cbc0();
    lVar1 = g_027259e0;
    if (sVar2 == 0x2f) {
      if (g_027259e0 != 0) {
        FUN_00d50b00();
      }
      iVar3 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (iVar3 == -1) {
        FUN_00d8c7a0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        goto LAB_00d6c0fe;
      }
    }
    lVar1 = g_027259e0;
    if (g_027259e0 != 0) {
      FUN_00d50b00();
    }
    iVar3 = FUN_00d90650();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027259e0;
    if (iVar3 == -1) {
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
    }
    else {
      if (g_027259e0 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_00d91000(1,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = **(int64_t **)(lVar1 + 0x10);
      if (lVar4 == lVar1) {
        if ((cVar5 == '\0') && (lVar1 != 0)) {
          cVar5 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        bVar6 = cVar5 != '\0';
        lVar4 = lVar1;
        cVar5 = '\x01';
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      FUN_00d50b20();
    }
  }
LAB_00d6c0fe:
  if ((cVar5 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d4fbf0
// ============================================================
// Function: FUN_00d4fbf0
// Address: 00d4fbf0
// Size: 520 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNComparer"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d4fbf0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t local_20;
  
  if ((g_0277e468 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    if ((g_028a7d98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_028a7cd0 = "GNObject";
      g_028a7cd8 = 0x10;
      g_028a7ce0 = FUN_00d4ff10;
      g_028a7ce8 = 0;
      ram_00000000028a7cf0 = 0;
      g_028a7cf8 = 0;
      ram_00000000028a7d00 = 0;
      g_028a7d08 = 0;
      ram_00000000028a7d10 = 0;
      g_028a7d18 = 0;
      ram_00000000028a7d20 = 0;
      g_028a7d28 = 0;
      ram_00000000028a7d30 = 0;
      g_028a7d38 = 0;
      ram_00000000028a7d40 = 0;
      g_028a7d48 = 0;
      ram_00000000028a7d50 = 0;
      g_028a7d58 = 0;
      ram_00000000028a7d60 = 0;
      g_028a7d68 = 0;
      ram_00000000028a7d70 = 0;
      g_028a7d78 = 0;
      ram_00000000028a7d80 = 0;
      g_028a7d84 = 0;
      ram_00000000028a7d88 = 0;
      ram_00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    g_0277e3a0 = "GNComparer";
    g_0277e3a8 = 0x18;
    g_0277e3b0 = FUN_00d67bd0;
    g_0277e3b8 = &g_028a7cd0;
    g_0277e3c0 = 0;
    ram_000000000277e3c8 = 0;
    g_0277e3d0 = 0;
    ram_000000000277e3d8 = 0;
    g_0277e3e0 = 0;
    ram_000000000277e3e8 = 0;
    g_0277e3f0 = 0;
    ram_000000000277e3f8 = 0;
    g_0277e400 = 0;
    ram_000000000277e408 = 0;
    g_0277e410 = 0;
    ram_000000000277e418 = 0;
    g_0277e420 = 0;
    ram_000000000277e428 = 0;
    g_0277e430 = 0;
    ram_000000000277e438 = 0;
    g_0277e440 = 0;
    ram_000000000277e448 = 0;
    g_0277e450 = 0;
    _ram_000000000277e458 = 0;
    g_0277e460 = 0;
    ___cxa_guard_release();
  }
  if (g_0277e45b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    uVar3 = 0;
    FUN_00d67c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0,param_3,param_4,uVar3);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00026600
// ============================================================
// Function: FUN_00026600
// Address: 00026600
// Size: 955 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "_state"
//   "GNTypedStream"
//   "_coding"
//   "_isSecureSaveEnabled"
//   "GNInt"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00026600(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00025ab0();
  *this_ptr = &g_025668e0;
  FUN_00026ba0();
  FUN_00026c80();
  this_ptr[7] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_00026f40();
  *(void*)(this_ptr + 10) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  puVar4 = this_ptr + 0xb;
  this_ptr[0xb] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00d4f8e0
// ============================================================
// Function: FUN_00d4f8e0
// Address: 00d4f8e0
// Size: 741 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNCoder"
//   "GNCopier"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d4f8e0(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
          g_026cdb90 = "GNCoder";
          g_026cdb98 = 0x28;
          g_026cdba0 = FUN_00025a60;
          g_026cdba8 = &g_028a7cd0;
          g_026cdbb0 = 0;
          ram_00000000026cdbb8 = 0;
          g_026cdbc0 = 0;
          g_026cdc38 = 0;
          ram_00000000026cdc40 = 0;
          g_026cdc48 = 0;
          g_026cdc4a = 1;
          g_026cdbc8 = 0;
          ram_00000000026cdbd0 = 0;
          g_026cdbd8 = 0;
          ram_00000000026cdbe0 = 0;
          g_026cdbe8 = 0;
          ram_00000000026cdbf0 = 0;
          g_026cdbf8 = 0;
          ram_00000000026cdc00 = 0;
          g_026cdc08 = 0;
          ram_00000000026cdc10 = 0;
          g_026cdc18 = 0;
          ram_00000000026cdc20 = 0;
          g_026cdc28 = 0;
          ram_00000000026cdc30 = 0;
          g_026cdc53 = 0;
          g_026cdc4b = 0;
          ___cxa_guard_release();
        }
      }
      g_0277e100 = "GNCopier";
      g_0277e108 = 0x58;
      g_0277e110 = FUN_00d66f00;
      g_0277e118 = &g_026cdb90;
      g_0277e120 = 0;
      ram_000000000277e128 = 0;
      g_0277e130 = 0;
      ram_000000000277e138 = 0;
      g_0277e140 = 0;
      ram_000000000277e148 = 0;
      g_0277e150 = 0;
      ram_000000000277e158 = 0;
      g_0277e160 = 0;
      ram_000000000277e168 = 0;
      g_0277e170 = 0;
      ram_000000000277e178 = 0;
      g_0277e180 = 0;
      ram_000000000277e188 = 0;
      g_0277e190 = 0;
      ram_000000000277e198 = 0;
      g_0277e1a0 = 0;
      ram_000000000277e1a8 = 0;
      g_0277e1b0 = 0;
      _ram_000000000277e1b8 = 0;
      g_0277e1c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (g_0277e1bb != '\0') {
    return;
  }
  FUN_00025580();
  FUN_00e87760();
  FUN_00d66f40();
  uVar2 = FUN_00e87770();
  FUN_00e87920(uVar2,0);
  FUN_00d67ac0();
  FUN_00d67ac0();
  return;
}



// ============================================================
// 00d66830
// ============================================================
// Function: FUN_00d66830
// Address: 00d66830
// Size: 606 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNKeyValueGetBinding"
//   "GNMethodInvocationKeyValueGetBinding"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d66830(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
          g_0277de00 = "GNKeyValueGetBinding";
          g_0277de08 = 0x10;
          g_0277de10 = FUN_00d667d0;
          g_0277de18 = &g_028a7cd0;
          g_0277de20 = 0;
          ram_000000000277de28 = 0;
          g_0277de30 = 0;
          g_0277dea8 = 0;
          ram_000000000277deb0 = 0;
          g_0277deb8 = 0;
          g_0277deba = 3;
          g_0277de38 = 0;
          ram_000000000277de40 = 0;
          g_0277de48 = 0;
          ram_000000000277de50 = 0;
          g_0277de58 = 0;
          ram_000000000277de60 = 0;
          g_0277de68 = 0;
          ram_000000000277de70 = 0;
          g_0277de78 = 0;
          ram_000000000277de80 = 0;
          g_0277de88 = 0;
          ram_000000000277de90 = 0;
          g_0277de98 = 0;
          ram_000000000277dea0 = 0;
          g_0277dec3 = 0;
          g_0277debb = 0;
          ___cxa_guard_release();
        }
      }
      g_0277ded0 = "GNMethodInvocationKeyValueGetBinding";
      g_0277ded8 = 0x18;
      g_0277dee0 = FUN_00d66800;
      g_0277dee8 = &g_0277de00;
      g_0277def0 = 0;
      ram_000000000277def8 = 0;
      g_0277df00 = 0;
      g_0277df78 = 0;
      ram_000000000277df80 = 0;
      g_0277df88 = 0;
      g_0277df8a = 3;
      g_0277df08 = 0;
      ram_000000000277df10 = 0;
      g_0277df18 = 0;
      ram_000000000277df20 = 0;
      g_0277df28 = 0;
      ram_000000000277df30 = 0;
      g_0277df38 = 0;
      ram_000000000277df40 = 0;
      g_0277df48 = 0;
      ram_000000000277df50 = 0;
      g_0277df58 = 0;
      ram_000000000277df60 = 0;
      g_0277df68 = 0;
      ram_000000000277df70 = 0;
      g_0277df93 = 0;
      g_0277df8b = 0;
      ___cxa_guard_release();
      return &g_0277ded0;
    }
  }
  return &g_0277ded0;
}



// ============================================================
// 00e86820
// ============================================================
// Function: FUN_00e86820
// Address: 00e86820
// Size: 534 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e86820(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int iVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      cVar2 = FUN_00d99d20();
      iVar6 = iVar5;
      if (cVar2 == '\0') break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar3;
    } while (iVar3 != iVar5);
    if (iVar6 == 1) {
      FUN_00d9a140();
      return;
    }
    if (iVar6 != 0) {
      if (iVar6 == iVar3) {
        FUN_00d99300();
        return;
      }
      FUN_00d99ce0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025795a8;
      (*g_025795c0)();
      FUN_00d97ce0();
      FUN_00d99300();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8f140();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8c7d0();
      *this_ptr = (int64_t)puVar4;
      goto LAB_00e86a1f;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] != '\0') {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
LAB_00e86a1f:
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00d66bb0
// ============================================================
// Function: FUN_00d66bb0
// Address: 00d66bb0
// Size: 606 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNKeyValueGetBinding"
//   "GNDirectAccessKeyValueGetBinding"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d66bb0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
          g_0277de00 = "GNKeyValueGetBinding";
          g_0277de08 = 0x10;
          g_0277de10 = FUN_00d667d0;
          g_0277de18 = &g_028a7cd0;
          g_0277de20 = 0;
          ram_000000000277de28 = 0;
          g_0277de30 = 0;
          g_0277dea8 = 0;
          ram_000000000277deb0 = 0;
          g_0277deb8 = 0;
          g_0277deba = 3;
          g_0277de38 = 0;
          ram_000000000277de40 = 0;
          g_0277de48 = 0;
          ram_000000000277de50 = 0;
          g_0277de58 = 0;
          ram_000000000277de60 = 0;
          g_0277de68 = 0;
          ram_000000000277de70 = 0;
          g_0277de78 = 0;
          ram_000000000277de80 = 0;
          g_0277de88 = 0;
          ram_000000000277de90 = 0;
          g_0277de98 = 0;
          ram_000000000277dea0 = 0;
          g_0277dec3 = 0;
          g_0277debb = 0;
          ___cxa_guard_release();
        }
      }
      g_0277dfe8 = "GNDirectAccessKeyValueGetBinding";
      g_0277dff0 = 0x18;
      g_0277dff8 = FUN_00d66b80;
      g_0277e000 = &g_0277de00;
      g_0277e008 = 0;
      ram_000000000277e010 = 0;
      g_0277e018 = 0;
      g_0277e090 = 0;
      ram_000000000277e098 = 0;
      g_0277e0a0 = 0;
      g_0277e0a2 = 3;
      g_0277e020 = 0;
      ram_000000000277e028 = 0;
      g_0277e030 = 0;
      ram_000000000277e038 = 0;
      g_0277e040 = 0;
      ram_000000000277e048 = 0;
      g_0277e050 = 0;
      ram_000000000277e058 = 0;
      g_0277e060 = 0;
      ram_000000000277e068 = 0;
      g_0277e070 = 0;
      ram_000000000277e078 = 0;
      g_0277e080 = 0;
      ram_000000000277e088 = 0;
      g_0277e0ab = 0;
      g_0277e0a3 = 0;
      ___cxa_guard_release();
      return &g_0277dfe8;
    }
  }
  return &g_0277dfe8;
}



// ============================================================
// 00d67220
// ============================================================
// Function: FUN_00d67220
// Address: 00d67220
// Size: 578 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNCoder"
//   "GNCopier"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d67220(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
          g_026cdb90 = "GNCoder";
          g_026cdb98 = 0x28;
          g_026cdba0 = FUN_00025a60;
          g_026cdba8 = &g_028a7cd0;
          g_026cdbb0 = 0;
          ram_00000000026cdbb8 = 0;
          g_026cdbc0 = 0;
          g_026cdc38 = 0;
          ram_00000000026cdc40 = 0;
          g_026cdc48 = 0;
          g_026cdc4a = 1;
          g_026cdbc8 = 0;
          ram_00000000026cdbd0 = 0;
          g_026cdbd8 = 0;
          ram_00000000026cdbe0 = 0;
          g_026cdbe8 = 0;
          ram_00000000026cdbf0 = 0;
          g_026cdbf8 = 0;
          ram_00000000026cdc00 = 0;
          g_026cdc08 = 0;
          ram_00000000026cdc10 = 0;
          g_026cdc18 = 0;
          ram_00000000026cdc20 = 0;
          g_026cdc28 = 0;
          ram_00000000026cdc30 = 0;
          g_026cdc53 = 0;
          g_026cdc4b = 0;
          ___cxa_guard_release();
        }
      }
      g_0277e100 = "GNCopier";
      g_0277e108 = 0x58;
      g_0277e110 = FUN_00d66f00;
      g_0277e118 = &g_026cdb90;
      g_0277e120 = 0;
      ram_000000000277e128 = 0;
      g_0277e130 = 0;
      ram_000000000277e138 = 0;
      g_0277e140 = 0;
      ram_000000000277e148 = 0;
      g_0277e150 = 0;
      ram_000000000277e158 = 0;
      g_0277e160 = 0;
      ram_000000000277e168 = 0;
      g_0277e170 = 0;
      ram_000000000277e178 = 0;
      g_0277e180 = 0;
      ram_000000000277e188 = 0;
      g_0277e190 = 0;
      ram_000000000277e198 = 0;
      g_0277e1a0 = 0;
      ram_000000000277e1a8 = 0;
      g_0277e1b0 = 0;
      ram_000000000277e1b8 = 0;
      g_0277e1c0 = 0;
      ___cxa_guard_release();
      return &g_0277e100;
    }
  }
  return &g_0277e100;
}



// ============================================================
// 00d68120
// ============================================================
// Function: FUN_00d68120
// Address: 00d68120
// Size: 550 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNValue"
//   "GNNumber"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d68120(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
          g_026d4330 = "GNValue";
          g_026d4338 = 0x18;
          g_026d4340 = FUN_00053cb0;
          g_026d4348 = &g_028a7cd0;
          g_026d4350 = 0;
          ram_00000000026d4358 = 0;
          g_026d4360 = 0;
          ram_00000000026d4368 = 0;
          g_026d4370 = 0;
          ram_00000000026d4378 = 0;
          g_026d4380 = 0;
          ram_00000000026d4388 = 0;
          g_026d4390 = 0;
          ram_00000000026d4398 = 0;
          g_026d43a0 = 0;
          ram_00000000026d43a8 = 0;
          g_026d43b0 = 0;
          ram_00000000026d43b8 = 0;
          g_026d43c0 = 0;
          ram_00000000026d43c8 = 0;
          g_026d43d0 = 0;
          ram_00000000026d43d8 = 0;
          g_026d43e0 = 0;
          ram_00000000026d43e8 = 0;
          g_026d43f0 = 0;
          ___cxa_guard_release();
        }
      }
      g_026d4260 = "GNNumber";
      g_026d4268 = 0x18;
      g_026d4270 = FUN_00053c70;
      g_026d4278 = &g_026d4330;
      g_026d4280 = 0;
      ram_00000000026d4288 = 0;
      g_026d4290 = 0;
      ram_00000000026d4298 = 0;
      g_026d42a0 = 0;
      ram_00000000026d42a8 = 0;
      g_026d42b0 = 0;
      ram_00000000026d42b8 = 0;
      g_026d42c0 = 0;
      ram_00000000026d42c8 = 0;
      g_026d42d0 = 0;
      ram_00000000026d42d8 = 0;
      g_026d42e0 = 0;
      ram_00000000026d42e8 = 0;
      g_026d42f0 = 0;
      ram_00000000026d42f8 = 0;
      g_026d4300 = 0;
      ram_00000000026d4308 = 0;
      g_026d4310 = 0;
      ram_00000000026d4318 = 0;
      g_026d4320 = 0;
      ___cxa_guard_release();
      return &g_026d4260;
    }
  }
  return &g_026d4260;
}



// ============================================================
// 00064b50
// ============================================================
// Function: FUN_00064b50
// Address: 00064b50
// Size: 713 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "_state"
//   "GNTypedStream"
//   "GNClassDescription"
//   "_decoding"
//   "GNInt"
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_00064b50(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00025ab0();
  *this_ptr = &g_0257a838;
  this_ptr[5] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00064f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00065260();
  FUN_00065340();
  FUN_00065420();
  return;
}

