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

