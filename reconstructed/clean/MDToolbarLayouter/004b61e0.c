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

