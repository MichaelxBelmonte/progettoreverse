// ===================================================================
// MDToolbarLayouter — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (12):
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


// ============================================================
// 004b61e0
// ============================================================
// Function: FUN_004b61e0
// Address: 004b61e0
// Size: 3578 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b61e0(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *pvVar6;
  void*puVar7;
  char *pcVar8;
  int64_t **pplVar9;
  void* pVar10;
  int64_t lVar11;
  int iVar12;
  int64_t *arg1;
  int64_t *plVar13;
  bool bVar14;
  bool bVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar16;
  int64_t *plVar17;
  double dVar18;
  uint8_t local_128 [8];
  uint8_t local_120;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  char local_61;
  int64_t *local_60;
  char local_58 [8];
  double local_50;
  int64_t *local_48;
  char local_40;
  undefined7 uStack_3f;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_004b77a0();
  local_98 = (int64_t *)*param_2;
  local_61 = *(char *)(param_2 + 1);
  bVar14 = local_61 != '\0';
  bVar15 = local_98 != (int64_t *)0x0;
  if (bVar15 && bVar14) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_90 + 0x450))();
  if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = local_98;
  if (cVar2 != '\0') {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_02572358;
    (*g_02572370)();
    if (bVar15 && bVar14) {
      local_98 = plVar4;
      FUN_00d50b20();
    }
    local_61 = '\x01';
    if ((int64_t *)*param_2 != (int64_t *)0x0) {
      local_88._0_1_ = '\0';
      local_90 = (int64_t *)0x0;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_80 = (int64_t *)*param_2;
      while( true ) {
        lVar5 = (int64_t)(int)local_78;
        iVar12 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar12);
        if (*(int *)((int64_t)local_80 + 0xc) <= iVar12) break;
        lVar11 = local_80[2];
        local_90 = *(int64_t **)(lVar11 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((void*)lVar11);
        pVar10 = (void*)lVar11;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar12 = *(int *)((int64_t)local_60 + 0xc);
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar12 == 0) {
          local_60 = local_90;
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          plVar13 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_60 = plVar13;
          local_58[0] = '\0';
          FUN_00d23480();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_78._4_4_ != 0) {
          if (local_78._4_4_ < 1) {
            iVar12 = -local_78._4_4_;
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
            FUN_00d23690();
            local_70 = local_70 + local_78._4_4_;
            iVar12 = 0;
          }
          local_78 = CONCAT44(iVar12,(int)local_78);
        }
      }
      FUN_000be170();
    }
  }
  local_98 = plVar4;
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_a0 = plVar4;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  if (local_98 == (int64_t *)0x0) {
    local_a8 = (int64_t *)((uint64_t)local_a8._4_4_ << 0x20);
    local_50 = g_023b4830;
    local_d0 = g_023b2568;
    plVar13 = g_026e1810;
  }
  else {
    local_88._0_1_ = '\0';
    local_90 = (int64_t *)0x0;
    local_80 = local_98;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_50 = g_023b4830;
    local_d0 = g_023b2568;
    local_a8 = (int64_t *)((uint64_t)local_a8._4_4_ << 0x20);
    local_78._4_4_ = 0;
    while( true ) {
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar12 = -local_78._4_4_;
        }
        else {
          iVar12 = (int)local_78 - local_78._4_4_;
          local_78 = CONCAT44(local_78._4_4_,iVar12);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar12 = 0;
        }
        local_78 = CONCAT44(iVar12,(int)local_78);
      }
      lVar5 = (int64_t)(int)local_78;
      iVar12 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar12);
      if (*(int *)((int64_t)local_80 + 0xc) <= iVar12) break;
      local_90 = *(int64_t **)(local_80[2] + 8 + lVar5 * 8);
      FUN_003b6860();
      plVar13 = local_60;
      if (local_58[0] == '\0') {
        if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      FUN_004b7a60();
      FUN_003b7720();
      FUN_004b5d70(&local_40,&local_48);
      plVar17 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_004b6701;
        }
      }
      else if (local_60 != (int64_t *)0x0) {
LAB_004b6701:
        FUN_00c9fe20();
        plVar4 = local_60;
        local_c8 = local_58[0];
        pcVar8 = local_58;
        if (local_58[0] == '\0') {
          pcVar8 = &local_c8;
        }
        *pcVar8 = '\0';
        if ((local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        local_60 = plVar17;
        cVar2 = FUN_00d24090();
        uVar16 = extraout_XMM0_Qa;
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (plVar4 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        plVar4 = local_a0;
        if (cVar2 == '\0') {
          FUN_00c8e2b0(uVar16,0x10);
          plVar1 = local_60;
          if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          uVar16 = FUN_00c92160();
          local_e8 = plVar17;
          local_e0 = '\0';
          FUN_004b7c30(uVar16,&local_e8);
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar1 = (int64_t *)plVar13[5];
        if (plVar1 != plVar17) {
          FUN_00d50b00();
          plVar13[5] = (int64_t)plVar17;
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if (plVar17 == (int64_t *)*arg1) {
          plVar17 = local_48;
          if ((double)local_d0 <= (double)local_48) {
            plVar17 = local_d0;
          }
          local_a8 = (int64_t *)
                     CONCAT44(local_a8._4_4_,(int)CONCAT71((int7)((uint64_t)arg1 >> 8),1));
          dVar18 = (double)CONCAT71(uStack_3f,local_40);
          local_d0 = plVar17;
          if ((double)CONCAT71(uStack_3f,local_40) <= local_50) goto LAB_004b68a4;
        }
        else {
LAB_004b68a4:
          dVar18 = local_50;
        }
        local_50 = dVar18;
        FUN_00d50b20();
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    plVar13 = g_026e1810;
  }
  bVar3 = (byte)plVar4;
  g_026e1810 = plVar13;
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  FUN_0071a120();
  if (((((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), (char)local_88 != '\0')) && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58[0] = '\0';
  local_60 = plVar13;
  FUN_000175c0();
  plVar4 = local_90;
  if ((char)local_88 == '\0') {
    if (((local_90 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_88 != '\0')) &&
       (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88._0_1_ = '\0';
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    local_88._0_1_ = '\0';
    local_90 = plVar4;
    bVar3 = FUN_00c70bc0();
    if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar13 = local_a0;
  if ((plVar4 != (int64_t *)0x0 & bVar3) != 0) {
    FUN_00c9fe20();
    plVar4 = local_90;
    pplVar9 = &local_88;
    if ((char)local_88 == '\0') {
      pplVar9 = &local_60;
    }
    local_60 = (int64_t *)CONCAT71(local_60._1_7_,(char)local_88);
    *(void*)pplVar9 = 0;
    if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar12 = *(int *)((int64_t)plVar4 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (((byte)local_a8 & 1 < iVar12) != 0) {
      FUN_004b5af0();
      plVar4 = local_90;
      if ((char)local_88 == '\0') {
        if (local_90 == (int64_t *)0x0) goto LAB_004b6fcb;
        FUN_00d50b00();
      }
      else if (local_90 == (int64_t *)0x0) goto LAB_004b6fcb;
      local_88._0_1_ = '\0';
      local_90 = (int64_t *)0x0;
      local_a8 = plVar4;
      local_80 = plVar4;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_78._4_4_ = 0;
      bVar14 = false;
      while( true ) {
        if (local_78._4_4_ != 0) {
          if (local_78._4_4_ < 1) {
            iVar12 = -local_78._4_4_;
          }
          else {
            iVar12 = (int)local_78 - local_78._4_4_;
            local_78 = CONCAT44(local_78._4_4_,iVar12);
            FUN_00d23690();
            local_70 = local_70 + local_78._4_4_;
            iVar12 = 0;
          }
          local_78 = CONCAT44(iVar12,(int)local_78);
        }
        lVar5 = (int64_t)(int)local_78;
        iVar12 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar12);
        if (*(int *)((int64_t)local_80 + 0xc) <= iVar12) break;
        local_90 = *(int64_t **)(local_80[2] + 8 + lVar5 * 8);
        FUN_003b79c0();
        if (local_48 == (int64_t *)0x0) {
          cVar2 = '\0';
        }
        else {
          FUN_003b79c0();
          plVar4 = (int64_t *)CONCAT71(uStack_c7,local_c8);
          if (local_c0 == '\0') {
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_58[0] = '\0';
          local_60 = plVar4;
          cVar2 = FUN_00ca18c0();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_003b79c0();
          plVar13 = local_60;
          plVar4 = (int64_t *)*arg1;
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 == plVar4) {
            FUN_003b72f0();
          }
          else {
            uVar16 = FUN_003b79c0();
            local_b8 = local_48;
            local_b0 = 0;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                uVar16 = FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_b0 = '\x01';
            FUN_004b7ce0(uVar16,&local_b8);
            plVar4 = local_60;
            if (local_58[0] == '\0') {
              if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58[0] = '\0';
            }
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((double)((uint64_t)((double)local_d0 - *(double *)plVar4[2]) & g_023908f0) <
                 g_02391038) &&
               ((double)((uint64_t)(local_50 - ((double *)plVar4[2])[1]) & g_023908f0) <
                g_02391038)) {
              uVar16 = FUN_003b7950();
              plVar4 = local_48;
              if (local_40 == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  uVar16 = FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_120 = 1;
              FUN_004b5c00(uVar16,local_128);
              plVar13 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              if (plVar4 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_003b7720();
              bVar14 = true;
              if (plVar13 != (int64_t *)0x0) {
                cVar2 = FUN_003b7710();
                if ((cVar2 != '\0') || (cVar2 = FUN_003b7780(), cVar2 != '\0')) {
                  FUN_003b7740();
                }
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
      }
      FUN_00274d30();
      FUN_00d50b20();
      plVar13 = local_a0;
      if (bVar14) {
        FUN_004b5af0();
        plVar4 = local_90;
        if ((char)local_88 == '\0') {
          if (local_90 == (int64_t *)0x0) goto LAB_004b6fcb;
          FUN_00d50b00();
        }
        else if (local_90 == (int64_t *)0x0) goto LAB_004b6fcb;
        local_88._0_1_ = '\0';
        local_90 = (int64_t *)0x0;
        local_80 = plVar4;
        local_70 = 0;
        local_78 = 0;
        if (0 < *(int *)((int64_t)plVar4 + 0xc)) {
          lVar5 = 0;
          do {
            local_90 = *(int64_t **)(plVar4[2] + lVar5 * 8);
            cVar2 = FUN_003b7710();
            if (cVar2 != '\0') {
              FUN_003b7720();
            }
            lVar5 = lVar5 + 1;
            local_78 = CONCAT44(local_78._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((int64_t)plVar4 + 0xc));
        }
        FUN_00274d30();
        FUN_00d50b20();
      }
    }
  }
LAB_004b6fcb:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_61 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 004b4640
// ============================================================
// Function: FUN_004b4640
// Address: 004b4640
// Size: 1228 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b4640(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  float fVar3;
  char cVar4;
  byte bVar5;
  int64_t this_ptr;
  uint uVar6;
  uint32_t uVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  float fVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t in_XMM1_Qb;
  uint64_t uVar20;
  uint64_t uVar21;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int64_t *local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_40;
  char local_38;
  
  FUN_01e53c20();
  FUN_01e3f820();
  uVar13 = param_2;
  uVar20 = in_XMM1_Qb;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  uVar11 = (**(code **)(*local_40 + 0x938))();
  FUN_004b4d40();
  (**(code **)(*local_a8 + 0x938))();
  uVar17 = uVar13;
  uVar21 = uVar20;
  if (local_a0 != '\0') {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  (**(code **)(*local_40 + 0x938))();
  FUN_004b4d40();
  uVar12 = (**(code **)(*local_a8 + 0x938))();
  if (local_a0 != '\0') {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  (**(code **)(*local_40 + 0x938))();
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  uVar7 = (**(code **)(*local_40 + 0x938))();
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  local_e8 = (float)uVar11;
  fStack_e4 = (float)((uint64_t)uVar11 >> 0x20);
  fStack_e0 = (float)extraout_XMM0_Qb;
  fStack_dc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  local_d8 = (float)uVar13;
  fStack_d4 = (float)((uint64_t)uVar13 >> 0x20);
  fStack_d0 = (float)uVar20;
  fStack_cc = (float)((uint64_t)uVar20 >> 0x20);
  local_108 = (float)param_2;
  fStack_104 = (float)((uint64_t)param_2 >> 0x20);
  fStack_100 = (float)in_XMM1_Qb;
  fStack_fc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  auVar18._0_4_ = local_108 - (local_e8 + local_d8);
  auVar18._4_4_ = fStack_104 - (fStack_e4 + fStack_d4);
  auVar18._8_4_ = fStack_100 - (fStack_e0 + fStack_d0);
  auVar18._12_4_ = fStack_fc - (fStack_dc + fStack_cc);
  local_98 = (float)uVar17;
  fStack_94 = (float)((uint64_t)uVar17 >> 0x20);
  fStack_90 = (float)uVar21;
  fStack_8c = (float)((uint64_t)uVar21 >> 0x20);
  local_88._0_4_ = (uint32_t)uVar12;
  local_88._4_4_ = (uint32_t)((uint64_t)uVar12 >> 0x20);
  uStack_80._0_4_ = (float)extraout_XMM0_Qb_00;
  uStack_80._4_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar14._0_4_ = local_108 - (local_98 + (float)local_88._0_4_);
  auVar14._4_4_ = fStack_104 - (fStack_94 + (float)local_88._4_4_);
  auVar14._8_4_ = fStack_100 - (fStack_90 + (float)uStack_80);
  auVar14._12_4_ = fStack_fc - (fStack_8c + uStack_80._4_4_);
  auVar18 = blendps(auVar18,auVar14,0xd);
  auVar19._4_4_ = extraout_XMM0_Db;
  auVar19._0_4_ = extraout_XMM0_Db;
  auVar19._8_4_ = extraout_XMM0_Dd;
  auVar19._12_4_ = extraout_XMM0_Dd;
  fVar8 = auVar14._0_4_ + extraout_XMM0_Db + g_02390d00;
  insertps(auVar19,uVar7,0x1c);
  uVar6 = 0;
  do {
    FUN_00d50b00();
    FUN_0033cd80();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_0033cd80();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_e8 = auVar18._0_4_;
    FUN_0033cd80();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4d8))();
    fVar15 = local_e8;
    local_88 = (uint8_t  [8])(**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
    uStack_80 = extraout_XMM0_Qb_02;
    fVar16 = fVar15;
    uVar9 = (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x4d8))();
    if (local_e8 <= 0.0) {
LAB_004b4aab:
      if (fVar15 <= 0.0) {
        return;
      }
LAB_004b4ad8:
      if (fVar16 <= 0.0) {
        return;
      }
      bVar5 = FUN_00d054a0();
    }
    else if ((fVar15 <= 0.0) || (cVar4 = FUN_00d054a0(), cVar4 == '\0')) {
joined_r0x004b4acd:
      if (fVar16 <= 0.0) {
        if (fVar15 <= 0.0) {
          return;
        }
        goto LAB_004b4ad8;
      }
      cVar4 = FUN_00d054a0();
      bVar5 = 1;
      if (cVar4 == '\0') goto LAB_004b4aab;
    }
    else {
      fVar1 = SUB84(local_88,0);
      fVar10 = ((float)(~-(uint)(0.0 < fVar16) & (uint)fVar8 | uVar9 & -(uint)(0.0 < fVar16)) -
               (fVar1 + fVar15 + g_02390d00)) + g_02394210;
      fVar3 = 0.0;
      if (0.0 <= fVar10) {
        fVar3 = fVar10;
      }
      local_118 = (float)uVar13;
      uStack_114 = (uint32_t)((uint64_t)uVar13 >> 0x20);
      uStack_110 = (uint32_t)extraout_XMM0_Qb_01;
      uStack_10c = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
      fVar10 = (local_118 + local_e8 + g_02390d00) - fVar1;
      bVar5 = 1;
      if (fVar10 < fVar3) {
        auVar2._4_4_ = uStack_114;
        auVar2._0_4_ = fVar10 + fVar1;
        auVar2._8_4_ = uStack_110;
        auVar2._12_4_ = uStack_10c;
        blendps(_local_88,auVar2,1);
        (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d0))();
        goto joined_r0x004b4acd;
      }
    }
    if (bVar5 == 0) {
      return;
    }
    uVar6 = uVar6 + bVar5;
    if (0xf < uVar6) {
      return;
    }
  } while( true );
}



// ============================================================
// 004b8a50
// ============================================================
// Function: FUN_004b8a50
// Address: 004b8a50
// Size: 970 bytes
// Class: MDToolbarLayouter
// String references:
//   "LayerCollection %I entries"
//   "\n[EDT]"
//   "\n[REF]"
//   "\n[OFF]"
//   "[ENB]"
//   "[DIS]"
//   " %@"
//   "LayerCollection no entries"
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b8a50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*puVar5;
  void**ppuVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  void*local_80;
  int64_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  void*local_60;
  char local_58;
  void*local_50;
  uint local_48;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  if (*(int64_t *)(arg1 + 0x10) == 0) {
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    local_60._0_1_ = (char)local_80;
    *(void*)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(void*)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &g_024cc6f0;
    FUN_00d94d80(&g_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c9fe20();
    lVar2 = local_88;
    local_60._0_1_ = (char)local_80;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    *(void*)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(void*)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &g_024cc6f0;
    FUN_00d94d80(&g_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_80;
    if ((char)local_80 == '\0') {
      ppuVar6 = &local_50;
    }
    local_50 = (void*)CONCAT71(local_50._1_7_,(char)local_80);
    *(void*)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_50 == '\0') {
      if (lVar2 == 0) goto LAB_004b8e0d;
      FUN_00d50b00();
    }
    else if (lVar2 == 0) goto LAB_004b8e0d;
    local_80._0_1_ = '\0';
    local_88 = 0;
    local_78 = lVar2;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_98 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        local_90 = '\0';
        local_88 = local_98;
        FUN_004b7f70(arg1,&local_98);
        puVar3 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_003b7710();
        if (cVar4 == '\0') {
          cVar4 = FUN_003b7780();
          if (cVar4 == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
        }
        else {
          FUN_00d8db40();
        }
        cVar4 = FUN_003b7990();
        if (cVar4 == '\0') {
          FUN_00d8db40();
        }
        else {
          FUN_00d8db40();
        }
        FUN_003b7950();
        lVar1 = CONCAT71(local_60._1_7_,(char)local_60);
        local_48 = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar1;
        FUN_00d94d80();
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_004b8e0d:
  FUN_00d8c7d0();
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 004b8670
// ============================================================
// Function: FUN_004b8670
// Address: 004b8670
// Size: 610 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b8670(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      if (plVar4 == (int64_t *)0x0) goto LAB_004b86dd;
    }
LAB_004b86d3:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (int64_t *)0x0) goto LAB_004b86d3;
LAB_004b86dd:
    plVar4 = (int64_t *)0x0;
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_004b7f70(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    return;
  }
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      if (plVar4 == (int64_t *)0x0) goto LAB_004b87a9;
    }
LAB_004b879f:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (int64_t *)0x0) goto LAB_004b879f;
LAB_004b87a9:
    plVar4 = (int64_t *)0x0;
  }
  local_40 = *arg1;
  local_38 = '\0';
  FUN_00ca13a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = *param_2;
  lVar3 = *(int64_t *)(lVar1 + 0x10);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(lVar1 + 0x10) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      goto joined_r0x004b8855;
    }
  }
  else {
joined_r0x004b8855:
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_004b8863;
    }
  }
  FUN_00d50b00();
LAB_004b8863:
  local_60 = lVar1;
  local_58 = '\0';
  local_50 = *param_2;
  local_48 = '\0';
  FUN_004b8390(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 004b5d70
// ============================================================
// Function: FUN_004b5d70
// Address: 004b5d70
// Size: 932 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


int64_t * FUN_004b5d70(void*param_1,void*param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t local_90;
  char local_88 [8];
  int64_t local_68;
  char local_60;
  int local_50;
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_004b5fed;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_004b5fed;
  local_50 = -1;
  bVar1 = false;
  lVar6 = 0;
  while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
    pvVar3 = _pthread_getspecific((void*)*(void*)(local_68 + 0x10));
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_38[0] = local_88[0];
    pcVar4 = local_88;
    if (local_88[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_90 == lVar6) {
      if ((local_38[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (lVar6 != 0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_001159b0();
        FUN_00d50b20();
        if (!bVar1) {
          return this_ptr;
        }
        goto LAB_004b6109;
      }
      if ((local_38[0] == '\0') && (local_90 != 0)) {
        FUN_00d50b00();
      }
      bVar1 = true;
      lVar6 = local_90;
    }
  }
  FUN_001159b0();
  pVar5 = (void*)local_68;
  FUN_00d50b20();
  if (lVar6 != 0) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01326de0();
    if (iVar2 != 0) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_012ebfe0();
      *param_2 = uVar7;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_012ebd30();
      *param_1 = uVar7;
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (!bVar1) {
      return this_ptr;
    }
LAB_004b6109:
    FUN_00d50b20();
    return this_ptr;
  }
LAB_004b5fed:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 004b77a0
// ============================================================
// Function: FUN_004b77a0
// Address: 004b77a0
// Size: 511 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b77a0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  FUN_004b5af0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_004b8550();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    uVar1 = *(uint *)(local_58 + 0xc);
    if (0 < (int)uVar1) {
      lVar2 = *(int64_t *)(local_58 + 0x10);
      uVar4 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(void*)(*(int64_t *)(lVar2 + uVar5 * 8) + 0x20) = 0;
          *(void*)(*(int64_t *)(lVar2 + 8 + uVar5 * 8) + 0x20) = 0;
          *(void*)(*(int64_t *)(lVar2 + 0x10 + uVar5 * 8) + 0x20) = 0;
          *(void*)(*(int64_t *)(lVar2 + 0x18 + uVar5 * 8) + 0x20) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar1 & 0xfffffffc) != (uint)uVar5);
      }
      if (uVar4 != 0) {
        uVar5 = uVar5 & 0xffffffff;
        do {
          *(void*)(*(int64_t *)(lVar2 + uVar5 * 8) + 0x20) = 0;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    FUN_00274d30();
  }
  plVar3 = *(int64_t **)(this_ptr + 0x10);
  if (plVar3 == (int64_t *)0x0) {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    *(int64_t **)(this_ptr + 0x10) = plVar3;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x10);
      goto joined_r0x004b795c;
    }
  }
  else {
joined_r0x004b795c:
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_004b796a;
    }
  }
  FUN_00d50b00();
LAB_004b796a:
  FUN_00ca1340();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_004b81e0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004b5760
// ============================================================
// Function: FUN_004b5760
// Address: 004b5760
// Size: 679 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b5760(void)

{
  char cVar1;
  int64_t lVar2;
  int64_t local_90;
  char local_88;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  FUN_004b5af0();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  local_40 = -1;
  do {
    lVar2 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) {
      FUN_00274d30();
      FUN_00d50b20();
      return;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar2 * 8);
    cVar1 = FUN_003b7990();
  } while (cVar1 == '\0');
  FUN_00274d30();
  FUN_00d50b20();
  FUN_004b5af0();
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar2 + 0xc)) {
      FUN_003b7950();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_004b5c00();
      if ((local_88 == '\0') && (local_90 != 0)) {
        FUN_00d50b00();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_003b7720();
      if (local_90 != 0) {
        cVar1 = FUN_003b7710();
        if (cVar1 == '\0') {
          cVar1 = FUN_003b7780();
          if (cVar1 == '\0') {
            FUN_003b7290();
          }
          else {
            FUN_003b7740();
          }
        }
        else {
          FUN_003b72f0();
        }
        FUN_00d50b20();
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004b40e0
// ============================================================
// Function: FUN_004b40e0
// Address: 004b40e0
// Size: 542 bytes
// Class: MDToolbarLayouter
// String references:
//   "MDToolbarLayouter"
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b40e0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_178;
  void*local_30;
  
  // [STATIC_INIT: property registration]
  if (g_0270953b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_30 = (void*)0x0;
    if (1 < g_02802630) {
      local_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_004b5040();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}



// ============================================================
// 004b5500
// ============================================================
// Function: FUN_004b5500
// Address: 004b5500
// Size: 560 bytes
// Class: MDToolbarLayouter
// String references:
//   "MDToolbarLayouter"
//   "MDLayoutAlign"
//   "_align"
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void* FUN_004b5500(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02709598 = "_align";
      g_027095a0 = &g_02709480;
      g_027095a8 = 0;
      g_027095b0 = 0x6500;
      g_027095b8 = "MDLayoutAlign";
      g_027095c0 = &g_02709618;
      g_027095c8 = 0;
      ram_00000000027095d0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02709598;
}

