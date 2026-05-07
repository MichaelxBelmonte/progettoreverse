// Function: FUN_00479050
// Address: 00479050
// Size: 1636 bytes
// Class: MDDetectionAudioSourceInsp

void FUN_00479050(uint64_t param_1,uint64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  uint uVar5;
  uint8_t auVar6 [16];
  int64_t *plVar7;
  uint64_t uVar8;
  byte bVar9;
  uint8_t uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  int64_t **pplVar14;
  short *psVar15;
  short *psVar16;
  void*arg1;
  uint64_t uVar17;
  int64_t *this_ptr;
  short *psVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint8_t auVar21 [8];
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t uVar22;
  float fVar23;
  float fVar24;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  int64_t *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t local_58;
  int64_t *local_40;
  char local_38;
  
  fVar24 = (float)((uint64_t)param_2 >> 0x20);
  fVar23 = (float)param_2;
  uStack_60 = in_XMM0_Qb;
  local_68 = (uint8_t  [8])param_1;
  local_88 = fVar23;
  fStack_84 = fVar24;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  (**(code **)(*this_ptr + 0x640))();
  local_90 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_90 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  plVar7 = local_90;
  lVar2 = this_ptr[0x4d];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  bVar9 = (**(code **)(*this_ptr + 0xac8))();
  if ((bVar9 | local_58 == 0) == 1) {
    FUN_01e07690(local_58 == 0,local_88);
  }
  else {
    cVar11 = (**(code **)(*this_ptr + 0xac8))();
    if (cVar11 != '\0') {
      (**(code **)(*this_ptr + 0x878))();
    }
    cVar11 = FUN_01e07410();
    if (cVar11 != '\0') {
      uVar19 = *(void*)((int64_t)this_ptr + 0x18c);
      uVar20 = FUN_01e3f820();
      local_88 = (float)uVar20;
      fStack_84 = (float)((uint64_t)uVar20 >> 0x20);
      fStack_80 = (float)extraout_XMM0_Qb;
      fStack_7c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      local_68._4_4_ = fVar24;
      local_68._0_4_ = fVar23;
      uStack_60._0_4_ = in_XMM1_Dc;
      uStack_60._4_4_ = in_XMM1_Dd;
      cVar11 = FUN_01e05890();
      uVar10 = (**(code **)(*this_ptr + 0x9a0))();
      uVar20 = 0x12;
      if (cVar11 != '\0') {
        uVar20 = 8;
      }
      fVar23 = (float)local_68._0_4_;
      fVar24 = (float)local_68._4_4_;
      in_XMM1_Dc = (float)uStack_60;
      in_XMM1_Dd = uStack_60._4_4_;
      (**(code **)(*plVar7 + 0x3f0))(uVar20,uVar19,0,uVar10);
    }
    FUN_01e3f820();
    uVar20 = (**(code **)(*plVar7 + 0x548))();
    local_88 = fVar23;
    fStack_84 = fVar24;
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    (**(code **)(*this_ptr + 0x960))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_004792a7;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_004792a7:
      iVar13 = FUN_00d8c7a0();
      if ((0 < iVar13) && (iVar13 = FUN_00d8c7a0(), 0 < iVar13)) {
        do {
          sVar12 = FUN_00d8cbc0();
          psVar15 = (short *)this_ptr[0x4e];
          piVar1 = (int *)(psVar15 + 0xc);
          psVar16 = (short *)&g_023dccec;
          psVar18 = (short *)&g_023dccf4;
          if (*piVar1 < 0x14) {
LAB_004793c0:
            fVar23 = (float)*(void*)psVar18;
            fVar24 = (float)((uint64_t)*(void*)psVar18 >> 0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
          else {
            psVar15 = *(short **)(psVar15 + 8);
            if (*psVar15 == sVar12) {
              psVar16 = psVar15 + 2;
              psVar15 = psVar15 + 6;
              psVar18 = psVar15;
              goto LAB_004793c0;
            }
            uVar5 = *piVar1 / 0x14;
            uVar8 = 1;
            psVar16 = psVar15;
            do {
              uVar17 = uVar8;
              psVar16 = psVar16 + 10;
              if (uVar5 == uVar17) {
                psVar18 = (short *)&g_023dccf4;
                psVar16 = (short *)&g_023dccec;
                if ((int64_t)uVar17 < (int64_t)(int)uVar5) goto LAB_004793c8;
                goto LAB_004793c0;
              }
              uVar8 = uVar17 + 1;
            } while (*psVar16 != sVar12);
            psVar18 = (short *)&g_023dccf4;
            psVar16 = (short *)&g_023dccec;
            if ((int64_t)(int)uVar5 <= (int64_t)uVar17) goto LAB_004793c0;
            fVar23 = (float)*(void*)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6);
            fVar24 = (float)((uint64_t)*(void*)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6) >>
                            0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
LAB_004793c8:
          if (fVar23 <= g_0239424c) {
            auVar21 = (uint8_t  [8])CONCAT44(fStack_84,local_88);
            uVar22 = CONCAT44(fStack_7c,fStack_80);
          }
          else {
            local_68._4_4_ = fStack_84 - fVar24;
            uStack_60._4_4_ = fStack_7c - in_XMM1_Dd;
            auVar27._8_8_ = extraout_XMM0_Qb_00;
            auVar27._0_8_ = uVar20;
            auVar25._4_12_ = auVar27._4_12_;
            auVar25._0_4_ = (float)uVar20 + (local_88 - fVar23) + g_02390d00 + g_02390d00;
            local_68._0_4_ = local_88 - fVar23;
            uStack_60._0_4_ = fStack_80 - in_XMM1_Dc;
            auVar28._0_4_ = (uint)((float)local_68._4_4_ * g_0239011c) & g_023945e0;
            auVar28._4_4_ = local_68._4_4_ & _UNK_023945e4;
            auVar28._8_4_ = (uint)uStack_60._4_4_ & _UNK_023945e8;
            auVar28._12_4_ = (uint)uStack_60._4_4_ & _UNK_023945ec;
            auVar29._4_12_ = SUB1612(auVar28 | g_023945f0,4);
            auVar29._0_4_ = SUB164(auVar28 | g_023945f0,0) + (float)local_68._4_4_ * g_0239011c
            ;
            auVar26._0_12_ = ZEXT812(0);
            auVar26._12_4_ = 0;
            auVar27 = roundss(auVar26,auVar29,0xb);
            auVar27 = insertps(auVar25,auVar27,0x10);
            (**(code **)(*(int64_t *)*arg1 + 0x408))(psVar15,psVar16,auVar27._0_8_);
            auVar6._4_4_ = fStack_84;
            auVar6._0_4_ = local_88;
            auVar6._8_4_ = fStack_80;
            auVar6._12_4_ = fStack_7c;
            _local_68 = blendps(_local_68,auVar6,2);
            auVar21 = local_68;
            uVar22 = uStack_60;
          }
          local_88 = SUB84(auVar21,0);
          fStack_84 = (float)((uint64_t)auVar21 >> 0x20);
          fStack_80 = (float)uVar22;
          fStack_7c = (float)((uint64_t)uVar22 >> 0x20);
          bVar4 = 1 < iVar13;
          iVar13 = iVar13 + -1;
        } while (bVar4);
      }
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x4c] == 0) goto LAB_00479654;
  FUN_00d50b00();
  FUN_00209700();
  if (plVar7 == (int64_t *)0x0) {
LAB_004794e2:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar11 = FUN_00e85ea0();
    if (cVar11 == '\0') goto LAB_004794e2;
    pplVar14 = &local_90;
  }
  plVar3 = *pplVar14;
  FUN_00d50b20();
  if (plVar3 != (int64_t *)0x0) {
    uVar19 = FUN_01e3f820();
    (**(code **)(*plVar7 + 0x6a0))(0,uVar19);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x398))();
    lVar2 = this_ptr[0x4c];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))
              (*(void*)((int64_t)this_ptr + 0x24c),
               (int)*(void*)((int64_t)this_ptr + 0x254));
    FUN_01d48390();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00479654:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

