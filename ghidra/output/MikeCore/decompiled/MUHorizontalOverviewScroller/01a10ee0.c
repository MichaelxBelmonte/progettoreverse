// Function: FUN_01a10ee0
// Address: 01a10ee0
// Size: 3479 bytes
// Class: MUHorizontalOverviewScroller


/* WARNING: Removing unreachable block (ram,0x01a11401) */
/* WARNING: Removing unreachable block (ram,0x01a1140c) */
/* WARNING: Removing unreachable block (ram,0x01a1141e) */
/* WARNING: Removing unreachable block (ram,0x01a11427) */
/* WARNING: Removing unreachable block (ram,0x01a11a4e) */
/* WARNING: Removing unreachable block (ram,0x01a11a5b) */
/* WARNING: Removing unreachable block (ram,0x01a10fe7) */
/* WARNING: Removing unreachable block (ram,0x01a10ff0) */
/* WARNING: Removing unreachable block (ram,0x01a10f43) */
/* WARNING: Removing unreachable block (ram,0x01a10f4c) */
/* WARNING: Removing unreachable block (ram,0x01a11076) */
/* WARNING: Removing unreachable block (ram,0x01a1107f) */
/* WARNING: Removing unreachable block (ram,0x01a11397) */
/* WARNING: Removing unreachable block (ram,0x01a113a4) */
/* WARNING: Removing unreachable block (ram,0x01a111d7) */
/* WARNING: Removing unreachable block (ram,0x01a11200) */
/* WARNING: Removing unreachable block (ram,0x01a111d9) */
/* WARNING: Removing unreachable block (ram,0x01a11202) */
/* WARNING: Removing unreachable block (ram,0x01a1147f) */
/* WARNING: Removing unreachable block (ram,0x01a114a0) */
/* WARNING: Removing unreachable block (ram,0x01a11481) */
/* WARNING: Removing unreachable block (ram,0x01a114a2) */

void FUN_01a10ee0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  pthread_key_t pVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar29 [16];
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  undefined1 local_128 [8];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  char local_100;
  double local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  undefined4 local_a8;
  longlong *local_80;
  char local_78;
  int local_68;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar9 = local_58;
  fVar22 = (float)((ulonglong)param_2 >> 0x20);
  fVar19 = (float)param_1;
  fVar21 = (float)param_2;
  fVar26 = fVar22;
  FUN_01a18460();
  local_c0 = local_58;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  fVar20 = (float)FUN_01e3f820();
  local_128._4_4_ = fVar26;
  local_128._0_4_ = fVar21;
  uStack_120 = in_XMM1_Dc;
  uStack_11c = in_XMM1_Dd;
  uVar18 = (uint)((fVar19 + (float)param_2 + DAT_02390d00) - (fVar19 + fVar19));
  local_10c = (float)(int)uVar18;
  *(float *)(unaff_RDI + 0x46) = local_10c;
  *(undefined4 *)((longlong)unaff_RDI + 0x234) = 0;
  FUN_01d386e0();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d38cd0(DAT_02421228);
  fVar26 = (fVar22 + DAT_02390d00) * DAT_0239011c + (float)((ulonglong)param_1 >> 0x20);
  fVar21 = fVar26;
  FUN_01d39400(fVar19);
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
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
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e8 == (longlong *)0x0) {
LAB_01a117ec:
    if (0 < (int)uVar18) {
      fVar21 = DAT_023b1608 + fVar26;
      uVar16 = 0;
      do {
        fVar22 = *(float *)(local_f0[2] + uVar16 * 4);
        fVar20 = (float)(int)uVar16 + fVar19;
        if ((fVar22 != DAT_0239424c) || (NAN(fVar22) || NAN(DAT_0239424c))) {
          if (fVar20 < *(float *)(unaff_RDI + 0x46)) {
            *(float *)(unaff_RDI + 0x46) = fVar20;
          }
          if (*(float *)((longlong)unaff_RDI + 0x234) <= fVar20 &&
              fVar20 != *(float *)((longlong)unaff_RDI + 0x234)) {
            *(float *)((longlong)unaff_RDI + 0x234) = fVar20;
          }
        }
        fVar22 = SQRT(fVar22);
        fVar27 = DAT_02390124;
        if (fVar22 <= DAT_02390124) {
          fVar27 = fVar22;
        }
        FUN_01d38ba0(fVar20,fVar26 - (float)(~-(uint)NAN(fVar22) & (uint)fVar27 |
                                            -(uint)NAN(fVar22) & (uint)DAT_02390124) * fVar21);
        uVar16 = uVar16 + 1;
      } while (uVar18 != uVar16);
    }
    FUN_01d38ea0();
    lVar11 = local_58[3];
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    lVar13 = (longlong)((int)lVar11 / 0x1c);
    lVar11 = lVar13 + 1;
    lVar13 = lVar13 * 0x1c + -0x14;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_01d38ea0();
      lVar1 = local_58[2];
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_01d38ba0(*(undefined4 *)(lVar1 + -4 + lVar13),
                   (fVar26 - *(float *)(lVar1 + lVar13)) + fVar26);
      lVar13 = lVar13 + -0x1c;
    }
    FUN_01d38b10();
    FUN_01d48b40(DAT_02390124);
    uVar23 = (**(code **)(*unaff_RDI + 0x640))();
    local_168 = DAT_027e1c10;
    if (DAT_027e1c10 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*local_80 + 0x3b0))(uVar23,&local_168);
    local_d8 = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_d8 = '\x01';
    local_e0 = local_58;
    FUN_01d488d0();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_158 = plVar9;
    local_150 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar23 = (**(code **)(*unaff_RDI + 0x640))();
    local_148 = DAT_027e1c18;
    if (DAT_027e1c18 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_140 = '\x01';
    (**(code **)(*local_80 + 0x3b0))(uVar23,&local_148);
    local_c8 = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_c8 = '\x01';
    local_d0 = local_58;
    FUN_01d488d0();
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_138 = plVar9;
    local_130 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_f0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_c0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    return;
  }
  fVar21 = fVar20 + (float)local_128._0_4_ + DAT_02390d00;
  local_f8 = (local_f8 - dVar24) / (double)(int)uVar18;
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_40 = -1;
LAB_01a111d3:
  while( true ) {
    plVar8 = local_80;
    lVar11 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)local_e8 + 0xc) <= local_40) break;
    lVar13 = local_e8[2];
    local_58 = *(longlong **)(lVar13 + 8 + lVar11 * 8);
    pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
    pVar14 = (pthread_key_t)lVar13;
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (longlong *)0x0) {
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
      if (local_80 == (longlong *)0x0) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
        if (local_78 == '\0') {
          FUN_00d50b00();
        }
      }
      if (local_80 != (longlong *)0x0) {
        local_78 = '\0';
        local_80 = (longlong *)0x0;
        local_68 = -1;
LAB_01a1147b:
        do {
          lVar11 = (longlong)local_68;
          local_68 = local_68 + 1;
          if (*(int *)((longlong)plVar8 + 0xc) <= local_68) goto LAB_01a11790;
          lVar13 = plVar8[2];
          local_80 = *(longlong **)(lVar13 + 8 + lVar11 * 8);
          pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar10 = FUN_0126cd60();
          if (cVar10 == '\0') {
            pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126bcd0();
            plVar5 = (longlong *)CONCAT44(uStack_104,local_108);
            if (local_100 == '\0') {
              if (plVar5 == (longlong *)0x0) goto LAB_01a1147b;
              FUN_00d50b00();
              if ((local_100 != '\0') && (CONCAT44(uStack_104,local_108) != 0)) {
                FUN_00d50b20();
              }
            }
            else if (plVar5 == (longlong *)0x0) goto LAB_01a1147b;
            pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_0125a280();
            uVar23 = SUB84(dVar25,0);
            pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_128 = (undefined1  [8])FUN_01264170();
            local_108 = 0xffffffff;
            if (plVar8 == (longlong *)0x0) {
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
              auVar29._0_8_ = ~-(ulonglong)(dVar25 < dVar24) & (ulonglong)local_128;
              auVar29._8_8_ = ~auVar6._8_8_ & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
              auVar4._8_4_ = (int)uVar16;
              auVar4._0_8_ = (ulonglong)((double)local_128 - (dVar24 - dVar25)) &
                             -(ulonglong)(dVar25 < dVar24);
              auVar4._12_4_ = (int)(uVar16 >> 0x20);
              dVar25 = SUB168(auVar29 | auVar4,0);
              if (dVar2 < dVar25 + dVar3) {
                dVar25 = dVar25 - ((dVar25 + dVar3) - dVar2);
              }
              register0x00001288 = SUB168(auVar29 | auVar4,8);
              local_128 = (undefined1  [8])dVar25;
            }
            fVar22 = (float)(**(code **)(*local_c0 + 0x938))(uVar23);
            uVar23 = local_128._0_4_;
            uVar28 = local_128._4_4_;
            if (DAT_02390448 < local_128) {
              uVar15 = (uint)((fVar22 * local_10c) / fVar21);
              dVar25 = 0.0;
              do {
                local_a8 = SUB84(dVar25,0);
                if ((-1 < (int)uVar15) && ((int)uVar15 < (int)uVar18)) {
                  pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
                  plVar17 = plVar5;
                  if ((pvVar12 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    plVar17 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  dVar3 = (double)(**(code **)(*plVar17 + 0x3d8))(local_a8,0);
                  lVar13 = local_f0[2];
                  *(float *)(lVar13 + (ulonglong)uVar15 * 4) =
                       (float)dVar3 + *(float *)(lVar13 + (ulonglong)uVar15 * 4);
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


