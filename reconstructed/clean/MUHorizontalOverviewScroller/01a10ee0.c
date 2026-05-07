// Function: FUN_01a10ee0
// Address: 01a10ee0
// Size: 3479 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01a10ee0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  uint8_t auVar4 [16];
  int64_t *plVar5;
  uint8_t auVar6 [16];
  bool bVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  char cVar10;
  int64_t lVar11;
  void *pvVar12;
  int64_t lVar13;
  void* pVar14;
  uint uVar15;
  uint64_t uVar16;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint32_t uVar23;
  double dVar24;
  double dVar25;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar26;
  float fVar27;
  uint32_t uVar28;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar29 [16];
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint8_t local_128 [8];
  uint32_t uStack_120;
  uint32_t uStack_11c;
  float local_10c;
  uint32_t local_108;
  uint32_t uStack_104;
  char local_100;
  double local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  uint32_t local_a8;
  int64_t *local_80;
  char local_78;
  int local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar9 = local_58;
  fVar22 = (float)((uint64_t)param_2 >> 0x20);
  fVar19 = (float)param_1;
  fVar21 = (float)param_2;
  fVar26 = fVar22;
  FUN_01a18460();
  local_c0 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  fVar20 = (float)FUN_01e3f820();
  local_128._4_4_ = fVar26;
  local_128._0_4_ = fVar21;
  uStack_120 = in_XMM1_Dc;
  uStack_11c = in_XMM1_Dd;
  uVar18 = (uint)((fVar19 + (float)param_2 + g_02390d00) - (fVar19 + fVar19));
  local_10c = (float)(int)uVar18;
  *(float *)(this_ptr + 0x46) = local_10c;
  *(void*)((int64_t)this_ptr + 0x234) = 0;
  FUN_01d386e0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d38cd0(g_02421228);
  fVar26 = (fVar22 + g_02390d00) * g_0239011c + (float)((uint64_t)param_1 >> 0x20);
  fVar21 = fVar26;
  FUN_01d39400(fVar19);
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_f0 = local_58;
  ___bzero();
  plVar8 = local_c0;
  dVar24 = (double)(**(code **)(*local_c0 + 0x930))(0);
  FUN_01e3f820();
  local_f8 = (double)(**(code **)(*plVar8 + 0x930))(fVar21);
  FUN_01a18460();
  (**(code **)(*local_80 + 0x988))();
  local_e8 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e8 == (int64_t *)0x0) {
LAB_01a117ec:
    if (0 < (int)uVar18) {
      fVar21 = g_023b1608 + fVar26;
      uVar16 = 0;
      do {
        fVar22 = *(float *)(local_f0[2] + uVar16 * 4);
        fVar20 = (float)(int)uVar16 + fVar19;
        if ((fVar22 != g_0239424c) || (NAN(fVar22) || NAN(g_0239424c))) {
          if (fVar20 < *(float *)(this_ptr + 0x46)) {
            *(float *)(this_ptr + 0x46) = fVar20;
          }
          if (*(float *)((int64_t)this_ptr + 0x234) <= fVar20 &&
              fVar20 != *(float *)((int64_t)this_ptr + 0x234)) {
            *(float *)((int64_t)this_ptr + 0x234) = fVar20;
          }
        }
        fVar22 = SQRT(fVar22);
        fVar27 = g_02390124;
        if (fVar22 <= g_02390124) {
          fVar27 = fVar22;
        }
        FUN_01d38ba0(fVar20,fVar26 - (float)(~-(uint)NAN(fVar22) & (uint)fVar27 |
                                            -(uint)NAN(fVar22) & (uint)g_02390124) * fVar21);
        uVar16 = uVar16 + 1;
      } while (uVar18 != uVar16);
    }
    FUN_01d38ea0();
    lVar11 = local_58[3];
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    lVar13 = (int64_t)((int)lVar11 / 0x1c);
    lVar11 = lVar13 + 1;
    lVar13 = lVar13 * 0x1c + -0x14;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_01d38ea0();
      lVar1 = local_58[2];
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_01d38ba0(*(void*)(lVar1 + -4 + lVar13),
                   (fVar26 - *(float *)(lVar1 + lVar13)) + fVar26);
      lVar13 = lVar13 + -0x1c;
    }
    FUN_01d38b10();
    FUN_01d48b40(g_02390124);
    uVar23 = (**(code **)(*this_ptr + 0x640))();
    local_168 = g_027e1c10;
    if (g_027e1c10 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*local_80 + 0x3b0))(uVar23,&local_168);
    local_d8 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_d8 = '\x01';
    local_e0 = local_58;
    FUN_01d488d0();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_158 = plVar9;
    local_150 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar23 = (**(code **)(*this_ptr + 0x640))();
    local_148 = g_027e1c18;
    if (g_027e1c18 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_140 = '\x01';
    (**(code **)(*local_80 + 0x3b0))(uVar23,&local_148);
    local_c8 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_c8 = '\x01';
    local_d0 = local_58;
    FUN_01d488d0();
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_138 = plVar9;
    local_130 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_f0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_c0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    return;
  }
  fVar21 = fVar20 + (float)local_128._0_4_ + g_02390d00;
  local_f8 = (local_f8 - dVar24) / (double)(int)uVar18;
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_40 = -1;
LAB_01a111d3:
  while( true ) {
    plVar8 = local_80;
    lVar11 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_e8 + 0xc) <= local_40) break;
    lVar13 = local_e8[2];
    local_58 = *(int64_t **)(lVar13 + 8 + lVar11 * 8);
    pvVar12 = _pthread_getspecific((void*)lVar13);
    pVar14 = (void*)lVar13;
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
    }
    else {
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_012f7cb0();
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)FUN_012f9490();
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e9900(SUB84(dVar24,0),SUB84(dVar2 - dVar24,0));
      if (local_80 == (int64_t *)0x0) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
        if (local_78 == '\0') {
          FUN_00d50b00();
        }
      }
      if (local_80 != (int64_t *)0x0) {
        local_78 = '\0';
        local_80 = (int64_t *)0x0;
        local_68 = -1;
LAB_01a1147b:
        do {
          lVar11 = (int64_t)local_68;
          local_68 = local_68 + 1;
          if (*(int *)((int64_t)plVar8 + 0xc) <= local_68) goto LAB_01a11790;
          lVar13 = plVar8[2];
          local_80 = *(int64_t **)(lVar13 + 8 + lVar11 * 8);
          pvVar12 = _pthread_getspecific((void*)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar10 = FUN_0126cd60();
          if (cVar10 == '\0') {
            pvVar12 = _pthread_getspecific((void*)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126bcd0();
            plVar5 = (int64_t *)CONCAT44(uStack_104,local_108);
            if (local_100 == '\0') {
              if (plVar5 == (int64_t *)0x0) goto LAB_01a1147b;
              FUN_00d50b00();
              if ((local_100 != '\0') && (CONCAT44(uStack_104,local_108) != 0)) {
                FUN_00d50b20();
              }
            }
            else if (plVar5 == (int64_t *)0x0) goto LAB_01a1147b;
            pvVar12 = _pthread_getspecific((void*)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_0125a280();
            uVar23 = SUB84(dVar25,0);
            pvVar12 = _pthread_getspecific((void*)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_128 = (uint8_t  [8])FUN_01264170();
            local_108 = 0xffffffff;
            if (plVar8 == (int64_t *)0x0) {
              uStack_120 = extraout_XMM0_Dc_00;
              uStack_11c = extraout_XMM0_Dd_00;
            }
            else {
              auVar6._8_4_ = extraout_XMM0_Dc;
              auVar6._0_8_ = dVar25;
              auVar6._12_4_ = extraout_XMM0_Dd;
              dVar3 = dVar24;
              if (dVar24 <= dVar25) {
                dVar3 = dVar25;
              }
              uVar23 = SUB84(dVar3,0);
              uVar16 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) & auVar6._8_8_;
              auVar29._0_8_ = ~-(uint64_t)(dVar25 < dVar24) & (uint64_t)local_128;
              auVar29._8_8_ = ~auVar6._8_8_ & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
              auVar4._8_4_ = (int)uVar16;
              auVar4._0_8_ = (uint64_t)((double)local_128 - (dVar24 - dVar25)) &
                             -(uint64_t)(dVar25 < dVar24);
              auVar4._12_4_ = (int)(uVar16 >> 0x20);
              dVar25 = SUB168(auVar29 | auVar4,0);
              if (dVar2 < dVar25 + dVar3) {
                dVar25 = dVar25 - ((dVar25 + dVar3) - dVar2);
              }
              register0x00001288 = SUB168(auVar29 | auVar4,8);
              local_128 = (uint8_t  [8])dVar25;
            }
            fVar22 = (float)(**(code **)(*local_c0 + 0x938))(uVar23);
            uVar23 = local_128._0_4_;
            uVar28 = local_128._4_4_;
            if (g_02390448 < local_128) {
              uVar15 = (uint)((fVar22 * local_10c) / fVar21);
              dVar25 = 0.0;
              do {
                local_a8 = SUB84(dVar25,0);
                if ((-1 < (int)uVar15) && ((int)uVar15 < (int)uVar18)) {
                  pvVar12 = _pthread_getspecific((void*)lVar13);
                  plVar17 = plVar5;
                  if ((pvVar12 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    plVar17 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  dVar3 = (double)(**(code **)(*plVar17 + 0x3d8))(local_a8,0);
                  lVar13 = local_f0[2];
                  *(float *)(lVar13 + (uint64_t)uVar15 * 4) =
                       (float)dVar3 + *(float *)(lVar13 + (uint64_t)uVar15 * 4);
                  uVar23 = local_128._0_4_;
                  uVar28 = local_128._4_4_;
                }
                dVar25 = dVar25 + local_f8;
                uVar15 = uVar15 + 1;
              } while (dVar25 <= (double)CONCAT44(uVar28,uVar23) &&
                       (double)CONCAT44(uVar28,uVar23) != dVar25);
            }
            FUN_00d50b20();
          }
        } while( true );
      }
    }
  }
  FUN_000be170();
  FUN_00d50b20();
  goto LAB_01a117ec;
LAB_01a11790:
  FUN_001159b0();
  if (bVar7) {
    FUN_00d50b20();
  }
  goto LAB_01a111d3;
}

