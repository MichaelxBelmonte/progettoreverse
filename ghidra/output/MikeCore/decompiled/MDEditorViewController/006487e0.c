// Function: FUN_006487e0
// Address: 006487e0
// Size: 10654 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x00649f3e) */
/* WARNING: Removing unreachable block (ram,0x00648e0b) */
/* WARNING: Removing unreachable block (ram,0x00648e1b) */
/* WARNING: Removing unreachable block (ram,0x00648e93) */
/* WARNING: Removing unreachable block (ram,0x00648e87) */
/* WARNING: Removing unreachable block (ram,0x00649f4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006487e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  longlong *unaff_RDI;
  longlong *plVar12;
  byte bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  byte local_b4;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  cVar4 = FUN_00637950();
  local_b4 = FUN_00645730();
  bVar5 = FUN_0063f180();
  iVar9 = FUN_00643ea0();
  bVar6 = FUN_006443a0();
  if ((bVar5 | bVar6) == 1) {
    if (unaff_RDI[0x1c] != 0) {
      FUN_01e40eb0();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == (longlong *)0x0) {
        plVar1 = (longlong *)unaff_RDI[0x1b];
        lVar2 = unaff_RDI[0x1c];
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
  else if (unaff_RDI[0x1c] != 0) {
    FUN_01e40eb0();
    plVar1 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00637870();
      if (local_40 == (longlong *)0x0) {
        bVar14 = false;
      }
      else {
        FUN_0063f230();
        bVar14 = local_50 != (longlong *)0x0;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar14) {
        FUN_0063f230();
        plVar1 = local_50;
        FUN_0021e4e0();
        plVar12 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00637870();
        if (plVar12 != (longlong *)0x0) {
          FUN_0063f230();
          FUN_0021e4e0();
          FUN_01c446f0();
        }
        FUN_006e30e0();
        if (plVar12 != (longlong *)0x0) {
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x478))();
      goto LAB_00648a97;
    }
  }
  if (unaff_RDI[0x2e] == 0) {
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
  if (local_40 == (longlong *)0x0) {
LAB_00648b93:
    if (bVar6 != 0) goto LAB_00648ba2;
LAB_00648c11:
    FUN_006483a0();
  }
  else {
    FUN_0063f230();
    plVar1 = local_50;
    bVar7 = FUN_00228480();
    if ((local_48 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (((bVar7 ^ 1) & local_b4) == 1) {
      FUN_00637870();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00637870();
        FUN_006e1ea0();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
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
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01f27fe0();
  cVar8 = (**(code **)(*local_40 + 0x450))();
  uVar18 = extraout_XMM0_Qa;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  plVar1 = DAT_026f6fd0;
  if (cVar8 == '\0') {
    if (cVar4 != '\0') goto LAB_00648dba;
LAB_00649d1d:
    if (unaff_RDI[0x1a] != 0) {
      uVar18 = FUN_01e40eb0();
      plVar12 = local_40;
      plVar1 = (longlong *)unaff_RDI[0x1b];
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 == plVar1) {
        plVar1 = (longlong *)unaff_RDI[0x1b];
        lVar2 = unaff_RDI[0x1a];
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
      (**(code **)(*unaff_RDI + 0x5d8))();
      uVar18 = FUN_00701620();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (iVar9 != -1) {
        FUN_006c5510();
        plVar1 = (longlong *)unaff_RDI[0x1a];
        (**(code **)(*plVar1 + 0x528))();
        uVar18 = (**(code **)(*plVar1 + 0x4e8))();
      }
      lVar2 = unaff_RDI[0x1a];
      if (lVar2 != 0) {
        uVar18 = FUN_00d50b00();
      }
      FUN_0009e200(uVar18,iVar9 != -1);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_006451f0();
      if (iVar9 != -1) {
        if ((longlong *)unaff_RDI[0x16] != (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x630))();
        }
        if (unaff_RDI[0x1a] == 0) {
          if (((longlong *)unaff_RDI[0x16] == (longlong *)0x0) ||
             ((**(code **)(*(longlong *)unaff_RDI[0x16] + 0x630))(), unaff_RDI[0x1a] == 0))
          goto LAB_00649f96;
        }
        else {
          FUN_006c5510();
          plVar1 = (longlong *)unaff_RDI[0x1a];
          (**(code **)(*plVar1 + 0x528))();
          (**(code **)(*plVar1 + 0x4e8))();
        }
        FUN_006c5710();
      }
    }
LAB_00649f96:
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
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
      if (DAT_026f6fd0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00e7d6f0();
      uVar18 = FUN_0071a120();
      plVar12 = local_40;
      if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
          (uVar18 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      local_50 = plVar1;
      local_48 = '\0';
      FUN_000175c0(uVar18,&local_50);
      plVar3 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        local_38[0] = '\0';
        local_40 = plVar3;
        uVar10 = FUN_00c70bc0();
        plVar12 = (longlong *)(ulonglong)uVar10;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      uVar18 = FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      bVar13 = plVar3 != (longlong *)0x0 & (byte)plVar12;
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
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_0009e200(uVar18,0);
        (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x630))();
      }
    }
    FUN_006451f0();
    if (unaff_RDI[0x1a] != 0) {
      uVar18 = FUN_01e40eb0();
      plVar12 = local_40;
      plVar1 = (longlong *)unaff_RDI[0x1b];
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != plVar1) {
        if (unaff_RDI[0x1a] != 0) {
          uVar18 = FUN_01e40eb0();
          plVar1 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            uVar18 = (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x478))();
          }
        }
        plVar1 = (longlong *)unaff_RDI[0x1b];
        lVar2 = unaff_RDI[0x1a];
        if (lVar2 != 0) {
          uVar18 = FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x9e0))(uVar18,0);
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*unaff_RDI + 0x5d8))();
    FUN_00701620();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
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
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01e53c20();
    plVar12 = local_40;
    plVar1 = (longlong *)unaff_RDI[0x29];
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
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
        if ((local_38[0] != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        FUN_01e42250();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      cVar4 = FUN_0063f180();
      if (cVar4 == '\0') {
        if (unaff_RDI[0x2b] != 0) {
          FUN_00d50b00();
          FUN_006f4810();
          FUN_01e42250();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else if (unaff_RDI[0x29] == 0) {
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
        if ((local_38[0] != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        FUN_01e42250();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  bVar13 = bVar6 ^ 1;
  if (((bVar5 ^ 1) == 0 && bVar7 == 0) && (bVar13 == 0)) {
    plVar1 = (longlong *)unaff_RDI[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    auVar20 = blendps(ZEXT816(0),ZEXT416(uVar16),1);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)unaff_RDI[0x1c];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
    auVar19 = blendps(ZEXT816(0),ZEXT416(uVar10),1);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = DAT_02390d30;
        if (cVar4 == '\0') {
          uVar10 = DAT_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (unaff_RDI[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        iVar9 = FUN_00644650();
        if (iVar9 - 1U < 2) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02390d30;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390d34;
          }
          auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0(auVar19._0_8_);
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar9 == 0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_50 + 0x450))();
          uVar15 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar15 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_60 + 0x450))();
          uVar16 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar16 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
          uVar17 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar17 = DAT_02390124;
          }
          auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
          auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
          FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else if (((bVar5 ^ 1) == 0 && bVar7 == 0) && bVar6 == 0) {
    plVar1 = (longlong *)unaff_RDI[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    auVar20 = blendps(ZEXT816(0),ZEXT416(uVar16),1);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)unaff_RDI[0x1c];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
    auVar19 = blendps(ZEXT816(0),ZEXT416(uVar10),1);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = DAT_02390d30;
        if (cVar4 == '\0') {
          uVar10 = DAT_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (unaff_RDI[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        iVar9 = FUN_00644650();
        if (iVar9 - 1U < 2) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02390d30;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390d34;
          }
          auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0(auVar19._0_8_);
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar9 == 0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_50 + 0x450))();
          uVar15 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar15 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_60 + 0x450))();
          uVar16 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar16 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
          uVar17 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar17 = DAT_02390124;
          }
          auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
          auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
          FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else if ((bVar7 == 0 && bVar5 == 0) && bVar13 == 0) {
    plVar1 = (longlong *)unaff_RDI[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    auVar20 = blendps(ZEXT816(0),ZEXT416(uVar16),1);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)unaff_RDI[0x1c];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
    auVar19 = blendps(ZEXT816(0),ZEXT416(uVar10),1);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = DAT_02390d30;
        if (cVar4 == '\0') {
          uVar10 = DAT_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (unaff_RDI[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        iVar9 = FUN_00644650();
        if (iVar9 - 1U < 2) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02390d30;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390d34;
          }
          auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0(auVar19._0_8_);
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar9 == 0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_50 + 0x450))();
          uVar15 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar15 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_60 + 0x450))();
          uVar16 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar16 = DAT_02390124;
          }
          FUN_01f27fe0();
          cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
          uVar17 = DAT_02394298;
          if (cVar4 == '\0') {
            uVar17 = DAT_02390124;
          }
          auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
          auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
          FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else if ((bVar7 == 0 && bVar5 == 0) && bVar6 == 0) {
    plVar1 = (longlong *)unaff_RDI[0x1a];
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_40 + 0x450))();
    uVar10 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar10 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_50 + 0x450))();
    uVar15 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar15 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_60 + 0x450))();
    uVar16 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar16 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
    uVar17 = DAT_02394298;
    if (cVar4 == '\0') {
      uVar17 = DAT_02390124;
    }
    auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
    auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
    (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x18] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_40 + 0x450))();
        uVar10 = DAT_02390d30;
        if (cVar4 == '\0') {
          uVar10 = DAT_02390d34;
        }
        blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
        FUN_000a01a0();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (unaff_RDI[0x19] != 0) {
      FUN_0009ac90();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar1 != (longlong *)0x0) && (uVar10 = FUN_00644650(), uVar10 < 3)) {
        FUN_0009ac90();
        plVar1 = local_40;
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_50 + 0x450))();
        uVar10 = DAT_02394298;
        if (cVar4 == '\0') {
          uVar10 = DAT_02390124;
        }
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_60 + 0x450))();
        uVar15 = DAT_02394298;
        if (cVar4 == '\0') {
          uVar15 = DAT_02390124;
        }
        FUN_01f27fe0();
        cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
        uVar16 = DAT_02394298;
        if (cVar4 == '\0') {
          uVar16 = DAT_02390124;
        }
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_150 + 0x450))();
        uVar17 = DAT_02394298;
        if (cVar4 == '\0') {
          uVar17 = DAT_02390124;
        }
        auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
        auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
        (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
        if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    bVar5 = bVar7 & bVar5 ^ 1;
    if (bVar13 == 0 && bVar5 == 0) {
      plVar1 = (longlong *)unaff_RDI[0x1c];
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      uVar10 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar10 = DAT_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_50 + 0x450))();
      uVar15 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar15 = DAT_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_60 + 0x450))();
      uVar16 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar16 = DAT_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
      uVar17 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar17 = DAT_02390124;
      }
      auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
      auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
      (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x18] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02390d30;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390d34;
          }
          blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          auVar19 = ZEXT816(0);
          (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x940))();
          (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x4d8))();
          auVar19 = blendps(auVar19,_DAT_023b1e40,0xd);
          (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x4d0))();
          FUN_0009ac90();
          (**(code **)(*local_40 + 0x4d8))();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0009ac90();
          blendps(auVar19,_DAT_023b1e40,0xd);
          (**(code **)(*local_40 + 0x4d0))();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (unaff_RDI[0x19] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          uVar10 = FUN_00644650();
          if (uVar10 < 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar10 = DAT_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_50 + 0x450))();
            uVar15 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar15 = DAT_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_60 + 0x450))();
            uVar16 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar16 = DAT_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
            uVar17 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar17 = DAT_02390124;
            }
            auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
            auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
            FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (uVar10 == 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = DAT_02390d30;
            if (cVar4 == '\0') {
              uVar10 = DAT_02390d34;
            }
            auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
            FUN_000a01a0(auVar19._0_8_);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    else if (bVar5 == 0 && bVar6 == 0) {
      plVar1 = (longlong *)unaff_RDI[0x1c];
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      uVar10 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar10 = DAT_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_50 + 0x450))();
      uVar15 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar15 = DAT_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_60 + 0x450))();
      uVar16 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar16 = DAT_02390124;
      }
      FUN_01f27fe0();
      cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
      uVar17 = DAT_02394298;
      if (cVar4 == '\0') {
        uVar17 = DAT_02390124;
      }
      auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
      auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
      (**(code **)(*plVar1 + 0x940))(auVar19._0_8_,auVar20._0_8_);
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x18] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_01f27fe0();
          cVar4 = (**(code **)(*local_40 + 0x450))();
          uVar10 = DAT_02390d30;
          if (cVar4 == '\0') {
            uVar10 = DAT_02390d34;
          }
          blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
          FUN_000a01a0();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          auVar19 = ZEXT816(0);
          (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x940))();
          (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x4d8))();
          auVar19 = blendps(auVar19,_DAT_023b1e40,0xd);
          (**(code **)(*(longlong *)unaff_RDI[0x1a] + 0x4d0))();
          FUN_0009ac90();
          (**(code **)(*local_40 + 0x4d8))();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_0009ac90();
          blendps(auVar19,_DAT_023b1e40,0xd);
          (**(code **)(*local_40 + 0x4d0))();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (unaff_RDI[0x19] != 0) {
        FUN_0009ac90();
        plVar1 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          uVar10 = FUN_00644650();
          if (uVar10 < 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar10 = DAT_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_50 + 0x450))();
            uVar15 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar15 = DAT_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_60 + 0x450))();
            uVar16 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar16 = DAT_02390124;
            }
            FUN_01f27fe0();
            cVar4 = (**(code **)(*(longlong *)CONCAT71(uStack_6f,local_70) + 0x450))();
            uVar17 = DAT_02394298;
            if (cVar4 == '\0') {
              uVar17 = DAT_02390124;
            }
            auVar20 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
            auVar19 = insertps(ZEXT416(uVar10),uVar15,0x10);
            FUN_000a01a0(auVar19._0_8_,auVar20._0_8_);
            if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (uVar10 == 2) {
            FUN_01f27fe0();
            cVar4 = (**(code **)(*local_40 + 0x450))();
            uVar10 = DAT_02390d30;
            if (cVar4 == '\0') {
              uVar10 = DAT_02390d34;
            }
            auVar19 = blendps(ZEXT416(uVar10),ZEXT816(0),0xe);
            FUN_000a01a0(auVar19._0_8_);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  FUN_006c4ec0();
  FUN_0064c7a0();
  *(undefined1 *)((longlong)unaff_RDI + 0x179) = 0;
  (**(code **)(*unaff_RDI + 0x688))();
  return;
}


