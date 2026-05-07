// ===================================================================
// MDEditorViewController — Complete reconstructed pseudocode
// 72 functions
// ===================================================================

// Registered properties (3):
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


// ============================================================
// 006487e0
// ============================================================
// Function: FUN_006487e0
// Address: 006487e0
// Size: 10654 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_006487e0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int64_t *this_ptr;
  int64_t *plVar12;
  byte bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar18;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  byte local_b4;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  cVar4 = FUN_00637950();
  local_b4 = FUN_00645730();
  bVar5 = FUN_0063f180();
  iVar9 = FUN_00643ea0();
  bVar6 = FUN_006443a0();
  if ((bVar5 | bVar6) == 1) {
    if (this_ptr[0x1c] != 0) {
      FUN_01e40eb0();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == (int64_t *)0x0) {
        plVar1 = (int64_t *)this_ptr[0x1b];
        lVar2 = this_ptr[0x1c];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x450))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
LAB_00648a97:
        FUN_006c4ec0();
      }
    }
  }
  else if (this_ptr[0x1c] != 0) {
    FUN_01e40eb0();
    plVar1 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00637870();
      if (local_40 == (int64_t *)0x0) {
        bVar14 = false;
      }
      else {
        FUN_0063f230();
        bVar14 = local_50 != (int64_t *)0x0;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar14) {
        FUN_0063f230();
        plVar1 = local_50;
        FUN_0021e4e0();
        plVar12 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00637870();
        if (plVar12 != (int64_t *)0x0) {
          FUN_0063f230();
          FUN_0021e4e0();
          FUN_01c446f0();
        }
        FUN_006e30e0();
        if (plVar12 != (int64_t *)0x0) {
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x478))();
      goto LAB_00648a97;
    }
  }
  if (this_ptr[0x2e] == 0) {
    FUN_006472f0();
    if (bVar5 == 0) goto LAB_00648aca;
LAB_00648ab2:
    FUN_006472f0();
  }
  else {
    if (bVar5 != 0) goto LAB_00648ab2;
LAB_00648aca:
    FUN_00643310();
  }
  FUN_0063f230();
  if (local_40 == (int64_t *)0x0) {
LAB_00648b93:
    if (bVar6 != 0) goto LAB_00648ba2;
LAB_00648c11:
    FUN_006483a0();
  }
  else {
    FUN_0063f230();
    plVar1 = local_50;
    bVar7 = FUN_00228480();
    if ((local_48 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (((bVar7 ^ 1) & local_b4) == 1) {
      FUN_00637870();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00637870();
        FUN_006e1ea0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_b4 = 0;
      goto LAB_00648b93;
    }
    local_b4 = bVar7 & local_b4;
    if (bVar6 == 0) goto LAB_00648c11;
LAB_00648ba2:
    FUN_006476b0();
    if (bVar5 != 0) {
      FUN_00637870();
      FUN_006e3750();
      plVar1 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01f27fe0();
  cVar8 = (**(code **)(*local_40 + 0x450))();
  uVar18 = extraout_XMM0_Qa;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  plVar1 = g_026f6fd0;
  if (cVar8 == '\0') {
    if (cVar4 != '\0') goto LAB_00648dba;
LAB_00649d1d:
    if (this_ptr[0x1a] != 0) {
      uVar18 = FUN_01e40eb0();
      plVar12 = local_40;
      plVar1 = (int64_t *)this_ptr[0x1b];
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 == plVar1) {
        plVar1 = (int64_t *)this_ptr[0x1b];
        lVar2 = this_ptr[0x1a];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        uVar18 = (**(code **)(*plVar1 + 0x470))();
        if (lVar2 != 0) {
          uVar18 = FUN_00d50b20();
        }
      }
    }
    if (local_b4 == 0) {
      FUN_0009e200(uVar18,iVar9 != -1);
      FUN_006451f0();
    }
    else {
      (**(code **)(*this_ptr + 0x5d8))();
      uVar18 = FUN_00701620();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (iVar9 != -1) {
        FUN_006c5510();
        plVar1 = (int64_t *)this_ptr[0x1a];
        (**(code **)(*plVar1 + 0x528))();
        uVar18 = (**(code **)(*plVar1 + 0x4e8))();
      }
      lVar2 = this_ptr[0x1a];
      if (lVar2 != 0) {
        uVar18 = FUN_00d50b00();
      }
      FUN_0009e200(uVar18,iVar9 != -1);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_006451f0();
      if (iVar9 != -1) {
        if ((int64_t *)this_ptr[0x16] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[0x16] + 0x630))();
        }
        if (this_ptr[0x1a] == 0) {
          if (((int64_t *)this_ptr[0x16] == (int64_t *)0x0) ||
             ((**(code **)(*(int64_t *)this_ptr[0x16] + 0x630))(), this_ptr[0x1a] == 0))
          goto LAB_00649f96;
        }
        else {
          FUN_006c5510();
          plVar1 = (int64_t *)this_ptr[0x1a];
          (**(code **)(*plVar1 + 0x528))();
          (**(code **)(*plVar1 + 0x4e8))();
        }
        FUN_006c5710();
      }
    }
LAB_00649f96:
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar7 = 1;
    if (cVar4 == '\0') goto LAB_00649010;
    iVar9 = FUN_00644650();
    bVar7 = 1;
    bVar13 = 1;
    if (iVar9 == 1) goto LAB_00649006;
LAB_00648ff9:
    bVar7 = bVar13;
    FUN_00644650();
  }
  else {
    if (bVar5 == 0 && cVar4 == '\0') {
      uVar18 = FUN_006470d0();
    }
    else if (cVar4 == '\0') {
      if (g_026f6fd0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00e7d6f0();
      uVar18 = FUN_0071a120();
      plVar12 = local_40;
      if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
          (uVar18 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      local_50 = plVar1;
      local_48 = '\0';
      FUN_000175c0(uVar18,&local_50);
      plVar3 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        local_38[0] = '\0';
        local_40 = plVar3;
        uVar10 = FUN_00c70bc0();
        plVar12 = (int64_t *)(uint64_t)uVar10;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      uVar18 = FUN_00d50b20();
      if (plVar1 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      bVar13 = plVar3 != (int64_t *)0x0 & (byte)plVar12;
      bVar7 = 1;
      if ((iVar9 != -1 & (local_b4 ^ 1) & bVar13) == 0) {
        if (((local_b4 ^ 1 | iVar9 != -1) & bVar13) != 0) goto LAB_00649d1d;
        bVar7 = 0;
      }
      local_b4 = bVar7;
      uVar18 = FUN_00645a20();
      goto LAB_00649d1d;
    }
LAB_00648dba:
    if ((iVar9 != -1 & (bVar5 | bVar6)) == 1) {
      FUN_0009e200(uVar18,1);
    }
    else {
      uVar18 = FUN_0009ea60();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_0009e200(uVar18,0);
        (**(code **)(*(int64_t *)this_ptr[0x16] + 0x630))();
      }
    }
    FUN_006451f0();
    if (this_ptr[0x1a] != 0) {
      uVar18 = FUN_01e40eb0();
      plVar12 = local_40;
      plVar1 = (int64_t *)this_ptr[0x1b];
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != plVar1) {
        if (this_ptr[0x1a] != 0) {
          uVar18 = FUN_01e40eb0();
          plVar1 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            uVar18 = (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x478))();
          }
        }
        plVar1 = (int64_t *)this_ptr[0x1b];
        lVar2 = this_ptr[0x1a];
        if (lVar2 != 0) {
          uVar18 = FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x9e0))(uVar18,0);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*this_ptr + 0x5d8))();
    FUN_00701620();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006c5510();
    bVar13 = 0;
    if (bVar5 != 0) goto LAB_00648ff9;
    iVar9 = FUN_00644650();
    bVar7 = 0;
    bVar13 = 0;
    if (iVar9 != 2) goto LAB_00648ff9;
  }
LAB_00649006:
  FUN_00644ba0();
LAB_00649010:
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01e53c20();
    plVar12 = local_40;
    plVar1 = (int64_t *)this_ptr[0x29];
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar12) {
      cVar4 = FUN_00637950();
      if (cVar4 == '\0') {
        FUN_00643590();
        plVar1 = local_60;
        FUN_00d23310();
        plVar12 = local_40;
        pcVar11 = &local_70;
        if (local_38[0] != '\0') {
          pcVar11 = local_38;
        }
        local_70 = local_38[0];
        *pcVar11 = '\0';
        if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        FUN_01e42250();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      cVar4 = FUN_0063f180();
      if (cVar4 == '\0') {
        if (this_ptr[0x2b] != 0) {
          FUN_00d50b00();
          FUN_006f4810();
          FUN_01e42250();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else if (this_ptr[0x29] == 0) {
        FUN_00643590();
        plVar1 = local_60;
        FUN_00d23310();
        plVar12 = local_40;
        pcVar11 = &local_70;
        if (local_38[0] != '\0') {
          pcVar11 = local_38;
        }
        local_70 = local_38[0];
        *pcVar11 = '\0';
        if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        FUN_01e42250();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  bVar13 = bVar6 ^ 1;
  if (((bVar5 ^ 1) == 0 && bVar7 == 0) && (bVar13 == 0)) {
    plVar1 = (int64_t *)this_ptr[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    auVar20 = blendps(ZEXT816(0),ZEXT416(uVar16),1);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0x1c];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
    auVar19 = blendps(ZEXT816(0),ZEXT416(uVar10),1);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = g_02390d30;
        if (cVar4 == '\0') {
          uVar10 = g_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (this_ptr[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        iVar9 = FUN_00644650();
        if (iVar9 - 1U < 2) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02390d30;
          if (cVar4 == '\0') {
            uVar10 = g_02390d34;
          }
          auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0(auVar19._0_8_);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar9 == 0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02394298;
          if (cVar4 == '\0') {
            uVar10 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_50 + 0x450))();
          uVar15 = g_02394298;
          if (cVar4 == '\0') {
            uVar15 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_60 + 0x450))();
          uVar16 = g_02394298;
          if (cVar4 == '\0') {
            uVar16 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
          uVar17 = g_02394298;
          if (cVar4 == '\0') {
            uVar17 = g_02390124;
          }
          auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
          auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
          FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else if (((bVar5 ^ 1) == 0 && bVar7 == 0) && bVar6 == 0) {
    plVar1 = (int64_t *)this_ptr[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    auVar20 = blendps(ZEXT816(0),ZEXT416(uVar16),1);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0x1c];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
    auVar19 = blendps(ZEXT816(0),ZEXT416(uVar10),1);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = g_02390d30;
        if (cVar4 == '\0') {
          uVar10 = g_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (this_ptr[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        iVar9 = FUN_00644650();
        if (iVar9 - 1U < 2) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02390d30;
          if (cVar4 == '\0') {
            uVar10 = g_02390d34;
          }
          auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0(auVar19._0_8_);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar9 == 0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02394298;
          if (cVar4 == '\0') {
            uVar10 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_50 + 0x450))();
          uVar15 = g_02394298;
          if (cVar4 == '\0') {
            uVar15 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_60 + 0x450))();
          uVar16 = g_02394298;
          if (cVar4 == '\0') {
            uVar16 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
          uVar17 = g_02394298;
          if (cVar4 == '\0') {
            uVar17 = g_02390124;
          }
          auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
          auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
          FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else if ((bVar7 == 0 && bVar5 == 0) && bVar13 == 0) {
    plVar1 = (int64_t *)this_ptr[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    auVar20 = blendps(ZEXT816(0),ZEXT416(uVar16),1);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0x1c];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
    auVar19 = blendps(ZEXT816(0),ZEXT416(uVar10),1);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = g_02390d30;
        if (cVar4 == '\0') {
          uVar10 = g_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (this_ptr[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        iVar9 = FUN_00644650();
        if (iVar9 - 1U < 2) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02390d30;
          if (cVar4 == '\0') {
            uVar10 = g_02390d34;
          }
          auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0(auVar19._0_8_);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar9 == 0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02394298;
          if (cVar4 == '\0') {
            uVar10 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_50 + 0x450))();
          uVar15 = g_02394298;
          if (cVar4 == '\0') {
            uVar15 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_60 + 0x450))();
          uVar16 = g_02394298;
          if (cVar4 == '\0') {
            uVar16 = g_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
          uVar17 = g_02394298;
          if (cVar4 == '\0') {
            uVar17 = g_02390124;
          }
          auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
          auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
          FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else if ((bVar7 == 0 && bVar5 == 0) && bVar6 == 0) {
    plVar1 = (int64_t *)this_ptr[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = g_02394298;
    if (cVar4 == '\0') {
      uVar10 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = g_02394298;
    if (cVar4 == '\0') {
      uVar15 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = g_02394298;
    if (cVar4 == '\0') {
      uVar16 = g_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
    uVar17 = g_02394298;
    if (cVar4 == '\0') {
      uVar17 = g_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = g_02390d30;
        if (cVar4 == '\0') {
          uVar10 = g_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (this_ptr[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar1 != (int64_t *)0x0) && (uVar10 = FUN_00644650(), uVar10 < 3)) {
        FUN_0009ac90();
        plVar1 = local_40;
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_50 + 0x450))();
        uVar10 = g_02394298;
        if (cVar4 == '\0') {
          uVar10 = g_02390124;
        }
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_60 + 0x450))();
        uVar15 = g_02394298;
        if (cVar4 == '\0') {
          uVar15 = g_02390124;
        }
        FUN_01f27fe0();
        cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
        uVar16 = g_02394298;
        if (cVar4 == '\0') {
          uVar16 = g_02390124;
        }
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_150 + 0x450))();
        uVar17 = g_02394298;
        if (cVar4 == '\0') {
          uVar17 = g_02390124;
        }
        auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
        auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
        (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    bVar5 = bVar7 & bVar5 ^ 1;
    if (bVar13 == 0 && bVar5 == 0) {
      plVar1 = (int64_t *)this_ptr[0x1c];
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      uVar10 = g_02394298;
      if (cVar4 == '\0') {
        uVar10 = g_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_50 + 0x450))();
      uVar15 = g_02394298;
      if (cVar4 == '\0') {
        uVar15 = g_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_60 + 0x450))();
      uVar16 = g_02394298;
      if (cVar4 == '\0') {
        uVar16 = g_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
      uVar17 = g_02394298;
      if (cVar4 == '\0') {
        uVar17 = g_02390124;
      }
      auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
      auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
      (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x18] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02390d30;
          if (cVar4 == '\0') {
            uVar10 = g_02390d34;
          }
          blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          auVar19 = ZEXT816(0);
          (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x940))();
          (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x4d8))();
          auVar19 = blendps(auVar19,g_023b1e40,0xd);
          (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x4d0))();
          FUN_0009ac90();
          (**(code **)(*local_40 + 0x4d8))();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0009ac90();
          blendps(auVar19,g_023b1e40,0xd);
          (**(code **)(*local_40 + 0x4d0))();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (this_ptr[0x19] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          uVar10 = FUN_00644650();
          if (uVar10 < 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = g_02394298;
            if (cVar4 == '\0') {
              uVar10 = g_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_50 + 0x450))();
            uVar15 = g_02394298;
            if (cVar4 == '\0') {
              uVar15 = g_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_60 + 0x450))();
            uVar16 = g_02394298;
            if (cVar4 == '\0') {
              uVar16 = g_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
            uVar17 = g_02394298;
            if (cVar4 == '\0') {
              uVar17 = g_02390124;
            }
            auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
            auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
            FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (uVar10 == 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = g_02390d30;
            if (cVar4 == '\0') {
              uVar10 = g_02390d34;
            }
            auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
            FUN_000a01a0(auVar19._0_8_);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    else if (bVar5 == 0 && bVar6 == 0) {
      plVar1 = (int64_t *)this_ptr[0x1c];
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      uVar10 = g_02394298;
      if (cVar4 == '\0') {
        uVar10 = g_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_50 + 0x450))();
      uVar15 = g_02394298;
      if (cVar4 == '\0') {
        uVar15 = g_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_60 + 0x450))();
      uVar16 = g_02394298;
      if (cVar4 == '\0') {
        uVar16 = g_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
      uVar17 = g_02394298;
      if (cVar4 == '\0') {
        uVar17 = g_02390124;
      }
      auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
      auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
      (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x18] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = g_02390d30;
          if (cVar4 == '\0') {
            uVar10 = g_02390d34;
          }
          blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          auVar19 = ZEXT816(0);
          (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x940))();
          (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x4d8))();
          auVar19 = blendps(auVar19,g_023b1e40,0xd);
          (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x4d0))();
          FUN_0009ac90();
          (**(code **)(*local_40 + 0x4d8))();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0009ac90();
          blendps(auVar19,g_023b1e40,0xd);
          (**(code **)(*local_40 + 0x4d0))();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (this_ptr[0x19] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          uVar10 = FUN_00644650();
          if (uVar10 < 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = g_02394298;
            if (cVar4 == '\0') {
              uVar10 = g_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_50 + 0x450))();
            uVar15 = g_02394298;
            if (cVar4 == '\0') {
              uVar15 = g_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_60 + 0x450))();
            uVar16 = g_02394298;
            if (cVar4 == '\0') {
              uVar16 = g_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x450))();
            uVar17 = g_02394298;
            if (cVar4 == '\0') {
              uVar17 = g_02390124;
            }
            auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
            auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
            FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (uVar10 == 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = g_02390d30;
            if (cVar4 == '\0') {
              uVar10 = g_02390d34;
            }
            auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
            FUN_000a01a0(auVar19._0_8_);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  FUN_006c4ec0();
  FUN_0064c7a0();
  *(void*)((int64_t)this_ptr + 0x179) = 0;
  (**(code **)(*this_ptr + 0x688))();
  return;
}



// ============================================================
// 00342300
// ============================================================
// Function: FUN_00342300
// Address: 00342300
// Size: 10346 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00342300(void)

{
  int64_t *plVar1;
  byte bVar2;
  int64_t *plVar3;
  void*puVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t this_ptr;
  char cVar10;
  uint uVar11;
  undefined7 uVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_600;
  uint8_t local_5f8;
  int64_t local_5f0;
  uint8_t local_5e8;
  int64_t local_5e0;
  uint8_t local_5d8;
  int64_t local_5d0;
  uint8_t local_5c8;
  int64_t local_5c0;
  uint8_t local_5b8;
  int64_t local_5b0;
  uint8_t local_5a8;
  int64_t local_5a0;
  uint8_t local_598;
  int64_t local_568;
  char local_560;
  int64_t local_558;
  char local_550;
  int64_t local_548;
  char local_540;
  int64_t local_538;
  char local_530;
  int64_t local_528;
  char local_520;
  int64_t local_518;
  char local_510;
  int64_t local_508;
  char local_500;
  int64_t local_4f8;
  char local_4f0;
  int64_t local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t local_4a8;
  char local_4a0;
  int64_t local_498;
  char local_490;
  int64_t local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t local_458;
  char local_450;
  int64_t local_448;
  char local_440;
  int64_t local_438;
  char local_430;
  int64_t local_428;
  char local_420;
  int64_t local_418;
  char local_410;
  int64_t local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  int64_t local_3b8;
  char local_3b0;
  int64_t local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  void*local_228;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x3f8) != 0) {
    FUN_01e1f120();
    FUN_00d50130();
  }
  plVar3 = (int64_t *)FUN_0019ef40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x3f8);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x3f8) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  FUN_01e1f120();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_026de690;
  if (g_026de690 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar8;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  local_228 = puVar4;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar5 = &g_0261d518;
  puVar5[2] = &g_0261d9d8;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar13 = (*g_0261d530)();
  lVar8 = g_02702d50;
  if (g_02702d50 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_600 = lVar8;
  local_5f8 = 1;
  FUN_00346b70(uVar13,&local_600);
  local_208 = local_50;
  local_200 = 0;
  lVar9 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      lVar9 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_200 = '\x01';
  g_026f6e68 = lVar9;
  if (lVar9 != 0) {
    local_200 = '\x01';
    FUN_00d50b00();
  }
  lVar7 = g_02702d50;
  if (g_02702d50 != 0) {
    FUN_00d50b00();
  }
  local_568 = lVar7;
  local_560 = '\x01';
  local_558 = 0;
  local_550 = '\0';
  FUN_00d31230(&local_558,&local_568);
  local_1f8 = local_70;
  local_1f0 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_1f0 = '\x01';
  uVar13 = FUN_01a59400(&local_1f8,&local_208);
  lVar7 = local_40;
  if (local_40 == 0) {
    uVar12 = (undefined7)((uint64_t)puVar4 >> 8);
    bVar2 = 1;
    lVar7 = 0;
    local_60 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar13 = FUN_00d50b00();
      bVar2 = 0;
      uVar12 = 0;
      local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_0034262b;
      uVar13 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
    bVar2 = 0;
    uVar12 = 0;
  }
LAB_0034262b:
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_550 != '\0') && (local_558 != 0)) {
    FUN_00d50b20();
  }
  if ((local_560 != '\0') && (local_568 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_540 = '\0';
  local_548 = lVar7;
  local_58 = lVar7;
  FUN_01e1f090();
  if ((local_540 != '\0') && (local_548 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_02630fb8;
  puVar4[2] = &g_02631478;
  uVar13 = (*g_02630fd0)();
  lVar8 = g_02702d58;
  local_5f0 = local_78;
  local_5e8 = 0;
  if (g_02702d58 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_5e0 = lVar8;
  local_5d8 = 1;
  FUN_00346b70(uVar13,&local_5e0);
  local_1d8 = local_50;
  local_1d0 = 0;
  local_538 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_538 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_1d0 = '\x01';
  g_026f6e68 = local_538;
  if (local_538 != 0) {
    local_1d0 = '\x01';
    FUN_00d50b00();
  }
  lVar9 = g_026fbc80;
  local_530 = '\x01';
  if (g_026fbc80 != 0) {
    FUN_00d50b00();
  }
  local_528 = lVar9;
  local_520 = '\x01';
  local_518 = 0;
  local_510 = '\0';
  FUN_00d31230(&local_518,&local_528);
  local_1c8 = local_70;
  local_1c0 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_1c0 = '\x01';
  FUN_01a59400(&local_1c8,&local_1d8);
  local_1e8 = local_40;
  local_1e0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_1e0 = '\x01';
  FUN_01e261e0();
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_510 != '\0') && (local_518 != 0)) {
    FUN_00d50b20();
  }
  if ((local_520 != '\0') && (local_528 != 0)) {
    FUN_00d50b20();
  }
  if ((local_530 != '\0') && (local_538 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_026359a0;
  puVar4[2] = &g_02635e60;
  uVar13 = (*g_026359b8)();
  lVar8 = g_02702d58;
  local_5d0 = local_78;
  local_5c8 = 0;
  if (g_02702d58 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_5c0 = lVar8;
  local_5b8 = 1;
  FUN_00346b70(uVar13,&local_5c0);
  local_1a8 = local_50;
  local_1a0 = 0;
  local_508 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_508 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_1a0 = '\x01';
  g_026f6e68 = local_508;
  if (local_508 != 0) {
    local_1a0 = '\x01';
    FUN_00d50b00();
  }
  lVar9 = g_026fbc88;
  local_500 = '\x01';
  if (g_026fbc88 != 0) {
    FUN_00d50b00();
  }
  local_4f8 = lVar9;
  local_4f0 = '\x01';
  local_4e8 = 0;
  local_4e0 = '\0';
  FUN_00d31230(&local_4e8,&local_4f8);
  local_198 = local_70;
  local_190 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_190 = '\x01';
  FUN_01a59400(&local_198,&local_1a8);
  local_1b8 = local_40;
  local_1b0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_1b0 = '\x01';
  FUN_01e261e0();
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4e0 != '\0') && (local_4e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4f0 != '\0') && (local_4f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_500 != '\0') && (local_508 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_0261c148;
  puVar4[2] = &g_0261c608;
  (*g_0261c160)();
  local_4c8 = g_026f6e68;
  local_4d0 = '\0';
  local_4d8 = 0;
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_02702d60;
  local_4c0 = '\x01';
  if (g_02702d60 != 0) {
    FUN_00d50b00();
  }
  local_4b8 = lVar8;
  local_4b0 = '\x01';
  local_4a8 = 0;
  local_4a0 = '\0';
  FUN_00d31230(&local_4a8,&local_4b8);
  local_188 = local_50;
  local_180 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_180 = '\x01';
  FUN_01a59400(&local_188,&local_4d8);
  lVar8 = local_40;
  if (local_40 == local_58) {
    if ((bool)(bVar2 & local_58 != 0)) {
      lVar8 = local_58;
      if (local_38 != '\0') goto LAB_00342e36;
      uVar11 = (uint)CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar11 = (uint)local_60;
    }
LAB_00342e8f:
    lVar8 = local_58;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar11 = (uint)CONCAT71(uVar12,1);
      if (((byte)local_60 & local_58 != 0) == 1) {
        local_58 = lVar8;
        FUN_00d50b20();
      }
      else {
        local_58 = lVar8;
      }
      goto LAB_00342e8f;
    }
    if (((byte)local_60 & local_58 != 0) == 1) {
      local_58 = local_40;
      FUN_00d50b20();
    }
LAB_00342e36:
    local_38 = '\0';
    uVar11 = (uint)CONCAT71(uVar12,1);
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4a0 != '\0') && (local_4a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4b0 != '\0') && (local_4b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4c0 != '\0') && (local_4c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4d0 != '\0') && (local_4d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_490 = '\0';
  local_498 = lVar8;
  local_58 = lVar8;
  FUN_01e1f090();
  if ((local_490 != '\0') && (local_498 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e262d0();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_026202e8;
  puVar4[2] = &g_026207c8;
  puVar4[7] = 0;
  uVar13 = (*g_02620300)();
  lVar8 = g_026de698;
  local_5b0 = local_78;
  local_5a8 = 0;
  if (g_026de698 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_5a0 = lVar8;
  local_598 = 1;
  FUN_00346b70(uVar13,&local_5a0);
  local_178 = local_50;
  local_170 = 0;
  local_488 = g_026f6e68;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_488 = g_026f6e68;
    }
  }
  else {
    local_48 = '\0';
  }
  local_170 = '\x01';
  g_026f6e68 = local_488;
  if (local_488 != 0) {
    local_170 = '\x01';
    FUN_00d50b00();
  }
  lVar9 = g_026de698;
  local_480 = '\x01';
  if (g_026de698 != 0) {
    FUN_00d50b00();
  }
  local_478 = lVar9;
  local_470 = '\x01';
  local_468 = 0;
  local_460 = '\0';
  FUN_00d31230(&local_468,&local_478);
  local_168 = local_70;
  local_160 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_160 = '\x01';
  uVar13 = FUN_01a59400(&local_168,&local_178);
  lVar9 = local_40;
  cVar10 = (char)uVar11;
  if (local_40 == local_58) {
    lVar9 = local_58;
    if ((cVar10 == '\0') && (local_58 != 0)) {
      if (local_38 != '\0') goto LAB_00343191;
      local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      FUN_00d50b00();
      lVar9 = local_58;
    }
    else {
      local_60 = (uint64_t)uVar11;
    }
joined_r0x00343fa4:
    local_58 = lVar9;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      if ((cVar10 != '\0') && (local_58 != 0)) {
        local_58 = lVar9;
        FUN_00d50b20();
        lVar9 = local_58;
      }
      goto joined_r0x00343fa4;
    }
    if ((cVar10 != '\0') && (local_58 != 0)) {
      local_58 = local_40;
      uVar13 = FUN_00d50b20();
    }
LAB_00343191:
    local_38 = '\0';
    local_60 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_460 != '\0') && (local_468 != 0)) {
    FUN_00d50b20();
  }
  if ((local_470 != '\0') && (local_478 != 0)) {
    FUN_00d50b20();
  }
  if ((local_480 != '\0') && (local_488 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_450 = '\0';
  local_458 = lVar9;
  local_58 = lVar9;
  FUN_01e1f090();
  if ((local_450 != '\0') && (local_458 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_0266aea8;
  puVar4[2] = &g_0266b368;
  *(void*)((int64_t)puVar4 + 0x31) = 0;
  (*g_0266aec0)();
  lVar8 = g_026e1810;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar13 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar13,&local_50);
  lVar9 = local_40;
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
  if (lVar9 != 0) {
    local_38 = '\0';
    local_40 = lVar9;
    FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_01c402f0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_026f6e68;
  local_448 = 0;
  local_440 = '\0';
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar9 = g_02702d68;
  local_438 = lVar8;
  local_430 = '\x01';
  if (g_02702d68 != 0) {
    FUN_00d50b00();
  }
  local_428 = lVar9;
  local_420 = '\x01';
  local_418 = 0;
  local_410 = '\0';
  FUN_00d31230(&local_418,&local_428);
  local_148 = local_50;
  local_140 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_140 = '\x01';
  FUN_01a59400(&local_148,&local_448);
  local_158 = local_40;
  local_150 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_150 = '\x01';
  FUN_01e261e0();
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_410 != '\0') && (local_418 != 0)) {
    FUN_00d50b20();
  }
  if ((local_420 != '\0') && (local_428 != 0)) {
    FUN_00d50b20();
  }
  if ((local_430 != '\0') && (local_438 != 0)) {
    FUN_00d50b20();
  }
  if ((local_440 != '\0') && (local_448 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_02657908;
  puVar4[2] = &g_02657dd0;
  (*g_02657920)();
  local_3f8 = g_026f6e68;
  local_400 = '\0';
  local_408 = 0;
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_02702d70;
  local_3f0 = '\x01';
  if (g_02702d70 != 0) {
    FUN_00d50b00();
  }
  local_3e8 = lVar8;
  local_3e0 = '\x01';
  local_3d8 = 0;
  local_3d0 = '\0';
  FUN_00d31230(&local_3d8,&local_3e8);
  local_128 = local_50;
  local_120 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_120 = '\x01';
  FUN_01a59400(&local_128,&local_408);
  local_138 = local_40;
  local_130 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_130 = '\x01';
  FUN_01e261e0();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3d0 != '\0') && (local_3d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3e0 != '\0') && (local_3e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3f0 != '\0') && (local_3f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_400 != '\0') && (local_408 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar8 = g_026debe8;
  if (g_026debe8 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar14 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar13,&local_50);
  lVar9 = local_40;
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
  if (lVar9 != 0) {
    local_38 = '\0';
    local_40 = lVar9;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((lVar9 != 0 & bVar2) != 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_02653ba8;
    puVar4[2] = &g_02654070;
    (*g_02653bc0)();
    local_3b8 = g_026f6e68;
    local_3c0 = '\0';
    local_3c8 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar8 = g_02702d78;
    local_3b0 = '\x01';
    if (g_02702d78 != 0) {
      FUN_00d50b00();
    }
    local_3a8 = lVar8;
    local_3a0 = '\x01';
    local_398 = 0;
    local_390 = '\0';
    FUN_00d31230(&local_398,&local_3a8);
    local_108 = local_50;
    local_100 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_100 = '\x01';
    FUN_01a59400(&local_108,&local_3c8);
    local_118 = local_40;
    local_110 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_110 = '\x01';
    FUN_01e261e0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_390 != '\0') && (local_398 != 0)) {
      FUN_00d50b20();
    }
    if ((local_3a0 != '\0') && (local_3a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_3b0 != '\0') && (local_3b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_3c0 != '\0') && (local_3c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar8 = g_026f6f08;
  if (g_026f6f08 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  lVar9 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar14 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar13,&local_50);
  lVar7 = local_40;
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
  if (lVar7 != 0) {
    local_38 = '\0';
    local_40 = lVar7;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_026e1810;
  if ((lVar7 != 0 & bVar2) == 0) goto joined_r0x00343ea2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_0265f070;
  puVar4[2] = &g_0265f530;
  (*g_0265f088)();
  local_378 = g_026f6e68;
  local_380 = '\0';
  local_388 = 0;
  if (g_026f6e68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_02702d80;
  local_370 = '\x01';
  if (g_02702d80 != 0) {
    FUN_00d50b00();
  }
  local_368 = lVar8;
  local_360 = '\x01';
  local_358 = 0;
  local_350 = '\0';
  FUN_00d31230(&local_358,&local_368);
  local_f8 = local_50;
  local_f0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_f0 = '\x01';
  FUN_01a59400(&local_f8,&local_388);
  lVar7 = local_40;
  uVar12 = (undefined7)((uint64_t)lVar9 >> 8);
  if (local_40 == local_58) {
    if (((char)local_60 == '\0') && (local_58 != 0)) {
      lVar7 = local_58;
      if (local_38 != '\0') goto LAB_00343f27;
      uVar6 = CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar6 = local_60 & 0xffffffff;
    }
LAB_00343fd3:
    lVar7 = local_58;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar6 = CONCAT71(uVar12,1);
      if (((char)local_60 == '\0') || (local_58 == 0)) {
        local_58 = lVar7;
      }
      else {
        local_58 = lVar7;
        FUN_00d50b20();
      }
      goto LAB_00343fd3;
    }
    if (((char)local_60 != '\0') && (local_58 != 0)) {
      local_58 = local_40;
      FUN_00d50b20();
    }
LAB_00343f27:
    local_38 = '\0';
    uVar6 = CONCAT71(uVar12,1);
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_350 != '\0') && (local_358 != 0)) {
    FUN_00d50b20();
  }
  if ((local_360 != '\0') && (local_368 != 0)) {
    FUN_00d50b20();
  }
  if ((local_370 != '\0') && (local_378 != 0)) {
    FUN_00d50b20();
  }
  if ((local_380 != '\0') && (local_388 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_340 = '\0';
  local_348 = lVar7;
  FUN_01e1f090();
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e262d0();
  local_60 = uVar6 & 0xffffffff;
  lVar8 = g_026e1810;
  local_58 = lVar7;
joined_r0x00343ea2:
  g_026e1810 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar14 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_48 = '\0';
  local_50 = lVar8;
  FUN_000175c0(uVar13,&local_50);
  lVar9 = local_40;
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
  if (lVar9 != 0) {
    local_38 = '\0';
    local_40 = lVar9;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = local_78;
  lVar7 = local_58;
  if ((lVar9 != 0 & bVar2) != 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_0262be70;
    puVar4[2] = &g_0262c338;
    (*g_0262be88)();
    local_328 = g_026f6e68;
    local_330 = '\0';
    local_338 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar9 = g_02702d88;
    local_320 = '\x01';
    if (g_02702d88 != 0) {
      FUN_00d50b00();
    }
    local_318 = lVar9;
    local_310 = '\x01';
    local_308 = 0;
    local_300 = '\0';
    FUN_00d31230(&local_308,&local_318);
    local_e8 = local_50;
    local_e0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_e0 = '\x01';
    FUN_01a59400(&local_e8,&local_338);
    lVar9 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_300 != '\0') && (local_308 != 0)) {
      FUN_00d50b20();
    }
    if ((local_310 != '\0') && (local_318 != 0)) {
      FUN_00d50b20();
    }
    if ((local_320 != '\0') && (local_328 != 0)) {
      FUN_00d50b20();
    }
    if ((local_330 != '\0') && (local_338 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_2f8 = lVar9;
    local_2f0 = '\0';
    FUN_01e1f090();
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_02643ec0;
    puVar4[2] = &g_02644388;
    (*g_02643ed8)();
    local_2d8 = g_026f6e68;
    local_2e0 = '\0';
    local_2e8 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_02702d90;
    local_2d0 = '\x01';
    if (g_02702d90 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = lVar7;
    local_2c0 = '\x01';
    local_2b8 = 0;
    local_2b0 = '\0';
    FUN_00d31230(&local_2b8,&local_2c8);
    local_c8 = local_50;
    local_c0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_c0 = '\x01';
    FUN_01a59400(&local_c8,&local_2e8);
    local_d8 = local_40;
    local_d0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = '\x01';
    FUN_01e261e0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2b0 != '\0') && (local_2b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2c0 != '\0') && (local_2c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_0262b958;
    puVar4[2] = &g_0262be20;
    (*g_0262b970)();
    local_298 = g_026f6e68;
    local_2a0 = '\0';
    local_2a8 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_02702d98;
    local_290 = '\x01';
    if (g_02702d98 != 0) {
      FUN_00d50b00();
    }
    local_288 = lVar7;
    local_280 = '\x01';
    local_278 = 0;
    local_270 = '\0';
    FUN_00d31230(&local_278,&local_288);
    local_a8 = local_50;
    local_a0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_a0 = '\x01';
    FUN_01a59400(&local_a8,&local_2a8);
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    FUN_01e261e0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != 0)) {
      FUN_00d50b20();
    }
    if ((local_280 != '\0') && (local_288 != 0)) {
      FUN_00d50b20();
    }
    if ((local_290 != '\0') && (local_298 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2a0 != '\0') && (local_2a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00274ea0();
    *puVar4 = &g_02666108;
    puVar4[2] = &g_026665d0;
    (*g_02666120)();
    local_258 = g_026f6e68;
    local_260 = '\0';
    local_268 = 0;
    if (g_026f6e68 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_02702da0;
    local_250 = '\x01';
    if (g_02702da0 != 0) {
      FUN_00d50b00();
    }
    local_248 = lVar7;
    local_240 = '\x01';
    local_238 = 0;
    local_230 = '\0';
    FUN_00d31230(&local_238,&local_248);
    local_88 = local_50;
    local_80 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_80 = '\x01';
    FUN_01a59400(&local_88,&local_268);
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar7 = local_58;
    local_90 = '\x01';
    FUN_01e261e0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_230 != '\0') && (local_238 != 0)) {
      FUN_00d50b20();
    }
    if ((local_240 != '\0') && (local_248 != 0)) {
      FUN_00d50b20();
    }
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
    if ((local_260 != '\0') && (local_268 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (((char)local_60 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (local_228 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00212cd0
// ============================================================
// Function: FUN_00212cd0
// Address: 00212cd0
// Size: 29132 bytes
// Class: MDEditorViewController
// String references:
//   "onSelectedDocumentDidChange"
//   "MDEditorViewController"
//   "handleFeatureSetChanged"
//   "handleTransportToggleCycle"
//   "onDetecionStateChanged"
//   "handleGetDeveloperInfo"
//   "handleOpenQuantizeTimeDialog"
//   "handleOpenQuantizePitchDialog"
//   "handleOpenElementLevelingDialog"
//   "handleToggleShowReplaceRanges"
//   "handleSnapReplaceRangesToNotes"
//   "handleImportTempo"
//   "handleToggleShowsReferenceMidiNotes"
//   "handleToggleShowTempoEditor"
//   "handleToggleShowChangeTempoEditor"
//   "handleToggleShowDefineTempoEditor"
//   "handleToggleFollowCursor"
//   "handleCloseEditor"
//   "handleToggleShowWaveforms"
//   "handleToggleWaveformChannel"
//   ... +60 more
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00212cd0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028046a0 = "handleGetDeveloperInfo";
      g_028046a8 = &g_0270aa40;
      g_028046b0 = 0;
      g_028046b8 = &g_026f7028;
      g_028046c0 = FUN_0026a960;
      g_028046c8 = FUN_00269ed0;
      g_028046d0 = 0;
      ram_00000000028046d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028046e8 = "handleOpenQuantizeTimeDialog";
      g_028046f0 = &g_0270aa40;
      g_028046f8 = 0;
      g_02804700 = &g_026f7028;
      g_02804708 = FUN_0026a960;
      g_02804710 = FUN_0025a470;
      g_02804718 = 0;
      ram_0000000002804720 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804730 = "handleOpenQuantizePitchDialog";
      g_02804738 = &g_0270aa40;
      g_02804740 = 0;
      g_02804748 = &g_026f7028;
      g_02804750 = FUN_0026a960;
      g_02804758 = FUN_0025b950;
      g_02804760 = 0;
      ram_0000000002804768 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804778 = "handleOpenElementLevelingDialog";
      g_02804780 = &g_0270aa40;
      g_02804788 = 0;
      g_02804790 = &g_026f7028;
      g_02804798 = FUN_0026a960;
      g_028047a0 = FUN_0025b1d0;
      g_028047a8 = 0;
      ram_00000000028047b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028047c0 = "handleToggleShowReplaceRanges";
      g_028047c8 = &g_0270aa40;
      g_028047d0 = 0;
      g_028047d8 = &g_026f7028;
      g_028047e0 = FUN_0026a960;
      g_028047e8 = FUN_00252e90;
      g_028047f0 = 0;
      ram_00000000028047f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804808 = "handleSnapReplaceRangesToNotes";
      g_02804810 = &g_0270aa40;
      g_02804818 = 0;
      g_02804820 = &g_026f7028;
      g_02804828 = FUN_0026a960;
      g_02804830 = FUN_00252f80;
      g_02804838 = 0;
      ram_0000000002804840 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804850 = "handleImportTempo";
      g_02804858 = &g_0270aa40;
      g_02804860 = 0;
      g_02804868 = &g_026f7028;
      g_02804870 = FUN_0026a960;
      g_02804878 = FUN_0024e2a0;
      g_02804880 = 0;
      ram_0000000002804888 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804898 = "handleToggleShowsReferenceMidiNotes";
      g_028048a0 = &g_0270aa40;
      g_028048a8 = 0;
      g_028048b0 = &g_026f7028;
      g_028048b8 = FUN_0026a960;
      g_028048c0 = FUN_0024a8a0;
      g_028048c8 = 0;
      ram_00000000028048d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028048e0 = "handleToggleShowTempoEditor";
      g_028048e8 = &g_0270aa40;
      g_028048f0 = 0;
      g_028048f8 = &g_026f7028;
      g_02804900 = FUN_0026a960;
      g_02804908 = FUN_00248590;
      g_02804910 = 0;
      ram_0000000002804918 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804928 = "handleToggleShowChangeTempoEditor";
      g_02804930 = &g_0270aa40;
      g_02804938 = 0;
      g_02804940 = &g_026f7028;
      g_02804948 = FUN_0026a960;
      g_02804950 = FUN_002475d0;
      g_02804958 = 0;
      ram_0000000002804960 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804970 = "handleToggleShowDefineTempoEditor";
      g_02804978 = &g_0270aa40;
      g_02804980 = 0;
      g_02804988 = &g_026f7028;
      g_02804990 = FUN_0026a960;
      g_02804998 = FUN_00247d60;
      g_028049a0 = 0;
      ram_00000000028049a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028049b8 = "handleToggleFollowCursor";
      g_028049c0 = &g_0270aa40;
      g_028049c8 = 0;
      g_028049d0 = &g_026f7028;
      g_028049d8 = FUN_0026a960;
      g_028049e0 = FUN_00234ff0;
      g_028049e8 = 0;
      ram_00000000028049f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804a00 = "handleCloseEditor";
      g_02804a08 = &g_0270aa40;
      g_02804a10 = 0;
      g_02804a18 = &g_026f7028;
      g_02804a20 = FUN_0026a960;
      g_02804a28 = FUN_00236290;
      g_02804a30 = 0;
      ram_0000000002804a38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804a48 = "handleToggleShowWaveforms";
      g_02804a50 = &g_0270aa40;
      g_02804a58 = 0;
      g_02804a60 = &g_026f7028;
      g_02804a68 = FUN_0026a960;
      g_02804a70 = FUN_0023c880;
      g_02804a78 = 0;
      ram_0000000002804a80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804a90 = "handleToggleWaveformChannel";
      g_02804a98 = &g_0270aa40;
      g_02804aa0 = 0;
      g_02804aa8 = &g_026f7028;
      g_02804ab0 = FUN_0026a960;
      g_02804ab8 = FUN_0023d5a0;
      g_02804ac0 = 0;
      ram_0000000002804ac8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804ad8 = "handleToggleIncreaseWaveformScaleFactor";
      g_02804ae0 = &g_0270aa40;
      g_02804ae8 = 0;
      g_02804af0 = &g_026f7028;
      g_02804af8 = FUN_0026a960;
      g_02804b00 = FUN_0023cd00;
      g_02804b08 = 0;
      ram_0000000002804b10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804b20 = "handleToggleDecreaseWaveformScaleFactor";
      g_02804b28 = &g_0270aa40;
      g_02804b30 = 0;
      g_02804b38 = &g_026f7028;
      g_02804b40 = FUN_0026a960;
      g_02804b48 = FUN_0023d150;
      g_02804b50 = 0;
      ram_0000000002804b58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804b68 = "handleToggleShowElementPositionInfo";
      g_02804b70 = &g_0270aa40;
      g_02804b78 = 0;
      g_02804b80 = &g_026f7028;
      g_02804b88 = FUN_0026a960;
      g_02804b90 = FUN_0023f500;
      g_02804b98 = 0;
      ram_0000000002804ba0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804bb0 = "handleToggleShowNotes";
      g_02804bb8 = &g_0270aa40;
      g_02804bc0 = 0;
      g_02804bc8 = &g_026f7028;
      g_02804bd0 = FUN_0026a960;
      g_02804bd8 = FUN_0023d980;
      g_02804be0 = 0;
      ram_0000000002804be8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804bf8 = "handleToggleShowNoteSeparations";
      g_02804c00 = &g_0270aa40;
      g_02804c08 = 0;
      g_02804c10 = &g_026f7028;
      g_02804c18 = FUN_0026a960;
      g_02804c20 = FUN_0023e360;
      g_02804c28 = 0;
      ram_0000000002804c30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804c40 = "handleToggleShowPitchCurve";
      g_02804c48 = &g_0270aa40;
      g_02804c50 = 0;
      g_02804c58 = &g_026f7028;
      g_02804c60 = FUN_0026a960;
      g_02804c68 = FUN_0023dfd0;
      g_02804c70 = 0;
      ram_0000000002804c78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804c88 = "handleToggleShowPlayingNotes";
      g_02804c90 = &g_0270aa40;
      g_02804c98 = 0;
      g_02804ca0 = &g_026f7028;
      g_02804ca8 = FUN_0026a960;
      g_02804cb0 = FUN_00236500;
      g_02804cb8 = 0;
      ram_0000000002804cc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804cd0 = "handleToggleShowsTails";
      g_02804cd8 = &g_0270aa40;
      g_02804ce0 = 0;
      g_02804ce8 = &g_026f7028;
      g_02804cf0 = FUN_0026a960;
      g_02804cf8 = FUN_0023f1d0;
      g_02804d00 = 0;
      ram_0000000002804d08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804d18 = "handleToggleShowsSibilants";
      g_02804d20 = &g_0270aa40;
      g_02804d28 = 0;
      g_02804d30 = &g_026f7028;
      g_02804d38 = FUN_0026a960;
      g_02804d40 = FUN_0023e900;
      g_02804d48 = 0;
      ram_0000000002804d50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804d60 = "handleToggleShowsElementFades";
      g_02804d68 = &g_0270aa40;
      g_02804d70 = 0;
      g_02804d78 = &g_026f7028;
      g_02804d80 = FUN_0026a960;
      g_02804d88 = FUN_0023ec70;
      g_02804d90 = 0;
      ram_0000000002804d98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804da8 = "handleToggleFeedbackElementsOnTrack";
      g_02804db0 = &g_0270aa40;
      g_02804db8 = 0;
      g_02804dc0 = &g_026f7028;
      g_02804dc8 = FUN_0026a960;
      g_02804dd0 = FUN_0023f980;
      g_02804dd8 = 0;
      ram_0000000002804de0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804df0 = "handleToggleUpdateAudioSignalImmediately";
      g_02804df8 = &g_0270aa40;
      g_02804e00 = 0;
      g_02804e08 = &g_026f7028;
      g_02804e10 = FUN_0026a960;
      g_02804e18 = FUN_00240260;
      g_02804e20 = 0;
      ram_0000000002804e28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804e38 = "handleToggleBlobMonitoring";
      g_02804e40 = &g_0270aa40;
      g_02804e48 = 0;
      g_02804e50 = &g_026f7028;
      g_02804e58 = FUN_0026a960;
      g_02804e60 = FUN_0025e630;
      g_02804e68 = 0;
      ram_0000000002804e70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804e80 = "handleSplitTrack";
      g_02804e88 = &g_0270aa40;
      g_02804e90 = 0;
      g_02804e98 = &g_026f7028;
      g_02804ea0 = FUN_0026a960;
      g_02804ea8 = FUN_00241d80;
      g_02804eb0 = 0;
      ram_0000000002804eb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804ec8 = "handleToggleEditingDetection";
      g_02804ed0 = &g_0270aa40;
      g_02804ed8 = 0;
      g_02804ee0 = &g_026f7028;
      g_02804ee8 = FUN_0026a960;
      g_02804ef0 = FUN_00241610;
      g_02804ef8 = 0;
      ram_0000000002804f00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804f10 = "handleOpenTestValues";
      g_02804f18 = &g_0270aa40;
      g_02804f20 = 0;
      g_02804f28 = &g_026f7028;
      g_02804f30 = FUN_0026a960;
      g_02804f38 = FUN_00240730;
      g_02804f40 = 0;
      ram_0000000002804f48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804f58 = "handleDetectTimelineWithSelection";
      g_02804f60 = &g_0270aa40;
      g_02804f68 = 0;
      g_02804f70 = &g_026f7028;
      g_02804f78 = FUN_0026a960;
      g_02804f80 = FUN_0024cb90;
      g_02804f88 = 0;
      ram_0000000002804f90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804fa0 = "handleDetectTimelineWithSelectionAndMerge";
      g_02804fa8 = &g_0270aa40;
      g_02804fb0 = 0;
      g_02804fb8 = &g_026f7028;
      g_02804fc0 = FUN_0026a960;
      g_02804fc8 = FUN_0024cba0;
      g_02804fd0 = 0;
      ram_0000000002804fd8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804fe8 = "handleSmoothenTempoAnchors";
      g_02804ff0 = &g_0270aa40;
      g_02804ff8 = 0;
      g_02805000 = &g_026f7028;
      g_02805008 = FUN_0026a960;
      g_02805010 = FUN_0024cbb0;
      g_02805018 = 0;
      ram_0000000002805020 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805030 = "handleSmoothenTempoAnchorsWide";
      g_02805038 = &g_0270aa40;
      g_02805040 = 0;
      g_02805048 = &g_026f7028;
      g_02805050 = FUN_0026a960;
      g_02805058 = FUN_0024cd80;
      g_02805060 = 0;
      ram_0000000002805068 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805078 = "handleSmoothenTempoAnchorsLocal";
      g_02805080 = &g_0270aa40;
      g_02805088 = 0;
      g_02805090 = &g_026f7028;
      g_02805098 = FUN_0026a960;
      g_028050a0 = FUN_0024cf50;
      g_028050a8 = 0;
      ram_00000000028050b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028050c0 = "handleSetBar1ToStartOfFile";
      g_028050c8 = &g_0270aa40;
      g_028050d0 = 0;
      g_028050d8 = &g_026f7028;
      g_028050e0 = FUN_0026a960;
      g_028050e8 = FUN_0024d120;
      g_028050f0 = 0;
      ram_00000000028050f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805108 = "handleMakeConstantTempo";
      g_02805110 = &g_0270aa40;
      g_02805118 = 0;
      g_02805120 = &g_026f7028;
      g_02805128 = FUN_0026a960;
      g_02805130 = FUN_0024d2f0;
      g_02805138 = 0;
      ram_0000000002805140 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805150 = "handleInterpolateTempoForAnchors";
      g_02805158 = &g_0270aa40;
      g_02805160 = 0;
      g_02805168 = &g_026f7028;
      g_02805170 = FUN_0026a960;
      g_02805178 = FUN_0024d4c0;
      g_02805180 = 0;
      ram_0000000002805188 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805198 = "handleSeparateNotesAsTrills";
      g_028051a0 = &g_0270aa40;
      g_028051a8 = 0;
      g_028051b0 = &g_026f7028;
      g_028051b8 = FUN_0026a960;
      g_028051c0 = FUN_0025de70;
      g_028051c8 = 0;
      ram_00000000028051d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028051e0 = "handleToggleSpreadUnisono";
      g_028051e8 = &g_0270aa40;
      g_028051f0 = 0;
      g_028051f8 = &g_026f7028;
      g_02805200 = FUN_0026a960;
      g_02805208 = FUN_0024d690;
      g_02805210 = 0;
      ram_0000000002805218 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805228 = "onGlobalSelectionDidChangeDidChange";
      g_02805230 = &g_0270aa40;
      g_02805238 = 0;
      g_02805240 = &g_026f702c;
      g_02805248 = FUN_0026a9f0;
      g_02805250 = FUN_00253ac0;
      g_02805258 = 0;
      ram_0000000002805260 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805270 = "onSelectedToolChanged";
      g_02805278 = &g_0270aa40;
      g_02805280 = 0;
      g_02805288 = &g_026f702c;
      g_02805290 = FUN_0026a9f0;
      g_02805298 = FUN_00253c20;
      g_028052a0 = 0;
      ram_00000000028052a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028052b8 = "onTrackElementsDidChange";
      g_028052c0 = &g_0270aa40;
      g_028052c8 = 0;
      g_028052d0 = &g_026f702f;
      g_028052d8 = FUN_0026aa70;
      g_028052e0 = FUN_00219f90;
      g_028052e8 = 0;
      ram_00000000028052f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805300 = "onRegionChanged";
      g_02805308 = &g_0270aa40;
      g_02805310 = 0;
      g_02805318 = &g_026f702f;
      g_02805320 = FUN_0026aa70;
      g_02805328 = FUN_0021a130;
      g_02805330 = 0;
      ram_0000000002805338 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805348 = "onCompareModeChanged";
      g_02805350 = &g_0270aa40;
      g_02805358 = 0;
      g_02805360 = &g_026f702c;
      g_02805368 = FUN_0026a9f0;
      g_02805370 = FUN_0025f9f0;
      g_02805378 = 0;
      ram_0000000002805380 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805390 = "onDetectionTargetChanged";
      g_02805398 = &g_0270aa40;
      g_028053a0 = 0;
      g_028053a8 = &g_026f702c;
      g_028053b0 = FUN_0026a9f0;
      g_028053b8 = FUN_0025f0b0;
      g_028053c0 = 0;
      ram_00000000028053c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028053d8 = "onSequenceTracksChanged";
      g_028053e0 = &g_0270aa40;
      g_028053e8 = 0;
      g_028053f0 = &g_026f702c;
      g_028053f8 = FUN_0026a9f0;
      g_02805400 = FUN_0025fab0;
      g_02805408 = 0;
      ram_0000000002805410 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805420 = "onFollowsHostScaleAndChordsChanged";
      g_02805428 = &g_0270aa40;
      g_02805430 = 0;
      g_02805438 = &g_026f702f;
      g_02805440 = FUN_0026aa70;
      g_02805448 = FUN_0021a2a0;
      g_02805450 = 0;
      ram_0000000002805458 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805468 = "onDetecionStateChanged";
      g_02805470 = &g_0270aa40;
      g_02805478 = 0;
      g_02805480 = &g_026f702c;
      g_02805488 = FUN_0026a9f0;
      g_02805490 = FUN_0025fa00;
      g_02805498 = 0;
      ram_00000000028054a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028054b0 = "handleChangeAlgorithm";
      g_028054b8 = &g_0270aa40;
      g_028054c0 = 0;
      g_028054c8 = &g_026f7028;
      g_028054d0 = FUN_0026a960;
      g_028054d8 = FUN_00254fb0;
      g_028054e0 = 0;
      ram_00000000028054e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028054f8 = "handlePerformanceTest";
      g_02805500 = &g_0270aa40;
      g_02805508 = 0;
      g_02805510 = &g_026f7028;
      g_02805518 = FUN_0026a960;
      g_02805520 = 0x5d1;
      g_02805528 = 0;
      ram_0000000002805530 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805540 = "handleFeatureSetChanged";
      g_02805548 = &g_0270aa40;
      g_02805550 = 0;
      g_02805558 = &g_026f702c;
      g_02805560 = FUN_0026a9f0;
      g_02805568 = 0x5e1;
      g_02805570 = 0;
      ram_0000000002805578 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805588 = "onDidStartRecording";
      g_02805590 = &g_0270aa40;
      g_02805598 = 0;
      g_028055a0 = &g_026f702c;
      g_028055a8 = FUN_0026a9f0;
      g_028055b0 = 0x5e9;
      g_028055b8 = 0;
      ram_00000000028055c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028055d0 = "onDidAppendSamples";
      g_028055d8 = &g_0270aa40;
      g_028055e0 = 0;
      g_028055e8 = &g_026f702c;
      g_028055f0 = FUN_0026a9f0;
      g_028055f8 = 0x5f1;
      g_02805600 = 0;
      ram_0000000002805608 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805618 = "onTimelineBackToInitial";
      g_02805620 = &g_0270aa40;
      g_02805628 = 0;
      g_02805630 = &g_026f702c;
      g_02805638 = FUN_0026a9f0;
      g_02805640 = 0x5f9;
      g_02805648 = 0;
      ram_0000000002805650 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805660 = "_updateLayers";
      g_02805668 = &g_0270aa40;
      g_02805670 = 0;
      g_02805678 = &g_026f7031;
      g_02805680 = FUN_0026aa90;
      g_02805688 = FUN_0021a2c0;
      g_02805690 = 0;
      ram_0000000002805698 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028056a8 = "handleZoomOut2";
      g_028056b0 = &g_0270aa40;
      g_028056b8 = 0;
      g_028056c0 = &g_026f7028;
      g_028056c8 = FUN_0026a960;
      g_028056d0 = 0x619;
      g_028056d8 = 0;
      ram_00000000028056e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028056f0 = "handleZoomIn2";
      g_028056f8 = &g_0270aa40;
      g_02805700 = 0;
      g_02805708 = &g_026f7028;
      g_02805710 = FUN_0026a960;
      g_02805718 = 0x611;
      g_02805720 = 0;
      ram_0000000002805728 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805738 = "handleDebugToggleTempoEditor";
      g_02805740 = &g_0270aa40;
      g_02805748 = 0;
      g_02805750 = &g_026f7028;
      g_02805758 = FUN_0026a960;
      g_02805760 = FUN_0025cf40;
      g_02805768 = 0;
      ram_0000000002805770 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805780 = "handlePlaybackSelection";
      g_02805788 = &g_0270aa40;
      g_02805790 = 0;
      g_02805798 = &g_026f7028;
      g_028057a0 = FUN_0026a960;
      g_028057a8 = FUN_0025cf90;
      g_028057b0 = 0;
      ram_00000000028057b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028057c8 = "handleTrackEditMode";
      g_028057d0 = &g_0270aa40;
      g_028057d8 = 0;
      g_028057e0 = &g_026f7028;
      g_028057e8 = FUN_0026a960;
      g_028057f0 = FUN_0025ea40;
      g_028057f8 = 0;
      ram_0000000002805800 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805810 = "handleRegionEditMode";
      g_02805818 = &g_0270aa40;
      g_02805820 = 0;
      g_02805828 = &g_026f7028;
      g_02805830 = FUN_0026a960;
      g_02805838 = FUN_0025eb50;
      g_02805840 = 0;
      ram_0000000002805848 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805858 = "handleToggleShowRegionBorders";
      g_02805860 = &g_0270aa40;
      g_02805868 = 0;
      g_02805870 = &g_026f7028;
      g_02805878 = FUN_0026a960;
      g_02805880 = FUN_0025ece0;
      g_02805888 = 0;
      ram_0000000002805890 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028058a0 = "onSelectedDocumentDidChange";
      g_028058a8 = &g_0270aa40;
      g_028058b0 = 0;
      g_028058b8 = &g_026f702c;
      g_028058c0 = FUN_0026a9f0;
      g_028058c8 = 0x601;
      g_028058d0 = 0;
      ram_00000000028058d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028058e8 = "onMetaWindowDidConfigureViews";
      g_028058f0 = &g_0270aa40;
      g_028058f8 = 0;
      g_02805900 = &g_026f702c;
      g_02805908 = FUN_0026a9f0;
      g_02805910 = 0x609;
      g_02805918 = 0;
      ram_0000000002805920 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805930 = "handleToggleShowHeadAndTailMarker";
      g_02805938 = &g_0270aa40;
      g_02805940 = 0;
      g_02805948 = &g_026f7028;
      g_02805950 = FUN_0026a960;
      g_02805958 = 0x5d9;
      g_02805960 = 0;
      ram_0000000002805968 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805978 = "handleAnalyzeChords";
      g_02805980 = &g_0270aa40;
      g_02805988 = 0;
      g_02805990 = &g_026f7028;
      g_02805998 = FUN_0026a960;
      g_028059a0 = FUN_00262a90;
      g_028059a8 = 0;
      ram_00000000028059b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028059c0 = "handleAnalyzeKeys";
      g_028059c8 = &g_0270aa40;
      g_028059d0 = 0;
      g_028059d8 = &g_026f7028;
      g_028059e0 = FUN_0026a960;
      g_028059e8 = FUN_00263640;
      g_028059f0 = 0;
      ram_00000000028059f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805a08 = "handleToggleFollowsHostScales";
      g_02805a10 = &g_0270aa40;
      g_02805a18 = 0;
      g_02805a20 = &g_026f7028;
      g_02805a28 = FUN_0026a960;
      g_02805a30 = FUN_00264660;
      g_02805a38 = 0;
      ram_0000000002805a40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805a50 = "handleToggleFollowsHostChords";
      g_02805a58 = &g_0270aa40;
      g_02805a60 = 0;
      g_02805a68 = &g_026f7028;
      g_02805a70 = FUN_0026a960;
      g_02805a78 = FUN_002641f0;
      g_02805a80 = 0;
      ram_0000000002805a88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805a98 = "handleTogglePitchToChordAdaptionEnabled";
      g_02805aa0 = &g_0270aa40;
      g_02805aa8 = 0;
      g_02805ab0 = &g_026f7028;
      g_02805ab8 = FUN_0026a960;
      g_02805ac0 = FUN_00264ad0;
      g_02805ac8 = 0;
      ram_0000000002805ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805ae0 = "handleSelectPitchToChordAdaptionMode";
      g_02805ae8 = &g_0270aa40;
      g_02805af0 = 0;
      g_02805af8 = &g_026f7028;
      g_02805b00 = FUN_0026a960;
      g_02805b08 = FUN_00265730;
      g_02805b10 = 0;
      ram_0000000002805b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805b28 = "handleSelectPitchToChordAdaptionContext";
      g_02805b30 = &g_0270aa40;
      g_02805b38 = 0;
      g_02805b40 = &g_026f7028;
      g_02805b48 = FUN_0026a960;
      g_02805b50 = FUN_00265df0;
      g_02805b58 = 0;
      ram_0000000002805b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805b70 = "handleCopySongDataToNoteAssignment";
      g_02805b78 = &g_0270aa40;
      g_02805b80 = 0;
      g_02805b88 = &g_026f7028;
      g_02805b90 = FUN_0026a960;
      g_02805b98 = FUN_00266ae0;
      g_02805ba0 = 0;
      ram_0000000002805ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805bb8 = "handleCopyNoteAssignmentDataToSong";
      g_02805bc0 = &g_0270aa40;
      g_02805bc8 = 0;
      g_02805bd0 = &g_026f7028;
      g_02805bd8 = FUN_0026a960;
      g_02805be0 = FUN_00267bc0;
      g_02805be8 = 0;
      ram_0000000002805bf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805c00 = "handleTransportToggleCycle";
      g_02805c08 = &g_0270aa40;
      g_02805c10 = 0;
      g_02805c18 = &g_026f7028;
      g_02805c20 = FUN_0026a960;
      g_02805c28 = FUN_00268e80;
      g_02805c30 = 0;
      ram_0000000002805c38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805c48 = "handleSaveAsMidiLeadSheet";
      g_02805c50 = &g_0270aa40;
      g_02805c58 = 0;
      g_02805c60 = &g_026f7028;
      g_02805c68 = FUN_0026a960;
      g_02805c70 = FUN_00268ff0;
      g_02805c78 = 0;
      ram_0000000002805c80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02805c90 = "handleBlobsToPDF";
      g_02805c98 = &g_0270aa40;
      g_02805ca0 = 0;
      g_02805ca8 = &g_026f7028;
      g_02805cb0 = FUN_0026a960;
      g_02805cb8 = FUN_00269ad0;
      g_02805cc0 = 0;
      ram_0000000002805cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0039c9d0
// ============================================================
// Function: FUN_0039c9d0
// Address: 0039c9d0
// Size: 4558 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0039c9d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int64_t **pplVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t **pplVar12;
  void* pVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  bool bVar15;
  uint64_t uVar16;
  double dVar17;
  int64_t local_128;
  uint64_t local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *in_stack_ffffffffffffffb8;
  char local_40;
  
  iVar7 = FUN_01d3a5a0();
  if (iVar7 == 1) {
    FUN_01f27fe0();
    bVar5 = (**(code **)(*local_88 + 0x450))();
    bVar15 = g_02807f60 != this_ptr;
    if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((~bVar5 & bVar15) != 0) {
      g_02807f60 = this_ptr;
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      in_stack_ffffffffffffffb8 = this_ptr;
      do {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x370))();
        plVar14 = local_88;
        if (local_88 == in_stack_ffffffffffffffb8) {
          if (((local_58 == '\0') && (local_88 != (int64_t *)0x0)) &&
             (plVar14 = in_stack_ffffffffffffffb8, (char)local_80 != '\0')) goto LAB_0039cad7;
        }
        else {
          if ((char)local_80 == '\0') {
            if (local_58 == '\0') {
              pplVar9 = (int64_t **)&local_58;
            }
            else {
              FUN_00d50b20();
              pplVar9 = (int64_t **)&local_58;
            }
          }
          else {
            if (local_58 != '\0') {
              FUN_00d50b20();
            }
LAB_0039cad7:
            local_58 = '\x01';
            pplVar9 = &local_80;
          }
          *(void*)pplVar9 = 0;
          in_stack_ffffffffffffffb8 = plVar14;
        }
        if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          ___cxa_guard_release();
        }
        plVar14 = &g_02802688;
        if (in_stack_ffffffffffffffb8 != (int64_t *)0x0) {
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x360))();
          cVar6 = FUN_00e85ea0();
          plVar14 = (int64_t *)&stack0xffffffffffffffb8;
          if (cVar6 == '\0') {
            plVar14 = &g_02802688;
          }
        }
        if (*plVar14 != 0) {
          plVar14 = in_stack_ffffffffffffffb8;
          if ((local_58 == '\0') && (in_stack_ffffffffffffffb8 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          goto joined_r0x0039cc5a;
        }
      } while (in_stack_ffffffffffffffb8 != (int64_t *)0x0);
      plVar14 = (int64_t *)0x0;
joined_r0x0039cc5a:
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00221930();
        plVar14 = local_88;
        if (((((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_002218b0();
        plVar3 = local_88;
        if ((char)local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
            if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0039ccdf;
          }
          if (plVar14 == (int64_t *)0x0) goto LAB_0039ce17;
LAB_0039cced:
          FUN_006f47d0();
          plVar14 = local_88;
          if (local_88 != (int64_t *)0x0) {
            if ((((char)local_80 == '\0') && (FUN_00d50b00(), (char)local_80 != '\0')) &&
               (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              FUN_00756eb0();
              plVar4 = local_88;
              if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar4 != plVar14) {
                FUN_002218b0();
                FUN_00751820();
                if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
          if (plVar3 != (int64_t *)0x0) {
            bVar15 = false;
LAB_0039cdff:
            FUN_00d50b20();
            if (bVar15) goto LAB_0039ce17;
          }
          FUN_00d50b20();
        }
        else {
LAB_0039ccdf:
          if (plVar14 != (int64_t *)0x0) goto LAB_0039cced;
          bVar15 = true;
          if (plVar3 != (int64_t *)0x0) goto LAB_0039cdff;
        }
LAB_0039ce17:
        FUN_00d50b20();
      }
    }
  }
  iVar7 = FUN_01d3a5a0();
  if (((iVar7 != 1) || (iVar7 = FUN_01d3b630(), iVar7 != 1)) || (iVar7 = FUN_01d3b620(), iVar7 != 2)
     ) goto LAB_0039d0f9;
  FUN_01d3abf0();
  uVar16 = FUN_01e466c0();
  (**(code **)(*this_ptr + 0xb28))();
  plVar14 = local_88;
  if ((((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), (char)local_80 != '\0' && (local_88 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xab8))(uVar16);
  if (((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0039d0dd:
    FUN_00d50b20();
  }
  else {
    if ((plVar14 != (int64_t *)0x0) &&
       ((local_88 == (int64_t *)0x0 && (*(char *)((int64_t)this_ptr + 0x42c) != '\0')))) {
      FUN_00d23310();
      pplVar9 = &local_80;
      local_90 = (int64_t *)CONCAT71(local_90._1_7_,(char)local_80);
      pplVar12 = &local_90;
      if ((char)local_80 != '\0') {
        pplVar12 = pplVar9;
      }
      *(void*)pplVar12 = 0;
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (void*)pplVar9;
      (**(code **)(*local_88 + 0x928))();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == '\0') {
        if (in_stack_ffffffffffffffb8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_90 != '\0') {
        FUN_00d50b20();
      }
      uVar11 = FUN_01d3b590();
      if ((uVar11 & 4) == 0) {
        FUN_00d403d0();
        lVar1 = g_02702d30;
        if (g_02702d30 != 0) {
          FUN_00d50b00();
        }
        local_100 = 0;
        FUN_00d50b00();
        lVar2 = g_02704e30;
        local_100 = '\x01';
        local_108 = this_ptr;
        if (g_02704e30 != 0) {
          FUN_00d50b00();
        }
        local_128 = lVar2;
        local_90 = in_stack_ffffffffffffffb8;
        FUN_00083ea0(2,&local_128);
        FUN_000b4da0();
        local_c0 = 0;
        local_c8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_c8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_c0 = '\x01';
        FUN_00d40470(&local_c8,&local_108,1,3);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        local_88 = (int64_t *)&g_0253d630;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        local_88 = &g_024c5048;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar11 = g_026f6de0;
        if (g_026f6de0 != 0) {
          FUN_00d50b00();
        }
        local_120 = uVar11;
        FUN_00e7d6f0();
        uVar16 = FUN_0071a120();
        if (((((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) &&
            (uVar16 = FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        FUN_000175c0(uVar16,&stack0xffffffffffffffb8);
        plVar14 = local_88;
        if ((char)local_80 == '\0') {
          if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
             (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80._0_1_ = '\0';
        }
        if (plVar14 != (int64_t *)0x0) {
          local_80._0_1_ = '\0';
          local_88 = plVar14;
          uVar8 = FUN_00c70bc0();
          uVar11 = (uint64_t)uVar8;
          if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_120 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_026f6f08;
        if ((plVar14 != (int64_t *)0x0 & (byte)uVar11) != 0) {
          if (g_026f6f08 != 0) {
            FUN_00d50b00();
          }
          dVar17 = (double)FUN_00e7d6f0();
          uVar11 = (uint64_t)(dVar17 * g_023907c0);
          dVar17 = dVar17 * g_023907c0 - g_023907c8;
          uVar16 = FUN_0071a120();
          if (((((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) &&
              (uVar16 = FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          bVar5 = (byte)(((int64_t)dVar17 & (int64_t)uVar11 >> 0x3f | uVar11) / 3);
          FUN_000175c0(uVar16,&stack0xffffffffffffffb8);
          plVar14 = local_88;
          if ((char)local_80 == '\0') {
            if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
               (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80._0_1_ = '\0';
          }
          if (plVar14 != (int64_t *)0x0) {
            local_80._0_1_ = '\0';
            local_88 = plVar14;
            bVar5 = FUN_00c70bc0();
            if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((plVar14 != (int64_t *)0x0 & bVar5) == 0) {
            FUN_00d23310();
            plVar14 = local_88;
            local_90 = (int64_t *)CONCAT71(local_90._1_7_,(char)local_80);
            pplVar9 = &local_90;
            pplVar12 = &local_80;
            if ((char)local_80 == '\0') {
              pplVar12 = pplVar9;
            }
            *(void*)pplVar12 = 0;
            if (((char)local_80 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar13 = (void*)pplVar9;
            (**(code **)(*plVar14 + 0x928))();
            pvVar10 = _pthread_getspecific(pVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((char)local_90 != '\0') {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d23310();
              plVar14 = local_88;
              pplVar9 = &local_80;
              pplVar12 = &local_90;
              if ((char)local_80 != '\0') {
                pplVar12 = pplVar9;
              }
              local_90 = (int64_t *)CONCAT71(local_90._1_7_,(char)local_80);
              *(void*)pplVar12 = 0;
              if (((char)local_80 != '\0') && (plVar14 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              pVar13 = (void*)pplVar9;
              (**(code **)(*plVar14 + 0x928))();
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar7 = FUN_01326de0();
              if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
                FUN_00d50b20();
              }
              if ((char)local_90 != '\0') {
                FUN_00d50b20();
              }
              if (iVar7 == 3) goto LAB_0039db8b;
            }
          }
          FUN_00d23310();
          plVar14 = local_88;
          pplVar9 = &local_80;
          if ((char)local_80 == '\0') {
            pplVar9 = (int64_t **)&local_58;
          }
          local_58 = (char)local_80;
          *(void*)pplVar9 = 0;
          if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar16 = (**(code **)(*plVar14 + 0x928))();
          local_b0 = 0;
          if (lVar1 != 0) {
            uVar16 = FUN_00d50b00();
          }
          local_b0 = '\x01';
          local_b8 = lVar1;
          (**(code **)(*this_ptr + 0xda8))(uVar16,1);
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != '\0') {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d403d0();
        lVar1 = g_02729470;
        if (g_02729470 != 0) {
          FUN_00d50b00();
        }
        local_110 = 0;
        FUN_00d50b00();
        lVar2 = g_02704e30;
        local_110 = '\x01';
        local_118 = this_ptr;
        if (g_02704e30 != 0) {
          FUN_00d50b00();
        }
        local_128 = lVar2;
        local_90 = in_stack_ffffffffffffffb8;
        FUN_00083ea0(2,&local_128);
        FUN_000b4da0();
        local_f0 = 0;
        local_f8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_f0 = '\x01';
        FUN_00d40470(&local_f8,&local_118,1,3);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        local_88 = (int64_t *)&g_0253d630;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        local_88 = &g_024c5048;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar14 = local_88;
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_90;
        }
        local_90 = (int64_t *)CONCAT71(local_90._1_7_,(char)local_80);
        *(void*)pplVar9 = 0;
        if (((char)local_80 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar14 + 0x928))();
        local_d0 = 0;
        local_d8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_d8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_d0 = '\x01';
        uVar16 = FUN_0039e8b0();
        local_e0 = 0;
        if (local_40 == '\0') {
          if (in_stack_ffffffffffffffb8 != (int64_t *)0x0) {
            uVar16 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_e0 = '\x01';
        local_e8 = in_stack_ffffffffffffffb8;
        (**(code **)(*this_ptr + 0xdb8))(uVar16,1);
        if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if ((char)local_90 != '\0') {
          FUN_00d50b20();
        }
      }
LAB_0039db8b:
      if (in_stack_ffffffffffffffb8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    if (local_88 != (int64_t *)0x0) goto LAB_0039d0dd;
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0039d0f9:
  FUN_0199c1c0();
  return;
}



// ============================================================
// 00329480
// ============================================================
// Function: FUN_00329480
// Address: 00329480
// Size: 2860 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00329480(char param_1,void*param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char *pcVar7;
  void* pVar8;
  int64_t ******pppppplVar9;
  int64_t *******ppppppplVar10;
  int64_t *******ppppppplVar11;
  int64_t *******ppppppplVar12;
  int64_t *arg1;
  int64_t *******this_ptr;
  float fVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint32_t uVar17;
  double local_c0;
  uint64_t local_98;
  int64_t *******local_80;
  char local_78;
  uint64_t local_70;
  int64_t *******local_60;
  int64_t ******local_58;
  int64_t *******local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  uint64_t uVar16;
  
  FUN_00d23310();
  ppppppplVar10 = &local_58;
  local_80 = (int64_t *******)CONCAT71(local_80._1_7_,(char)local_58);
  ppppppplVar11 = ppppppplVar10;
  if ((char)local_58 == '\0') {
    ppppppplVar11 = (int64_t *******)&local_80;
  }
  *(void*)ppppppplVar11 = 0;
  if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)ppppppplVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar4 = (int64_t *)FUN_00e8b990();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (((char)local_80 != '\0') && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    return;
  }
  FUN_01d3abf0();
  uVar15 = FUN_01e466c0();
  local_70 = (int64_t ******)((uint64_t)local_70._4_4_ << 0x20);
  do {
    local_98._4_4_ = (float)((uint64_t)uVar15 >> 0x20);
    local_98._0_4_ = (float)uVar15;
    FUN_01d3abf0();
    uVar16 = FUN_01e466c0();
    fVar13 = (float)uVar16;
    iVar2 = FUN_01d3a5a0();
    if (iVar2 == 6) break;
    if ((((float)local_98 != fVar13) || (NAN((float)local_98) || NAN(fVar13))) ||
       ((float)((uint64_t)uVar16 >> 0x20) != local_98._4_4_)) {
      local_c0 = (double)FUN_01a34bd0(fVar13);
      uVar5 = FUN_01d3b590();
      if (((uVar5 & 8) == 0) && (cVar1 = (*(*this_ptr[0x2d])[0x79])(), cVar1 != '\0')) {
        (*(*this_ptr)[0x130])();
        local_c0 = (double)(*(*local_60)[0x6e])(SUB84(local_c0,0));
        if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x3b8))();
      if ((int64_t *******)*param_2 != (int64_t *******)0x0) {
        local_58._0_1_ = '\0';
        local_60 = (int64_t *******)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = (int64_t *******)*param_2;
        while( true ) {
          lVar6 = (int64_t)(int)local_48;
          iVar2 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar2);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar2) break;
          pppppplVar9 = local_50[2];
          local_60 = (int64_t *******)pppppplVar9[lVar6 + 1];
          if (param_1 == '\0') {
            pvVar3 = _pthread_getspecific((void*)pppppplVar9);
            pVar8 = (void*)pppppplVar9;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362960();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_70 = ppppppplVar10[7];
              pppppplVar9 = ppppppplVar10[9];
              if (((double)ppppppplVar10[8] <= (double)local_70) ||
                 (((double)pppppplVar9 < (double)ppppppplVar10[10] &&
                  ((double)pppppplVar9 < (double)local_70)))) {
                local_70 = pppppplVar9;
              }
            }
            else {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_70 = ppppppplVar10[8];
            }
            pvVar3 = _pthread_getspecific(pVar8);
            ppppppplVar10 = local_60;
            if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              ppppppplVar10 =
                   (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_98._0_4_ = SUB84(ppppppplVar10[9],0);
            pvVar3 = _pthread_getspecific(pVar8);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362980();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_98._0_4_ = SUB84(ppppppplVar10[7],0);
            }
            uVar14 = (int)local_70;
            uVar17 = (int)((uint64_t)local_70 >> 0x20);
            if ((double)local_70 <= local_c0) {
              uVar14 = SUB84(local_c0,0);
              uVar17 = (int)((uint64_t)local_c0 >> 0x20);
            }
LAB_00329a4c:
            local_70 = (int64_t ******)CONCAT44(uVar17,uVar14);
          }
          else {
            pvVar3 = _pthread_getspecific((void*)pppppplVar9);
            pVar8 = (void*)pppppplVar9;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362960();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_98 = ppppppplVar10[8];
              if ((double)local_98 <= (double)ppppppplVar10[7]) {
                uVar14 = SUB84(ppppppplVar10[10],0);
                uVar17 = (uint32_t)((uint64_t)ppppppplVar10[10] >> 0x20);
                goto LAB_00329981;
              }
              pppppplVar9 = ppppppplVar10[10];
              uVar14 = SUB84(pppppplVar9,0);
              uVar17 = (uint32_t)((uint64_t)pppppplVar9 >> 0x20);
              if (((double)ppppppplVar10[9] <= (double)pppppplVar9 &&
                   (double)pppppplVar9 != (double)ppppppplVar10[9]) &&
                 ((double)local_98 < (double)pppppplVar9)) goto LAB_00329981;
            }
            else {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar14 = SUB84(ppppppplVar10[7],0);
              uVar17 = (uint32_t)((uint64_t)ppppppplVar10[7] >> 0x20);
LAB_00329981:
              local_98 = (int64_t ******)CONCAT44(uVar17,uVar14);
            }
            pvVar3 = _pthread_getspecific(pVar8);
            ppppppplVar10 = local_60;
            if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              ppppppplVar10 =
                   (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_70 = ppppppplVar10[10];
            pvVar3 = _pthread_getspecific(pVar8);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362980();
            local_98._0_4_ = (float)(int)local_98;
            if (local_c0 <= (double)local_98) {
              local_98._0_4_ = (float)SUB84(local_c0,0);
            }
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar14 = (int)ppppppplVar10[8];
              uVar17 = (int)((uint64_t)ppppppplVar10[8] >> 0x20);
              goto LAB_00329a4c;
            }
          }
          pvVar3 = _pthread_getspecific(pVar8);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003621a0((float)local_98);
          pvVar3 = _pthread_getspecific(pVar8);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00362200((int)local_70);
          if (local_48._4_4_ != 0) {
            if (local_48 < 0) {
              iVar2 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar2 = 0;
            }
            local_48 = CONCAT44(iVar2,(int)local_48);
          }
        }
        ppppppplVar10 = local_50;
        FUN_0032bfd0();
      }
      ppppppplVar10 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar10 >> 8),1);
      local_70 = (int64_t ******)CONCAT44(local_70._4_4_,(int)ppppppplVar10);
      (*(*this_ptr)[0xc4])();
      uVar15 = uVar16;
    }
    (*(*this_ptr)[0xcb])();
    ppppppplVar11 = (int64_t *******)*arg1;
    if (ppppppplVar11 == local_60) {
      if (((char)arg1[1] != '\0') || (local_60 == (int64_t *******)0x0)) goto LAB_00329c16;
      ppppppplVar12 = ppppppplVar11;
      if ((char)local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_00329c09;
      }
LAB_00329590:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar6 = arg1[1];
      if ((char)local_58 != '\0') {
        *arg1 = (int64_t)local_60;
        ppppppplVar12 = local_60;
        if (((char)lVar6 != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
          FUN_00d50b20();
          ppppppplVar12 = (int64_t *******)*arg1;
        }
        goto LAB_00329590;
      }
      if (local_60 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_60;
      if (((char)lVar6 != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
LAB_00329c09:
      *(void*)(arg1 + 1) = 1;
LAB_00329c16:
      ppppppplVar12 = (int64_t *******)*arg1;
      if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  } while (ppppppplVar12 != (int64_t *******)0x0);
  if ((*arg1 == 0) || (((uint64_t)local_70 & 1) == 0)) goto LAB_00329ff5;
  if (this_ptr != (int64_t *******)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_80 = this_ptr;
  do {
    ppppppplVar10 = local_80;
    (*(*local_80)[0x6e])();
    if (local_60 == ppppppplVar10) {
      if (((local_38[0] == '\0') && (local_60 != (int64_t *******)0x0)) && ((char)local_58 != '\0')
         ) {
        local_38[0] = '\x01';
        goto LAB_00329cd7;
      }
    }
    else {
      local_80 = local_60;
      ppppppplVar10 = local_60;
      if ((char)local_58 == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00329cd7:
        local_38[0] = '\x01';
        pcVar7 = (char *)&local_58;
      }
      *pcVar7 = '\0';
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    ppppppplVar11 = (int64_t *******)&g_02802688;
    if (ppppppplVar10 != (int64_t *******)0x0) {
      (*(*ppppppplVar10)[0x6c])();
      cVar1 = FUN_00e85ea0();
      ppppppplVar11 = (int64_t *******)&local_80;
      if (cVar1 == '\0') {
        ppppppplVar11 = (int64_t *******)&g_02802688;
      }
    }
    ppppppplVar10 = local_80;
    if (*ppppppplVar11 != (int64_t ******)0x0) {
      if ((local_38[0] == '\0') && (local_80 != (int64_t *******)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x00329e4d;
    }
  } while (local_80 != (int64_t *******)0x0);
  ppppppplVar10 = (int64_t *******)0x0;
joined_r0x00329e4d:
  if (this_ptr != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (ppppppplVar10 == (int64_t *******)0x0) goto LAB_00329ff5;
  FUN_002533b0();
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00329eb0;
    }
  }
  else if (local_60 != (int64_t *******)0x0) {
LAB_00329eb0:
    local_58._0_1_ = '\0';
    local_50 = local_60;
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)((int64_t)local_60 + 0xc)) {
      iVar2 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)ppppppplVar11);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        (*(*this_ptr)[0x14b])();
        ppppppplVar10 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_0054e980();
        if (ppppppplVar10 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        iVar2 = iVar2 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar2);
      } while (iVar2 < *(int *)((int64_t)local_60 + 0xc));
    }
    FUN_00275ca0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00329ff5:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0077e980
// ============================================================
// Function: FUN_0077e980
// Address: 0077e980
// Size: 2917 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0077e980(void* param_1)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar10;
  bool bVar11;
  int64_t *local_b0;
  char local_a8;
  int64_t *plVar12;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  
  FUN_00d3ed20();
  lVar6 = g_02704e30;
  if (g_02704e30 != 0) {
    FUN_00d50b00();
  }
  pplVar10 = &local_60;
  FUN_000175c0();
  plVar12 = local_60;
  FUN_000823a0();
  if (plVar12 == (int64_t *)0x0) {
LAB_0077ea0f:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0077ea0f;
  }
  plVar12 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4d60();
    plVar8 = plVar12;
    if (plVar12 != local_60) {
      plVar12 = local_60;
      if (local_58[0] != '\0') {
        FUN_00d50b20();
        goto LAB_0077eb1a;
      }
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = local_60;
    }
    if ((local_58[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0077eb1a:
  if (plVar12 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*this_ptr + 0x610))();
  plVar12 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_0077f442;
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (int64_t *)0x0) goto LAB_0077f442;
  local_58[0] = '\0';
  local_60 = (int64_t *)0x0;
  local_50 = plVar12;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_48._4_4_ = 0;
  bVar1 = false;
  plVar12 = (int64_t *)0x0;
  while( true ) {
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar9 = -local_48._4_4_;
      }
      else {
        iVar9 = (int)local_48 - local_48._4_4_;
        local_48 = CONCAT44(local_48._4_4_,iVar9);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar9 = 0;
      }
      local_48 = CONCAT44(iVar9,(int)local_48);
    }
    lVar6 = (int64_t)(int)local_48;
    iVar9 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar9);
    if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
    local_60 = *(int64_t **)(local_50[2] + 8 + lVar6 * 8);
    (**(code **)(*local_60 + 0x5d8))();
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0077ec70;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_0077ec70:
      FUN_0063f230();
      if (local_70 == (int64_t *)0x0) {
        bVar11 = false;
      }
      else {
        FUN_0063f230();
        FUN_0021a630();
        bVar11 = CONCAT71(uStack_7f,local_80) != 0;
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_0063f230();
        FUN_0021a630();
        FUN_00d3ecf0();
        plVar8 = local_70;
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
        if (plVar8 == local_b0) {
          FUN_0064ffc0();
          FUN_004405c0();
          plVar8 = local_70;
          if (local_70 == plVar12) {
            plVar8 = plVar12;
            bVar11 = bVar1;
            if ((!bVar1) && (local_70 != (int64_t *)0x0)) {
              if (local_68 != '\0') goto LAB_0077eddd;
              FUN_00d50b00();
              bVar11 = true;
            }
LAB_0077ee1d:
            bVar1 = bVar11;
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar11 = true;
              if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0077ee1d;
            }
            if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_0077eddd:
            local_68 = '\0';
            bVar1 = true;
          }
          plVar12 = plVar8;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_000e3600();
  FUN_00d50b20();
  if (plVar12 == (int64_t *)0x0) goto LAB_0077f442;
  FUN_004b8020();
  plVar12 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_004b5af0();
    plVar8 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0077ef3c;
      }
    }
    else if (local_60 != (int64_t *)0x0) {
LAB_0077ef3c:
      FUN_00d3ecc0();
      plVar2 = local_60;
      lVar6 = g_02729470;
      if (g_02729470 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar8;
      local_48 = 0xffffffff;
      local_40 = 0;
      if (cVar3 == '\0') {
        local_48._4_4_ = 0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar9 = -local_48._4_4_;
            }
            else {
              iVar9 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar9);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar9 = 0;
            }
            local_48 = CONCAT44(iVar9,(int)local_48);
          }
          lVar6 = (int64_t)(int)local_48;
          iVar9 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
          local_60 = *(int64_t **)(local_50[2] + 8 + lVar6 * 8);
          if (local_60 == plVar12) {
            FUN_003b79a0();
          }
          else {
            iVar9 = FUN_003b7980();
            if (iVar9 == 2) {
              FUN_003b79a0();
            }
          }
        }
      }
      else {
        iVar9 = 0;
        while( true ) {
          iVar4 = 0;
          if (iVar9 != 0) {
            if (iVar9 < 1) {
              iVar4 = -iVar9;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar9);
              FUN_00d23690(iVar9,iVar9);
              local_40 = local_40 + local_48._4_4_;
              iVar4 = 0;
            }
            local_48 = CONCAT44(iVar4,(int)local_48);
          }
          lVar6 = (int64_t)(int)local_48;
          iVar9 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
          local_60 = *(int64_t **)(local_50[2] + 8 + lVar6 * 8);
          iVar9 = iVar4;
          if (local_60 == plVar12) {
            FUN_003b79a0();
            iVar9 = local_48._4_4_;
          }
        }
      }
      FUN_00274d30();
      FUN_00657670();
      if (*arg1 != 0) {
        pplVar10 = &local_60;
        FUN_00d3ecf0();
        plVar12 = local_60;
        if ((g_0271a0b0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          g_0272a1e8 = FUN_000914a0();
          g_0272a1d0 = "MDEditorView";
          g_0272a1d8 = 0x560;
          g_0272a1e0 = FUN_0034df50;
          g_0272a1f0 = 0;
          ram_000000000272a1f8 = 0;
          g_0272a200 = 0;
          g_0272a278 = 0;
          ram_000000000272a280 = 0;
          g_0272a288 = 0;
          g_0272a28a = 1;
          g_0272a208 = 0;
          ram_000000000272a210 = 0;
          g_0272a218 = 0;
          ram_000000000272a220 = 0;
          g_0272a228 = 0;
          ram_000000000272a230 = 0;
          g_0272a238 = 0;
          ram_000000000272a240 = 0;
          g_0272a248 = 0;
          ram_000000000272a250 = 0;
          g_0272a258 = 0;
          ram_000000000272a260 = 0;
          g_0272a268 = 0;
          ram_000000000272a270 = 0;
          g_0272a293 = 0;
          g_0272a28b = 0;
          ___cxa_guard_release();
        }
        if (plVar12 == (int64_t *)0x0) {
LAB_0077f163:
          pplVar10 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar12 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_0077f163;
        }
        plVar12 = *pplVar10;
        if (plVar12 == (int64_t *)0x0) {
          bVar11 = true;
          plVar12 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(void*)(pplVar10 + 1) = 0;
          }
          bVar11 = false;
        }
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 != (int64_t *)0x0) {
          local_80 = '\0';
          local_70 = plVar12;
          do {
            plVar12 = local_70;
            (**(code **)(*local_70 + 0x370))();
            plVar8 = local_60;
            if (local_60 == plVar12) {
              if (((local_80 == '\0') && (local_60 != (int64_t *)0x0)) &&
                 (plVar8 = plVar12, local_58[0] != '\0')) goto LAB_0077f237;
            }
            else {
              local_70 = local_60;
              if (local_58[0] == '\0') {
                if (local_80 == '\0') {
                  pcVar7 = &local_80;
                }
                else {
                  FUN_00d50b20();
                  pcVar7 = &local_80;
                }
              }
              else {
                if (local_80 != '\0') {
                  FUN_00d50b20();
                }
LAB_0077f237:
                local_80 = '\x01';
                pcVar7 = local_58;
              }
              *pcVar7 = '\0';
              plVar12 = plVar8;
            }
            if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((g_026f7020 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
              g_0270aa58 = FUN_00015ff0();
              g_0270aa40 = "MDEditorViewController";
              g_0270aa48 = 0x1e8;
              g_0270aa50 = FUN_00074eb0;
              g_0270aa60 = 0;
              ram_000000000270aa68 = 0;
              g_0270aa70 = 0;
              g_0270aae8 = 0;
              ram_000000000270aaf0 = 0;
              g_0270aaf8 = 0;
              g_0270aafa = 1;
              g_0270aa78 = 0;
              ram_000000000270aa80 = 0;
              g_0270aa88 = 0;
              ram_000000000270aa90 = 0;
              g_0270aa98 = 0;
              ram_000000000270aaa0 = 0;
              g_0270aaa8 = 0;
              ram_000000000270aab0 = 0;
              g_0270aab8 = 0;
              ram_000000000270aac0 = 0;
              g_0270aac8 = 0;
              ram_000000000270aad0 = 0;
              g_0270aad8 = 0;
              ram_000000000270aae0 = 0;
              g_0270ab03 = 0;
              g_0270aafb = 0;
              ___cxa_guard_release();
            }
            pplVar10 = (int64_t **)&g_02802688;
            if (plVar12 != (int64_t *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar3 = FUN_00e85ea0();
              pplVar10 = &local_70;
              if (cVar3 == '\0') {
                pplVar10 = (int64_t **)&g_02802688;
              }
            }
            if (*pplVar10 != (int64_t *)0x0) {
              if ((local_80 == '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              else if (local_70 == (int64_t *)0x0) break;
              FUN_00212bd0();
              plVar12 = local_60;
              if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 != (int64_t *)0x0) {
                FUN_00212bd0();
                FUN_00447310();
                if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
              break;
            }
          } while (local_70 != (int64_t *)0x0);
          if (!bVar11) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
LAB_0077f442:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00782ec0
// ============================================================
// Function: FUN_00782ec0
// Address: 00782ec0
// Size: 3385 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00782ec0(uint64_t param_1,int64_t *param_2)

{
  code *pcVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  void*puVar6;
  void*puVar7;
  char *pcVar8;
  void* pVar9;
  int64_t lVar10;
  void**ppuVar11;
  int iVar12;
  int64_t *arg1;
  int64_t *this_ptr;
  void*unaff_R12;
  uint32_t uVar13;
  int64_t local_188;
  uint8_t local_180;
  int64_t *local_178;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  void*local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  uint64_t local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  void*local_48;
  void*local_40;
  char local_38;
  
  local_178 = param_2;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  pcVar1 = g_02572370;
  local_98 = puVar2;
  (*g_02572370)();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*pcVar1)();
  local_90 = puVar2;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*pcVar1)();
  if (*arg1 == 0) {
    local_60 = 0;
    local_48 = (void*)0x0;
    lVar10 = *local_178;
    lVar3 = local_78;
  }
  else {
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_60 = 0;
    local_48 = (void*)0x0;
    local_78 = *arg1;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar12 = -local_70._4_4_;
        }
        else {
          iVar12 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar12 = 0;
        }
        local_70 = CONCAT44(iVar12,(int)local_70);
      }
      lVar3 = (int64_t)(int)local_70;
      iVar12 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar12);
      if (*(int *)(local_78 + 0xc) <= iVar12) break;
      puVar6 = *(void**)(local_78 + 0x10);
      local_88 = puVar6[lVar3 + 1];
      FUN_00782800();
      FUN_004f9cf0();
      puVar7 = (void*)CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (puVar7 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38 = '\0';
      local_40 = puVar7;
      FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e60a0();
      local_c0 = 0;
      local_c8 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_c0 = '\x01';
      uVar5 = FUN_0141af60();
      puVar7 = local_40;
      if (local_40 == local_48) {
        if (((char)local_60 != '\0') || (local_40 == (void*)0x0)) {
          unaff_R12 = (void*)(local_60 & 0xffffffff);
          goto joined_r0x0078321d;
        }
        puVar7 = local_48;
        if (local_38 == '\0') {
          FUN_00d50b00();
          puVar7 = local_48;
          goto joined_r0x00783539;
        }
LAB_007831b5:
        local_38 = '\0';
        local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        local_48 = puVar7;
      }
      else {
        if (local_38 != '\0') {
          if (((char)local_60 != '\0') && (local_48 != (void*)0x0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_007831b5;
        }
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_60 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
joined_r0x00783539:
        unaff_R12 = (void*)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
        local_48 = puVar7;
joined_r0x0078321d:
        if ((local_38 == '\0') || (local_40 == (void*)0x0)) {
          local_60 = (uint64_t)unaff_R12 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_60 = (uint64_t)unaff_R12 & 0xffffffff;
        }
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_012e6040();
      if (iVar12 != 0) {
        pvVar4 = _pthread_getspecific((void*)puVar6);
        unaff_R12 = local_48;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), unaff_R12 = local_48, lVar3 != 0)) {
          puVar6 = local_48;
          unaff_R12 = (void*)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        pVar9 = (void*)puVar6;
        (**(code **)(*this_ptr + 0x628))();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_a0 = 0;
        local_a8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_a0 = '\x01';
        FUN_016cbba0();
        local_b8 = local_40;
        local_b0 = 0;
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_b0 = '\x01';
        FUN_0141bb40();
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    lVar10 = *local_178;
    lVar3 = local_78;
  }
  local_78 = lVar10;
  if (local_78 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    while( true ) {
      lVar3 = (int64_t)(int)local_70;
      iVar12 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar12);
      if (*(int *)(local_78 + 0xc) <= iVar12) break;
      lVar10 = *(int64_t *)(local_78 + 0x10);
      local_88 = *(int64_t *)(lVar10 + 8 + lVar3 * 8);
      FUN_004f9cf0();
      pVar9 = (void*)lVar10;
      lVar3 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38 = '\0';
      local_40 = (void*)lVar3;
      FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_0250d198;
      puVar6[2] = 0;
      *(void*)(puVar6 + 3) = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      lVar3 = puVar6[2];
      puVar7 = (void*)lVar3;
      if ((void*)lVar3 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (void*)0x0) {
            puVar7 = (void*)0x0;
            goto LAB_00783763;
          }
          FUN_00d50b00();
          lVar3 = puVar6[2];
          puVar6[2] = local_40;
          puVar7 = local_40;
        }
        else {
          local_38 = '\0';
          puVar7 = local_40;
LAB_00783763:
          puVar6[2] = puVar7;
        }
        pVar9 = (void*)lVar3;
        if (lVar3 != 0) {
          FUN_00d50b20();
          puVar7 = local_40;
        }
      }
      if ((local_38 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2610();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_012a46e0();
      *(void*)(puVar6 + 3) = uVar13;
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_012e6040();
      *(bool *)((int64_t)puVar6 + 0x1c) = iVar12 == 2;
      local_38 = '\0';
      local_40 = puVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar12 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar12 = 0;
        }
        local_70 = CONCAT44(iVar12,(int)local_70);
      }
    }
    FUN_000be170();
    lVar3 = local_78;
  }
  local_78 = lVar3;
  local_118 = local_90;
  local_110 = '\0';
  local_100 = '\0';
  local_f8 = local_48;
  local_f0 = '\0';
  ppuVar11 = &local_108;
  local_108 = puVar2;
  FUN_0164bd30(ppuVar11,&local_118,&local_f8);
  lVar3 = local_88;
  pVar9 = (void*)ppuVar11;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)(*this_ptr + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar3 = local_88;
    local_d8 = local_80[0];
    pcVar8 = &local_d8;
    if (local_80[0] != '\0') {
      pcVar8 = local_80;
    }
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    uVar13 = FUN_00d23310();
    lVar10 = local_88;
    pcVar8 = local_80;
    if (local_80[0] == '\0') {
      pcVar8 = &local_58;
    }
    local_58 = local_80[0];
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_58 == '\0') && (lVar10 != 0)) {
      uVar13 = FUN_00d50b00();
    }
    local_188 = lVar10;
    local_180 = 1;
    FUN_007649a0(uVar13,&local_188);
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00266af0
// ============================================================
// Function: FUN_00266af0
// Address: 00266af0
// Size: 2660 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00266af0(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  undefined7 uVar14;
  uint64_t uVar12;
  int64_t lVar13;
  byte unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t *plVar16;
  uint32_t uVar17;
  int64_t *local_158;
  uint8_t local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  uint32_t local_b4;
  uint64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t local_98;
  char local_90;
  uint local_84;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  pVar9 = (void*)param_1;
  if ((*(int *)(this_ptr + 0x198) == 1) || ((*(int *)(this_ptr + 0x198) == 2 && (unaff_SIL == 0)))
     ) {
    uVar12 = 0;
    goto LAB_00266f5c;
  }
  local_b4 = param_2;
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_00266ba0:
    plVar16 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar16 = local_40;
    pVar9 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    plVar11 = &local_58;
    if (local_38[0] != '\0') {
      plVar11 = (int64_t *)local_38;
    }
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    *(char *)plVar11 = '\0';
    if ((local_38[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (int64_t *)0x0) {
      plVar16 = *(int64_t **)(this_ptr + 0x90);
      if (plVar16 == (int64_t *)0x0) goto LAB_00266ba0;
    }
    else if ((char)local_58 != '\0') goto LAB_00266ba3;
    FUN_00d50b00();
  }
LAB_00266ba3:
  local_48 = plVar16;
  cVar3 = FUN_002664b0();
  if (((cVar3 == '\0') && (cVar3 = FUN_002639e0(), cVar3 == '\0')) &&
     (cVar3 = FUN_00262e30(), cVar3 == '\0')) {
    uVar12 = 0;
    if (local_48 == (int64_t *)0x0) goto LAB_00266f5c;
  }
  else {
    uVar17 = (**(code **)(*local_48 + 0xe20))();
    plVar16 = local_40;
    uVar4 = (uint)unaff_SIL;
    if (local_38[0] == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_00266cb0;
      uVar17 = FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
LAB_00266c5d:
      if (*(int *)((int64_t)plVar16 + 0xc) == 0) {
        bVar1 = false;
        goto LAB_00266cb8;
      }
      local_108 = 0;
      local_100 = '\0';
      FUN_019c1990(uVar17,&local_108);
      plVar15 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar15 = (int64_t *)0x0;
        local_70 = 0;
      }
      else if (local_38[0] == '\0') {
        uVar5 = FUN_00d50b00();
        local_70 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
        local_70 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (plVar15 != (int64_t *)0x0) {
        local_60 = plVar16;
        local_84 = uVar4;
        if (*(int *)((int64_t)plVar15 + 0xc) != 0) goto LAB_00266eab;
        goto LAB_00266f2e;
      }
LAB_00266f2b:
      plVar15 = (int64_t *)0x0;
      local_60 = plVar16;
LAB_00266f2e:
      uVar12 = 0;
    }
    else {
      if (local_40 != (int64_t *)0x0) goto LAB_00266c5d;
LAB_00266cb0:
      bVar1 = true;
LAB_00266cb8:
      (**(code **)(*local_48 + 0x9b0))(uVar17,0);
      plVar11 = local_40;
      local_84 = uVar4;
      if (plVar16 == local_40) {
LAB_00266d3c:
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar16 = plVar11;
        if (local_38[0] == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (!bVar1) {
            FUN_00d50b20();
          }
          goto LAB_00266d3c;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      local_130 = '\0';
      local_128 = 0;
      local_120 = '\0';
      local_118 = 0;
      local_110 = '\0';
      plVar10 = &local_118;
      local_138 = plVar16;
      FUN_01293ed0(plVar10,&local_128);
      plVar15 = local_40;
      pVar9 = (void*)plVar10;
      if (local_40 == (int64_t *)0x0) {
        plVar15 = (int64_t *)0x0;
        uVar5 = 0;
      }
      else {
        uVar14 = (undefined7)((uint64_t)plVar11 >> 8);
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          uVar5 = CONCAT71(uVar14,1);
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
          uVar5 = CONCAT71(uVar14,1);
        }
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = uVar5;
      if (plVar15 == (int64_t *)0x0) goto LAB_00266f2b;
      local_60 = plVar16;
      if ((*(int *)((int64_t)plVar15 + 0xc) != 1) || (*(int *)((int64_t)plVar15 + 0xc) == 0))
      goto LAB_00266f2e;
LAB_00266eab:
      local_f0 = '\0';
      local_f8 = plVar16;
      cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                          *local_48 + 8))();
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = plVar16;
      if (cVar3 == '\0') goto LAB_00266f2e;
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_38[0] = '\0';
        local_40 = (int64_t *)0x0;
LAB_00266f7c:
        uVar12 = 0;
      }
      else {
        FUN_006f3f00();
        if (local_40 == (int64_t *)0x0) goto LAB_00266f7c;
        if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
          local_50 = '\0';
          local_58 = 0;
        }
        else {
          FUN_006f3f00();
        }
        uVar4 = FUN_00751ba0();
        uVar12 = (uint64_t)uVar4;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar12 == '\0') {
        (**(code **)(*local_48 + 0x9f8))();
        local_68 = local_40;
        if (local_40 == (int64_t *)0x0) {
          local_a0 = 0;
          local_68 = (int64_t *)0x0;
        }
        else {
          local_a0 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
          if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01f27fe0();
        (**(code **)(*local_40 + 0x450))();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_006f3f00();
        (**(code **)(*local_148 + 0x628))();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a11a0();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713990();
        lVar13 = local_58;
        pvVar6 = _pthread_getspecific(pVar9);
        lVar2 = local_58;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar13 = lVar2, lVar7 != 0)) {
          lVar13 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        FUN_01313ad0();
        local_68 = local_40;
        if (local_40 == (int64_t *)0x0) {
          uVar12 = 0;
          local_68 = (int64_t *)0x0;
        }
        else {
          uVar14 = (undefined7)((uint64_t)lVar13 >> 8);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
            uVar12 = CONCAT71(uVar14,1);
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            uVar12 = CONCAT71(uVar14,1);
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (CONCAT71(local_98._1_7_,(char)local_98) != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        local_a0 = uVar12;
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != (int64_t *)0x0) && ((char)local_b4 != '\0')) {
        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
        plVar16 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (int64_t *)0x0) {
          (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
          FUN_0194ed20();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(int64_t *)(this_ptr + 0x80) == 0) {
          puVar8 = (void*)FUN_00e8fc40();
          FUN_000161a0();
          *puVar8 = &g_02500938;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          *(void*)(puVar8 + 0x10) = 0;
          puVar8[0x11] = 0;
          *(void*)((int64_t)puVar8 + 0x8f) = 0;
          puVar8[0x13] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x18] = 0;
          (*g_02500950)();
          lVar13 = *(int64_t *)(this_ptr + 0x80);
          *(void**)(this_ptr + 0x80) = puVar8;
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
        }
        local_d8 = local_68;
        local_d0 = '\0';
        FUN_00511970();
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_005119c0();
        FUN_00511a40();
        local_c8 = local_48;
        local_c0 = '\0';
        FUN_00511920();
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00511a30();
        uVar17 = FUN_00d23310();
        plVar16 = local_40;
        plVar11 = &local_98;
        if (local_38[0] != '\0') {
          plVar11 = (int64_t *)local_38;
        }
        local_98._0_1_ = local_38[0];
        *(char *)plVar11 = '\0';
        if ((local_38[0] != '\0') && (plVar16 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((char)local_98 == '\0') {
          if (plVar16 != (int64_t *)0x0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_98._0_1_ = '\0';
        }
        local_150 = 1;
        local_158 = plVar16;
        FUN_00267bd0(uVar17,&local_158);
        local_80 = local_58;
        local_78 = 0;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_78 = '\x01';
        FUN_005119d0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar12 = *(uint64_t *)(this_ptr + 0x80);
        local_a8 = 0;
        if (uVar12 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        local_b0 = uVar12;
        FUN_01d83990();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar12 = CONCAT71((int7)(uVar12 >> 8),local_68 != (int64_t *)0x0);
      if (((char)local_a0 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (plVar15 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00266f5c:
  return uVar12 & 0xffffffff;
}



// ============================================================
// 00264ad0
// ============================================================
// Function: FUN_00264ad0
// Address: 00264ad0
// Size: 2184 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00264ad0(uint64_t param_1,uint32_t param_2)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t *local_d8;
  char local_d0 [8];
  int64_t local_c8;
  uint64_t local_c0;
  uint32_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint32_t local_84;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  uint32_t local_6c;
  int64_t *local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50 [32];
  
  if (*(int *)(this_ptr + 0x198) != 2) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
    local_84 = param_2;
    (**(code **)(&UNK_00001550 + *plVar6))();
    local_80 = local_d0[0];
    pcVar5 = &local_80;
    pcVar4 = local_d0;
    if (local_d0[0] == '\0') {
      pcVar4 = pcVar5;
    }
    *pcVar4 = '\0';
    if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_d8 == (int64_t *)0x0) {
      plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00264b69:
      FUN_00d50b00();
    }
    else {
      plVar9 = local_d8;
      if (local_80 == '\0') goto LAB_00264b69;
    }
    (**(code **)(*plVar9 + 0xe30))();
    local_b0 = local_68;
    local_a8 = 0;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_a8 = '\x01';
    FUN_012e74e0();
    local_90 = CONCAT71(uStack_57,local_58);
    if (local_50[0] == '\0') {
      if (((local_90 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      if (*(int *)(local_90 + 0xc) == 0) {
        uVar7 = 0;
      }
      else {
        FUN_00d23310();
        pcVar4 = local_d0;
        if (local_d0[0] == '\0') {
          pcVar4 = &local_58;
        }
        local_58 = local_d0[0];
        *pcVar4 = '\0';
        if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar3 = local_90;
        pvVar2 = _pthread_getspecific((void*)pcVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_012f9bb0();
        plVar6 = (int64_t *)(uint64_t)uVar1;
        if ((local_58 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_84 != '\0') {
          local_84 = CONCAT31(local_84._1_3_,(char)uVar1);
          plVar6 = (int64_t *)((uint64_t)uVar1 ^ 1);
          local_50[0xf] = (char)plVar6;
          local_d0[0] = '\0';
          local_d8 = (int64_t *)0x0;
          local_c8 = lVar3;
          local_b8 = 0;
          local_c0 = 0;
          if (0 < *(int *)(lVar3 + 0xc)) {
            lVar8 = 0;
            do {
              local_d8 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar8 * 8);
              pvVar2 = _pthread_getspecific((void*)pcVar5);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f9bc0();
              plVar6 = local_d8;
              if ((char)local_84 == '\0') {
                pvVar2 = _pthread_getspecific((void*)pcVar5);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7fb0();
                pvVar2 = _pthread_getspecific((void*)pcVar5);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510280();
                plVar6 = local_68;
                pvVar2 = _pthread_getspecific((void*)pcVar5);
                plVar9 = local_68;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar6 = plVar9, lVar3 != 0)
                   ) {
                  plVar6 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                }
                uVar1 = *(int *)(plVar6[9] + 0x18) + 7;
                pcVar4 = (char *)(uint64_t)uVar1;
                if (uVar1 < 0xf) {
                  FUN_00d23310();
                  plVar6 = (int64_t *)CONCAT71(uStack_57,local_58);
                  local_50[0x18] = local_50[0];
                  pcVar5 = local_50 + 0x18;
                  pcVar4 = local_50;
                  if (local_50[0] == '\0') {
                    pcVar4 = pcVar5;
                  }
                  *pcVar4 = '\0';
                  bVar11 = plVar6 == (int64_t *)0x0;
                  if ((local_50[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
                    pcVar4 = (char *)FUN_00d50b20();
                  }
                  if ((local_50[0x18] != '\0') && (plVar6 != (int64_t *)0x0)) {
                    pcVar4 = (char *)FUN_00d50b20();
                  }
                }
                else {
                  bVar11 = false;
                }
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  pcVar4 = (char *)FUN_00d50b20();
                }
                if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
                  pcVar4 = (char *)FUN_00d50b20();
                }
                if (bVar11) {
                  plVar6 = *(int64_t **)(this_ptr + 0x90);
                  if (plVar6 == (int64_t *)0x0) {
                    local_6c = (uint32_t)CONCAT71((int7)((uint64_t)pcVar4 >> 8),1);
                    plVar9 = (int64_t *)0x0;
                    plVar10 = (int64_t *)0x0;
                  }
                  else {
                    (**(code **)(&UNK_00001550 + *plVar6))();
                    local_80 = local_50[0];
                    pcVar5 = local_50;
                    if (local_50[0] == '\0') {
                      pcVar5 = &local_80;
                    }
                    plVar9 = (int64_t *)CONCAT71(uStack_57,local_58);
                    *pcVar5 = '\0';
                    if ((local_50[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
                      pcVar5 = (char *)FUN_00d50b20();
                    }
                    if (plVar9 == (int64_t *)0x0) {
                      plVar9 = *(int64_t **)(this_ptr + 0x90);
                      if (plVar9 != (int64_t *)0x0) goto LAB_00264fc3;
                      plVar9 = (int64_t *)0x0;
                    }
                    else {
                      if (local_80 == '\0') {
LAB_00264fc3:
                        pcVar5 = (char *)FUN_00d50b00();
                      }
                      if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
                        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
                        local_50[0x18] = local_50[0];
                        pcVar5 = local_50;
                        if (local_50[0] == '\0') {
                          pcVar5 = local_50 + 0x18;
                        }
                        plVar10 = (int64_t *)CONCAT71(uStack_57,local_58);
                        *pcVar5 = '\0';
                        if ((local_50[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar10 == (int64_t *)0x0) {
                          plVar10 = *(int64_t **)(this_ptr + 0x90);
                          if (plVar10 != (int64_t *)0x0) goto LAB_0026502c;
                          plVar10 = (int64_t *)0x0;
                        }
                        else if (local_50[0x18] == '\0') {
LAB_0026502c:
                          FUN_00d50b00();
                        }
                        local_6c = 0;
                        goto LAB_00265052;
                      }
                    }
                    local_6c = (uint32_t)CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
                    plVar10 = (int64_t *)0x0;
                  }
LAB_00265052:
                  (**(code **)(*plVar10 + 0xe30))();
                  FUN_00d23310();
                  local_50[0x10] = local_50[0];
                  pcVar5 = local_50 + 0x10;
                  pcVar4 = local_50;
                  if (local_50[0] == '\0') {
                    pcVar4 = pcVar5;
                  }
                  lVar3 = CONCAT71(uStack_57,local_58);
                  *pcVar4 = '\0';
                  if ((local_50[0] != '\0') && (lVar3 != 0)) {
                    FUN_00d50b20();
                  }
                  local_98 = 0;
                  if (local_50[0x10] == '\0') {
                    if (lVar3 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50[0x10] = '\0';
                  }
                  local_98 = '\x01';
                  local_a0 = lVar3;
                  (**(code **)(*plVar9 + 0xe48))();
                  plVar9 = local_68;
                  if (local_60 == '\0') {
                    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
                       (local_68 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_60 = '\0';
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
                    FUN_00d50b20();
                  }
                  if ((char)local_6c == '\0') {
                    FUN_00d50b20();
                  }
                  if (plVar6 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  pvVar2 = _pthread_getspecific((void*)pcVar5);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01266fe0();
                  lVar3 = CONCAT71(uStack_57,local_58);
                  if ((((local_50[0] == '\0') && (lVar3 != 0)) &&
                      (FUN_00d50b00(), local_50[0] != '\0')) && (CONCAT71(uStack_57,local_58) != 0))
                  {
                    FUN_00d50b20();
                  }
                  pvVar2 = _pthread_getspecific((void*)pcVar5);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e7bdb0();
                  FUN_00e7bdb0();
                  FUN_012fa750();
                  pvVar2 = _pthread_getspecific((void*)pcVar5);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar6 = (int64_t *)FUN_00e7bdb0();
                  FUN_00e7bdb0();
                  FUN_012fb890();
                  if (lVar3 != 0) {
                    FUN_00d50b20();
                  }
                  if (plVar9 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
              lVar8 = lVar8 + 1;
              local_c0 = CONCAT44(local_c0._4_4_,(int)lVar8);
              lVar3 = local_90;
            } while ((int)lVar8 < *(int *)(local_90 + 0xc));
          }
          FUN_000be170();
        }
        FUN_01caeae0();
        if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
        if (local_d8 != (int64_t *)0x0) {
          FUN_01caeae0();
          FUN_01d66ab0();
          if ((local_d0[0] != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
      goto LAB_00265356;
    }
  }
  uVar7 = 0;
LAB_00265356:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 00326a30
// ============================================================
// Function: FUN_00326a30
// Address: 00326a30
// Size: 2447 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00326a30(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  undefined7 uVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  if (*(int64_t *)(this_ptr + 0x148) == 0) goto LAB_003273a5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  if (lVar4 == 0) goto LAB_003273a5;
  FUN_00d50b00();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_48 + 0x450))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_58 = lVar4;
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = g_027024f0;
    if (g_027024f0 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_00c841b0();
    plVar9 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_50 = (int64_t *)CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1))
      ;
      local_34 = 0;
    }
    else {
      if (local_40 == '\0') {
        uVar5 = FUN_00d50b00();
        local_50 = (int64_t *)((uint64_t)local_50._4_4_ << 0x20);
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00326b7d;
        uVar5 = FUN_00d50b20();
      }
      else {
        local_40 = '\0';
      }
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      local_50 = (int64_t *)((uint64_t)local_50 & 0xffffffff00000000);
    }
LAB_00326b7d:
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)(this_ptr + 0x138);
    local_a0 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    local_a0 = '\x01';
    local_188 = 0;
    local_180 = '\0';
    local_178 = plVar9;
    local_170 = '\0';
    local_a8 = plVar1;
    FUN_00cbadd0(&local_178,&local_188);
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = g_027024f8;
    if (g_027024f8 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar4;
    local_160 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
    uVar7 = (undefined7)((uint64_t)lVar4 >> 8);
    if (plVar9 == local_48) {
      uVar8 = local_34;
      if (((byte)local_50 & plVar9 != (int64_t *)0x0) == 1) {
        if (local_40 != '\0') goto LAB_00326ce7;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar7,1);
      }
LAB_00326d3e:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar9 != (int64_t *)0x0;
        uVar8 = (uint32_t)CONCAT71(uVar7,1);
        plVar9 = plVar10;
        if (((byte)local_34 & bVar11) == 1) {
          FUN_00d50b20();
        }
        goto LAB_00326d3e;
      }
      bVar11 = plVar9 != (int64_t *)0x0;
      plVar9 = plVar10;
      if (((byte)local_34 & bVar11) == 1) {
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
LAB_00326ce7:
      local_40 = '\0';
      uVar8 = (int)CONCAT71(uVar6,1);
    }
    local_34 = uVar8;
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    local_90 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_90 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    local_140 = '\0';
    local_148 = plVar9;
    local_98 = plVar1;
    FUN_00cbadd0(&local_148,&local_158);
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = g_02702500;
    if (g_02702500 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar4;
    local_130 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    uVar6 = (undefined7)((uint64_t)lVar4 >> 8);
    if (plVar9 == local_48) {
      plVar10 = plVar9;
      uVar8 = local_34;
      if (((char)local_34 == '\0') && (plVar9 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_00326eb5;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar6,1);
      }
LAB_00326f25:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar8 = (uint32_t)CONCAT71(uVar6,1);
        if (((char)local_34 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00326f25;
      }
      if (((char)local_34 != '\0') && (plVar9 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
LAB_00326eb5:
      local_40 = '\0';
      uVar8 = (int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    local_34 = uVar8;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    local_80 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_80 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    local_110 = '\0';
    local_118 = plVar10;
    local_88 = plVar1;
    FUN_00cbadd0(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    uVar5 = FUN_00e86210();
    local_108 = g_02702508;
    if (g_02702508 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_00c841b0();
    uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
    if (plVar10 == local_48) {
      uVar8 = local_34;
      plVar9 = plVar10;
      if (((char)local_34 == '\0') && (plVar10 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_0032708f;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar6,1);
      }
LAB_003270f4:
      local_50 = plVar9;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar8 = (uint32_t)CONCAT71(uVar6,1);
        plVar9 = local_50;
        if (((char)local_34 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar9 = local_50;
        }
        goto LAB_003270f4;
      }
      plVar9 = local_50;
      if (((char)local_34 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar9 = local_50;
      }
LAB_0032708f:
      local_50 = plVar9;
      local_40 = '\0';
      uVar8 = (uint32_t)CONCAT71(uVar6,1);
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_f8 = 0;
    local_f0 = '\0';
    local_e8 = local_50;
    local_e0 = '\0';
    local_78 = plVar1;
    FUN_00cbadd0(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0015e380();
    FUN_00e86210();
    local_d8 = g_02702510;
    if (g_02702510 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    plVar9 = local_50;
    cVar2 = (char)uVar8;
    if (local_50 == local_48) {
      plVar10 = plVar9;
      local_34 = uVar8;
      if ((cVar2 == '\0') && (local_50 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_00327255;
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        FUN_00d50b00();
      }
LAB_003272af:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar9 != (int64_t *)0x0)) {
          uVar5 = FUN_00d50b20();
          local_34 = (int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
        goto LAB_003272af;
      }
      if ((cVar2 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
LAB_00327255:
      local_40 = '\0';
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_60 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    local_b0 = '\0';
    local_b8 = plVar10;
    local_68 = plVar1;
    FUN_00cbadd0(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_003273a5:
  FUN_01a3d730();
  return;
}



// ============================================================
// 00336030
// ============================================================
// Function: FUN_00336030
// Address: 00336030
// Size: 2809 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00336030(uint64_t param_1,int param_2)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  int64_t lVar11;
  uint32_t uVar12;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_a0;
  char local_98;
  int64_t *local_88;
  char local_80 [8];
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  uint64_t local_50;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_88;
  while( true ) {
    (**(code **)(*this_ptr + 0x4a0))();
    iVar9 = *(int *)((int64_t)local_88 + 0xc);
    if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar9 == 0) break;
    (**(code **)(*this_ptr + 0x4a0))();
    FUN_00d23340();
    local_60 = local_80[0];
    pcVar5 = local_80;
    if (local_80[0] == '\0') {
      pcVar5 = &local_60;
    }
    *pcVar5 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_88 + 0x478))();
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar11 = g_02702940;
  if ((param_2 == 2) || (lVar11 = g_02702938, param_2 == 1)) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    uVar10 = CONCAT71((int7)((uint64_t)&local_40 >> 8),lVar11 != 0);
  }
  else {
    uVar10 = 0;
    lVar11 = 0;
  }
  FUN_000b6980();
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0009d720();
  if (local_80[0] == '\0') {
    if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    local_80[0] = '\0';
    local_88 = (int64_t *)0x0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    local_78 = (int64_t *)*arg1;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar9 = -local_70._4_4_;
        }
        else {
          iVar9 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar9);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar6 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar9) break;
      local_88 = *(int64_t **)(local_78[2] + 8 + lVar6 * 8);
      local_38 = '\0';
      local_40 = local_88;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        local_38 = '\0';
        local_40 = local_88;
        FUN_00d23f50();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
  }
  pcVar1 = g_02677e28;
  if (plVar3 != (int64_t *)0x0) {
    local_80[0] = '\0';
    local_88 = (int64_t *)0x0;
    local_78 = plVar3;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_50 = uVar10;
    while( true ) {
      lVar6 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar9) break;
      local_88 = *(int64_t **)(local_78[2] + 8 + lVar6 * 8);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar7 + 0x27) = 0;
      plVar7[0x2e] = 0;
      *(void*)(plVar7 + 0x2f) = 0;
      plVar7[0x30] = 0;
      *(void*)(plVar7 + 0x31) = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      *(void*)(plVar7 + 0x2a) = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      *(void*)((int64_t)plVar7 + 0x165) = 0;
      *(void*)((int64_t)plVar7 + 0x18c) = 0;
      *(void*)((int64_t)plVar7 + 0x194) = 0;
      *(void*)((int64_t)plVar7 + 0x199) = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      *plVar7 = (int64_t)&g_02677e10;
      plVar7[2] = (int64_t)&g_026788e8;
      plVar7[0x39] = (int64_t)&g_02678928;
      *(void*)((int64_t)plVar7 + 500) = 0;
      *(void*)(plVar7 + 0x3f) = 0;
      plVar7[0x43] = 0;
      plVar7[0x3c] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      *(void*)(plVar7 + 0x3e) = 0;
      *(void*)((int64_t)plVar7 + 0x1fc) = 0;
      *(void*)((int64_t)plVar7 + 0x204) = 0;
      *(void*)((int64_t)plVar7 + 0x20c) = 0;
      (*pcVar1)();
      lVar6 = g_02702948;
      if (g_02702948 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0xa10))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0xa80))();
      if (local_68 == 0 && (int)local_70 == 0) {
        FUN_01cef4c0();
      }
      else if ((int)local_70 == *(int *)((int64_t)local_78 + 0xc) + -1) {
        FUN_01cef4c0();
      }
      else {
        FUN_01cef4c0();
      }
      uVar12 = FUN_01e4ec80();
      plVar7 = g_02702950;
      if (g_02702950 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = plVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x450))();
      FUN_01e4ec80();
      uVar12 = FUN_00d46300();
      plVar7 = g_02702958;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          uVar12 = FUN_00d50b00();
          plVar7 = g_02702958;
        }
      }
      else {
        local_98 = '\0';
      }
      g_02702958 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar7;
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_01e4ec80();
      uVar12 = FUN_00d46300();
      plVar7 = g_02702960;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          uVar12 = FUN_00d50b00();
          plVar7 = g_02702960;
        }
      }
      else {
        local_98 = '\0';
      }
      g_02702960 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar7;
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01e4ec80();
      plVar7 = g_02702968;
      if (g_02702968 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = plVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_70._4_4_ != 0) {
        if (local_70 < 0) {
          iVar9 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
    }
    FUN_00018280();
    uVar10 = local_50;
  }
  FUN_003375f0();
  FUN_003372c0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar6 = g_02702970;
  if (g_02702970 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce70;
  local_110 = lVar6;
  local_108 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_000bf690(&local_100,&local_110,&local_f0);
  plVar7 = (int64_t *)this_ptr[0x32];
  plVar8 = plVar7;
  if (plVar7 == local_88) goto LAB_00336aad;
  plVar8 = local_88;
  if (local_80[0] == '\0') {
    if (local_88 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      goto LAB_00336a29;
    }
    FUN_00d50b00();
    plVar7 = (int64_t *)this_ptr[0x32];
    this_ptr[0x32] = (int64_t)local_88;
  }
  else {
    local_80[0] = '\0';
LAB_00336a29:
    this_ptr[0x32] = (int64_t)plVar8;
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar8 = local_88;
  }
LAB_00336aad:
  if ((local_80[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar10 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00327aa0
// ============================================================
// Function: FUN_00327aa0
// Address: 00327aa0
// Size: 2462 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00327aa0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  uint64_t uVar4;
  undefined7 extraout_var;
  undefined7 uVar5;
  uint32_t uVar6;
  undefined7 uVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  byte bVar10;
  int64_t *plVar11;
  bool bVar12;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  FUN_01a3ce90();
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_48 + 0x450))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') goto LAB_00328424;
  local_50 = lVar3;
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = g_027024f0;
  if (g_027024f0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  plVar8 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar10 = 1;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar4 = FUN_00d50b00();
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      bVar10 = 0;
      if ((local_40 == '\0') || (bVar10 = 0, local_48 == (int64_t *)0x0)) goto LAB_00327be8;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar10 = 0;
  }
LAB_00327be8:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_98 = 0;
  plVar9 = (int64_t *)(this_ptr + 0x138);
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  local_170 = plVar8;
  local_168 = '\0';
  local_a0 = plVar9;
  FUN_00cbad30(&local_170,&local_180,0xa0);
  if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = g_027024f8;
  if (g_027024f8 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar3;
  local_158 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
  uVar7 = (undefined7)((uint64_t)lVar3 >> 8);
  if (plVar8 == local_48) {
    uVar6 = local_34;
    if ((bool)(bVar10 & plVar8 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_00327d5f;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar7,1);
    }
LAB_00327dbd:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = plVar8 != (int64_t *)0x0;
      uVar6 = (uint32_t)CONCAT71(uVar7,1);
      plVar8 = plVar11;
      if (((byte)local_34 & bVar12) == 1) {
        FUN_00d50b20();
      }
      goto LAB_00327dbd;
    }
    bVar12 = plVar8 != (int64_t *)0x0;
    plVar8 = plVar11;
    if (((byte)local_34 & bVar12) == 1) {
      FUN_00d50b20();
      uVar5 = extraout_var;
    }
LAB_00327d5f:
    local_40 = '\0';
    uVar6 = (int)CONCAT71(uVar5,1);
  }
  local_34 = uVar6;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  local_138 = '\0';
  local_140 = plVar8;
  local_90 = plVar9;
  FUN_00cbad30(&local_140,&local_150,0xa0);
  if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = g_02702500;
  if (g_02702500 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((uint64_t)lVar3 >> 8);
  if (plVar8 == local_48) {
    plVar11 = plVar8;
    uVar6 = local_34;
    if (((char)local_34 == '\0') && (plVar8 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_00327f30;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar5,1);
    }
LAB_00327fa0:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar6 = (uint32_t)CONCAT71(uVar5,1);
      if (((char)local_34 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00327fa0;
    }
    if (((char)local_34 != '\0') && (plVar8 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
LAB_00327f30:
    local_40 = '\0';
    uVar6 = (int)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  local_34 = uVar6;
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  local_108 = '\0';
  local_110 = plVar11;
  local_80 = plVar9;
  FUN_00cbad30(&local_110,&local_120,0xa0);
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  local_100 = g_02702508;
  if (g_02702508 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar8 = local_48;
  if (plVar11 == local_48) {
    plVar8 = plVar11;
    if (((char)local_34 == '\0') && (plVar11 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_0032810a;
      local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      FUN_00d50b00();
    }
    else {
      local_38 = local_34;
    }
LAB_00328171:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if (((char)local_34 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00328171;
    }
    if (((char)local_34 != '\0') && (plVar11 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
LAB_0032810a:
    local_40 = '\0';
    local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  local_d8 = '\0';
  local_e0 = plVar8;
  local_70 = plVar9;
  FUN_00cbad30(&local_e0,&local_f0,0xa0);
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0015e380();
  FUN_00e86210();
  local_d0 = g_02702510;
  if (g_02702510 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
  if (plVar8 == local_48) {
    plVar11 = plVar8;
    if (((char)local_38 == '\0') && (plVar8 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_003282d3;
      local_34 = (uint32_t)CONCAT71(uVar5,1);
      local_38 = 0;
      FUN_00d50b00();
    }
    else {
      local_34 = local_38;
    }
LAB_00328334:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
      local_34 = (uint32_t)CONCAT71(uVar5,1);
      if (((char)local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
        local_38 = (uint32_t)CONCAT71(uVar5,1);
        uVar4 = FUN_00d50b20();
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      }
      goto LAB_00328334;
    }
    if (((char)local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
      local_38 = (uint32_t)CONCAT71(uVar5,1);
      uVar4 = FUN_00d50b20();
    }
LAB_003282d3:
    local_40 = '\0';
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_a8 = '\0';
  local_b0 = plVar11;
  local_60 = plVar9;
  FUN_00cbad30(&local_b0,&local_c0,0xa0);
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if (((char)local_34 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00328424:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00645c10
// ============================================================
// Function: FUN_00645c10
// Address: 00645c10
// Size: 2973 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


int64_t * FUN_00645c10(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t *plVar9;
  void*puVar10;
  char *pcVar11;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar12;
  uint32_t uVar13;
  int64_t *local_198;
  uint8_t local_190;
  void*local_188;
  int64_t local_170;
  uint8_t local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  void*local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar9 + 0x18))();
  lVar1 = *(int64_t *)(arg1 + 0xe8);
  *(int64_t **)(arg1 + 0xe8) = plVar9;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(void*)(puVar10 + 6) = 0;
  *puVar10 = &g_02516280;
  (*g_02516298)();
  local_140 = '\x01';
  local_148 = puVar10;
  FUN_006c5420();
  if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02725950;
  if (g_02725950 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar1;
  local_130 = '\x01';
  FUN_003b6200();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(arg1 + 0xe8) + 0x558))();
  uVar13 = (**(code **)(**(int64_t **)(arg1 + 0xe8) + 0x990))();
  plVar9 = *(int64_t **)(arg1 + 0x170);
  local_f0 = 0;
  local_f8 = *(int64_t *)(arg1 + 0xe8);
  if (local_f8 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  (**(code **)(*plVar9 + 0x9e0))(uVar13,0);
  local_188 = param_2;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)FUN_00018320();
  (**(code **)(*plVar9 + 0x18))();
  local_150 = plVar9;
  FUN_00176c40();
  (**(code **)(*local_40 + 0x918))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x928))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x990))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  plVar9 = local_40;
  FUN_01f27fe0();
  (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x450))();
  (**(code **)(*plVar9 + 0x998))();
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x558))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = *(int64_t **)(arg1 + 0xe8);
  FUN_00176c40();
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  (**(code **)(*plVar9 + 0x450))();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02725958;
  if (g_02725958 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_02725960;
  local_128 = lVar1;
  local_120 = '\x01';
  if (g_02725960 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar5;
  local_110 = '\x01';
  pplVar12 = &local_40;
  FUN_00176e40(&local_118,&local_128);
  plVar9 = local_40;
  if ((g_026f7020 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_0270aa58 = FUN_00015ff0();
    g_0270aa40 = "MDEditorViewController";
    g_0270aa48 = 0x1e8;
    g_0270aa50 = FUN_00074eb0;
    g_0270aa60 = 0;
    ram_000000000270aa68 = 0;
    g_0270aa70 = 0;
    g_0270aae8 = 0;
    ram_000000000270aaf0 = 0;
    g_0270aaf8 = 0;
    g_0270aafa = 1;
    g_0270aa78 = 0;
    ram_000000000270aa80 = 0;
    g_0270aa88 = 0;
    ram_000000000270aa90 = 0;
    g_0270aa98 = 0;
    ram_000000000270aaa0 = 0;
    g_0270aaa8 = 0;
    ram_000000000270aab0 = 0;
    g_0270aab8 = 0;
    ram_000000000270aac0 = 0;
    g_0270aac8 = 0;
    ram_000000000270aad0 = 0;
    g_0270aad8 = 0;
    ram_000000000270aae0 = 0;
    g_0270ab03 = 0;
    g_0270aafb = 0;
    ___cxa_guard_release();
  }
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 != '\0') goto LAB_00646030;
  }
  pplVar12 = (int64_t **)&g_02802688;
LAB_00646030:
  plVar9 = *pplVar12;
  if (plVar9 == (int64_t *)0x0) {
    bVar4 = false;
    bVar3 = false;
    plVar9 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar12 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    bVar4 = true;
    bVar3 = true;
  }
  if ((local_38[0] != '\0') && (bVar3 = bVar4, local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar7 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    FUN_002539d0();
    plVar2 = local_40;
    local_e0 = 0;
    local_e8 = *(int64_t *)(arg1 + 0xe8);
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    (**(code **)(*plVar2 + 0x4c8))((int)g_023dccec,g_023dccf4);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(arg1 + 0xe8);
    FUN_002539d0();
    uVar13 = FUN_01e53c20();
    plVar6 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    (**(code **)(*plVar2 + 0x9e8))(uVar13,0);
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  plVar2 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = *(int64_t **)(arg1 + 0xd8);
    local_d0 = 0;
    lVar1 = *(int64_t *)(arg1 + 0xe0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar1;
    (**(code **)(*plVar2 + 0x450))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_006c4ec0();
  }
  FUN_00d23310();
  plVar2 = local_40;
  local_48[0] = local_38[0];
  pcVar11 = local_48;
  if (local_38[0] != '\0') {
    pcVar11 = local_38;
  }
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  FUN_00756eb0();
  lVar1 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00226060();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar2 = local_40;
  pcVar11 = local_38;
  if (local_38[0] == '\0') {
    pcVar11 = &local_58;
  }
  local_58 = local_38[0];
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_150;
  if ((local_58 == '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00221970();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar13 = (**(code **)(*(int64_t *)*local_188 + 0x628))();
  lVar1 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_168 = 1;
  local_170 = lVar1;
  FUN_00642e80(uVar13,&local_170);
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_002358e0();
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  local_40 = plVar9;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x630))();
  FUN_006c4ec0();
  local_108 = g_02725968;
  if (g_02725968 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  uVar13 = FUN_00179040();
  if ((local_100 != '\0') && (local_108 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  local_198 = plVar2;
  local_190 = 0;
  FUN_0063ffb0(uVar13,&local_198);
  FUN_00223a60();
  plVar6 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  FUN_006c6160();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar3 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar9;
  *(void*)(this_ptr + 1) = 1;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00333b00
// ============================================================
// Function: FUN_00333b00
// Address: 00333b00
// Size: 2152 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00333b00(void)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  char *pcVar11;
  uint32_t uVar12;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  FUN_003322a0();
  if ((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_50 = local_78;
  FUN_01e561b0();
  FUN_01d8b220();
  local_e0 = (int64_t *)CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (local_e0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_38[0] = '\0';
  local_a8 = local_e0;
  do {
    plVar8 = local_e0;
    (**(code **)(*local_e0 + 0x370))();
    if (local_78 == plVar8) {
      if (((local_38[0] == '\0') && (local_78 != (int64_t *)0x0)) && (local_70[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00333c07;
      }
    }
    else {
      local_e0 = local_78;
      plVar8 = local_78;
      if (local_70[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00333c07:
        local_38[0] = '\x01';
        pcVar2 = local_70;
      }
      *pcVar2 = '\0';
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar6 = &local_e0;
      if (cVar1 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      if ((local_38[0] == '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar8 = local_50;
      plVar10 = local_e0;
      if (local_a8 == (int64_t *)0x0) goto LAB_00333da3;
      goto LAB_00333d9e;
    }
    if (local_e0 == (int64_t *)0x0) {
      plVar8 = local_50;
      plVar10 = (int64_t *)0x0;
      if (local_a8 != (int64_t *)0x0) {
LAB_00333d9e:
        plVar8 = local_50;
        FUN_00d50b20();
      }
LAB_00333da3:
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xd0) != 0) {
        local_70[0] = '\0';
        local_78 = (int64_t *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *(int64_t *)(this_ptr + 0xd0);
        while( true ) {
          lVar3 = (int64_t)(int)local_60;
          iVar7 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar7);
          if (*(int *)(local_68 + 0xc) <= iVar7) break;
          local_78 = *(int64_t **)(*(int64_t *)(local_68 + 0x10) + 8 + lVar3 * 8);
          if (plVar10 == (int64_t *)0x0) {
            (**(code **)(*local_78 + 0x670))();
          }
          else {
            FUN_0021a630();
            local_98 = 0;
            local_a0 = CONCAT71(uStack_47,local_48);
            if (local_40 == '\0') {
              if (local_a0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            plVar8 = local_50;
            local_98 = '\x01';
            (**(code **)(*local_78 + 0x670))();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*local_78 + 0x620))();
          (**(code **)(*local_78 + 0x678))();
          if (local_60._4_4_ != 0) {
            if (local_60 < 0) {
              iVar7 = -local_60._4_4_;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar7 = 0;
            }
            local_60 = CONCAT44(iVar7,(int)local_60);
          }
        }
        FUN_003357b0();
      }
      if ((plVar8 != (int64_t *)0x0) && (*(int *)((int64_t)local_50 + 0xc) != 0)) {
        FUN_00d23310();
        pcVar2 = &local_48;
        if (local_70[0] != '\0') {
          pcVar2 = local_70;
        }
        local_48 = local_70[0];
        *pcVar2 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar2);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar3 = FUN_00e8b990();
        if ((local_48 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_c0 = 0;
          if (this_ptr != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_02702608;
          local_c0 = '\x01';
          local_c8 = this_ptr;
          if (g_02702608 != 0) {
            FUN_00d50b00();
          }
          local_110 = lVar3;
          local_108 = '\x01';
          FUN_00d23310();
          pcVar2 = &local_d8;
          pcVar11 = local_70;
          if (local_70[0] == '\0') {
            pcVar11 = pcVar2;
          }
          local_d8 = local_70[0];
          *pcVar11 = '\0';
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((void*)pcVar2);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = FUN_00e8b990();
          local_b0 = 0;
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
          local_b0 = '\x01';
          FUN_0006e1c0();
          uVar12 = FUN_00e86210();
          local_100 = g_026d83e0;
          if (g_026d83e0 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_00c841b0(uVar12,&local_100);
          local_88 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_88 = '\x01';
          local_90 = local_78;
          local_e8 = '\0';
          local_f0 = 0;
          FUN_000bfbc0(&local_b8,&local_110,0xa0,&local_90);
          lVar3 = *(int64_t *)(this_ptr + 0x128);
          lVar5 = CONCAT71(uStack_47,local_48);
          lVar9 = lVar3;
          if (lVar3 != lVar5) {
            if (local_40 == '\0') {
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                FUN_00d50b00();
                lVar5 = CONCAT71(uStack_47,local_48);
                lVar3 = *(int64_t *)(this_ptr + 0x128);
              }
            }
            else {
              local_40 = '\0';
            }
            *(int64_t *)(this_ptr + 0x128) = lVar5;
            lVar9 = lVar5;
            if (lVar3 != 0) {
              FUN_00d50b20();
              lVar9 = CONCAT71(uStack_47,local_48);
            }
          }
          if ((local_40 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      *(void*)(this_ptr + 0x139) = 0;
      *(bool *)(this_ptr + 0x138) = *(int64_t *)(this_ptr + 0x128) != 0;
      FUN_0032d440();
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}



// ============================================================
// 007eca30
// ============================================================
// Function: FUN_007eca30
// Address: 007eca30
// Size: 2166 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_007eca30(void)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  char *pcVar11;
  uint32_t uVar12;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  FUN_007ec8d0();
  if ((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_50 = local_78;
  FUN_01e561b0();
  FUN_01d8b220();
  local_e0 = (int64_t *)CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (local_e0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_38[0] = '\0';
  local_a8 = local_e0;
  do {
    plVar8 = local_e0;
    (**(code **)(*local_e0 + 0x370))();
    if (local_78 == plVar8) {
      if (((local_38[0] == '\0') && (local_78 != (int64_t *)0x0)) && (local_70[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_007ecb37;
      }
    }
    else {
      local_e0 = local_78;
      plVar8 = local_78;
      if (local_70[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_007ecb37:
        local_38[0] = '\x01';
        pcVar2 = local_70;
      }
      *pcVar2 = '\0';
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar6 = &local_e0;
      if (cVar1 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      if ((local_38[0] == '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar8 = local_50;
      plVar10 = local_e0;
      if (local_a8 == (int64_t *)0x0) goto LAB_007eccd3;
      goto LAB_007eccce;
    }
    if (local_e0 == (int64_t *)0x0) {
      plVar8 = local_50;
      plVar10 = (int64_t *)0x0;
      if (local_a8 != (int64_t *)0x0) {
LAB_007eccce:
        plVar8 = local_50;
        FUN_00d50b20();
      }
LAB_007eccd3:
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xd0) != 0) {
        local_70[0] = '\0';
        local_78 = (int64_t *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *(int64_t *)(this_ptr + 0xd0);
        while( true ) {
          lVar3 = (int64_t)(int)local_60;
          iVar7 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar7);
          if (*(int *)(local_68 + 0xc) <= iVar7) break;
          local_78 = *(int64_t **)(*(int64_t *)(local_68 + 0x10) + 8 + lVar3 * 8);
          if (plVar10 == (int64_t *)0x0) {
            (**(code **)(*local_78 + 0x670))();
          }
          else {
            FUN_0021a630();
            local_98 = 0;
            local_a0 = CONCAT71(uStack_47,local_48);
            if (local_40 == '\0') {
              if (local_a0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            plVar8 = local_50;
            local_98 = '\x01';
            (**(code **)(*local_78 + 0x670))();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*local_78 + 0x620))();
          (**(code **)(*local_78 + 0x678))();
          if (local_60._4_4_ != 0) {
            if (local_60 < 0) {
              iVar7 = -local_60._4_4_;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar7 = 0;
            }
            local_60 = CONCAT44(iVar7,(int)local_60);
          }
        }
        FUN_003357b0();
      }
      if (*(int64_t *)(this_ptr + 0xf0) != 0) {
        *(void*)(this_ptr + 0xf0) = 0;
        FUN_00d50b20();
      }
      if ((plVar8 != (int64_t *)0x0) && (*(int *)((int64_t)local_50 + 0xc) != 0)) {
        FUN_00d23310();
        pcVar2 = &local_48;
        if (local_70[0] != '\0') {
          pcVar2 = local_70;
        }
        local_48 = local_70[0];
        *pcVar2 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar2);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar3 = FUN_00e8b990();
        if ((local_48 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_c0 = 0;
          FUN_00d50b00();
          local_110 = g_0272f6d0;
          local_c0 = '\x01';
          local_c8 = this_ptr;
          if (g_0272f6d0 != 0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          FUN_00d23310();
          pcVar2 = &local_d8;
          pcVar11 = local_70;
          if (local_70[0] == '\0') {
            pcVar11 = pcVar2;
          }
          local_d8 = local_70[0];
          *pcVar11 = '\0';
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((void*)pcVar2);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = FUN_00e8b990();
          local_b0 = 0;
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
          local_b0 = '\x01';
          FUN_007eece0();
          uVar12 = FUN_00e86210();
          local_100 = g_0272f6d8;
          if (g_0272f6d8 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_00c841b0(uVar12,&local_100);
          local_88 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_88 = '\x01';
          local_90 = local_78;
          local_e8 = '\0';
          local_f0 = 0;
          FUN_000bfbc0(&local_b8,&local_110,0xa0,&local_90);
          lVar3 = *(int64_t *)(this_ptr + 0xf0);
          lVar5 = CONCAT71(uStack_47,local_48);
          lVar9 = lVar3;
          if (lVar3 != lVar5) {
            if (local_40 == '\0') {
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                FUN_00d50b00();
                lVar5 = CONCAT71(uStack_47,local_48);
                lVar3 = *(int64_t *)(this_ptr + 0xf0);
              }
            }
            else {
              local_40 = '\0';
            }
            *(int64_t *)(this_ptr + 0xf0) = lVar5;
            lVar9 = lVar5;
            if (lVar3 != 0) {
              FUN_00d50b20();
              lVar9 = CONCAT71(uStack_47,local_48);
            }
          }
          if ((local_40 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      *(void*)(this_ptr + 0xf8) = 1;
      FUN_007ebe20();
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}



// ============================================================
// 0039ab20
// ============================================================
// Function: FUN_0039ab20
// Address: 0039ab20
// Size: 2564 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0039ab20(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  bool bVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_d0 = *param_2;
  local_c8 = '\0';
  FUN_01d61e70(param_1,&local_d0);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = g_026e1810;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((uVar10 = FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    uVar10 = FUN_00d50b20();
  }
  bVar4 = (byte)(((int64_t)dVar9 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar7;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  lVar6 = local_40;
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
  if (lVar6 != 0) {
    local_38 = '\0';
    local_40 = lVar6;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar10 = FUN_00d50b20();
  if (lVar7 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar7 = g_026de830;
  if ((lVar6 != 0 & bVar4) == 0) {
    if (g_026de830 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = lVar7;
    local_b8 = '\x01';
    uVar10 = FUN_01d5e6e0(uVar10,&local_c0);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar8 = true;
      lVar7 = 0;
      bVar1 = false;
    }
    else {
      if (local_38 == '\0') {
        uVar10 = FUN_00d50b00();
        bVar1 = true;
        bVar8 = false;
        if ((local_38 == '\0') || (bVar8 = false, local_40 == 0)) goto LAB_0039adce;
        uVar10 = FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = true;
      bVar8 = false;
    }
LAB_0039adce:
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (!bVar8) {
      uVar10 = FUN_01d66e50();
    }
    lVar6 = g_026fb858;
    if (g_026fb858 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_b0 = lVar6;
    local_a8 = '\x01';
    uVar10 = FUN_01d5e6e0(uVar10,&local_b0);
    lVar6 = local_40;
    if (local_40 == lVar7) {
      lVar6 = lVar7;
      if ((bool)(bVar8 & local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0039ae6e;
        bVar1 = true;
        uVar10 = FUN_00d50b00();
      }
LAB_0039aec5:
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
        }
        bVar8 = (bool)(bVar1 & lVar7 != 0);
        bVar1 = true;
        if (bVar8) {
          uVar10 = FUN_00d50b20();
        }
        goto LAB_0039aec5;
      }
      bVar8 = lVar7 != 0;
      lVar7 = lVar6;
      if ((bool)(bVar1 & bVar8)) {
        uVar10 = FUN_00d50b20();
      }
LAB_0039ae6e:
      local_38 = '\0';
      bVar1 = true;
      lVar6 = lVar7;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (lVar6 != 0) {
      uVar10 = FUN_01d66e50();
    }
    lVar7 = g_026fb860;
    if (g_026fb860 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a0 = lVar7;
    local_98 = '\x01';
    uVar10 = FUN_01d5e6e0(uVar10,&local_a0);
    lVar7 = local_40;
    if (local_40 == lVar6) {
      lVar7 = lVar6;
      bVar8 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0039af79;
        uVar10 = FUN_00d50b00();
        bVar8 = true;
      }
LAB_0039affb:
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
        }
        bVar8 = true;
        if ((bVar1) && (lVar6 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        goto LAB_0039affb;
      }
      if ((bVar1) && (lVar6 != 0)) {
        uVar10 = FUN_00d50b20();
      }
LAB_0039af79:
      local_38 = '\0';
      bVar8 = true;
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (lVar7 != 0) {
      uVar10 = FUN_01d66e50();
    }
    lVar6 = g_026deb68;
    if (g_026deb68 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar6;
    local_88 = '\x01';
    FUN_01d5e6e0(uVar10,&local_90);
    lVar6 = local_40;
    if (local_40 == lVar7) {
      lVar6 = lVar7;
      bVar1 = bVar8;
      if ((!bVar8) && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0039b0ac;
        FUN_00d50b00();
        bVar1 = true;
      }
LAB_0039b11e:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar8) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0039b11e;
      }
      if ((bVar8) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_0039b0ac:
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((lVar6 != 0) && (FUN_01d66e50(), bVar1)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_02708e90;
  if (g_02708e90 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar4 = (byte)(((int64_t)dVar9 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar7;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  lVar6 = local_40;
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
  if (lVar6 != 0) {
    local_38 = '\0';
    local_40 = lVar6;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar10 = FUN_00d50b20();
  if (lVar7 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_02704db0;
  lVar7 = g_026fb8b0;
  if ((lVar6 != 0 & bVar4) == 0) {
    if (g_026fb8b0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_60 = lVar7;
    local_58 = '\x01';
    FUN_01d5e6e0(uVar10,&local_60);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar8 = true;
      lVar7 = 0;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar8 = false;
        if ((local_38 == '\0') || (local_40 == 0)) goto LAB_0039b442;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar8 = false;
    }
LAB_0039b442:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar8) {
      FUN_01d66e50();
    }
    if (!bVar8 && lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0039b504;
  }
  if (g_02704db0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  uVar10 = FUN_01d5e6e0(uVar10,&local_80);
  lVar7 = local_40;
  if (local_40 == 0) {
    bVar8 = true;
    lVar7 = 0;
    bVar1 = false;
  }
  else {
    if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      bVar1 = true;
      bVar8 = false;
      if ((local_38 == '\0') || (bVar8 = false, local_40 == 0)) goto LAB_0039b376;
      uVar10 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = true;
    bVar8 = false;
  }
LAB_0039b376:
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (!bVar8) {
    uVar10 = FUN_01d66e50();
  }
  lVar6 = g_026fb898;
  if (g_026fb898 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_70 = lVar6;
  local_68 = '\x01';
  FUN_01d5e6e0(uVar10,&local_70);
  lVar6 = local_40;
  if (local_40 == lVar7) {
    lVar6 = lVar7;
    if ((bool)(bVar8 & local_40 != 0)) {
      if (local_38 != '\0') goto LAB_0039b413;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_0039b4bf:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar8 = (bool)(bVar1 & lVar7 != 0);
      bVar1 = true;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_0039b4bf;
    }
    bVar8 = lVar7 != 0;
    lVar7 = local_40;
    if ((bool)(bVar1 & bVar8)) {
      FUN_00d50b20();
    }
LAB_0039b413:
    local_38 = '\0';
    bVar1 = true;
    lVar6 = lVar7;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar6 != 0) && (FUN_01d66e50(), bVar1)) {
    FUN_00d50b20();
  }
LAB_0039b504:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0033fef0
// ============================================================
// Function: FUN_0033fef0
// Address: 0033fef0
// Size: 2201 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0033fef0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *this_ptr;
  int64_t **pplVar10;
  int64_t *plVar11;
  uint32_t uVar12;
  float fVar13;
  float fVar14;
  uint32_t extraout_XMM0_Da;
  int64_t in_stack_ffffffffffffff80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_49;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_019383e0();
  FUN_00d6f370();
  lVar1 = g_02702d40;
  if (g_02702d40 != 0) {
    FUN_00d50b00();
  }
  FUN_01bfdcc0(g_02390124);
  uVar12 = FUN_00d70af0();
  local_60 = (int64_t *)CONCAT44(local_60._4_4_,uVar12);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar13 = (float)FUN_013c8a60();
  fVar14 = local_60._0_4_;
  if (g_02390124 < fVar13 * local_60._0_4_) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar14 = (float)FUN_013c8a60();
    fVar14 = g_02390124 / fVar14;
  }
  local_60 = (int64_t *)CONCAT44(local_60._4_4_,fVar14);
  (**(code **)(&g_00001790 + *this_ptr))();
  (**(code **)(&g_000017a0 + *this_ptr))(local_60._0_4_);
  plVar9 = (int64_t *)this_ptr[0xaa];
  if ((g_0271a0b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0272a1e8 = FUN_000914a0();
    g_0272a1d0 = "MDEditorView";
    g_0272a1d8 = 0x560;
    param_1 = 0x34df50;
    g_0272a1e0 = FUN_0034df50;
    g_0272a1f0 = 0;
    ram_000000000272a1f8 = 0;
    g_0272a200 = 0;
    g_0272a278 = 0;
    ram_000000000272a280 = 0;
    g_0272a288 = 0;
    g_0272a28a = 1;
    g_0272a208 = 0;
    ram_000000000272a210 = 0;
    g_0272a218 = 0;
    ram_000000000272a220 = 0;
    g_0272a228 = 0;
    ram_000000000272a230 = 0;
    g_0272a238 = 0;
    ram_000000000272a240 = 0;
    g_0272a248 = 0;
    ram_000000000272a250 = 0;
    g_0272a258 = 0;
    ram_000000000272a260 = 0;
    g_0272a268 = 0;
    ram_000000000272a270 = 0;
    g_0272a293 = 0;
    g_0272a28b = 0;
    ___cxa_guard_release();
  }
  plVar11 = g_02802688;
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar11 = g_02802688;
    if (cVar3 != '\0') {
      plVar11 = (int64_t *)this_ptr[0xaa];
    }
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(&UNK_00001670 + *plVar11))();
  local_60 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_000bda90();
  FUN_000bda90();
  pplVar10 = &local_70;
  uVar12 = FUN_00108380();
  plVar9 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_00108e20(uVar12,0);
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x970))();
  FUN_0197c0e0();
  plVar9 = local_48;
  local_70 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
      local_68 = '\x01';
      plVar9 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_68 = '\x01';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = '\x01';
    local_40[0] = '\0';
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) goto LAB_00340606;
  FUN_00275460();
  if (plVar9 == (int64_t *)0x0) {
LAB_00340275:
    pplVar10 = &g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00340275;
  }
  plVar9 = *pplVar10;
  local_49 = *(char *)(pplVar10 + 1);
  if ((local_49 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x970))();
  plVar2 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar9 != (int64_t *)0x0) && (plVar2 != (int64_t *)0x0)) {
    local_58 = plVar11;
    iVar4 = FUN_01b18580();
    FUN_00d50b00();
    local_38[0] = '\0';
    do {
      (**(code **)(*this_ptr + 0x370))();
      plVar11 = local_48;
      if (local_48 == this_ptr) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00340387;
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          this_ptr = plVar11;
LAB_00340387:
          local_38[0] = '\x01';
          pcVar7 = local_40;
          plVar11 = this_ptr;
        }
        *pcVar7 = '\0';
        this_ptr = plVar11;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar8 = (int64_t *)&g_02802688;
      if (this_ptr != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar8 = (int64_t *)&stack0xffffffffffffff80;
        if (cVar3 == '\0') {
          plVar8 = (int64_t *)&g_02802688;
        }
      }
      if (*plVar8 != 0) {
        if ((local_38[0] == '\0') && (this_ptr != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_0034054d;
      }
    } while (this_ptr != (int64_t *)0x0);
    this_ptr = (int64_t *)0x0;
LAB_0034054d:
    plVar11 = local_58;
    param_1 = (void*)plVar8;
    uVar12 = FUN_00d50b20();
    iVar5 = 0;
    if (this_ptr != (int64_t *)0x0) {
      uVar12 = FUN_00227020();
      plVar8 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00227020();
        iVar5 = FUN_00440c80();
        uVar12 = extraout_XMM0_Da;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
      }
    }
    if (iVar4 != iVar5) {
      FUN_00502230(uVar12,iVar5);
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_49 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00340606:
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1f10();
  FUN_00db3760();
  plVar9 = local_60;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004b2010
// ============================================================
// Function: FUN_004b2010
// Address: 004b2010
// Size: 1689 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_004b2010(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
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
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a68ad0();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_004b2190;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
LAB_004b2190:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar10 = arg1;
  do {
    (**(code **)(*plVar10 + 0x370))();
    if (local_48 == plVar10) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0'))
      goto LAB_004b20f7;
    }
    else {
      plVar10 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_004b20f7:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar8 = &g_02802688;
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar5 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar10 != (int64_t *)0x0);
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (int64_t *)0x0) && (cVar5 = FUN_00751ba0(), cVar5 != '\0')) {
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = arg1;
    do {
      (**(code **)(*plVar8 + 0x370))();
      if (local_48 == plVar8) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_004b2267;
        }
      }
      else {
        plVar8 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_004b2267:
          local_38[0] = '\x01';
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar9 = &g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = (int64_t *)&stack0xffffffffffffff98;
        if (cVar5 == '\0') {
          plVar9 = &g_02802688;
        }
      }
      if (*plVar9 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto joined_r0x004b23e2;
      }
    } while (plVar8 != (int64_t *)0x0);
    plVar8 = (int64_t *)0x0;
joined_r0x004b23e2:
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar11 = FUN_0027c9f0();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar11 = FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        goto LAB_004b243f;
      }
LAB_004b25f0:
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    else {
      if (local_48 == (int64_t *)0x0) goto LAB_004b25f0;
LAB_004b243f:
      lVar4 = g_02708ef0;
      if (g_02708ef0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = '\x01';
      uVar11 = FUN_01d5e6e0(uVar11,&local_b8);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      lVar4 = g_027e2670;
      if (g_027e2670 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      FUN_01d5e6e0(uVar11,&local_a8);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
        FUN_01d66e50();
        local_90 = '\0';
        local_88 = local_48;
        local_80 = '\0';
        local_98 = local_48;
        uVar11 = FUN_01d5e2e0();
        FUN_01d5d7f0(extraout_XMM0_Da,uVar11);
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar8;
        FUN_01d651e0();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_004b2621;
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  bVar3 = false;
LAB_004b2621:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 0079e760
// ============================================================
// Function: FUN_0079e760
// Address: 0079e760
// Size: 1689 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_0079e760(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
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
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01b92cc0();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_0079e8e0;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
LAB_0079e8e0:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar10 = arg1;
  do {
    (**(code **)(*plVar10 + 0x370))();
    if (local_48 == plVar10) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0'))
      goto LAB_0079e847;
    }
    else {
      plVar10 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_0079e847:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar8 = &g_02802688;
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar5 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar10 != (int64_t *)0x0);
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (int64_t *)0x0) && (cVar5 = FUN_00751ba0(), cVar5 != '\0')) {
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = arg1;
    do {
      (**(code **)(*plVar8 + 0x370))();
      if (local_48 == plVar8) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_0079e9b7;
        }
      }
      else {
        plVar8 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_0079e9b7:
          local_38[0] = '\x01';
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar9 = &g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = (int64_t *)&stack0xffffffffffffff98;
        if (cVar5 == '\0') {
          plVar9 = &g_02802688;
        }
      }
      if (*plVar9 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto joined_r0x0079eb32;
      }
    } while (plVar8 != (int64_t *)0x0);
    plVar8 = (int64_t *)0x0;
joined_r0x0079eb32:
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar11 = FUN_0027c9f0();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar11 = FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        goto LAB_0079eb8f;
      }
LAB_0079ed40:
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    else {
      if (local_48 == (int64_t *)0x0) goto LAB_0079ed40;
LAB_0079eb8f:
      lVar4 = g_026fb8f8;
      if (g_026fb8f8 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = '\x01';
      uVar11 = FUN_01d5e6e0(uVar11,&local_b8);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      lVar4 = g_0272a6a8;
      if (g_0272a6a8 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      FUN_01d5e6e0(uVar11,&local_a8);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
        FUN_01d66e50();
        local_90 = '\0';
        local_88 = local_48;
        local_80 = '\0';
        local_98 = local_48;
        uVar11 = FUN_01d5e2e0();
        FUN_01d5d7f0(extraout_XMM0_Da,uVar11);
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar8;
        FUN_01d651e0();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0079ed71;
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  bVar3 = false;
LAB_0079ed71:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 0064e9c0
// ============================================================
// Function: FUN_0064e9c0
// Address: 0064e9c0
// Size: 2081 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0064e9c0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_e8;
  char local_e0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  lVar1 = *(int64_t *)(arg1 + 0x80);
  local_68 = param_2;
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_0053a480();
    if (local_40 == 0) {
      bVar2 = false;
    }
    else {
      FUN_0053a480();
      bVar2 = 0 < *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_0053a480();
      FUN_00d23310();
      lVar7 = local_40;
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar6 = &local_78;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_78 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (lVar7 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_0064ebab;
      FUN_004f9670();
      lVar7 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        local_60 = 0;
        lVar7 = 0;
      }
      else {
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_004fae50();
        lVar7 = local_40;
        if (local_40 == 0) {
          lVar7 = 0;
          local_60 = 0;
        }
        else if (local_38[0] == '\0') {
          uVar5 = FUN_00d50b00();
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (lVar7 != 0) goto LAB_0064f19c;
    }
    else {
LAB_0064ebab:
      local_60 = 0;
    }
    FUN_0053a050();
    if (local_40 == 0) {
      bVar2 = false;
    }
    else {
      FUN_0053a050();
      bVar2 = 0 < *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_0053a050();
      FUN_00d23310();
      lVar7 = local_40;
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar6 = local_48;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_48[0] = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar3 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_004f9670();
        lVar7 = local_40;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_004f9670();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_004fae50();
          lVar7 = local_40;
          if (local_40 == 0) {
            lVar7 = 0;
          }
          else if (local_38[0] == '\0') {
            uVar5 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (lVar7 != 0) goto LAB_0064f19c;
      }
    }
  }
  if (*local_68 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01653bd0();
    lVar7 = local_40;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar7 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_004f9670();
        lVar7 = local_40;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_004f9670();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_004fae50();
          lVar7 = local_40;
          if (local_40 == 0) {
            lVar7 = 0;
          }
          else if (local_38[0] == '\0') {
            uVar5 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_0064f19c;
      }
    }
  }
  lVar7 = 0;
LAB_0064f19c:
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_60 == '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00340ca0
// ============================================================
// Function: FUN_00340ca0
// Address: 00340ca0
// Size: 1638 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00340ca0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  char *pcVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  uint32_t extraout_XMM0_Da;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(&UNK_000018a0 + *this_ptr))();
  (**(code **)(&UNK_000018b0 + *this_ptr))();
  (**(code **)(*this_ptr + 0x970))();
  pplVar10 = &local_48;
  FUN_0197c0e0();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00340d24;
  }
  pplVar10 = &g_02802688;
LAB_00340d24:
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x970))();
  plVar3 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  local_58 = this_ptr;
  do {
    plVar9 = local_58;
    (**(code **)(*local_58 + 0x370))();
    plVar8 = local_48;
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        plVar8 = plVar9;
        goto LAB_00340e37;
      }
    }
    else {
      local_58 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00340e37:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      plVar9 = plVar8;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    pplVar10 = &g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar10 = &local_58;
      if (cVar4 == '\0') {
        pplVar10 = &g_02802688;
      }
    }
    plVar9 = local_58;
    if (*pplVar10 != (int64_t *)0x0) {
      if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00340fb0;
    }
    if (local_58 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
LAB_00340fb0:
      FUN_00d50b20();
      if ((plVar1 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
        if (plVar9 != (int64_t *)0x0) {
          FUN_00227020();
          plVar8 = local_48;
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00227020();
            (**(code **)(&g_000015c0 + *this_ptr))();
            FUN_00440ba0();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar5 = (**(code **)(&g_000015c0 + *this_ptr))();
        *(void*)(this_ptr + 0xc2) = uVar5;
        iVar6 = (**(code **)(&g_000015c0 + *(int64_t *)this_ptr[0xaa]))();
        *(int *)((int64_t)this_ptr + 0x614) = iVar6;
        if ((int)this_ptr[0xc2] != iVar6) {
          FUN_00502230(extraout_XMM0_Da,iVar6);
        }
      }
      plVar8 = (int64_t *)this_ptr[0xaa];
      if ((g_0271a0b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_0272a1e8 = FUN_000914a0();
        g_0272a1d0 = "MDEditorView";
        g_0272a1d8 = 0x560;
        g_0272a1e0 = FUN_0034df50;
        g_0272a1f0 = 0;
        ram_000000000272a1f8 = 0;
        g_0272a200 = 0;
        g_0272a278 = 0;
        ram_000000000272a280 = 0;
        g_0272a288 = 0;
        g_0272a28a = 1;
        g_0272a208 = 0;
        ram_000000000272a210 = 0;
        g_0272a218 = 0;
        ram_000000000272a220 = 0;
        g_0272a228 = 0;
        ram_000000000272a230 = 0;
        g_0272a238 = 0;
        ram_000000000272a240 = 0;
        g_0272a248 = 0;
        ram_000000000272a250 = 0;
        g_0272a258 = 0;
        ram_000000000272a260 = 0;
        g_0272a268 = 0;
        ram_000000000272a270 = 0;
        g_0272a293 = 0;
        g_0272a28b = 0;
        ___cxa_guard_release();
      }
      plVar2 = g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar2 = g_02802688;
        if (cVar4 != '\0') {
          plVar2 = (int64_t *)this_ptr[0xaa];
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_00001670 + *plVar2))();
      plVar8 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_000bda90();
      FUN_00108380();
      plVar2 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0193a890();
      uVar5 = FUN_000bda90();
      FUN_00108e20(uVar5,1);
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar8 + 0x3c8))();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}



// ============================================================
// 00161780
// ============================================================
// Function: FUN_00161780
// Address: 00161780
// Size: 1389 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00161780(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  void* pVar6;
  int64_t **pplVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  char *pcVar10;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x9a0))();
  if ((cVar2 != '\0') && (param_2 != '\0')) {
    FUN_001616e0();
    iVar3 = *(int *)((int64_t)local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar3 != 0) {
      FUN_01e561b0();
      FUN_01d8b220();
      local_88 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = '\0';
      local_48 = local_88;
      do {
        plVar9 = local_88;
        (**(code **)(*local_88 + 0x370))();
        plVar8 = local_58;
        if (local_58 == plVar9) {
          if (((local_78 == '\0') && (local_58 != (int64_t *)0x0)) && (local_50[0] != '\0')) {
            local_78 = '\x01';
            plVar8 = plVar9;
            goto LAB_00161897;
          }
        }
        else {
          local_88 = local_58;
          if (local_50[0] == '\0') {
            if (local_78 == '\0') {
              pcVar4 = &local_78;
            }
            else {
              FUN_00d50b20();
              pcVar4 = &local_78;
            }
          }
          else {
            if (local_78 != '\0') {
              FUN_00d50b20();
            }
            local_78 = '\x01';
LAB_00161897:
            local_78 = '\x01';
            pcVar4 = local_50;
          }
          *pcVar4 = '\0';
          plVar9 = plVar8;
        }
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          ___cxa_guard_release();
        }
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar7 = &local_88;
          if (cVar2 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = local_88;
        if (*pplVar7 != (int64_t *)0x0) {
          if ((local_78 == '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if (local_48 == (int64_t *)0x0) goto LAB_00161a2f;
          goto LAB_00161a2a;
        }
      } while (local_88 != (int64_t *)0x0);
      plVar9 = (int64_t *)0x0;
      if (local_48 != (int64_t *)0x0) {
LAB_00161a2a:
        FUN_00d50b20();
      }
LAB_00161a2f:
      pVar6 = (void*)pplVar7;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_001616e0();
        FUN_00d23310();
        plVar9 = local_58;
        local_40[0] = local_50[0];
        pcVar4 = local_40;
        if (local_50[0] != '\0') {
          pcVar4 = local_50;
        }
        *pcVar4 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = plVar9;
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_a8 = local_68;
        local_a0 = 0;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_a0 = '\x01';
        FUN_001616e0();
        lVar1 = CONCAT71(uStack_77,local_78);
        FUN_00d23310();
        pcVar4 = local_38;
        pcVar10 = local_50;
        if (local_50[0] == '\0') {
          pcVar10 = pcVar4;
        }
        local_38[0] = local_50[0];
        *pcVar10 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_48;
        pvVar5 = _pthread_getspecific((void*)pcVar4);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        local_98 = local_88;
        local_90 = 0;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_90 = '\x01';
        FUN_00228b40(&local_98,&local_a8);
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return 1;
}



// ============================================================
// 00332c60
// ============================================================
// Function: FUN_00332c60
// Address: 00332c60
// Size: 1373 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00332c60(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  void* pVar6;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  char *pcVar10;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    FUN_003322a0();
    iVar3 = *(int *)((int64_t)local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar3 != 0) {
      FUN_01e561b0();
      FUN_01d8b220();
      local_88 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = '\0';
      local_48 = local_88;
      do {
        plVar9 = local_88;
        (**(code **)(*local_88 + 0x370))();
        plVar8 = local_58;
        if (local_58 == plVar9) {
          if (((local_78 == '\0') && (local_58 != (int64_t *)0x0)) && (local_50[0] != '\0')) {
            local_78 = '\x01';
            plVar8 = plVar9;
            goto LAB_00332d67;
          }
        }
        else {
          local_88 = local_58;
          if (local_50[0] == '\0') {
            if (local_78 == '\0') {
              pcVar4 = &local_78;
            }
            else {
              FUN_00d50b20();
              pcVar4 = &local_78;
            }
          }
          else {
            if (local_78 != '\0') {
              FUN_00d50b20();
            }
            local_78 = '\x01';
LAB_00332d67:
            local_78 = '\x01';
            pcVar4 = local_50;
          }
          *pcVar4 = '\0';
          plVar9 = plVar8;
        }
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          ___cxa_guard_release();
        }
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar7 = &local_88;
          if (cVar2 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = local_88;
        if (*pplVar7 != (int64_t *)0x0) {
          if ((local_78 == '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if (local_48 == (int64_t *)0x0) goto LAB_00332eff;
          goto LAB_00332efa;
        }
      } while (local_88 != (int64_t *)0x0);
      plVar9 = (int64_t *)0x0;
      if (local_48 != (int64_t *)0x0) {
LAB_00332efa:
        FUN_00d50b20();
      }
LAB_00332eff:
      pVar6 = (void*)pplVar7;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_003322a0();
        FUN_00d23310();
        plVar9 = local_58;
        local_40[0] = local_50[0];
        pcVar4 = local_40;
        if (local_50[0] != '\0') {
          pcVar4 = local_50;
        }
        *pcVar4 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = plVar9;
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_a8 = local_68;
        local_a0 = 0;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_a0 = '\x01';
        FUN_003322a0();
        lVar1 = CONCAT71(uStack_77,local_78);
        FUN_00d23310();
        pcVar4 = local_38;
        pcVar10 = local_50;
        if (local_50[0] == '\0') {
          pcVar10 = pcVar4;
        }
        local_38[0] = local_50[0];
        *pcVar10 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_48;
        pvVar5 = _pthread_getspecific((void*)pcVar4);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        local_98 = local_88;
        local_90 = 0;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_90 = '\x01';
        FUN_00228b40(&local_98,&local_a8);
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return 1;
}



// ============================================================
// 00503190
// ============================================================
// Function: FUN_00503190
// Address: 00503190
// Size: 1086 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00503190(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  bool bVar10;
  float fVar11;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar12 [16];
  uint32_t uVar13;
  float fVar14;
  uint32_t in_XMM1_Dc;
  float fVar15;
  uint32_t in_XMM1_Dd;
  float fVar16;
  uint8_t auVar17 [16];
  int64_t *local_68;
  char local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint8_t local_48 [16];
  int64_t *local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb_02;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  uVar13 = (uint32_t)param_2;
  FUN_01f96ec0();
  plVar6 = local_38;
  plVar1 = (int64_t *)this_ptr[0x42];
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == plVar1) {
    FUN_01e40eb0();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == this_ptr) {
      if ((int64_t *)this_ptr[0x2b] != (int64_t *)0x0) {
        local_48._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
        local_48._8_8_ = extraout_XMM0_Qb;
        local_58 = (float)uVar13;
        fStack_54 = fVar11;
        fStack_50 = (float)in_XMM1_Dc;
        fStack_4c = (float)in_XMM1_Dd;
        fVar11 = (float)FUN_01b2b5d0();
        auVar4._4_4_ = fStack_54;
        auVar4._0_4_ = local_58;
        auVar4._8_4_ = fStack_50;
        auVar4._12_4_ = fStack_4c;
        auVar17._4_4_ = fStack_54;
        auVar17._0_4_ = fStack_54 - fVar11;
        auVar17._8_4_ = fStack_4c;
        auVar17._12_4_ = fStack_4c;
        auVar17 = insertps(auVar4,auVar17,0x10);
        uVar13 = auVar17._0_4_;
        fVar11 = auVar17._4_4_;
        in_XMM1_Dc = auVar17._8_4_;
        in_XMM1_Dd = auVar17._12_4_;
        (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d0))();
        FUN_01cf5a00();
      }
      local_48._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
      local_48._8_8_ = extraout_XMM0_Qb_00;
      local_58 = (float)uVar13;
      fStack_54 = fVar11;
      fStack_50 = (float)in_XMM1_Dc;
      fStack_4c = (float)in_XMM1_Dd;
      fVar11 = (float)FUN_01b2b5d0();
      auVar5._4_4_ = fStack_54;
      auVar5._0_4_ = local_58;
      auVar5._8_4_ = fStack_50;
      auVar5._12_4_ = fStack_4c;
      auVar2._4_4_ = fStack_54;
      auVar2._0_4_ = fStack_54 - fVar11;
      auVar2._8_4_ = fStack_4c;
      auVar2._12_4_ = fStack_4c;
      insertps(auVar5,auVar2,0x10);
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))();
      FUN_01cf5a00();
    }
    if (*(char *)((int64_t)this_ptr + 0x234) != '\0') {
      *(void*)((int64_t)this_ptr + 0x234) = 0;
    }
    if (*(char *)((int64_t)this_ptr + 0x235) != '\0') {
      *(void*)((int64_t)this_ptr + 0x235) = 0;
    }
    if (this_ptr[0x47] != 0) {
      this_ptr[0x47] = 0;
      FUN_00d50b20();
    }
  }
  FUN_01f96ec0();
  pplVar9 = &local_68;
  FUN_01d98320();
  plVar1 = local_68;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_00503338:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_00503338;
  }
  plVar6 = local_38;
  plVar1 = *pplVar9;
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != plVar1) {
    return;
  }
  FUN_01d98320();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48._0_8_ = FUN_01cf5cf0();
  local_48._8_8_ = extraout_XMM0_Qb_01;
  FUN_01b18290();
  (**(code **)(*plVar1 + 0x4e8))();
  FUN_01cf5c80();
  (**(code **)(*this_ptr + 0x928))();
  auVar12._0_8_ = FUN_01cf5cf0();
  auVar12._8_8_ = extraout_XMM0_Qb_02;
  fVar11 = (float)((uint64_t)auVar12._0_8_ >> 0x20);
  fVar15 = (float)extraout_XMM0_Qb_02;
  fVar16 = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
  fVar14 = (float)auVar12._0_8_ + *(float *)(this_ptr + 0x46);
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
    fVar11 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    local_48 = blendps(auVar12,ZEXT816(0),1);
  }
  else {
    local_48._4_12_ = auVar12._4_12_;
    local_48._0_4_ = (float)auVar12._0_8_ + *(float *)(this_ptr + 0x46);
  }
  FUN_01cf3f40();
  (**(code **)(*local_38 + 0x4d8))();
  local_58 = fVar14;
  fStack_54 = fVar11;
  fStack_50 = fVar15;
  fStack_4c = fVar16;
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar14 = local_58 - fVar14;
  if (fVar14 < (float)local_48._0_4_) {
    fVar11 = fStack_54;
    fVar15 = fStack_50;
    fVar16 = fStack_4c;
    FUN_01cf3f40();
    (**(code **)(*local_38 + 0x4d8))();
    local_58 = fVar14;
    fStack_54 = fVar11;
    fStack_50 = fVar15;
    fStack_4c = fVar16;
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar14 = local_58 - fVar14;
    auVar3._4_4_ = fStack_54 - fVar11;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fStack_50 - fVar15;
    auVar3._12_4_ = fStack_4c - fVar16;
    blendps(local_48,auVar3,0xd);
  }
  FUN_01cf5c80();
  (**(code **)(*plVar1 + 0x620))();
  FUN_01ad5a70();
  FUN_01adaed0();
  if ((fVar14 == 0.0) && (!NAN(fVar14))) {
    FUN_01e40eb0();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x968))();
      goto LAB_005035b9;
    }
  }
  FUN_01adaed0();
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    FUN_01e40eb0();
    if (local_38 == (int64_t *)0x0) {
      iVar8 = FUN_01ad3ca0();
      bVar10 = iVar8 != -1000000;
    }
    else {
      bVar10 = false;
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar10) {
      (**(code **)(*this_ptr + 0x960))();
    }
  }
LAB_005035b9:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00262e30
// ============================================================
// Function: FUN_00262e30
// Address: 00262e30
// Size: 1339 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00262e30(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  byte unaff_SIL;
  void*this_ptr;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar10 = g_026f6fa0;
  if (g_026f6fa0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_60 = plVar10;
  local_58 = '\0';
  FUN_000175c0(uVar11,&local_60);
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar1 = unaff_SIL;
  if (local_48 != (int64_t *)0x0) {
    local_40[0] = '\0';
    bVar1 = FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != (int64_t *)0x0 & bVar1) != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar9 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
    if (cVar2 != '\0') goto LAB_00263200;
    local_60 = (int64_t *)*this_ptr;
    local_38[0] = '\0';
    do {
      plVar10 = local_60;
      (**(code **)(*local_60 + 0x370))();
      if (local_48 == plVar10) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00263057;
        }
      }
      else {
        local_60 = local_48;
        plVar10 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00263057:
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        *pcVar5 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = local_60;
      if (*pplVar8 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (local_60 == (int64_t *)0x0) break;
        pVar7 = (void*)pplVar8;
        if (plVar10[0x38] == 0) {
LAB_00263271:
          uVar9 = 0;
        }
        else {
          FUN_006f3f00();
          if (local_40[0] == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_00263271;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_48 == (int64_t *)0x0) goto LAB_00263271;
          cVar2 = FUN_00751ba0();
          uVar9 = 0x270aa01;
          if ((cVar2 != '\0') && (unaff_SIL == 0)) {
            (**(code **)(*local_48 + 0x628))();
            if (local_40[0] == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0026329a;
              }
            }
            else if (local_48 != (int64_t *)0x0) {
LAB_0026329a:
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004a11a0();
              if (local_40[0] == '\0') {
                if (local_48 == (int64_t *)0x0) goto LAB_00263353;
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0026330f:
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar4 = FUN_0170fee0();
                FUN_00d50b20();
                uVar9 = (uint64_t)uVar4 ^ 1;
              }
              else {
                if (local_48 != (int64_t *)0x0) goto LAB_0026330f;
LAB_00263353:
                uVar9 = 0;
              }
              FUN_00d50b20();
              goto LAB_0026335e;
            }
            uVar9 = 0;
          }
LAB_0026335e:
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_00263200;
      }
    } while (local_60 != (int64_t *)0x0);
  }
  uVar9 = 0;
LAB_00263200:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 002639e0
// ============================================================
// Function: FUN_002639e0
// Address: 002639e0
// Size: 1339 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_002639e0(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  byte unaff_SIL;
  void*this_ptr;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar10 = g_026f6fa0;
  if (g_026f6fa0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_60 = plVar10;
  local_58 = '\0';
  FUN_000175c0(uVar11,&local_60);
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar1 = unaff_SIL;
  if (local_48 != (int64_t *)0x0) {
    local_40[0] = '\0';
    bVar1 = FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != (int64_t *)0x0 & bVar1) != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar9 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
    if (cVar2 != '\0') goto LAB_00263db0;
    local_60 = (int64_t *)*this_ptr;
    local_38[0] = '\0';
    do {
      plVar10 = local_60;
      (**(code **)(*local_60 + 0x370))();
      if (local_48 == plVar10) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00263c07;
        }
      }
      else {
        local_60 = local_48;
        plVar10 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00263c07:
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        *pcVar5 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = local_60;
      if (*pplVar8 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (local_60 == (int64_t *)0x0) break;
        pVar7 = (void*)pplVar8;
        if (plVar10[0x38] == 0) {
LAB_00263e21:
          uVar9 = 0;
        }
        else {
          FUN_006f3f00();
          if (local_40[0] == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_00263e21;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_48 == (int64_t *)0x0) goto LAB_00263e21;
          cVar2 = FUN_00751ba0();
          uVar9 = 0x270aa01;
          if ((cVar2 != '\0') && (unaff_SIL == 0)) {
            (**(code **)(*local_48 + 0x628))();
            if (local_40[0] == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_00263e4a;
              }
            }
            else if (local_48 != (int64_t *)0x0) {
LAB_00263e4a:
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004a11a0();
              if (local_40[0] == '\0') {
                if (local_48 == (int64_t *)0x0) goto LAB_00263f03;
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_00263ebf:
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar4 = FUN_0170f810();
                FUN_00d50b20();
                uVar9 = (uint64_t)uVar4 ^ 1;
              }
              else {
                if (local_48 != (int64_t *)0x0) goto LAB_00263ebf;
LAB_00263f03:
                uVar9 = 0;
              }
              FUN_00d50b20();
              goto LAB_00263f0e;
            }
            uVar9 = 0;
          }
LAB_00263f0e:
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_00263db0;
      }
    } while (local_60 != (int64_t *)0x0);
  }
  uVar9 = 0;
LAB_00263db0:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 01289850
// ============================================================
// Function: FUN_01289850
// Address: 01289850
// Size: 1297 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_01289850(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  uint uVar8;
  uint64_t uVar9;
  
  lVar5 = *this_ptr;
  if (lVar5 != 0) {
    uVar8 = *(uint *)(lVar5 + 0xc);
    uVar9 = (uint64_t)uVar8;
    if (0 < (int)uVar8) {
      lVar7 = 0;
      bVar1 = false;
      do {
        uVar8 = uVar8 - 1;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar8 * 8);
        pVar6 = uVar8;
        if (lVar7 == lVar5) {
          lVar5 = lVar7;
          bVar2 = bVar1;
          if ((!bVar1) && (lVar7 != 0)) {
            FUN_00d50b00();
            bVar2 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar2;
        lVar7 = lVar5;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01263cf0();
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            lVar5 = *(int64_t *)(lVar7 + 200);
          }
          else {
            lVar5 = *(int64_t *)
                     (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                     200);
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            if (!NAN(param_1)) {
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152df00(param_1);
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152dd40();
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152dfb0();
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (!NAN(param_2)) {
            pvVar4 = _pthread_getspecific(pVar6);
            if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
              lVar5 = lVar7;
              if ((*(float *)(lVar7 + 0x9c) != param_2) ||
                 (NAN(*(float *)(lVar7 + 0x9c)) || NAN(param_2))) goto LAB_01289c13;
            }
            else {
              lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
              if ((*(float *)(lVar5 + 0x9c) != param_2) ||
                 (NAN(*(float *)(lVar5 + 0x9c)) || NAN(param_2))) {
LAB_01289c13:
                FUN_00d64850();
                *(float *)(lVar5 + 0x9c) = param_2;
                FUN_00d64910();
              }
            }
            pvVar4 = _pthread_getspecific(pVar6);
            if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
              lVar5 = *(int64_t *)(lVar7 + 200);
            }
            else {
              lVar5 = *(int64_t *)
                       (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8)
                       + 200);
            }
            if (lVar5 != 0) {
              FUN_00d50b00();
              FUN_00d50b20();
              pvVar4 = _pthread_getspecific(pVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar7 + 200);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152dfb0();
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        if ((int64_t)uVar9 < 2) {
          if (!bVar1) {
            return;
          }
          if (lVar7 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        uVar9 = uVar9 - 1;
        lVar5 = *this_ptr;
      } while( true );
    }
  }
  return;
}



// ============================================================
// 00328b10
// ============================================================
// Function: FUN_00328b10
// Address: 00328b10
// Size: 1489 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00328b10(uint64_t param_1,float *param_2)

{
  uint64_t *puVar1;
  void*puVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint32_t local_d8;
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  cVar7 = (**(code **)(*this_ptr + 0xa40))();
  if (cVar7 == '\0') {
    FUN_01a36f10(extraout_XMM0_Qa,param_2);
    return;
  }
  fVar3 = *param_2;
  fVar4 = param_2[2];
  lVar12 = this_ptr[0x23];
  FUN_01cfc9f0();
  local_68 = local_58;
  local_60 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  FUN_01d488d0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e710();
  lVar6 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*this_ptr + 0xa58))();
  lVar9 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00328f3b;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_00328f3b;
  auVar17 = ZEXT416((uint)((float)((uint)(fVar3 + g_02390d00) & g_023945e0 | g_02394dc8) +
                          fVar3 + g_02390d00));
  auVar17 = roundss(auVar17,auVar17,0xb);
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar19 = blendps(auVar19,auVar17,1);
  auVar17 = ZEXT416((uint)((float)(g_023945e0 & (uint)(fVar4 + g_02390d34) | g_02394dc8) +
                          fVar4 + g_02390d34));
  auVar17 = roundss(auVar17,auVar17,0xb);
  insertps(auVar17,(int)lVar12,0x10);
  local_50 = '\0';
  local_58 = 0;
  local_48 = lVar9;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar9 = (int64_t)(int)local_40;
    iVar14 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar14);
    if (*(int *)(local_48 + 0xc) <= iVar14) break;
    local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar9 * 8);
    cVar7 = (**(code **)(*this_ptr + 0xa60))(*(int64_t *)(local_48 + 0x10),&local_78);
    if (cVar7 == '\0') {
LAB_00328da0:
    }
    else {
      local_78 = local_78 & 0xffffffff;
      uStack_70 = CONCAT44((int)lVar12,(uint32_t)uStack_70);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uStack_70;
      local_d8 = auVar19._0_4_;
      uVar13 = FUN_00d05360(local_78,uStack_70,local_d8);
      uStack_70 = auVar17._0_8_;
      local_78 = uVar13;
      if (auVar17._0_4_ <= g_0239424c) goto LAB_00328da0;
      if (lVar6 == 0) {
LAB_00328d70:
        iVar14 = *(int *)(lVar6 + 0x18);
        FUN_00c8e340(uVar13,1);
        puVar1 = (uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar14);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        goto LAB_00328da0;
      }
      iVar14 = -1;
      lVar9 = 0;
      do {
        iVar14 = iVar14 + 1;
        iVar8 = *(int *)(lVar6 + 0x18);
        iVar10 = iVar8 + 0xf;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar10 >> 4 <= iVar14) goto LAB_00328d70;
        uVar13 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar9);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar13;
        cVar7 = FUN_00d054a0(iVar10 >> 4,uVar13,(int)local_78,uStack_70);
        lVar9 = lVar9 + 0x10;
        uVar13 = extraout_XMM0_Qa_00;
      } while (cVar7 == '\0');
      uVar16 = FUN_00d052e0();
      puVar2 = (void*)(*(int64_t *)(lVar6 + 0x10) + -0x10 + lVar9);
      *puVar2 = uVar16;
      puVar2[1] = auVar18._0_8_;
    }
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar14 = -local_40._4_4_;
      }
      else {
        iVar14 = (int)local_40 - local_40._4_4_;
        local_40._4_4_ = (int)((uint64_t)local_40 >> 0x20);
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar14 = 0;
      }
      local_40 = CONCAT44(iVar14,(int)local_40);
    }
  }
  FUN_0032bfd0();
  FUN_00d50b20();
LAB_00328f3b:
  iVar14 = *(int *)(lVar6 + 0x18);
  iVar8 = iVar14 + 0xf;
  if (-1 < iVar14) {
    iVar8 = iVar14;
  }
  if (0xf < iVar14) {
    uVar13 = (uint64_t)((iVar8 >> 4) - 1);
    uVar15 = (uint64_t)(uint)(iVar8 >> 4);
LAB_00328f60:
    if (1 < (int64_t)uVar15) {
      uVar15 = uVar15 - 1;
      local_88._8_8_ = 0;
      local_88._0_8_ =
           *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + (uVar15 & 0xffffffff) * 0x10);
      uVar13 = uVar13 - 1;
      uVar11 = 0;
      while (cVar7 = FUN_00d054a0(), cVar7 == '\0') {
        if (uVar13 == uVar11) goto LAB_00328f60;
        uVar11 = uVar11 + 1;
      }
      uVar16 = FUN_00d052e0();
      puVar2 = (void*)(*(int64_t *)(lVar6 + 0x10) + (uVar11 & 0xffffffff) * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = local_88._0_8_;
      FUN_00e7b4e0();
      FUN_00c921e0();
      goto LAB_00328f60;
    }
  }
  iVar14 = -1;
  lVar12 = 8;
  while( true ) {
    iVar14 = iVar14 + 1;
    iVar8 = *(int *)(lVar6 + 0x18);
    iVar10 = iVar8 + 0xf;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    if (iVar10 >> 4 <= iVar14) break;
    uVar16 = *(void*)(*(int64_t *)(lVar6 + 0x10) + -8 + lVar12);
    uVar5 = *(void*)(*(int64_t *)(lVar6 + 0x10) + lVar12);
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))
              (CONCAT44((int)((uint64_t)uVar16 >> 0x20),(float)uVar16 + g_02390d00),
               CONCAT44((int)((uint64_t)uVar5 >> 0x20),(float)uVar5 + g_02390d34));
    lVar12 = lVar12 + 0x10;
    FUN_01d48390();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00265730
// ============================================================
// Function: FUN_00265730
// Address: 00265730
// Size: 1194 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00265730(uint64_t param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int iVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t local_98;
  char local_90;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if (*(int *)(this_ptr + 0x198) != 2) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar10 = local_60;
    local_38[0] = local_58[0];
    pcVar2 = local_38;
    if (local_58[0] != '\0') {
      pcVar2 = local_58;
    }
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_002657b2:
      FUN_00d50b00();
    }
    else if (local_38[0] == '\0') goto LAB_002657b2;
    (**(code **)(*plVar10 + 0xe30))();
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_012e74e0();
    lVar5 = CONCAT71(uStack_6f,local_70);
    if (local_68 == '\0') {
      if (((lVar5 != 0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      uVar9 = 0;
      if (*(int *)(lVar5 + 0xc) != 0) {
        local_58[0] = '\0';
        local_60 = (int64_t *)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = lVar5;
        while( true ) {
          lVar3 = (int64_t)(int)local_48;
          iVar7 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          if (*(int *)(local_50 + 0xc) <= iVar7) break;
          local_60 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
          pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_012f9bb0();
          if (cVar1 == '\0') {
            FUN_000be170();
            uVar9 = 0;
            goto LAB_00265bd4;
          }
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar7 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar7 = 0;
            }
            local_48 = CONCAT44(iVar7,(int)local_48);
          }
        }
        FUN_000be170();
        pVar6 = (void*)local_50;
        FUN_00d23310();
        plVar8 = local_60;
        pcVar2 = local_58;
        if (local_58[0] == '\0') {
          pcVar2 = &local_70;
        }
        local_70 = local_58[0];
        *pcVar2 = '\0';
        if ((local_58[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f9c10();
        if ((local_70 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (param_2 != '\0') {
          FUN_01caeae0();
          plVar8 = local_60;
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_01caeae0();
            FUN_01d654a0();
            if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_58[0] = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = lVar5;
          while( true ) {
            lVar5 = (int64_t)(int)local_48;
            iVar7 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar7);
            if (*(int *)(local_50 + 0xc) <= iVar7) break;
            plVar8 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar5 * 8);
            local_60 = plVar8;
            pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
            plVar10 = local_60;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar8 = plVar10, lVar5 != 0)) {
              plVar8 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            FUN_012f9c20();
            if (local_48._4_4_ != 0) {
              if (local_48 < 0) {
                iVar7 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar7 = 0;
              }
              local_48 = CONCAT44(iVar7,(int)local_48);
            }
          }
          FUN_000be170();
        }
        FUN_01caeae0();
        plVar10 = local_60;
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        if (plVar10 != (int64_t *)0x0) {
          FUN_01caeae0();
          FUN_01caeae0();
          FUN_01d654a0();
          FUN_01d66ab0();
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00265bd4:
      FUN_00d50b20();
      goto LAB_00265bdc;
    }
  }
  uVar9 = 0;
LAB_00265bdc:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 00265df0
// ============================================================
// Function: FUN_00265df0
// Address: 00265df0
// Size: 1194 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00265df0(uint64_t param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int iVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t local_98;
  char local_90;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if (*(int *)(this_ptr + 0x198) != 2) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar10 = local_60;
    local_38[0] = local_58[0];
    pcVar2 = local_38;
    if (local_58[0] != '\0') {
      pcVar2 = local_58;
    }
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00265e72:
      FUN_00d50b00();
    }
    else if (local_38[0] == '\0') goto LAB_00265e72;
    (**(code **)(*plVar10 + 0xe30))();
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_012e74e0();
    lVar5 = CONCAT71(uStack_6f,local_70);
    if (local_68 == '\0') {
      if (((lVar5 != 0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      uVar9 = 0;
      if (*(int *)(lVar5 + 0xc) != 0) {
        local_58[0] = '\0';
        local_60 = (int64_t *)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = lVar5;
        while( true ) {
          lVar3 = (int64_t)(int)local_48;
          iVar7 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          if (*(int *)(local_50 + 0xc) <= iVar7) break;
          local_60 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
          pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_012f9bb0();
          if (cVar1 == '\0') {
            FUN_000be170();
            uVar9 = 0;
            goto LAB_00266294;
          }
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar7 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar7 = 0;
            }
            local_48 = CONCAT44(iVar7,(int)local_48);
          }
        }
        FUN_000be170();
        pVar6 = (void*)local_50;
        FUN_00d23310();
        plVar8 = local_60;
        pcVar2 = local_58;
        if (local_58[0] == '\0') {
          pcVar2 = &local_70;
        }
        local_70 = local_58[0];
        *pcVar2 = '\0';
        if ((local_58[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f9c70();
        if ((local_70 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (param_2 != '\0') {
          FUN_01caeae0();
          plVar8 = local_60;
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_01caeae0();
            FUN_01d654a0();
            if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_58[0] = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = lVar5;
          while( true ) {
            lVar5 = (int64_t)(int)local_48;
            iVar7 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar7);
            if (*(int *)(local_50 + 0xc) <= iVar7) break;
            plVar8 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar5 * 8);
            local_60 = plVar8;
            pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
            plVar10 = local_60;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar8 = plVar10, lVar5 != 0)) {
              plVar8 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            FUN_012f9c80();
            if (local_48._4_4_ != 0) {
              if (local_48 < 0) {
                iVar7 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar7 = 0;
              }
              local_48 = CONCAT44(iVar7,(int)local_48);
            }
          }
          FUN_000be170();
        }
        FUN_01caeae0();
        plVar10 = local_60;
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        if (plVar10 != (int64_t *)0x0) {
          FUN_01caeae0();
          FUN_01caeae0();
          FUN_01d654a0();
          FUN_01d66ab0();
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00266294:
      FUN_00d50b20();
      goto LAB_0026629c;
    }
  }
  uVar9 = 0;
LAB_0026629c:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 007ed8f0
// ============================================================
// Function: FUN_007ed8f0
// Address: 007ed8f0
// Size: 1526 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_007ed8f0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  void *pvVar3;
  void*puVar4;
  int64_t *plVar5;
  code *pcVar6;
  int64_t *plVar7;
  void* pVar8;
  code *pcVar9;
  int iVar10;
  int64_t local_b0;
  char local_a8;
  uint8_t local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  uint8_t local_40 [8];
  uint8_t local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_007ec8d0();
  if (local_a8 == '\0') {
    if (local_b0 == 0) goto LAB_007edefc;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_007edefc;
  pcVar2 = g_02572370;
  if (0 < *(int *)(local_b0 + 0xc)) {
    iVar10 = 0;
    pcVar9 = g_02572370;
    do {
      pvVar3 = _pthread_getspecific((void*)pcVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      plVar5 = local_48;
      if (local_40[0] == (code)0x0) {
        if (local_48 == (int64_t *)0x0) goto LAB_007eda70;
        FUN_00d50b00();
        if ((local_40[0] != (code)0x0) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_48 == (int64_t *)0x0) {
LAB_007eda70:
        pvVar3 = _pthread_getspecific((void*)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific((void*)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb7a0();
        plVar1 = local_48;
        if (local_40[0] == (code)0x0) {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = (code)0x0;
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)((int64_t)plVar1 + 0xc) != 0) {
          FUN_00d23310();
          plVar1 = local_48;
          local_58 = local_40[0];
          pcVar9 = &local_58;
          pcVar6 = local_40;
          if (local_40[0] == (code)0x0) {
            pcVar6 = pcVar9;
          }
          *pcVar6 = (code)0x0;
          if ((local_40[0] != (code)0x0) && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar1 != (int64_t *)0x0) && (plVar5 = plVar1, local_58 == (code)0x0)) {
            FUN_00d50b00();
          }
        }
        FUN_00d50b20();
      }
      pVar8 = (void*)pcVar9;
      if (plVar5 != (int64_t *)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*pcVar2)();
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_007ef010();
        (**(code **)(*plVar5 + 0x18))();
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar1 = (int64_t *)plVar5[2];
        plVar7 = plVar1;
        if (plVar1 != local_48) {
          if (local_40[0] == (code)0x0) {
            if (local_48 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
              goto LAB_007edc63;
            }
            FUN_00d50b00();
            plVar1 = (int64_t *)plVar5[2];
            plVar5[2] = (int64_t)local_48;
            plVar7 = local_48;
          }
          else {
            local_40[0] = (code)0x0;
            plVar7 = local_48;
LAB_007edc63:
            plVar5[2] = (int64_t)plVar7;
          }
          pVar8 = (void*)plVar1;
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
          }
        }
        if ((local_40[0] != (code)0x0) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar1 = (int64_t *)plVar5[3];
        plVar7 = plVar1;
        if (plVar1 != local_48) {
          if (local_40[0] == (code)0x0) {
            if (local_48 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
              goto LAB_007edd07;
            }
            FUN_00d50b00();
            plVar1 = (int64_t *)plVar5[3];
            plVar5[3] = (int64_t)local_48;
            plVar7 = local_48;
          }
          else {
            local_40[0] = (code)0x0;
            plVar7 = local_48;
LAB_007edd07:
            plVar5[3] = (int64_t)plVar7;
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
          }
        }
        if ((local_40[0] != (code)0x0) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = (code)0x0;
        local_48 = plVar5;
        FUN_00d21140();
        if ((local_40[0] != (code)0x0) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar9 = local_38;
        pcVar6 = local_40;
        if (local_40[0] == (code)0x0) {
          pcVar6 = pcVar9;
        }
        *pcVar6 = (code)0x0;
        if ((local_40[0] != (code)0x0) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        pvVar3 = _pthread_getspecific((void*)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0138b6e0();
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != (code)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(local_b0 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_007edefc:
  FUN_007ebe20();
  return 1;
}



// ============================================================
// 006476b0
// ============================================================
// Function: FUN_006476b0
// Address: 006476b0
// Size: 1855 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


bool FUN_006476b0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint64_t uVar9;
  uint64_t in_XMM1_Qb;
  uint8_t local_f8 [16];
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar2 = *(int64_t *)(this_ptr + 0x160);
  if (lVar2 != 0) goto LAB_00647dd7;
  plVar6 = (int64_t *)FUN_00018320();
  (**(code **)(*plVar6 + 0x18))();
  plVar3 = *(int64_t **)(this_ptr + 0x168);
  if (plVar3 == plVar6) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x168) = plVar6;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar4 = g_02725978;
  if (g_02725978 != 0) {
    FUN_00d50b00();
  }
  FUN_00179040();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x918))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x928))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x990))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  FUN_01f27fe0();
  (**(code **)(*local_50 + 0x450))();
  (**(code **)(*local_40 + 0x998))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x558))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x4d8))();
  local_f8._8_8_ = in_XMM1_Qb;
  local_f8._0_8_ = param_2;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  blendps(local_f8,g_023b5ec0,0xd);
  (**(code **)(*local_40 + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x4a0))();
  iVar1 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 0x170);
  uVar9 = FUN_00176c40();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x9e0))(uVar9,iVar1 != 0);
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00659410();
  (**(code **)(*plVar6 + 0x18))();
  plVar3 = *(int64_t **)(this_ptr + 0x160);
  if (plVar3 == plVar6) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x160) = plVar6;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x160) + 0x4c0))();
  FUN_00d6f370();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_50 + 0x450))();
  lVar7 = g_02725988;
  lVar4 = g_02725980;
  if (cVar5 == '\0') {
    if (g_02725988 == 0) goto LAB_00647a7f;
    FUN_00d50b00();
  }
  else if (g_02725980 == 0) {
LAB_00647a7f:
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    lVar7 = lVar4;
  }
  uVar8 = FUN_00d70af0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  insertps(g_023b5ed0,uVar8,0x10);
  (**(code **)(*local_40 + 0x9b8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  uVar9 = (**(code **)(*local_40 + 0x4e8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  local_88 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0x160);
  if (lVar4 != 0) {
    uVar9 = FUN_00d50b00();
  }
  lVar7 = g_02725990;
  local_88 = '\x01';
  local_90 = lVar4;
  if (g_02725990 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c0 = lVar7;
  local_b8 = '\x01';
  FUN_00177000(uVar9,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00637870();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00637870();
    FUN_006e3b60();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01bd0ba0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x178) = 1;
  }
  FUN_0063a4a0();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = g_0270b7f0;
    if (g_0270b7f0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41430(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00647dd7:
  return lVar2 == 0;
}



// ============================================================
// 00325e30
// ============================================================
// Function: FUN_00325e30
// Address: 00325e30
// Size: 1118 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_00325e30(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar9;
  uint32_t uVar10;
  int64_t *local_80;
  char local_78 [16];
  uint64_t local_68;
  uint32_t local_60;
  uint64_t local_58;
  int64_t *plVar11;
  char local_48;
  int64_t *plVar12;
  char local_38 [8];
  
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar11 = arg1;
  do {
    (**(code **)(*plVar11 + 0x370))();
    if (local_80 == plVar11) {
      if (((local_38[0] == '\0') && (local_80 != (int64_t *)0x0)) && (local_78[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00325ec7;
      }
    }
    else {
      plVar11 = local_80;
      if (local_78[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00325ec7:
        local_38[0] = '\x01';
        pcVar3 = local_78;
      }
      *pcVar3 = '\0';
    }
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    plVar6 = &g_02802688;
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar6 = (int64_t *)&stack0xffffffffffffffb0;
      if (cVar1 == '\0') {
        plVar6 = &g_02802688;
      }
    }
    if (*plVar6 != 0) {
      if ((local_38[0] == '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar12 = plVar11;
      if (arg1 == (int64_t *)0x0) goto LAB_00326059;
      goto LAB_00326054;
    }
  } while (plVar11 != (int64_t *)0x0);
  plVar12 = (int64_t *)0x0;
  if (arg1 != (int64_t *)0x0) {
LAB_00326054:
    FUN_00d50b20();
  }
LAB_00326059:
  if (plVar12 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    FUN_002533b0();
    if (local_78[0] == '\0') {
      if (local_80 == (int64_t *)0x0) goto LAB_0032623e;
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_003260af:
      local_78[0] = '\0';
      local_60 = 0;
      local_68 = 0;
      if (*(int *)((int64_t)local_80 + 0xc) < 1) {
        local_58 = 0;
        plVar12 = (int64_t *)0x0;
      }
      else {
        lVar9 = 0;
        plVar12 = (int64_t *)0x0;
        local_58 = 0;
        do {
          lVar7 = *(int64_t *)(local_80[2] + lVar9 * 8);
          pvVar4 = _pthread_getspecific((void*)plVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          uVar10 = FUN_0054ddc0();
          if (local_48 == '\0') {
            if (plVar11 != (int64_t *)0x0) {
              uVar10 = FUN_00d50b00();
              goto LAB_003261a0;
            }
          }
          else if (plVar11 != (int64_t *)0x0) {
LAB_003261a0:
            if (0 < *(int *)((int64_t)plVar11 + 0xc)) {
              if (plVar12 == (int64_t *)0x0) {
                uVar10 = FUN_00326480();
                plVar6 = plVar11;
                if (plVar11 == (int64_t *)0x0) {
                  plVar12 = (int64_t *)0x0;
                  uVar8 = local_58 & 0xffffffff;
                }
                else {
                  uVar8 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
                  plVar12 = plVar11;
                  if (local_48 == '\0') {
                    uVar10 = FUN_00d50b00();
                  }
                }
                local_58 = uVar8 & 0xffffffff;
              }
              local_48 = '\0';
              FUN_00d214d0(uVar10,*(void*)((int64_t)plVar12 + 0xc));
            }
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_68 = CONCAT44(local_68._4_4_,(int)lVar9);
        } while ((int)lVar9 < *(int *)((int64_t)local_80 + 0xc));
      }
      FUN_00275ca0();
      FUN_00d50b20();
      cVar1 = (char)local_58;
    }
    else {
      if (local_80 != (int64_t *)0x0) goto LAB_003260af;
LAB_0032623e:
      plVar12 = (int64_t *)0x0;
      cVar1 = '\0';
    }
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if (cVar1 != '\0') goto LAB_00326291;
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00326291;
    }
  }
  plVar12 = (int64_t *)0x0;
LAB_00326291:
  *this_ptr = plVar12;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 00502230
// ============================================================
// Function: FUN_00502230
// Address: 00502230
// Size: 1082 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00502230(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_00502282:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00502282;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (param_2 != 0) {
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      plVar7 = this_ptr;
      do {
        uVar8 = (**(code **)(*plVar7 + 0x370))();
        plVar5 = local_48;
        if (local_48 == plVar7) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_00502357;
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar4 = local_38;
            }
            else {
              uVar8 = FUN_00d50b20();
              pcVar4 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              uVar8 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar7 = plVar5;
LAB_00502357:
            local_38[0] = '\x01';
            pcVar4 = local_40;
            plVar5 = plVar7;
          }
          *pcVar4 = '\0';
          plVar7 = plVar5;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') &&
           (iVar3 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar3 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          uVar8 = ___cxa_guard_release();
        }
        plVar5 = &g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar5 = (int64_t *)&stack0xffffffffffffffa0;
          uVar8 = extraout_XMM0_Da;
          if (cVar2 == '\0') {
            plVar5 = &g_02802688;
          }
        }
        if (*plVar5 != 0) {
          if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b00();
          }
          if (this_ptr == (int64_t *)0x0) goto LAB_005024ee;
          goto LAB_005024e6;
        }
      } while (plVar7 != (int64_t *)0x0);
      plVar7 = (int64_t *)0x0;
      if (this_ptr != (int64_t *)0x0) {
LAB_005024e6:
        uVar8 = FUN_00d50b20();
      }
LAB_005024ee:
      if (plVar7 != (int64_t *)0x0) {
        FUN_0023af30(uVar8,0);
        FUN_0023c090();
        FUN_0022da60();
        (**(code **)(*local_48 + 0x648))();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_01e42030();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0050257c;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_0050257c:
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  if ((local_48 == (int64_t *)0x0) && (param_2 == 3)) {
    iVar3 = FUN_01ad3ca0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar3 != -1000000) {
      (**(code **)(*this_ptr + 0x960))();
      goto LAB_00502625;
    }
  }
  else if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (param_2 != 3) {
    FUN_01e40eb0();
    plVar7 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x968))();
    }
  }
LAB_00502625:
  FUN_0197b900();
  (**(code **)(&g_000015b8 + *local_48))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00780df0
// ============================================================
// Function: FUN_00780df0
// Address: 00780df0
// Size: 1236 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00780df0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  byte bVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  double dVar8;
  uint64_t uVar9;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar8 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar8 * g_023907c0);
  dVar8 = dVar8 * g_023907c0 - g_023907c8;
  uVar9 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar8 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar9,&local_50);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar3;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0 & bVar5) != 0) {
    lVar1 = this_ptr[0xc];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x460))();
    local_80 = local_50;
    local_78 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*this_ptr + 0x458))();
    local_70 = local_90;
    local_68 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      lVar2 = this_ptr[0xd];
    }
    else {
      local_88 = '\0';
      lVar2 = this_ptr[0xd];
    }
    local_68 = '\x01';
    if (lVar2 != 0) {
      local_68 = '\x01';
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_c0 = lVar2;
    FUN_01f53880(&local_70,&local_80,&local_c0);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x468))();
      plVar4 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = plVar4;
      local_a8 = '\0';
      cVar6 = (**(code **)(*plVar3 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((cVar6 == '\0') || (cVar6 = FUN_00780680(), cVar6 != '\0')) {
        local_a0 = plVar3;
        local_98 = '\0';
        (**(code **)(*this_ptr + 0x470))();
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00756ee0();
        (**(code **)(*this_ptr + 0x5f0))();
        plVar3 = local_40;
        (**(code **)(*this_ptr + 0x628))();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        (**(code **)(*plVar3 + 0x648))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d349f0();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 002664b0
// ============================================================
// Function: FUN_002664b0
// Address: 002664b0
// Size: 1032 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


byte FUN_002664b0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int64_t **pplVar5;
  byte unaff_SIL;
  void*this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  byte unaff_R15B;
  uint64_t uVar8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar7 = g_026f6fa0;
  if (g_026f6fa0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar8 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  local_58 = plVar7;
  local_50 = '\0';
  FUN_000175c0(uVar8,&local_58);
  plVar6 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar6;
    unaff_R15B = FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar6 != (int64_t *)0x0 & unaff_R15B) != 0) {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      return 1;
    }
    local_58 = (int64_t *)*this_ptr;
    local_38[0] = '\0';
    do {
      plVar7 = local_58;
      (**(code **)(*local_58 + 0x370))();
      plVar6 = local_48;
      if (local_48 == plVar7) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          plVar6 = plVar7;
          goto LAB_002666c7;
        }
      }
      else {
        local_58 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar4 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar4 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_002666c7:
          local_38[0] = '\x01';
          pcVar4 = local_40;
        }
        *pcVar4 = '\0';
        plVar7 = plVar6;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar1 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_58;
      if (*pplVar5 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (local_58 == (int64_t *)0x0) {
          return 0;
        }
        if (plVar7[0x38] == 0) {
LAB_002668b4:
          bVar2 = 0;
        }
        else {
          FUN_006f3f00();
          if (local_40[0] == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_002668b4;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_48 == (int64_t *)0x0) goto LAB_002668b4;
          bVar2 = FUN_00751ba0();
          FUN_00d50b20();
          bVar2 = bVar2 & unaff_SIL;
        }
        FUN_00d50b20();
        return bVar2;
      }
    } while (local_58 != (int64_t *)0x0);
  }
  return 0;
}



// ============================================================
// 006500a0
// ============================================================
// Function: FUN_006500a0
// Address: 006500a0
// Size: 1185 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_006500a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t local_e0;
  uint8_t local_d8;
  int64_t *local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38;
  
  local_e0 = *param_2;
  if (local_e0 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_d8 = 0;
  local_70 = param_2;
  FUN_0064fb00(param_1,&local_e0);
  plVar7 = local_58;
  pVar5 = (void*)param_1;
  local_48[0] = local_50[0];
  pcVar3 = local_48;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar7;
  local_d0 = plVar7;
  local_c8 = 0;
  FUN_00642e80();
  plVar7 = local_58;
  local_40[0] = local_50[0];
  pcVar3 = local_40;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar7;
  local_38 = '\0';
  FUN_0063f230();
  if (local_58 == (int64_t *)0x0) {
LAB_0065023c:
    plVar7 = local_68;
    FUN_004405c0();
    if (local_58 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50[0] == '\0') {
        local_38 = '\0';
      }
      else {
        local_38 = '\x01';
        local_50[0] = '\0';
      }
    }
  }
  else {
    FUN_0063f230();
    lVar1 = CONCAT71(uStack_7f,local_80);
    cVar2 = FUN_00212c70();
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_0065023c;
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_58 + 0x450))();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_0065023c;
    FUN_004405f0();
    plVar7 = local_68;
    if (local_58 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      local_38 = local_50[0] != '\0';
      plVar6 = local_58;
      if ((bool)local_38) {
        local_50[0] = '\0';
      }
    }
  }
  local_c0 = *local_70;
  local_b8 = '\0';
  FUN_004b8020();
  plVar8 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_004a1190();
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x006503dc;
    }
    local_b0 = *local_70;
    local_a8 = '\0';
    FUN_003b6860();
    if (local_58 != (int64_t *)0x0) {
      plVar8 = local_58;
      if (local_50[0] == '\0') {
        FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_a0 = *local_70;
    local_98 = '\0';
    FUN_004f9670();
    pcVar3 = &local_80;
    if (local_50[0] != '\0') {
      pcVar3 = local_50;
    }
    local_80 = local_50[0];
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_88 = '\0';
    local_90 = plVar8;
    FUN_004b7a60();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
joined_r0x006503dc:
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0064d3d0
// ============================================================
// Function: FUN_0064d3d0
// Address: 0064d3d0
// Size: 1440 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDDocumentViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0064d3d0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar2 = local_58;
  plVar6 = (int64_t *)*arg1;
  if ((g_026d8470 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026fe6b8 = FUN_00015ff0();
    g_026fe6a0 = "MDDocumentViewController";
    g_026fe6a8 = 0x100;
    g_026fe6b0 = FUN_00082e10;
    g_026fe6c0 = 0;
    ram_00000000026fe6c8 = 0;
    g_026fe6d0 = 0;
    g_026fe748 = 0;
    ram_00000000026fe750 = 0;
    g_026fe758 = 0;
    g_026fe75a = 1;
    g_026fe6d8 = 0;
    ram_00000000026fe6e0 = 0;
    g_026fe6e8 = 0;
    ram_00000000026fe6f0 = 0;
    g_026fe6f8 = 0;
    ram_00000000026fe700 = 0;
    g_026fe708 = 0;
    ram_00000000026fe710 = 0;
    g_026fe718 = 0;
    ram_00000000026fe720 = 0;
    g_026fe728 = 0;
    ram_00000000026fe730 = 0;
    g_026fe738 = 0;
    ram_00000000026fe740 = 0;
    g_026fe763 = 0;
    g_026fe75b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_0064d41f:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar3 == '\0') goto LAB_0064d41f;
  }
  if (*plVar6 != 0) {
    FUN_006f3f00();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x608))();
    FUN_00759c40();
    plVar6 = (int64_t *)this_ptr[0x32];
    if (plVar6 == (int64_t *)0x0) {
      if (local_58 != (int64_t *)0x0) goto LAB_0064d654;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      if (plVar6 != local_58) goto LAB_0064d654;
      if (this_ptr[0x32] != 0) {
        this_ptr[0x32] = 0;
        FUN_00d50b20();
      }
    }
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0064d654:
    FUN_00d50130();
    lVar1 = this_ptr[0x20];
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      while( true ) {
        lVar5 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
        FUN_002218b0();
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a8 == plVar2) {
          FUN_01e51430();
        }
      }
      FUN_0065ca40();
    }
    (**(code **)(*plVar2 + 0x610))();
    iVar4 = *(int *)((int64_t)local_58 + 0xc);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    if (iVar4 == 0) {
      FUN_00612250();
      (**(code **)(*local_58 + 0x5f8))();
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x688))();
    FUN_00d50b20();
    return;
  }
  plVar6 = (int64_t *)*arg1;
  if ((g_026f7020 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270aa58 = FUN_00015ff0();
    g_0270aa40 = "MDEditorViewController";
    g_0270aa48 = 0x1e8;
    g_0270aa50 = FUN_00074eb0;
    g_0270aa60 = 0;
    ram_000000000270aa68 = 0;
    g_0270aa70 = 0;
    g_0270aae8 = 0;
    ram_000000000270aaf0 = 0;
    g_0270aaf8 = 0;
    g_0270aafa = 1;
    g_0270aa78 = 0;
    ram_000000000270aa80 = 0;
    g_0270aa88 = 0;
    ram_000000000270aa90 = 0;
    g_0270aa98 = 0;
    ram_000000000270aaa0 = 0;
    g_0270aaa8 = 0;
    ram_000000000270aab0 = 0;
    g_0270aab8 = 0;
    ram_000000000270aac0 = 0;
    g_0270aac8 = 0;
    ram_000000000270aad0 = 0;
    g_0270aad8 = 0;
    ram_000000000270aae0 = 0;
    g_0270ab03 = 0;
    g_0270aafb = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar3 != '\0') goto LAB_0064d55d;
  }
  plVar6 = &g_02802688;
LAB_0064d55d:
  if (*plVar6 != 0) {
    lVar1 = *arg1;
    lVar5 = arg1[1];
    if (((char)lVar5 != '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d23f50();
    (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x4a0))();
    if ((*(int *)(lVar1 + 0xc) == 0) &&
       ((**(code **)(*(int64_t *)this_ptr[0x1c] + 0x478))(), this_ptr[0x1c] != 0)) {
      this_ptr[0x1c] = 0;
      FUN_00d50b20();
    }
    FUN_00d50130();
    if (((char)lVar5 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00781f00
// ============================================================
// Function: FUN_00781f00
// Address: 00781f00
// Size: 1099 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00781f00(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  byte bVar4;
  uint32_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  double dVar8;
  uint64_t uVar9;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_02728af8;
  if (g_02728af8 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026f6fa0;
  if ((char)uVar5 == '\0') {
    FUN_01cae990();
    plVar2 = local_40;
    lVar1 = g_02729610;
    if (g_02729610 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    uVar9 = extraout_XMM0_Qa;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar1 = g_026f6fa0;
    if (cVar3 != '\0') {
      if (*(int *)((int64_t)this_ptr + 0x16c) != 0) goto LAB_00782027;
      if (param_2 == '\0') {
        if (g_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar8 = (double)FUN_00e7d6f0();
        uVar7 = (uint64_t)(dVar8 * g_023907c0);
        dVar8 = dVar8 * g_023907c0 - g_023907c8;
        uVar9 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        bVar4 = (byte)(((int64_t)dVar8 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar9,&local_50);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_38 = '\0';
          local_40 = plVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = CONCAT71((int7)((uint64_t)plVar2 >> 8),plVar2 != (int64_t *)0x0 & bVar4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_0078233a;
      }
    }
    uVar6 = FUN_01d33980(uVar9,param_2);
    uVar7 = (uint64_t)uVar6;
  }
  else {
    if (*(int *)((int64_t)this_ptr + 0x16c) == 0) {
      if (param_2 == '\0') {
        if (g_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar8 = (double)FUN_00e7d6f0();
        uVar7 = (uint64_t)(dVar8 * g_023907c0);
        dVar8 = dVar8 * g_023907c0 - g_023907c8;
        uVar9 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        bVar4 = (byte)(((int64_t)dVar8 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar9,&local_50);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_38 = '\0';
          local_40 = plVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = CONCAT71((int7)((uint64_t)plVar2 >> 8),plVar2 != (int64_t *)0x0 & bVar4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*this_ptr + 0x4f8))();
        uVar7 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
      }
      goto LAB_0078233a;
    }
LAB_00782027:
    uVar7 = 0;
  }
LAB_0078233a:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 00332660
// ============================================================
// Function: FUN_00332660
// Address: 00332660
// Size: 999 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00332660(uint64_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t **pplVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t *plVar6;
  uint32_t uVar7;
  int64_t local_b0;
  char local_a8;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t *)(this_ptr + 0xa0) != 0) && (param_2 != '\0')) {
    FUN_003322a0();
    local_60 = local_48;
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e561b0();
    FUN_01d8b220();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_70 = local_80;
    local_38[0] = '\0';
    local_68 = local_80;
    do {
      plVar6 = local_70;
      (**(code **)(*local_70 + 0x370))();
      plVar5 = local_48;
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          plVar5 = plVar6;
          goto LAB_00332777;
        }
      }
      else {
        local_70 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00332777:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
        plVar6 = plVar5;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar4 = &local_70;
        if (cVar1 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar6 = local_70;
      if (*pplVar4 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        plVar5 = local_60;
        if (local_68 == (int64_t *)0x0) goto LAB_0033290a;
        goto LAB_00332905;
      }
    } while (local_70 != (int64_t *)0x0);
    plVar6 = (int64_t *)0x0;
    plVar5 = local_60;
    if (local_68 != (int64_t *)0x0) {
LAB_00332905:
      plVar5 = local_60;
      FUN_00d50b20();
    }
LAB_0033290a:
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      uVar7 = FUN_0021a630();
      local_58 = local_48;
      local_50 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_50 = '\x01';
      FUN_01a296f0(uVar7,0);
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar7 = FUN_01caeac0();
    FUN_01289850(uVar7,g_023b26e8);
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 00781710
// ============================================================
// Function: FUN_00781710
// Address: 00781710
// Size: 1129 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00781710(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar7,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (int64_t *)0x0 & bVar3) != 0) {
    (**(code **)(*this_ptr + 0x468))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x460))();
      local_70 = local_50;
      local_68 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*this_ptr + 0x458))();
      local_60 = local_90;
      local_58 = 0;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        lVar1 = this_ptr[0xd];
      }
      else {
        local_88 = '\0';
        lVar1 = this_ptr[0xd];
      }
      local_58 = '\x01';
      if (lVar1 != 0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      FUN_01f53880(&local_60,&local_70,&local_b0);
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        return;
      }
      local_a0 = plVar2;
      local_98 = '\0';
      (**(code **)(*this_ptr + 0x470))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      cVar4 = FUN_00780680();
      if (cVar4 == '\0') {
        return;
      }
    }
    FUN_00756ee0();
    (**(code **)(*this_ptr + 0x5f0))();
    plVar2 = local_40;
    (**(code **)(*this_ptr + 0x628))();
    local_80 = local_50;
    local_78 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*plVar2 + 0x648))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d349f0();
  }
  return;
}



// ============================================================
// 007843e0
// ============================================================
// Function: FUN_007843e0
// Address: 007843e0
// Size: 845 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_007843e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  uint uVar4;
  void* pVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *arg1;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint64_t local_d0;
  uint32_t local_c8;
  int64_t local_c0;
  uint8_t local_b8 [8];
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int local_74;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  local_d8 = *arg1;
  if (local_d8 != 0) {
    local_e0 = 0;
    local_e8 = 0;
    local_c8 = 0;
    local_d0 = 0;
    if (0 < *(int *)(local_d8 + 0xc)) {
      uVar6 = 0;
      local_c0 = local_d8;
      do {
        local_74 = (int)uVar6;
        lVar1 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + uVar6 * 8);
        local_a0 = '\0';
        local_e8 = lVar1;
        local_a8 = lVar1;
        FUN_004f9cf0();
        local_70 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 != 0) {
          local_60 = '\0';
          local_68 = 0;
          local_58 = local_70;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar8 = -local_50._4_4_;
              }
              else {
                iVar8 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar8);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar8 = 0;
              }
              local_50 = CONCAT44(iVar8,(int)local_50);
            }
            lVar2 = (int64_t)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (*(int *)(local_58 + 0xc) <= iVar8) break;
            lVar7 = *(int64_t *)(local_58 + 0x10);
            local_88 = *(int64_t *)(lVar7 + 8 + lVar2 * 8);
            local_90 = '\0';
            local_80 = '\0';
            local_98 = lVar1;
            local_68 = local_88;
            FUN_004f9d80(lVar7,&local_88);
            lVar2 = local_40;
            pVar5 = (void*)lVar7;
            if (local_38 == '\0') {
              if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e60a0();
            lVar7 = local_40;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_b0 = 1;
            local_f8 = lVar2;
            local_f0 = 0;
            FUN_00784900(&local_f8,local_b8);
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d50b20();
        }
        uVar4 = local_74 + 1;
        uVar6 = (uint64_t)uVar4;
        local_d0 = CONCAT44(local_d0._4_4_,uVar4);
      } while ((int)uVar4 < *(int *)(local_c0 + 0xc));
    }
    FUN_000be170();
  }
  return;
}



// ============================================================
// 0039bed0
// ============================================================
// Function: FUN_0039bed0
// Address: 0039bed0
// Size: 1063 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0039bed0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*(int64_t *)this_ptr[0xa7] + 0x78))();
  FUN_00d3ecc0();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02702db8;
  if (cVar2 == '\0') {
    if (g_02702db8 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_48 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d50b00();
      local_38[0] = '\0';
      do {
        (**(code **)(*this_ptr + 0x370))();
        if (local_48 == this_ptr) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_0039c097;
          }
        }
        else {
          this_ptr = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar4 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar4 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_0039c097:
            local_38[0] = '\x01';
            pcVar4 = local_40;
          }
          *pcVar4 = '\0';
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          ___cxa_guard_release();
        }
        plVar5 = &g_02802688;
        if (this_ptr != (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar5 = (int64_t *)&stack0xffffffffffffffb0;
          if (cVar2 == '\0') {
            plVar5 = &g_02802688;
          }
        }
        if (*plVar5 != 0) {
          if ((local_38[0] == '\0') && (this_ptr != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          goto LAB_0039c20b;
        }
      } while (this_ptr != (int64_t *)0x0);
      this_ptr = (int64_t *)0x0;
LAB_0039c20b:
      FUN_00d50b20();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00262a50();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00262a50();
          cVar2 = FUN_004f3eb0();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_00d50b20();
            goto LAB_0039c2e0;
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(&UNK_00001668 + *this_ptr))();
  }
  FUN_019d6f50();
LAB_0039c2e0:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00325530
// ============================================================
// Function: FUN_00325530
// Address: 00325530
// Size: 1080 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00325530(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_28;
  char local_20;
  
  FUN_01a34c10();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fe3f8;
  if (g_026fe3f8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6e70;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (g_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar2;
  local_d0 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_000bf690(&local_d8,&local_e8,&local_c8);
  lVar1 = *(int64_t *)(this_ptr + 0x1b8);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_003255f1;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x1b8);
      *(int64_t *)(this_ptr + 0x1b8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_003255f1:
      *(int64_t *)(this_ptr + 0x1b8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_b8 = g_026fe408;
  if (g_026fe408 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fe410;
  local_b0 = '\x01';
  if (g_026fe410 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_000bf690(&local_a8,&local_b8,&local_98);
  lVar1 = *(int64_t *)(this_ptr + 0x1c0);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_00325754;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x1c0);
      *(int64_t *)(this_ptr + 0x1c0) = local_28;
    }
    else {
      local_20 = '\0';
LAB_00325754:
      *(int64_t *)(this_ptr + 0x1c0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_88 = g_027024e8;
  if (g_027024e8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026defc0;
  local_80 = '\x01';
  if (g_026defc0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  FUN_000bf690(&local_78,&local_88,&local_68);
  lVar1 = *(int64_t *)(this_ptr + 0x1c8);
  lVar2 = lVar1;
  if (lVar1 == local_28) goto LAB_003258e7;
  lVar2 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar2 = 0;
      goto LAB_0032589c;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x1c8);
    *(int64_t *)(this_ptr + 0x1c8) = local_28;
  }
  else {
    local_20 = '\0';
LAB_0032589c:
    *(int64_t *)(this_ptr + 0x1c8) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_28;
  }
LAB_003258e7:
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0064fb00
// ============================================================
// Function: FUN_0064fb00
// Address: 0064fb00
// Size: 865 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_0064fb00(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  char *pcVar6;
  void* pVar7;
  char *pcVar8;
  int64_t arg1;
  void*this_ptr;
  int iVar9;
  int64_t *local_90;
  char local_88 [8];
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_90 + 0x450))();
  if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00521db0();
    (**(code **)(*local_90 + 0x628))();
    if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    pcVar8 = local_40;
    if (local_88[0] != '\0') {
      pcVar8 = local_88;
    }
    local_40[0] = local_88[0];
    *pcVar8 = '\0';
    if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = local_90;
    lVar1 = *(int64_t *)(arg1 + 0xa0);
    if (lVar1 != 0) {
      local_88[0] = '\0';
      local_70 = 0;
      local_78 = 0;
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar9 = 0;
        do {
          FUN_006f3f00();
          plVar2 = local_68;
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_006f3f00();
            (**(code **)(*local_50 + 0x628))();
            plVar2 = local_68;
            local_38[0] = local_60[0];
            pcVar8 = local_38;
            pcVar6 = local_60;
            if (local_60[0] == '\0') {
              pcVar6 = pcVar8;
            }
            *pcVar6 = '\0';
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar7 = (void*)pcVar8;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a1110();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01313ad0();
            plVar3 = local_68;
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == local_58) {
              *(void*)(this_ptr + 1) = 0;
              if ((local_38[0] == '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              *this_ptr = plVar2;
              *(void*)(this_ptr + 1) = 1;
              FUN_000e3600();
              if (local_40[0] == '\0') {
                return this_ptr;
              }
              goto LAB_0064fe0e;
            }
            if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar9 = iVar9 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar9);
        } while (iVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_000e3600();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (local_40[0] != '\0') {
LAB_0064fe0e:
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}



// ============================================================
// 00349a20
// ============================================================
// Function: FUN_00349a20
// Address: 00349a20
// Size: 926 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00349a20(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02702db8;
  if (g_02702db8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar6 = this_ptr;
    do {
      (**(code **)(*plVar6 + 0x370))();
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00349b57;
        }
      }
      else {
        plVar6 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar4 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar4 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00349b57:
          local_38[0] = '\x01';
          pcVar4 = local_40;
        }
        *pcVar4 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar5 = &g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar5 = (int64_t *)&stack0xffffffffffffffa0;
        if (cVar2 == '\0') {
          plVar5 = &g_02802688;
        }
      }
      if (*plVar5 != 0) {
        if ((local_38[0] == '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_00349ccb;
      }
    } while (plVar6 != (int64_t *)0x0);
    plVar6 = (int64_t *)0x0;
LAB_00349ccb:
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00262a50();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00262a50();
        cVar2 = FUN_004f3eb0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d50b20();
          goto LAB_00349da9;
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_01931100();
LAB_00349da9:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00334b30
// ============================================================
// Function: FUN_00334b30
// Address: 00334b30
// Size: 918 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00334b30(uint64_t param_1,uint param_2)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  uint64_t uVar7;
  char *pcVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60 [16];
  uint64_t local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_003322a0();
  if (local_60[0] == '\0') {
    if (local_68 == 0) {
LAB_00334bf3:
      uVar7 = 0;
      goto LAB_00334ea9;
    }
    FUN_00d50b00();
    if (*(int *)(local_68 + 0xc) < 1) goto LAB_00334bec;
LAB_00334b6d:
    FUN_00d23310();
    pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_60[0]);
    pcVar8 = local_38;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_40 = local_78;
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar3 = FUN_01caea40();
    lVar2 = local_40;
    if ((int)uVar3 < 0) {
LAB_00334d36:
      uVar7 = 0;
      local_40 = lVar2;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      iVar1 = *(int *)(local_68 + 0xc);
      if (local_60[0] != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 <= (int)uVar3) goto LAB_00334d36;
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      uVar7 = (uint64_t)uVar3;
      lVar2 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + uVar7 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar9 = (uint64_t)param_2;
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((lVar2 != 0) && ((char)param_2 != '\0')) {
        local_60[0] = '\0';
        local_48 = 0;
        local_50 = 0;
        if (0 < *(int *)(local_68 + 0xc)) {
          lVar10 = 0;
          do {
            uVar9 = *(uint64_t *)(*(int64_t *)(local_68 + 0x10) + lVar10 * 8);
            pvVar4 = _pthread_getspecific((void*)uVar7);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              uVar9 = *(uint64_t *)(uVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
            FUN_012a2350();
            lVar10 = lVar10 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar10);
          } while ((int)lVar10 < *(int *)(local_68 + 0xc));
        }
        FUN_001159b0();
      }
      if (lVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = CONCAT71((int7)(uVar9 >> 8),1);
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68 == 0) goto LAB_00334bf3;
    if (0 < *(int *)(local_68 + 0xc)) goto LAB_00334b6d;
LAB_00334bec:
    uVar7 = 0;
  }
  FUN_00d50b20();
LAB_00334ea9:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 003a1100
// ============================================================
// Function: FUN_003a1100
// Address: 003a1100
// Size: 757 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint32_t FUN_003a1100(uint64_t param_1,uint8_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  int64_t *local_50;
  char local_48 [15];
  char local_39;
  char local_38 [8];
  
  local_39 = FUN_00392f00();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_50 == plVar5) {
      if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003a11a7;
      }
    }
    else {
      plVar5 = local_50;
      if (local_48[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_003a11a7:
        local_38[0] = '\x01';
        pcVar3 = local_48;
      }
      *pcVar3 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      cVar1 = local_39;
      if (this_ptr == (int64_t *)0x0) goto LAB_003a133d;
      goto LAB_003a1335;
    }
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      cVar1 = local_39;
      if (this_ptr != (int64_t *)0x0) {
LAB_003a1335:
        cVar1 = local_39;
        FUN_00d50b20();
      }
LAB_003a133d:
      if ((plVar5 != (int64_t *)0x0) && (cVar1 == '\x01')) {
        FUN_00228b30();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01c93070();
      FUN_01f27fe0();
      cVar1 = (**(code **)(*local_50 + 0x450))();
      uVar6 = extraout_XMM0_Da;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        uVar6 = FUN_01c93080();
      }
      uVar6 = FUN_019c3840(uVar6,param_2);
      return uVar6;
    }
  } while( true );
}



// ============================================================
// 00263640
// ============================================================
// Function: FUN_00263640
// Address: 00263640
// Size: 688 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00263640(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  bool bVar6;
  uint64_t local_58;
  uint64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      uVar5 = *(uint64_t *)(this_ptr + 0x90);
      if (*(uint64_t *)(this_ptr + 0x90) != 0) goto LAB_002636c7;
      uVar5 = 0;
    }
    else {
      uVar5 = local_48;
      if (local_38[0] == '\0') {
LAB_002636c7:
        FUN_00d50b00();
      }
    }
  }
  cVar2 = FUN_002639e0();
  if (cVar2 == '\0') {
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      bVar6 = false;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      bVar6 = local_48 != 0;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    if (bVar6) goto LAB_0026375b;
  }
  else {
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
LAB_0026375b:
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      local_58 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      pcVar4 = local_38;
      if (local_40[0] != '\0') {
        pcVar4 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_58 = *(uint64_t *)(this_ptr + 0x90);
        if (*(uint64_t *)(this_ptr + 0x90) != 0) goto LAB_002637c7;
        local_58 = 0;
      }
      else {
        local_58 = local_48;
        if (local_38[0] == '\0') {
LAB_002637c7:
          FUN_00d50b00();
        }
      }
    }
    uVar3 = FUN_01b71a90();
    uVar5 = (uint64_t)uVar3;
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      if ((param_2 == '\0') || (*(int64_t *)(this_ptr + 0xa8) != 0)) {
        plVar1 = *(int64_t **)(this_ptr + 0xa8);
      }
      else {
        if (*(int64_t *)(this_ptr + 0xd8) != 0) {
          FUN_00637870();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar5 = local_48;
          if (local_48 != 0) {
            FUN_00637870();
            FUN_006e6b30();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_0024a180();
        plVar1 = *(int64_t **)(this_ptr + 0xa8);
      }
      if (plVar1 == (int64_t *)0x0) {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0xb18))();
        uVar5 = (uint64_t)uVar3;
      }
      goto LAB_00263855;
    }
  }
  uVar5 = 0;
LAB_00263855:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 00780680
// ============================================================
// Function: FUN_00780680
// Address: 00780680
// Size: 897 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00780680(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t *local_110;
  char local_108;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x468))();
  uVar6 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_50 = uVar6;
  FUN_00362a30();
  if (local_108 == '\0') {
    if (local_110 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_108 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_110 == (int64_t *)0x0) {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    goto LAB_00780983;
  }
  cVar4 = FUN_017a7670();
  lVar1 = g_026f6fb0;
  if (cVar4 == '\0') {
LAB_0078093d:
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
    if (g_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02729608;
    local_a0 = lVar1;
    local_98 = '\x01';
    if (g_02729608 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_01f6ca30();
    if ((local_108 == '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    FUN_017a6de0();
    local_70 = g_0270b810;
    local_68 = 0;
    if (g_0270b810 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_017a7040();
    local_60 = g_0270b818;
    local_58 = 0;
    if (g_0270b818 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_00780ce0(&local_b0,&local_70,&local_60);
    FUN_000b4da0();
    uVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_002d10d0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_80 = uVar3;
    local_78 = '\0';
    uVar5 = (**(code **)(*local_110 + 0x5d8))();
    uVar6 = (uint64_t)uVar5;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (uVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar5 == 0) goto LAB_0078093d;
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_00780983:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00326520
// ============================================================
// Function: FUN_00326520
// Address: 00326520
// Size: 920 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


int64_t * FUN_00326520(void*param_1,float *param_2)

{
  float fVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float local_b8 [2];
  float local_b0;
  float *local_a8;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if ((param_2[1] < 0.0) || (g_023942a8 <= param_2[1])) {
LAB_00326869:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    local_a8 = param_2;
    fVar7 = (float)(**(code **)(*arg1 + 0xa58))();
    if (local_80 == '\0') {
      if (local_88 == 0) goto LAB_00326869;
      fVar7 = (float)FUN_00d50b00();
    }
    else if (local_88 == 0) goto LAB_00326869;
    if (*(int *)(local_88 + 0xc) < 1) {
      bVar3 = false;
      local_38 = 0;
    }
    else {
      iVar5 = 0;
      lVar6 = 0;
      local_38 = 0;
      bVar3 = false;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar6 * 8);
        cVar4 = (**(code **)(*arg1 + 0xa60))(fVar7,local_b8);
        fVar7 = extraout_XMM0_Da;
        if (cVar4 != '\0') {
          fVar7 = local_b0 + local_b8[0] + g_02390d00;
          fVar1 = *local_a8;
          if (((fVar1 < local_b8[0] + g_023b1614) || (local_b8[0] + g_02394298 < fVar1)) ||
             (iVar5 < 0)) {
            if (((fVar7 + g_023b1d84 <= fVar1) && (fVar7 = fVar7 + g_02390d2c, fVar1 <= fVar7))
               && (iVar5 < 1)) {
              if (param_1 != (void*)0x0) {
                *param_1 = 0;
              }
              if (local_38 == 0) {
                FUN_00326480();
                local_38 = local_48;
                if (local_48 == 0) {
                  local_38 = 0;
                }
                else {
                  bVar3 = true;
                  if (local_40 == '\0') {
                    FUN_00d50b00();
                  }
                }
              }
              local_40 = '\0';
              fVar7 = (float)FUN_00d21140();
              iVar5 = -1;
              local_48 = lVar2;
            }
          }
          else {
            if (param_1 != (void*)0x0) {
              *param_1 = 1;
            }
            if (local_38 == 0) {
              FUN_00326480();
              local_38 = local_48;
              if (local_48 == 0) {
                local_38 = 0;
              }
              else {
                bVar3 = true;
                if (local_40 == '\0') {
                  FUN_00d50b00();
                }
              }
            }
            local_40 = '\0';
            fVar7 = (float)FUN_00d21140();
            iVar5 = 1;
            local_48 = lVar2;
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_0032bfd0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_003268b9;
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_003268b9;
    }
  }
  local_38 = 0;
LAB_003268b9:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 00162ad0
// ============================================================
// Function: FUN_00162ad0
// Address: 00162ad0
// Size: 58160 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


int FUN_00162ad0(uint64_t param_1,int param_2,size_t param_3)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  void *pvVar5;
  int64_t arg1;
  int64_t this_ptr;
  int iVar6;
  int *piVar7;
  void *pvVar4;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar1 = *(int *)(this_ptr + 0x30);
  iVar6 = 0;
  if (-1 < iVar1) {
    piVar7 = (int *)(this_ptr + 0x30);
    if (iVar1 < 0x1b) {
      if (0x1b < *piVar7 + param_2) {
        param_2 = 0x1b;
      }
      _memcpy((void *)((int64_t)&MACH_HEADER.flags + 3),(void *)(int64_t)param_2,param_3);
      *(void*)(arg1 + param_2) = 0;
      *piVar7 = *piVar7 + param_2;
      iVar6 = param_2;
    }
    else {
      if (iVar1 < 0x5c) {
        uVar3 = *piVar7 + -0x1b + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x9d) {
        uVar3 = *piVar7 + -0x5c + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0xde) {
        uVar3 = *piVar7 + -0x9d + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x11f) {
        uVar3 = *piVar7 + -0xde + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x160) {
        uVar3 = *piVar7 + -0x11f + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x1a1) {
        uVar3 = *piVar7 + -0x160 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x1aa) {
        uVar3 = *piVar7 + -0x1a1 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 9;
        if ((int)uVar3 < 10) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else {
        if (0x1c2 < iVar1) goto LAB_00170dd9;
        uVar3 = *piVar7 + -0x1aa + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x19;
        if ((int)uVar3 < 0x1a) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      _memcpy(pvVar4,pvVar5,param_3);
      *(void*)(arg1 + (int64_t)pvVar5) = 0;
      *piVar7 = *piVar7 + (int)pvVar5;
    }
  }
LAB_00170dd9:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return iVar6;
}



// ============================================================
// 00341be0
// ============================================================
// Function: FUN_00341be0
// Address: 00341be0
// Size: 710 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00341be0(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_30;
  char local_28;
  
  FUN_019f0ff0();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    local_68 = (**(code **)(*local_30 + 0x68))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    local_60 = (**(code **)(*local_30 + 0xc0))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    local_58 = (**(code **)(*local_30 + 0xd0))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar1 = this_ptr[0xa8];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    (**(code **)(&UNK_000016f8 + *this_ptr))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_68 = FUN_01953bb0(local_68);
    local_60 = FUN_01953bb0(local_60);
    local_58 = FUN_01953bb0(local_58);
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_30 + 0x60))(local_68);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_30 + 0xe0))(local_60,local_58);
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = g_026f6d60;
  if (g_026f6d60 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_78 = 0;
  local_70 = '\0';
  FUN_00d40470(&local_78,&stack0xffffffffffffffc0,1,3);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00264660
// ============================================================
// Function: FUN_00264660
// Address: 00264660
// Size: 810 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00264660(void* param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x1c0) != 0) {
    FUN_006f3f00();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_002646cc;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_002646cc:
      cVar1 = FUN_00751ba0();
      if ((cVar1 == '\0') || (*(int *)(this_ptr + 0x198) == 2)) {
LAB_0026479d:
        uVar3 = 0;
      }
      else {
        (**(code **)(*local_40 + 0x628))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a11a0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (int64_t *)0x0) goto LAB_0026479d;
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01710570();
        if (cVar1 == '\0') {
          FUN_01caeae0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_01caeae0();
            FUN_01d66ab0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar3 = 0;
        }
        else {
          if (param_2 != '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0170f810();
            FUN_0170f840();
            FUN_00223fa0();
          }
          FUN_01caeae0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
          if (local_40 != (int64_t *)0x0) {
            FUN_01caeae0();
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0170f810();
            FUN_01d66ab0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_002647a7;
    }
  }
  uVar3 = 0;
LAB_002647a7:
  return uVar3 & 0xffffffff;
}



// ============================================================
// 002641f0
// ============================================================
// Function: FUN_002641f0
// Address: 002641f0
// Size: 810 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_002641f0(void* param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x1c0) != 0) {
    FUN_006f3f00();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0026425c;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_0026425c:
      cVar1 = FUN_00751ba0();
      if ((cVar1 == '\0') || (*(int *)(this_ptr + 0x198) == 2)) {
LAB_0026432d:
        uVar3 = 0;
      }
      else {
        (**(code **)(*local_40 + 0x628))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a11a0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (int64_t *)0x0) goto LAB_0026432d;
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01710590();
        if (cVar1 == '\0') {
          FUN_01caeae0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_01caeae0();
            FUN_01d66ab0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar3 = 0;
        }
        else {
          if (param_2 != '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0170fee0();
            FUN_0170fef0();
            FUN_00223fa0();
          }
          FUN_01caeae0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
          if (local_40 != (int64_t *)0x0) {
            FUN_01caeae0();
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0170fee0();
            FUN_01d66ab0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_00264337;
    }
  }
  uVar3 = 0;
LAB_00264337:
  return uVar3 & 0xffffffff;
}



// ============================================================
// 00502e50
// ============================================================
// Function: FUN_00502e50
// Address: 00502e50
// Size: 556 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00502e50(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  uint64_t arg1;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00502eaa:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00502eaa;
    }
    plVar1 = *pplVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) goto LAB_00502ed1;
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0050303c;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_0050303c:
      iVar5 = FUN_01caea40();
      if (iVar5 == 0) {
        FUN_01d66ab0();
      }
      else {
        FUN_01d66ab0();
      }
      FUN_00d50b20();
    }
  }
  else {
LAB_00502ed1:
    pplVar7 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (int64_t *)0x0) {
LAB_00502f0c:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00502f0c;
    }
    plVar1 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      if ((char)param_2 == '\0') {
        FUN_01caeae0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00502fe3;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_00502fe3:
          FUN_01caea40();
          FUN_01b18580();
          FUN_01d66ab0();
          FUN_00d50b20();
        }
      }
      else {
        uVar3 = FUN_01b18580();
        arg1 = (uint64_t)uVar3;
        uVar4 = FUN_01caea40();
        uVar6 = 0;
        if (uVar3 != uVar4) {
          uVar6 = uVar4;
        }
        FUN_00502230(param_1,uVar6);
      }
      uVar8 = CONCAT71((int7)(arg1 >> 8),1);
      FUN_00d50b20();
      goto LAB_0050306b;
    }
  }
  uVar8 = 0;
LAB_0050306b:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 00349fa0
// ============================================================
// Function: FUN_00349fa0
// Address: 00349fa0
// Size: 906 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00349fa0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  char *pcVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((char)this_ptr[0xc3] == unaff_SIL) {
    return;
  }
  *(char *)(this_ptr + 0xc3) = unaff_SIL;
  (**(code **)(*this_ptr + 0x9b0))(param_1,0);
  if (local_40[0] == '\0') {
    if (local_48 == 0) goto LAB_0034a08f;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_0034a08f:
    bVar1 = true;
    goto LAB_0034a252;
  }
  if (0 < *(int *)(local_48 + 0xc)) {
    FUN_00d23310();
    local_38[0] = local_40[0];
    pcVar6 = local_38;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = pcVar6;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_012762c0((double)(int)(char)this_ptr[0xc3]);
    if (unaff_SIL == '\0') {
      uVar5 = FUN_00e7bdb0();
      FUN_01294af0(1,uVar5,1);
    }
    FUN_00d23310();
    pcVar6 = local_38;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = pcVar6;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  bVar1 = false;
LAB_0034a252:
  FUN_00d403d0();
  lVar2 = g_02702dc0;
  if (g_02702dc0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_78 = 0;
  local_70 = '\0';
  FUN_00d40470(&local_78,&stack0xffffffffffffff98,1,3);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0034a5d0
// ============================================================
// Function: FUN_0034a5d0
// Address: 0034a5d0
// Size: 828 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0034a5d0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)((int64_t)this_ptr + 0x619) == unaff_SIL) {
    return;
  }
  *(char *)((int64_t)this_ptr + 0x619) = unaff_SIL;
  (**(code **)(*this_ptr + 0x9b0))(param_1,0);
  if (local_40[0] == '\0') {
    if (local_48 == 0) goto LAB_0034a6bc;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_0034a6bc:
    bVar1 = true;
    goto LAB_0034a837;
  }
  if (0 < *(int *)(local_48 + 0xc)) {
    FUN_00d23310();
    local_38[0] = local_40[0];
    pcVar5 = local_38;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = pcVar5;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_SIL == '\0') {
      FUN_01289850(0,0);
    }
    else {
      FUN_01289850(g_02390124,0);
    }
    FUN_00d23310();
    pcVar5 = local_38;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = pcVar5;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  bVar1 = false;
LAB_0034a837:
  FUN_00d403d0();
  lVar2 = g_02702dc0;
  if (g_02702dc0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_78 = 0;
  local_70 = '\0';
  FUN_00d40470(&local_78,&stack0xffffffffffffff98,1,3);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005c0400
// ============================================================
// Function: FUN_005c0400
// Address: 005c0400
// Size: 3526 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "GNPropertyObserver"
//   "MUTempoEditorDelegate"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_005c0400(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xf] = &g_0266be50;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024d8da0;
  this_ptr[0xe] = &g_024d9420;
  this_ptr[0xf] = &g_024d9470;
  FUN_005c1710();
  FUN_005c1a40();
  FUN_005c1d70();
  FUN_005c20a0();
  FUN_005c23d0();
  FUN_005c2700();
  FUN_005c2a30();
  FUN_005c2d60();
  FUN_005c3090();
  FUN_005c33c0();
  FUN_005c36f0();
  FUN_005c3a20();
  FUN_005c3d40();
  FUN_005c4070();
  FUN_005c43a0();
  FUN_005c46d0();
  FUN_005c4a00();
  FUN_005c4d30();
  FUN_005c5060();
  FUN_005c5390();
  FUN_005c56c0();
  FUN_005c59f0();
  FUN_005c5d20();
  FUN_005c6050();
  FUN_005c6380();
  FUN_005c66b0();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c69e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x151) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c6b70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c6d00();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c6fa0();
    FUN_00e87980();
  }
  FUN_005c7130();
  FUN_005c7460();
  FUN_005c7790();
  FUN_005c7ac0();
  FUN_005c7df0();
  this_ptr[0x31] = 0;
  this_ptr[0x32] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c8120();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c82b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c8510();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c8770();
    FUN_00e87980();
  }
  FUN_005c8900();
  FUN_005c8c30();
  FUN_005c8f60();
  FUN_005c9290();
  FUN_005c95c0();
  *(void*)(this_ptr + 0x3a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270aafb == '\0') {
    FUN_005c98f0();
    FUN_00e87980();
  }
  FUN_005c9a80();
  FUN_005c9db0();
  return;
}



// ============================================================
// 003372c0
// ============================================================
// Function: FUN_003372c0
// Address: 003372c0
// Size: 542 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_003372c0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x4a0))();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    lVar6 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + lVar6 * 8);
      local_48 = plVar1;
      FUN_000f5df0();
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar5 = &local_48;
        if (cVar4 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar5 != (int64_t *)0x0) {
        FUN_01e4ec80();
        lVar3 = g_02702958;
        if (g_02702958 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar2 = local_48;
        FUN_00053ac0();
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar5 = &local_48;
          if (cVar4 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar5;
        local_38[0] = *(char *)(pplVar5 + 1);
        pplVar5 = pplVar5 + 1;
        if (local_38[0] == '\0') {
          pplVar5 = (int64_t **)local_38;
        }
        *(void*)pplVar5 = 0;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d45ad0();
          (**(code **)(*plVar1 + 0x918))();
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(local_80 + 0xc));
  }
  FUN_0033c540();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00341860
// ============================================================
// Function: FUN_00341860
// Address: 00341860
// Size: 512 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00341860(void)

{
  char cVar1;
  int64_t *this_ptr;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *local_28;
  char local_20;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_28 + 0x450))();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    uVar2 = (**(code **)(*local_28 + 0x68))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    uVar3 = (**(code **)(*local_28 + 0xc0))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    uVar4 = (**(code **)(*local_28 + 0xd0))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(&UNK_000016f0 + *this_ptr))();
    uVar2 = FUN_0193c6b0(uVar2);
    uVar3 = FUN_0193c6b0(uVar3);
    uVar4 = FUN_0193c6b0(uVar4);
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_28 + 0x60))(uVar2);
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    (**(code **)(*local_28 + 0xe0))(uVar3,uVar4);
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_019f0fd0();
  (**(code **)(*this_ptr + 0x7b8))();
  (**(code **)(*local_28 + 0x620))();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 006483a0
// ============================================================
// Function: FUN_006483a0
// Address: 006483a0
// Size: 604 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_006483a0(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0x160) != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_30 + 0x450))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_00d403d0();
      FUN_00d50b00();
      local_90 = g_0270b7f0;
      if (g_0270b7f0 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      FUN_00d41040(&local_80,&local_90);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00637870();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (int64_t *)0x0) {
      FUN_00637870();
      FUN_01bd0b60();
      lVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_006e3b90();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = '\0';
    local_70 = 0;
    FUN_01bd5340();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x168) + 0x4d0))();
    FUN_00d50130();
    if (*(int64_t *)(this_ptr + 0x168) != 0) {
      *(void*)(this_ptr + 0x168) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x160) != 0) {
      *(void*)(this_ptr + 0x160) = 0;
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 007801f0
// ============================================================
// Function: FUN_007801f0
// Address: 007801f0
// Size: 708 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_007801f0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if ((((g_0280ced8 == lVar1) || (g_0280cee8 == lVar1)) || (g_0280cef8 == lVar1)) ||
       ((g_0280cf08 == lVar1 || (g_0280cf18 == lVar1)))) {
      FUN_00d403d0();
      lVar1 = g_02726c90;
      if (g_02726c90 != 0) {
        FUN_00d50b00();
      }
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      local_88 = 0;
      local_80 = '\0';
      FUN_00d40470(&local_88,&stack0xffffffffffffff98,1,1);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (g_0280cf28 == lVar1) {
      FUN_001061f0();
      FUN_00757c60();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != local_58) {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_001060d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}



// ============================================================
// 0077fd70
// ============================================================
// Function: FUN_0077fd70
// Address: 0077fd70
// Size: 661 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0077fd70(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_38;
  char local_30;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d403d0();
    lVar1 = g_02726c90;
    if (g_02726c90 != 0) {
      FUN_00d50b00();
    }
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    local_88 = 0;
    local_80 = '\0';
    plVar4 = &local_88;
    FUN_00d40470(plVar4,&stack0xffffffffffffff98,1,1);
    param_1 = (void*)plVar4;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_001061f0();
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != local_58) {
    FUN_00757c60();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_001060d0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0039bb90
// ============================================================
// Function: FUN_0039bb90
// Address: 0039bb90
// Size: 528 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0039bb90(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  uint64_t uVar4;
  byte bVar5;
  int64_t *arg1;
  void*this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0034cc20();
  *puVar3 = &g_024edac8;
  puVar3[2] = &g_024ee4c0;
  puVar3[0x27] = &g_024ee500;
  puVar3[0x2d] = &g_024ee530;
  puVar3[0x2e] = &g_024ee580;
  *(void*)(puVar3 + 0x3f) = 0;
  FUN_00d500e0();
  cVar2 = (**(code **)(&g_00001680 + *arg1))();
  local_48 = g_026f6de0;
  if (cVar2 == '\0') {
    if (g_026f6de0 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (uint64_t)(dVar6 * g_023907c0);
    uVar4 = (int64_t)(dVar6 * g_023907c0 - g_023907c8) & (int64_t)uVar4 >> 0x3f | uVar4;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar5 = (char)uVar4 + (char)(uVar4 / 3) * -3;
    local_58 = local_48;
    local_50 = '\0';
    FUN_000175c0(uVar7,&local_58);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_38 = '\0';
      local_40 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    *(byte *)(puVar3 + 0x3f) = lVar1 != 0 & bVar5;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(puVar3 + 0x3f) = 0;
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00782800
// ============================================================
// Function: FUN_00782800
// Address: 00782800
// Size: 1038 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00782800(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t local_d8;
  char local_d0;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  FUN_004f9cf0();
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  if (local_d8 != 0) {
    if (0 < *(int *)(local_d8 + 0xc)) {
      iVar2 = 0;
      do {
        FUN_004f9d80();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_01275b30();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00782660();
        FUN_012642b0();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a70();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012edae0();
        FUN_00d216c0();
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(local_d8 + 0xc));
    }
    FUN_00115190();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0064dc10
// ============================================================
// Function: FUN_0064dc10
// Address: 0064dc10
// Size: 507 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0064dc10(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5f8))();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar2 + 0xc) == 1) {
    if (this_ptr[0x30] != 0) {
      FUN_00093a30();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == this_ptr) {
        FUN_00094d10();
      }
    }
    FUN_01e56750();
    FUN_01e5eda0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x5d8))();
    plVar2 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar1 = this_ptr[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    cVar3 = (**(code **)(*this_ptr + 0x620))(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      local_58 = 0;
      lVar1 = this_ptr[0x16];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      (**(code **)(*this_ptr + 0x628))(param_1,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 006472f0
// ============================================================
// Function: FUN_006472f0
// Address: 006472f0
// Size: 550 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_006472f0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  if (this_ptr[0x16] != 0) {
    if (this_ptr[0x1d] != 0) {
      FUN_01e40eb0();
      lVar1 = this_ptr[0x2e];
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (local_30 == lVar1) {
        return;
      }
    }
    if (*(int *)(this_ptr[0x20] + 0xc) == 0) {
      (**(code **)(*this_ptr + 0x5e0))();
      if ((local_28 == '\0') && (local_30 != 0)) {
        FUN_00d50b00();
      }
      FUN_00645c10();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (local_30 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (int64_t *)this_ptr[0x2e];
      local_48 = 0;
      lVar1 = this_ptr[0x1d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar1;
      (**(code **)(*plVar2 + 0x9e0))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = g_02725940;
    if (g_02725940 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_60 = 0;
    local_58 = '\0';
    FUN_00d40470(&local_60,&stack0xffffffffffffffc0,1,1);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0063f660();
  }
  return;
}



// ============================================================
// 005c6d00
// ============================================================
// Function: FUN_005c6d00
// Address: 005c6d00
// Size: 626 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MUEditTimelineMode"
//   "_tempoEditorMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_005c6d00(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_0271ad90 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_0271ad60 != '=';
      g_0271ad80 = -(uint)(*g_0271ad60 == '=');
      g_0271ad84 = 0;
      if (*g_0271ad68 != '=') {
        g_0271ad84 = (uint)bVar1;
      }
      g_0271ad88 = 1;
      if (*g_0271ad70 != '=') {
        g_0271ad88 = g_0271ad84 + 1;
      }
      g_0271ad8c = g_0271ad84 == bVar1 && g_0271ad88 == g_0271ad84 + 1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271ad10 = "_tempoEditorMode";
      g_0271ad18 = &g_0270aa40;
      g_0271ad20 = 0;
      g_0271ad28 = 0x6500;
      g_0271ad30 = "MUEditTimelineMode";
      g_0271ad38 = &g_0271ad98;
      g_0271ad40 = 0;
      ram_000000000271ad48 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271ad10;
}



// ============================================================
// 005c8510
// ============================================================
// Function: FUN_005c8510
// Address: 005c8510
// Size: 560 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditMode"
//   "_lastEditMode"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_005c8510(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271b010 = "_lastEditMode";
      g_0271b018 = &g_0270aa40;
      g_0271b020 = 0;
      g_0271b028 = 0x6500;
      g_0271b030 = "MDEditMode";
      g_0271b038 = &g_0270f658;
      g_0271b040 = 0;
      ram_000000000271b048 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271b010;
}



// ============================================================
// 005c82b0
// ============================================================
// Function: FUN_005c82b0
// Address: 005c82b0
// Size: 560 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditMode"
//   "_editMode"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_005c82b0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271afc8 = "_editMode";
      g_0271afd0 = &g_0270aa40;
      g_0271afd8 = 0;
      g_0271afe0 = 0x6500;
      g_0271afe8 = "MDEditMode";
      g_0271aff0 = &g_0270f658;
      g_0271aff8 = 0;
      ram_000000000271b000 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271afc8;
}



// ============================================================
// 00335da0
// ============================================================
// Function: FUN_00335da0
// Address: 00335da0
// Size: 623 bytes
// Class: MDEditorViewController
// String references:
//   "handleInspectorSelect"
//   "handleInspectorSeparate"
//   "handleInspectorReintegrate"
//   "onUpdateButtonTitles"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00335da0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}

