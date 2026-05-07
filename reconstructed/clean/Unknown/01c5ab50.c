// Function: FUN_01c5ab50
// Address: 01c5ab50
// Size: 3579 bytes
// Class: Unknown

void FUN_01c5ab50(float param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  undefined7 uVar8;
  void *pvVar6;
  int64_t lVar7;
  void* pVar9;
  int64_t lVar10;
  void*arg1;
  int64_t *this_ptr;
  int iVar11;
  uint64_t uVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  uint8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [12];
  uint8_t auVar23 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  float fVar28;
  uint32_t local_178;
  uint32_t uStack_174;
  char local_170;
  float local_138;
  int64_t *local_e0;
  char local_d8;
  uint8_t local_c8 [16];
  int64_t local_90;
  char local_88;
  int local_78;
  uint64_t local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int64_t local_38;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar24 [16];
  
  auVar19 = in_XMM1;
  auVar17._0_8_ = FUN_01e3f820();
  auVar17._8_8_ = extraout_XMM0_Qb;
  if ((int)this_ptr[0x39] == 1) {
    fVar28 = auVar19._4_4_;
    auVar27._4_4_ = fVar28;
    auVar27._0_4_ = fVar28;
    auVar27._8_4_ = auVar19._12_4_;
    auVar27._12_4_ = auVar19._12_4_;
    auVar23._4_12_ = auVar27._4_12_;
    auVar23._0_4_ = fVar28 + g_0241c6e8 + g_02390d00;
    local_c8 = insertps(auVar17,auVar23,0x10);
    auVar22._4_8_ = 0;
    auVar22._0_4_ = g_02392fd8;
  }
  else {
    local_c8 = blendps(auVar17,auVar19,2);
    auVar22 = ZEXT812(0);
  }
  auVar24._12_4_ = 0;
  auVar24._0_12_ = auVar22;
  insertps(auVar19,auVar24,0x10);
  FUN_00d05530();
  cVar3 = FUN_00d054a0();
  if (cVar3 != '\0') {
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    FUN_01c532f0();
    FUN_01c5c070();
    (**(code **)(*this_ptr + 0x640))();
    lVar1 = g_026e41f0;
    if (g_026e41f0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_58 + 0x3b0))();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_01d488d0();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar19._4_4_ = local_c8._4_4_;
    auVar19._0_4_ = local_c8._4_4_;
    auVar19._8_4_ = local_c8._12_4_;
    auVar19._12_4_ = local_c8._12_4_;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    FUN_01c41970();
    lVar1 = this_ptr[0x40];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_88 = '\0';
      local_90 = 0;
      local_78 = -1;
      iVar11 = 0;
      while( true ) {
        lVar4 = (int64_t)local_78;
        local_78 = local_78 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_78) break;
        local_90 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        bVar13 = iVar11 != 0;
        iVar11 = iVar11 + -1;
        if (bVar13) {
          plVar2 = (int64_t *)*arg1;
          local_c8._0_8_ = FUN_01c82bc0();
          local_c8._8_8_ = extraout_XMM0_Qb_00;
          auVar17 = local_c8;
          auVar18._0_8_ = FUN_01e3f820();
          auVar18._8_8_ = extraout_XMM0_Qb_01;
          local_c8._4_4_ = (uint32_t)((uint64_t)local_c8._0_8_ >> 0x20);
          local_c8._8_4_ = (uint32_t)extraout_XMM0_Qb_00;
          local_c8._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
          auVar25._0_4_ = local_c8._0_4_ & g_023945e0;
          auVar25._4_4_ = local_c8._4_4_ & _UNK_023945e4;
          auVar25._8_4_ = local_c8._8_4_ & _UNK_023945e8;
          auVar25._12_4_ = local_c8._12_4_ & _UNK_023945ec;
          auVar26._4_12_ = SUB1612(auVar25 | g_023945f0,4);
          auVar26._0_4_ = SUB164(auVar25 | g_023945f0,0) + (float)local_c8._0_4_;
          auVar27 = roundss(auVar26,auVar26,0xb);
          local_c8._0_4_ = auVar27._0_4_;
          local_c8._4_12_ = auVar17._4_12_;
          if ((int)this_ptr[0x39] == 1) {
            auVar20._4_4_ = auVar19._4_4_;
            auVar20._0_4_ = auVar20._4_4_;
            auVar20._12_4_ = auVar19._12_4_;
            auVar20._8_4_ = auVar20._12_4_;
            auVar21._4_12_ = auVar20._4_12_;
            auVar21._0_4_ = auVar20._4_4_ + g_0241c6e8 + g_02390d00;
            auVar19 = insertps(auVar18,auVar21,0x10);
            fVar28 = g_02392fd8;
          }
          else {
            auVar19 = blendps(auVar18,auVar19,2);
            fVar28 = 0.0;
          }
          fVar14 = auVar19._4_4_;
          fVar28 = (fVar28 + fVar14 + g_02390d00) - fVar14;
          blendps(ZEXT416((uint)((float)local_c8._0_4_ + g_02394248)),auVar19,0xe);
          auVar19 = insertps(g_0241c540,ZEXT416((uint)fVar28),0x10);
          cVar3 = FUN_00d054a0();
          if (cVar3 != '\0') {
            fVar28 = fVar28 * g_0239011c + g_02390d00;
            (**(code **)(*plVar2 + 0x370))((float)local_c8._0_4_ + g_023908d8);
            FUN_01c4c050();
            if ((local_d8 == '\0') && (local_e0 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_58 = local_e0;
            local_50 = '\x01';
            (**(code **)(*plVar2 + 0x3a0))();
            if (local_e0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar2 + 0x370))();
            FUN_01c4bee0();
            local_e0 = (int64_t *)CONCAT44(uStack_174,local_178);
            if ((local_170 == '\0') && (local_e0 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_d8 = '\x01';
            (**(code **)(*plVar2 + 0x3a0))();
            if (local_e0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            auVar19._0_4_ = (uint)(fVar28 + fVar14) ^ g_023945e0;
            auVar19._4_4_ = _UNK_023945e4;
            auVar19._8_4_ = _UNK_023945e8;
            auVar19._12_4_ = _UNK_023945ec;
            (**(code **)(*plVar2 + 0x370))(g_023908d8 - (float)local_c8._0_4_);
          }
        }
      }
      FUN_01c79df0();
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar2 = (int64_t *)this_ptr[0x2e];
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x640))();
    lVar4 = g_026e41f0;
    if (g_026e41f0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_58 + 0x3b0))();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_01d488d0();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    if (*(int *)(this_ptr[0x40] + 0xc) < 1) {
      local_48 = 0;
      local_60 = 0;
      local_38 = 0;
      bVar13 = false;
    }
    else {
      local_138 = in_XMM1._0_4_;
      fVar28 = local_138 + param_1 + g_02390d00;
      lVar4 = 0;
      bVar13 = false;
      local_38 = 0;
      local_60 = 0;
      local_48 = 0;
      do {
        uVar12 = local_60 & 0xffffffff;
        pVar9 = (void*)local_60;
        uVar5 = FUN_01c82aa0();
        uVar8 = (undefined7)((uint64_t)uVar5 >> 8);
        cVar3 = (char)uVar12;
        if (local_90 == local_48) {
          local_60 = uVar12;
          if ((cVar3 == '\0') && (local_90 != 0)) {
            local_60 = CONCAT71(uVar8,1);
            if (local_88 != '\0') goto LAB_01c5b401;
            local_60 = CONCAT71(uVar8,1);
            FUN_00d50b00();
          }
joined_r0x01c5b3d3:
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_88 == '\0') {
          if (local_90 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if (cVar3 == '\0') {
            local_48 = local_90;
          }
          else {
            if (local_48 != 0) {
              FUN_00d50b20();
              local_48 = local_90;
              goto joined_r0x01c5b3d3;
            }
            local_48 = local_90;
          }
        }
        else {
          local_60 = CONCAT71(uVar8,1);
          if ((cVar3 == '\0') || (local_48 == 0)) {
            local_48 = local_90;
          }
          else {
            FUN_00d50b20();
            local_48 = local_90;
          }
        }
LAB_01c5b401:
        dVar15 = (double)(**(code **)(*plVar2 + 0x398))();
        local_c8._0_8_ = dVar15;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_016f53a0();
        if (g_02390d2c <= (float)dVar16 * (float)dVar15) {
          lVar10 = (int64_t)*(int *)(this_ptr[0x40] + 0xc) + -1;
          if (lVar4 < lVar10) {
            FUN_01c82aa0();
            if (local_90 == local_38) {
              if ((!bVar13) && (local_90 != 0)) {
                bVar13 = true;
                if (local_88 != '\0') goto LAB_01c5b864;
                FUN_00d50b00();
LAB_01c5b824:
                bVar13 = true;
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
              }
              if (bVar13) {
                if (local_38 != 0) {
                  FUN_00d50b20();
                  local_38 = local_90;
                  goto LAB_01c5b824;
                }
                local_38 = local_90;
                bVar13 = true;
              }
              else {
                local_38 = local_90;
                bVar13 = true;
              }
            }
            else if ((bVar13) && (local_38 != 0)) {
              FUN_00d50b20();
              local_38 = local_90;
              bVar13 = true;
            }
            else {
              local_38 = local_90;
              bVar13 = true;
            }
LAB_01c5b864:
            pvVar6 = _pthread_getspecific((void*)lVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar6 = _pthread_getspecific((void*)lVar10);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar10 = local_38;
            }
            uVar5 = FUN_01909dc0();
            FUN_016c98e0(uVar5,0);
            fVar14 = (float)(**(code **)(*plVar2 + 0x390))();
            if (fVar14 < param_1) goto LAB_01c5b2e3;
            local_c8._0_4_ = fVar14;
            if (fVar28 < fVar14) goto LAB_01c5b54a;
          }
          else {
LAB_01c5b54a:
            local_c8._0_4_ = fVar28;
          }
          pvVar6 = _pthread_getspecific((void*)lVar10);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar10 = local_48;
          }
          FUN_01909dc0();
          pvVar6 = _pthread_getspecific((void*)lVar10);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar10 = local_48;
          }
          FUN_0190a000();
          local_90 = FUN_00e7c4f0();
          while( true ) {
            pvVar6 = _pthread_getspecific((void*)lVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c98e0();
            fVar14 = (float)(**(code **)(*plVar2 + 0x390))();
            if ((float)local_c8._0_4_ <= fVar14) break;
            if (param_1 <= fVar14) {
              (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
            }
            FUN_00e7b820();
          }
          if (lVar4 == 0) {
            pvVar6 = _pthread_getspecific((void*)lVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c98e0();
            fVar14 = (float)(**(code **)(*plVar2 + 0x390))();
            if (param_1 < fVar14) {
              while( true ) {
                FUN_00e7b970();
                pvVar6 = _pthread_getspecific((void*)lVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_016c98e0();
                fVar14 = (float)(**(code **)(*plVar2 + 0x390))();
                if (fVar14 < param_1) break;
                (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
              }
            }
          }
        }
LAB_01c5b2e3:
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(this_ptr[0x40] + 0xc));
    }
    FUN_01d48390();
    if ((bVar13) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

