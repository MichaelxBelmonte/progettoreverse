// ===================================================================
// MDTooltipsPrefCtrl — Complete reconstructed pseudocode
// 9 functions
// ===================================================================


// ============================================================
// 00177220
// ============================================================
// Function: FUN_00177220
// Address: 00177220
// Size: 1487 bytes
// Class: MDTooltipsPrefCtrl

void FUN_00177220(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  float fVar3;
  int64_t lVar4;
  char *pcVar5;
  int iVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  float fVar10;
  uint64_t uVar11;
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  float fVar13;
  float local_128;
  float fStack_124;
  float local_118;
  float fStack_114;
  float local_f8;
  float fStack_f4;
  float local_e8;
  float fStack_e4;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0 [8];
  uint8_t local_c8 [24];
  uint64_t local_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint64_t local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  uint64_t local_40;
  char local_38 [8];
  
  uVar8 = g_023dcce4;
  fVar3 = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  if (*(char *)(this_ptr + 0xa0) == '\0') {
    local_70 = g_023dcce4;
    local_40 = g_023dcce4;
    FUN_00176c40();
    uVar7 = (**(code **)(*local_68 + 0x938))();
    uVar11 = param_2;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d8))();
    local_b0 = uVar11;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    if (*(char *)(this_ptr + 0xb0) == '\0') {
      if ((int64_t)*(int *)(this_ptr + 0x88) == -1) {
        local_a8 = ZEXT816(0);
        _local_88 = ZEXT816(0);
        auVar12 = ZEXT816(0);
        local_98._0_4_ = 0.0;
      }
      else {
        lVar4 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) +
                 (int64_t)*(int *)(this_ptr + 0x88) * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01e53c20();
        plVar1 = local_68;
        pcVar5 = &local_d8;
        if (local_60[0] != '\0') {
          pcVar5 = local_60;
        }
        local_d8 = local_60[0];
        *pcVar5 = '\0';
        if ((local_60[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        local_40 = (**(code **)(*plVar1 + 0x530))();
        uStack_80 = extraout_XMM0_Qb_00;
        local_88 = (uint8_t  [8])local_40;
        local_98 = (uint8_t  [8])(**(code **)(*plVar1 + 0x528))();
        uStack_90 = extraout_XMM0_Qb_01;
        if (local_d8 != '\0') {
          FUN_00d50b20();
        }
        local_a8._4_4_ = local_88._4_4_;
        local_a8._0_4_ = local_88._4_4_;
        local_a8._8_4_ = uStack_80._4_4_;
        local_a8._12_4_ = uStack_80._4_4_;
        auVar12._4_4_ = local_98._4_4_;
        auVar12._0_4_ = local_98._4_4_;
        auVar12._8_4_ = uStack_90._4_4_;
        auVar12._12_4_ = uStack_90._4_4_;
      }
    }
    else {
      local_98._0_4_ = (uint32_t)uVar8;
      _local_88 = ZEXT416((uint)local_98._0_4_);
      auVar12 = ZEXT416((uint)((uint64_t)uVar8 >> 0x20));
      local_a8 = auVar12;
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        local_60[0] = '\0';
        local_68 = (int64_t *)0x0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_c8._0_16_ = auVar12;
        _local_98 = _local_88;
        local_58 = *(int64_t *)(this_ptr + 0x80);
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar6 = -local_50._4_4_;
            }
            else {
              iVar6 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar6 = 0;
            }
            local_50 = CONCAT44(iVar6,(int)local_50);
          }
          lVar4 = (int64_t)(int)local_50;
          iVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (*(int *)(local_58 + 0xc) <= iVar6) break;
          local_68 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
          FUN_01e53c20();
          local_38[0] = local_d0[0];
          pcVar5 = local_d0;
          if (local_d0[0] == '\0') {
            pcVar5 = local_38;
          }
          plVar1 = (int64_t *)CONCAT71(uStack_d7,local_d8);
          *pcVar5 = '\0';
          if ((local_d0[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            uVar8 = (**(code **)(*plVar1 + 0x530))();
            uVar9 = (**(code **)(*plVar1 + 0x528))();
            local_128 = (float)uVar8;
            fStack_124 = (float)((uint64_t)uVar8 >> 0x20);
            if ((float)local_98._0_4_ <= (float)uVar9) {
              local_98._0_4_ = (float)uVar9;
            }
            fVar10 = (float)((uint64_t)uVar9 >> 0x20);
            if ((float)local_c8._0_4_ <= fVar10) {
              local_c8._0_4_ = fVar10;
            }
            if ((float)local_88._0_4_ <= local_128) {
              local_88._0_4_ = local_128;
            }
            if ((float)local_a8._0_4_ <= fStack_124) {
              local_a8._0_4_ = fStack_124;
            }
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
        }
        local_40 = CONCAT44(local_a8._0_4_,local_88._0_4_);
        FUN_000ad7a0();
        auVar12 = local_c8._0_16_;
      }
    }
    local_e8 = (float)uVar7;
    fStack_e4 = (float)((uint64_t)uVar7 >> 0x20);
    local_118 = (float)param_2;
    fStack_114 = (float)((uint64_t)param_2 >> 0x20);
    fVar10 = local_e8 + local_118 + 0.0;
    fVar13 = (float)local_98._0_4_ + fVar10;
    local_98._0_4_ = fStack_e4 + fStack_114 + 0.0;
    local_98._4_4_ = fStack_e4 + fStack_114;
    uStack_90._0_4_ = extraout_XMM0_Dd + fVar3;
    uStack_90._4_4_ = extraout_XMM0_Dd + fVar3;
    local_70 = CONCAT44(auVar12._0_4_ + (float)local_98._0_4_,fVar13);
    FUN_00176c40();
    plVar1 = local_68;
    local_c8._8_8_ = 0;
    local_c8._0_8_ = local_70;
    FUN_01e4cf40();
    if ((local_60[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar10 = fVar10 + (float)local_88._0_4_;
    fVar3 = (float)local_c8._0_4_;
    if ((float)local_c8._0_4_ <= fVar10) {
      fVar3 = fVar10;
    }
    fVar10 = (float)local_c8._4_4_;
    if ((float)local_c8._4_4_ <= (float)local_98._0_4_ + (float)local_a8._0_4_) {
      fVar10 = (float)local_98._0_4_ + (float)local_a8._0_4_;
    }
    local_40 = CONCAT44(fVar10,fVar3);
    FUN_00176c40();
    uStack_80 = 0;
    local_88 = (uint8_t  [8])local_40;
    (**(code **)(*local_68 + 0x9b8))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    cVar2 = (**(code **)(*local_68 + 0x9e8))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    fVar3 = local_88._0_4_;
    local_f8 = fVar3;
    if ((cVar2 != '\0') && (local_f8 = (float)uVar11, local_f8 <= fVar3)) {
      local_f8 = fVar3;
    }
    local_b0 = CONCAT44(local_b0._4_4_,local_f8);
    FUN_00176c40();
    cVar2 = (**(code **)(*local_68 + 0x9e0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    fStack_f4 = (float)local_88._4_4_;
    if ((cVar2 != '\0') &&
       (fStack_f4 = (float)((uint64_t)uVar11 >> 0x20), fStack_f4 <= (float)local_88._4_4_)) {
      fStack_f4 = (float)local_88._4_4_;
    }
    local_b0 = CONCAT44(fStack_f4,(uint32_t)local_b0);
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00176c40();
    local_88 = (uint8_t  [8])(**(code **)(*local_68 + 0x4d8))();
    uStack_80 = extraout_XMM0_Qb;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    plVar1 = local_68;
    FUN_01e4cf40();
    if ((local_60[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0017a670
// ============================================================
// Function: FUN_0017a670
// Address: 0017a670
// Size: 1611 bytes
// Class: MDTooltipsPrefCtrl

void FUN_0017a670(uint64_t param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int64_t *in_RDX;
  int64_t this_ptr;
  int64_t *plVar11;
  int64_t **pplVar12;
  int64_t *plVar13;
  bool bVar14;
  uint32_t uVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t local_a0;
  char local_98;
  int64_t *local_60;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  FUN_01e53c20();
  plVar5 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar10 = FUN_01d3a5a0();
  if (iVar10 == 1) {
    iVar10 = FUN_01d3b630();
    bVar14 = iVar10 == 1;
  }
  else {
    bVar14 = false;
  }
  iVar10 = FUN_00655800();
  bVar3 = true;
  if (iVar10 == 0) {
    local_60 = *(int64_t **)(this_ptr + 0x70);
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0017a751;
    }
  }
  else if (iVar10 == 1) {
    local_60 = *(int64_t **)(this_ptr + 0x78);
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0017a751;
    }
  }
  else if ((iVar10 == 2) &&
          (local_60 = *(int64_t **)(this_ptr + 0x80), local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
LAB_0017a751:
    bVar3 = false;
    goto LAB_0017a75c;
  }
  local_60 = (int64_t *)0x0;
LAB_0017a75c:
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_01e3f820();
    uVar17 = FUN_01e46ed0();
    FUN_01e3f820();
    uVar18 = FUN_01e46ed0();
    param_2 = (float)((uint64_t)uVar17 >> 0x20) - (float)((uint64_t)uVar18 >> 0x20);
    FUN_01e5bd60((float)uVar17 - (float)uVar18,param_2);
  }
  local_38 = (int64_t *)0x0;
  FUN_01e5d9c0();
  local_38 = (int64_t *)0x0;
  FUN_01e5d070();
  local_38 = (int64_t *)0x0;
  bVar1 = false;
  plVar11 = (int64_t *)0x0;
  bVar2 = false;
  while (*in_RDX != 0) {
    FUN_01e42030();
    plVar13 = local_48;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) break;
    FUN_01d3abf0();
    uVar15 = FUN_01e466c0();
    fVar16 = (float)FUN_01e3f820();
    cVar8 = FUN_00d05410(uVar15,fVar16,param_2);
    if (cVar8 == '\0') {
      param_2 = fVar16;
      if (plVar11 != (int64_t *)0x0) {
        if (bVar2) {
          FUN_00d50b20();
        }
        bVar2 = false;
        param_2 = fVar16;
      }
      plVar11 = (int64_t *)0x0;
      plVar13 = local_38;
      if (local_38 != (int64_t *)0x0) goto LAB_0017aa34;
    }
    else {
      (**(code **)(*plVar5 + 0x490))(uVar15);
      plVar13 = local_48;
      FUN_000f5df0();
      pplVar12 = (int64_t **)&g_02802688;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar12 = &local_48;
        if (cVar9 == '\0') {
          pplVar12 = (int64_t **)&g_02802688;
        }
      }
      plVar13 = *pplVar12;
      if (plVar11 == plVar13) {
        param_2 = fVar16;
        if ((!bVar2) && (plVar11 != (int64_t *)0x0)) {
          plVar13 = plVar11;
          if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0017a98e;
          FUN_00d50b00();
          goto joined_r0x0017aa14;
        }
      }
      else {
        if (*(char *)(pplVar12 + 1) == '\0') {
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_0017a98e:
          *(void*)(pplVar12 + 1) = 0;
        }
joined_r0x0017aa14:
        bVar2 = true;
        plVar11 = plVar13;
        param_2 = fVar16;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = local_38;
      if (plVar11 != local_38) {
LAB_0017aa34:
        if (local_38 != (int64_t *)0x0) {
          (**(code **)(*local_38 + 0x918))();
        }
        if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar13 = plVar11;
        bVar1 = bVar2;
        if (plVar11 == (int64_t *)0x0) {
          if (local_60 != (int64_t *)0x0) goto LAB_0017aaaf;
          local_38 = (int64_t *)0x0;
          plVar13 = local_38;
        }
        else {
          (**(code **)(*plVar11 + 0x918))();
          if (local_60 != (int64_t *)0x0) {
LAB_0017aaaf:
            (**(code **)(*local_60 + 0x918))();
            if (local_60 != plVar11) {
              bVar14 = true;
            }
          }
        }
      }
    }
    local_38 = plVar13;
    (**(code **)(*plVar5 + 0x658))();
    plVar7 = local_48;
    plVar13 = (int64_t *)*in_RDX;
    if (plVar13 == local_48) {
      if (((char)in_RDX[1] == '\0') && (local_48 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_0017ab31;
        FUN_00d50b00();
        goto LAB_0017ab7b;
      }
LAB_0017ab83:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = in_RDX[1];
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *in_RDX = (int64_t)plVar7;
        if (((char)lVar4 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0017ab7b:
        *(void*)(in_RDX + 1) = 1;
        goto LAB_0017ab83;
      }
      *in_RDX = (int64_t)local_48;
      if (((char)lVar4 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0017ab31:
      *(void*)(in_RDX + 1) = 1;
    }
    if (((*in_RDX == 0) ||
        (((bVar14 && (iVar10 = FUN_01d3a5a0(), iVar10 == 6)) && (cVar8 == '\x01')))) ||
       (iVar10 = FUN_01d3a5a0(), iVar10 == 1)) break;
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00177f10
// ============================================================
// Function: FUN_00177f10
// Address: 00177f10
// Size: 1614 bytes
// Class: MDTooltipsPrefCtrl

void FUN_00177f10(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    FUN_00643590();
    FUN_00d23310();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      cVar4 = FUN_00212c70();
      lVar1 = g_027259a0;
      if (cVar4 != '\0') {
        if (g_027259a0 != 0) {
          FUN_00d50b00();
        }
        lVar3 = g_026fe4a0;
        if (g_026fe4a0 != 0) {
          FUN_00d50b00();
        }
        FUN_01f6ca30();
        iVar5 = (**(code **)(*local_48 + 0x5e0))();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (iVar5 != 0) {
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = g_026e4838;
  if (g_026e4838 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d40470(&local_e0,&stack0xffffffffffffff68,3,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) + (int64_t)unaff_ESI * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00176c40();
  FUN_000b51b0();
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = local_48;
  FUN_01e53c20();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x88) = unaff_ESI;
  FUN_00176c40();
  FUN_01e53c20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_000b52a0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar2 = *(int64_t **)(this_ptr + 0x90);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa40))();
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_c0 = g_027257f0;
  if (g_027257f0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff78,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0017b240
// ============================================================
// Function: FUN_0017b240
// Address: 0017b240
// Size: 690 bytes
// Class: MDTooltipsPrefCtrl

void FUN_0017b240(void)

{
  FUN_0017b500();
  FUN_0017b880();
  FUN_0017bae0();
  FUN_0017bda0();
  FUN_000205c0();
  FUN_0017bf50();
  FUN_0017c120();
  FUN_0017c430();
  FUN_0017c670();
  FUN_0017c810();
  FUN_0017ca80();
  FUN_0017cc50();
  FUN_0017ced0();
  FUN_0017d050();
  FUN_0017d200();
  FUN_0017d430();
  FUN_0017d5b0();
  FUN_0017d750();
  FUN_0017d920();
  FUN_0017b880();
  FUN_0017db90();
  FUN_0017dd50();
  FUN_0017e010();
  FUN_0017e150();
  FUN_0017e420();
  FUN_0017e720();
  FUN_0017e980();
  FUN_000f5b20();
  FUN_0017ebf0();
  FUN_0017eec0();
  FUN_0017f1a0();
  FUN_0017f3b0();
  FUN_0017f5f0();
  FUN_0017f910();
  FUN_000f60b0();
  FUN_0017fbd0();
  FUN_0017fe40();
  FUN_00180020();
  FUN_00180230();
  FUN_00180450();
  FUN_00180730();
  FUN_00180900();
  FUN_00180aa0();
  FUN_00180b70();
  FUN_00180e50();
  FUN_00181090();
  FUN_00181330();
  FUN_00181400();
  FUN_001814d0();
  FUN_001817d0();
  FUN_00181a30();
  FUN_00181db0();
  FUN_00182050();
  FUN_001823c0();
  FUN_00182650();
  FUN_001827f0();
  FUN_00182aa0();
  FUN_00182c80();
  FUN_00182e30();
  FUN_00183080();
  FUN_00183360();
  FUN_00183530();
  FUN_00183700();
  FUN_001839c0();
  FUN_00183d30();
  FUN_00183f90();
  FUN_001841f0();
  FUN_001844f0();
  FUN_00184740();
  FUN_00184990();
  FUN_00184b30();
  FUN_00184d20();
  FUN_00184f70();
  FUN_001852e0();
  FUN_001855d0();
  FUN_00185780();
  FUN_00185850();
  FUN_001859f0();
  FUN_00185c50();
  FUN_00185d10();
  FUN_00185f30();
  FUN_001860f0();
  FUN_001862a0();
  FUN_00186450();
  FUN_001865e0();
  FUN_00186840();
  FUN_00186b40();
  FUN_00186ce0();
  FUN_00186dd0();
  FUN_00173550();
  FUN_00186f70();
  FUN_001871b0();
  FUN_001875e0();
  FUN_00187900();
  FUN_00187ab0();
  FUN_00187ca0();
  FUN_00187e40();
  FUN_00188160();
  FUN_00188310();
  FUN_0017bf50();
  FUN_001883f0();
  FUN_00188720();
  FUN_00188950();
  FUN_00188a20();
  FUN_00188cb0();
  FUN_00188e80();
  FUN_001890e0();
  FUN_00189280();
  FUN_00189480();
  FUN_001895f0();
  FUN_00189790();
  FUN_001899f0();
  FUN_00189d30();
  FUN_00189f00();
  FUN_0018a150();
  FUN_0018a3b0();
  FUN_0018a670();
  FUN_0018a830();
  FUN_0018aaa0();
  FUN_0018ac60();
  FUN_0018ae20();
  FUN_0018b060();
  FUN_0018b300();
  FUN_0018b550();
  FUN_0018b7a0();
  FUN_0018b960();
  FUN_0018bc80();
  FUN_0018be40();
  FUN_0018bfe0();
  FUN_0018c180();
  FUN_0018c430();
  FUN_000a31d0();
  FUN_0018c500();
  FUN_0018c660();
  FUN_0018c7f0();
  FUN_0018c900();
  FUN_0018cbe0();
  return;
}



// ============================================================
// 00177bb0
// ============================================================
// Function: FUN_00177bb0
// Address: 00177bb0
// Size: 556 bytes
// Class: MDTooltipsPrefCtrl

void FUN_00177bb0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int iVar3;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  iVar3 = (int)this_ptr[0x11];
  if ((unaff_ESI < 1) || (iVar3 != unaff_ESI)) {
    if ((iVar3 == 0 && unaff_ESI == 0) && (1 < *(int *)(this_ptr[0x10] + 0xc))) {
      (**(code **)(*this_ptr + 0x5e0))();
      bVar2 = true;
    }
    else if (iVar3 == unaff_ESI) {
      plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0x10] + 0x10) + (int64_t)unaff_ESI * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x4f0))();
      FUN_00176c40();
      FUN_01e53c20();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*local_60 + 0x470))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != '\0') {
        FUN_00d50b20();
      }
      bVar2 = true;
      FUN_00d50b20();
    }
    else {
      bVar2 = unaff_ESI < iVar3;
    }
  }
  else {
    (**(code **)(*this_ptr + 0x5e0))();
    bVar2 = false;
  }
  FUN_00d23620();
  if (this_ptr[0x12] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x12];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0xa60))();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x12];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    iVar3 = (**(code **)(*plVar1 + 0xaa0))();
    FUN_00d50b20();
    if (iVar3 == 0) {
      plVar1 = (int64_t *)this_ptr[0x12];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x478))();
      FUN_00d50b20();
      if (this_ptr[0x12] != 0) {
        this_ptr[0x12] = 0;
        FUN_00d50b20();
      }
    }
  }
  if (bVar2) {
    *(int *)(this_ptr + 0x11) = (int)this_ptr[0x11] + -1;
  }
  return;
}



// ============================================================
// 00179040
// ============================================================
// Function: FUN_00179040
// Address: 00179040
// Size: 575 bytes
// Class: MDTooltipsPrefCtrl
// String references:
//   "%@ [Module]"
//   "%@ [Header]"

void FUN_00179040(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  void*local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00176c40();
  puVar3 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00176c40();
    local_40 = *arg1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_003b6200();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *arg1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_00d8cb40(param_1,&local_50);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_003b6200();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00179a50
// ============================================================
// Function: FUN_00179a50
// Address: 00179a50
// Size: 515 bytes
// Class: MDTooltipsPrefCtrl

uint64_t FUN_00179a50(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int local_68;
  int64_t local_50;
  char local_48;
  
  if ((*(int64_t *)(this_ptr + 0xa8) == 0) || (lVar1 = *arg1, *(int *)(lVar1 + 0xc) == 0)) {
LAB_00179c4e:
    uVar7 = 0;
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + uVar9 * 8);
        lVar3 = *(int64_t *)(this_ptr + 0xa8);
        if (lVar3 == 0) {
LAB_00179c42:
          FUN_00115910();
          goto LAB_00179c4e;
        }
        local_68 = -1;
        do {
          lVar6 = (int64_t)local_68;
          local_68 = local_68 + 1;
          if (*(int *)(lVar3 + 0xc) <= local_68) {
            FUN_00136a40();
            goto LAB_00179c42;
          }
          plVar4 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar6 * 8);
          (**(code **)(*plVar2 + 0x370))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          cVar5 = (**(code **)(*plVar4 + 0x50))();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar5 == '\0');
        FUN_00136a40();
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115910();
    uVar7 = 1;
  }
  return uVar7;
}



// ============================================================
// 005657d0
// ============================================================
// Function: FUN_005657d0
// Address: 005657d0
// Size: 522 bytes
// Class: MDTooltipsPrefCtrl
// String references:
//   "MDTooltipsPrefCtrl"

void FUN_005657d0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_28;
  int64_t local_20;
  
  if ((g_0271f6d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026e4768 = FUN_00015ff0();
    g_026e4750 = "MDTooltipsPrefCtrl";
    g_026e4758 = 0x80;
    g_026e4760 = FUN_00176810;
    g_026e4770 = 0;
    ram_00000000026e4778 = 0;
    g_026e4780 = 0;
    g_026e47f8 = 0;
    ram_00000000026e4800 = 0;
    g_026e4808 = 0;
    g_026e480a = 1;
    g_026e4788 = 0;
    ram_00000000026e4790 = 0;
    g_026e4798 = 0;
    ram_00000000026e47a0 = 0;
    g_026e47a8 = 0;
    ram_00000000026e47b0 = 0;
    g_026e47b8 = 0;
    ram_00000000026e47c0 = 0;
    g_026e47c8 = 0;
    ram_00000000026e47d0 = 0;
    g_026e47d8 = 0;
    ram_00000000026e47e0 = 0;
    g_026e47e8 = 0;
    ram_00000000026e47f0 = 0;
    g_026e4813 = 0;
    g_026e480b = 0;
    ___cxa_guard_release();
  }
  if (g_026e480b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_005e8340();
    FUN_005e8670();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00175e90();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



// ============================================================
// 00175e90
// ============================================================
// Function: FUN_00175e90
// Address: 00175e90
// Size: 741 bytes
// Class: MDTooltipsPrefCtrl
// String references:
//   "handlePrefsChanged"
//   "handleToggleShowTooltips"
//   "MDTooltipsPrefCtrl"

void FUN_00175e90(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028045c0 = "handlePrefsChanged";
      g_028045c8 = &g_026e4750;
      g_028045d0 = 0;
      g_028045d8 = &g_026e4818;
      g_028045e0 = FUN_00176850;
      g_028045e8 = FUN_001763f0;
      g_028045f0 = 0;
      ram_00000000028045f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804608 = "handleToggleShowTooltips";
      g_02804610 = &g_026e4750;
      g_02804618 = 0;
      g_02804620 = &g_026e481b;
      g_02804628 = FUN_001768d0;
      g_02804630 = FUN_00176470;
      g_02804638 = 0;
      ram_0000000002804640 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

