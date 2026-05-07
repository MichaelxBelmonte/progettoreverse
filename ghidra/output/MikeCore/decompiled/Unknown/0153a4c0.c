// Function: FUN_0153a4c0
// Address: 0153a4c0
// Size: 9292 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0153c882) */
/* WARNING: Removing unreachable block (ram,0x0153c88e) */
/* WARNING: Removing unreachable block (ram,0x0153c617) */
/* WARNING: Removing unreachable block (ram,0x0153c623) */
/* WARNING: Removing unreachable block (ram,0x0153baea) */
/* WARNING: Removing unreachable block (ram,0x0153baf6) */
/* WARNING: Removing unreachable block (ram,0x0153b7a0) */
/* WARNING: Removing unreachable block (ram,0x0153b7ac) */
/* WARNING: Removing unreachable block (ram,0x0153b5db) */
/* WARNING: Removing unreachable block (ram,0x0153b5e7) */
/* WARNING: Removing unreachable block (ram,0x0153a8e0) */
/* WARNING: Removing unreachable block (ram,0x0153a85a) */
/* WARNING: Removing unreachable block (ram,0x0153a866) */
/* WARNING: Removing unreachable block (ram,0x0153a79e) */
/* WARNING: Removing unreachable block (ram,0x0153a7ae) */
/* WARNING: Removing unreachable block (ram,0x0153a8d4) */
/* WARNING: Removing unreachable block (ram,0x0153a8ee) */
/* WARNING: Removing unreachable block (ram,0x0153a8fa) */
/* WARNING: Removing unreachable block (ram,0x0153b54a) */
/* WARNING: Removing unreachable block (ram,0x0153b556) */
/* WARNING: Removing unreachable block (ram,0x0153b732) */
/* WARNING: Removing unreachable block (ram,0x0153b73e) */
/* WARNING: Removing unreachable block (ram,0x0153b815) */
/* WARNING: Removing unreachable block (ram,0x0153b821) */
/* WARNING: Removing unreachable block (ram,0x0153bc3a) */
/* WARNING: Removing unreachable block (ram,0x0153bc46) */
/* WARNING: Removing unreachable block (ram,0x0153c8ee) */
/* WARNING: Removing unreachable block (ram,0x0153c8fa) */
/* WARNING: Removing unreachable block (ram,0x0153c69a) */
/* WARNING: Removing unreachable block (ram,0x0153c6a6) */

undefined8 * FUN_0153a4c0(pthread_key_t param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  void *pvVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  pthread_key_t pVar19;
  int iVar20;
  byte bVar21;
  int iVar22;
  undefined8 *unaff_RDI;
  byte bVar23;
  double dVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar25;
  double dVar26;
  longlong local_380;
  undefined1 local_378;
  longlong local_370;
  undefined1 local_368;
  double local_360;
  undefined1 local_358;
  longlong *local_350;
  undefined1 local_348;
  longlong *local_340;
  undefined1 local_338;
  longlong *local_330;
  undefined1 local_328;
  longlong local_320;
  undefined1 local_318;
  longlong local_310;
  undefined1 local_308;
  undefined8 *local_300;
  undefined1 local_2f8;
  longlong *local_2f0;
  undefined1 local_2e8;
  longlong *local_2e0;
  undefined1 local_2d8;
  code *local_2d0;
  code *local_2c8;
  code *local_2c0;
  double local_2b8;
  char local_170;
  double local_168;
  char local_160;
  double local_158;
  char local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  double local_120;
  char local_118;
  double local_110;
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  char local_91;
  longlong *local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  byte local_39;
  
  pVar19 = param_1;
  FUN_00b60b30();
  local_e8 = (longlong)local_88;
  if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) && (FUN_00d50b00(), local_80 != '\0'))
     && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_148 = (longlong *)FUN_00b609e0();
  local_88 = (longlong *)FUN_01907d40();
  local_48 = (longlong *)FUN_00e7c860();
  uVar1 = *(uint *)(local_e8 + 0xc);
  if ((ulonglong)uVar1 == 1) {
    dVar24 = (double)FUN_00b5c640();
    FUN_01907d60(0,local_148,(double)local_48 + 0.0,(double)local_48 * dVar24 + (double)local_148);
    local_128 = local_88;
    if (local_88 == (longlong *)0x0) {
      local_e0 = 0;
    }
    else {
      local_e0 = (undefined4)CONCAT71((int7)((ulonglong)local_88 >> 8),1);
      if (((local_80 == '\0') && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01908400();
    local_128 = local_88;
    if (local_88 == (longlong *)0x0) {
      local_e0 = 0;
      if (1 < (int)uVar1) goto LAB_0153a668;
LAB_0153a7d8:
      local_90 = (longlong *)0x0;
      local_d8 = local_148;
    }
    else {
      local_e0 = (undefined4)CONCAT71((int7)((ulonglong)local_88 >> 8),1);
      if (((local_80 == '\0') && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((int)uVar1 < 2) goto LAB_0153a7d8;
LAB_0153a668:
      local_90 = (longlong *)0x0;
      lVar12 = 0;
      local_d8 = local_148;
      do {
        local_50 = local_90;
        local_90 = (longlong *)FUN_00b5c630();
        local_f8 = (double)FUN_00b5c630();
        local_a8 = (longlong *)FUN_00b5c640();
        iVar22 = FUN_00b60810();
        dVar24 = (double)local_90 - local_f8;
        if (iVar22 == 1) {
          dVar25 = dVar24 / (double)local_a8;
          dVar26 = dVar24;
        }
        else {
          dVar26 = dVar24 * (double)local_a8;
          dVar25 = dVar24;
        }
        local_90 = (longlong *)(dVar25 + (double)local_50);
        local_d8 = (longlong *)(dVar26 + (double)local_d8);
        FUN_01908480(local_50,0);
        lVar12 = lVar12 + 1;
      } while ((ulonglong)uVar1 - 1 != lVar12);
    }
    pVar19 = (pthread_key_t)*(undefined8 *)(local_e8 + 0x10);
    dVar24 = (double)FUN_00b5c640();
    FUN_01908480(local_90,1,(double)local_48 + (double)local_90,
                 dVar24 * (double)local_48 + (double)local_d8);
  }
  FUN_016c2780();
  local_48 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  pvVar11 = _pthread_getspecific(pVar19);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar19 = (pthread_key_t)local_48;
  }
  FUN_016caa50();
  uVar13 = FUN_00b60da0();
  plVar14 = local_88;
  if (local_80 == '\0') {
    if (local_88 == (longlong *)0x0) goto LAB_0153ab71;
    FUN_00d50b00();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0153a9c4:
    local_80 = '\0';
    local_88 = (longlong *)0x0;
    local_78 = plVar14;
    local_70 = 0xffffffff;
    local_68 = 0;
    while( true ) {
      lVar12 = (longlong)(int)(pthread_key_t)local_70;
      iVar22 = (pthread_key_t)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar22);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar22) break;
      lVar16 = local_78[2];
      local_88 = *(longlong **)(lVar16 + 8 + lVar12 * 8);
      iVar22 = FUN_00b60810();
      pVar19 = (pthread_key_t)lVar16;
      if (iVar22 == 0) {
        FUN_00b5c700();
        uVar13 = FUN_00e7cc50();
      }
      else {
        pvVar11 = _pthread_getspecific(pVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (longlong *)FUN_00b5c700();
        FUN_00e7bcc0();
        pVar19 = 0;
        uVar13 = FUN_016cb9d0(local_90,4);
      }
      pvVar11 = _pthread_getspecific(pVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b5c710();
      uVar10 = FUN_00b5c720();
      FUN_016c3060(uVar13,uVar10,0);
      if (local_70._4_4_ != 0) {
        if (local_70 < 0) {
          iVar22 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(pthread_key_t)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar22 = 0;
        }
        local_70 = CONCAT44(iVar22,(pthread_key_t)local_70);
      }
    }
    plVar14 = local_78;
    FUN_00b673b0();
    pVar19 = (pthread_key_t)plVar14;
    local_dc = 0;
  }
  else {
    if (local_88 != (longlong *)0x0) goto LAB_0153a9c4;
LAB_0153ab71:
    local_dc = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  }
  pvVar11 = _pthread_getspecific(pVar19);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar19 = (pthread_key_t)local_48;
  }
  FUN_016c30e0();
  pvVar11 = _pthread_getspecific(pVar19);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar19 = (pthread_key_t)local_48;
  }
  FUN_016c3130();
  pvVar11 = _pthread_getspecific(pVar19);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar19 = (pthread_key_t)local_48;
  }
  FUN_016c1150();
  plVar14 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar14 + 0x18))();
  pvVar11 = _pthread_getspecific(pVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cac0();
  local_58 = plVar14;
  pvVar11 = _pthread_getspecific(pVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  pvVar11 = _pthread_getspecific(pVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018232c0();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar13 = FUN_00b61060();
  plVar14 = local_88;
  if (local_80 == '\0') {
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      iVar22 = *(int *)((longlong)plVar14 + 0xc);
      goto joined_r0x0153ad9e;
    }
LAB_0153b3e9:
    local_140 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  }
  else {
    if (local_88 == (longlong *)0x0) goto LAB_0153b3e9;
    iVar22 = *(int *)((longlong)local_88 + 0xc);
joined_r0x0153ad9e:
    local_140 = 0;
    if (0 < iVar22) {
      local_140 = 0;
      local_80 = '\0';
      local_88 = (longlong *)0x0;
      local_78 = plVar14;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_70._4_4_ = 0;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar22 = -local_70._4_4_;
          }
          else {
            iVar22 = (pthread_key_t)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar22);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar22 = 0;
          }
          local_70 = CONCAT44(iVar22,(pthread_key_t)local_70);
        }
        lVar12 = (longlong)(int)(pthread_key_t)local_70;
        iVar22 = (pthread_key_t)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar22);
        if (*(int *)((longlong)local_78 + 0xc) <= iVar22) break;
        lVar16 = local_78[2];
        local_88 = *(longlong **)(lVar16 + 8 + lVar12 * 8);
        FUN_00b5c830();
        pVar19 = (pthread_key_t)lVar16;
        iVar22 = FUN_00b5c840();
        if (iVar22 == 1) {
          pvVar11 = _pthread_getspecific(pVar19);
          if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            pVar19 = (pthread_key_t)local_58;
          }
          FUN_0150eb60();
          pvVar11 = _pthread_getspecific(pVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_01822e80();
          local_168 = local_120;
          local_160 = 0;
          if (local_118 == '\0') {
            if (local_120 != 0.0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_118 = '\0';
          }
          local_160 = '\x01';
          FUN_017367a0(uVar13,&local_168);
          plVar14 = local_d0;
          if (local_d0 == (longlong *)0x0) {
            bVar3 = false;
          }
          else if (local_c8 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_c8 = '\0';
            bVar3 = true;
          }
          if ((local_160 != '\0') && (local_168 != 0.0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != 0.0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar11 = _pthread_getspecific(pVar19);
          if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            pVar19 = (pthread_key_t)local_58;
          }
          FUN_0150eb60();
          pvVar11 = _pthread_getspecific(pVar19);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_01822e80();
          local_158 = local_120;
          local_150 = 0;
          if (local_118 == '\0') {
            if (local_120 != 0.0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_118 = '\0';
          }
          local_150 = '\x01';
          FUN_01735ce0(uVar13,&local_158);
          plVar14 = local_d0;
          if (local_d0 == (longlong *)0x0) {
            bVar3 = false;
          }
          else if (local_c8 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_c8 = '\0';
            bVar3 = true;
          }
          if ((local_150 != '\0') && (local_158 != 0.0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != 0.0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((pthread_key_t)local_70 == 0 && local_68 == 0) {
          uVar13 = FUN_00e7bdb0();
        }
        else {
          iVar22 = FUN_00b60810();
          if (iVar22 == 0) {
            local_90 = (longlong *)FUN_00b5c820();
            FUN_00e7bcc0();
            uVar13 = FUN_00e7cd00(local_90);
          }
          else {
            pvVar11 = _pthread_getspecific(pVar19);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_90 = (longlong *)FUN_00b5c820();
            FUN_00e7bcc0();
            pVar19 = 0;
            uVar13 = FUN_016cb9d0((double)local_90 + (double)local_148,4);
          }
        }
        pvVar11 = _pthread_getspecific(pVar19);
        if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          pVar19 = (pthread_key_t)local_58;
        }
        FUN_01510030();
        pvVar11 = _pthread_getspecific(pVar19);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar15 = FUN_00e7bdb0();
        local_c8 = '\0';
        local_d0 = plVar14;
        FUN_012502a0(uVar15,uVar13,0);
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0.0)) {
          FUN_00d50b20();
        }
        if ((bVar3) && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar14 = local_78;
      FUN_00b67450();
      pVar19 = (pthread_key_t)plVar14;
      pvVar11 = _pthread_getspecific(pVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar11 = _pthread_getspecific(pVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae40();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_140 = 0;
    }
  }
  FUN_012ca6e0();
  local_a0 = local_88;
  if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) && (FUN_00d50b00(), local_80 != '\0'))
     && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar13 = FUN_00b610e0();
  if (local_80 == '\0') {
    if (local_88 == (longlong *)0x0) goto LAB_0153b5a7;
    FUN_00d50b00();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0153b4ef:
    puVar18 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar19 = 0x25795a8;
    *puVar18 = &DAT_025795a8;
    (*DAT_025795c0)();
    FUN_00d902b0();
    iVar22 = FUN_00d8c7a0();
    if (iVar22 < 1) {
      FUN_00d50b20();
      local_98 = 0;
      goto LAB_0153b615;
    }
    pvVar11 = _pthread_getspecific(pVar19);
    if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      pVar19 = (pthread_key_t)local_a0;
    }
    FUN_012cb140();
    FUN_00d50b20();
    local_98 = 0;
  }
  else {
    if (local_88 != (longlong *)0x0) goto LAB_0153b4ef;
LAB_0153b5a7:
    local_98 = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
LAB_0153b615:
    pvVar11 = _pthread_getspecific(pVar19);
    lVar12 = DAT_027c4400;
    if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar12 = DAT_027c4400, lVar16 != 0)) {
      pVar19 = (pthread_key_t)local_a0;
    }
    DAT_027c4400 = lVar12;
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    FUN_012cb140();
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  plVar14 = (longlong *)FUN_00e8fc40();
  FUN_000be3f0();
  (**(code **)(*plVar14 + 0x18))();
  local_60 = plVar14;
  pvVar11 = _pthread_getspecific(pVar19);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar19 = (pthread_key_t)local_60;
  }
  FUN_015056c0();
  pvVar11 = _pthread_getspecific(pVar19);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar19 = (pthread_key_t)local_60;
  }
  FUN_01505730();
  pvVar11 = _pthread_getspecific(pVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505960();
  FUN_00b61300();
  plVar14 = local_88;
  if (local_80 == '\0') {
    if (local_88 == (longlong *)0x0) goto LAB_0153c7d7;
    FUN_00d50b00();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == (longlong *)0x0) {
LAB_0153c7d7:
    local_50 = (longlong *)0x0;
    bVar23 = 0;
    local_a8 = (longlong *)0x0;
    local_f0 = 0;
    goto LAB_0153c7f2;
  }
  local_80 = '\0';
  local_88 = (longlong *)0x0;
  local_78 = plVar14;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_2c8 = DAT_025683d8;
  local_2d0 = DAT_02539aa0;
  local_2c0 = DAT_025795c0;
  local_70._4_4_ = 0;
  local_f0 = 0;
  local_a8 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  bVar23 = 0;
  while( true ) {
    if (local_70._4_4_ != 0) {
      if (local_70._4_4_ < 1) {
        iVar22 = -local_70._4_4_;
      }
      else {
        iVar22 = (pthread_key_t)local_70 - local_70._4_4_;
        local_70 = CONCAT44(local_70._4_4_,iVar22);
        local_39 = bVar23;
        FUN_00d23690();
        local_68 = local_68 + local_70._4_4_;
        iVar22 = 0;
      }
      local_70 = CONCAT44(iVar22,(pthread_key_t)local_70);
    }
    pVar19 = (pthread_key_t)local_70;
    lVar12 = (longlong)(int)(pthread_key_t)local_70;
    iVar22 = (pthread_key_t)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar22);
    if (*(int *)((longlong)local_78 + 0xc) <= iVar22) break;
    local_88 = *(longlong **)(local_78[2] + 8 + lVar12 * 8);
    if ((param_2 == '\0') || (iVar22 == 0 && local_68 == 0)) {
      plVar14 = (longlong *)FUN_00e8fc40();
      pVar19 = (pthread_key_t)lVar12;
      FUN_00082580();
      (**(code **)(*plVar14 + 0x18))();
      if (plVar14 == local_50) {
        if (bVar23 == 0) {
          local_39 = 1;
          plVar14 = local_50;
        }
        else {
          FUN_00d50b20();
          plVar14 = local_50;
          local_39 = bVar23;
        }
      }
      else {
        local_39 = 1;
        if ((bVar23 != 0) && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = plVar14;
      pvVar11 = _pthread_getspecific(pVar19);
      if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar19 = (pthread_key_t)local_50;
      }
      FUN_012e57a0();
      pvVar11 = _pthread_getspecific(pVar19);
      if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar19 = (pthread_key_t)local_a0;
      }
      FUN_012cb110();
      pvVar11 = _pthread_getspecific(pVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6520();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar14 = (longlong *)FUN_00e8fc40();
      FUN_0013dd30();
      uVar13 = (**(code **)(*plVar14 + 0x18))();
      if (local_a8 == plVar14) {
        plVar14 = local_a8;
        if ((char)local_f0 == '\0') goto LAB_0153bb5d;
        FUN_00d50b20();
      }
      else {
        if (((char)local_f0 != '\0') && (local_a8 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
LAB_0153bb5d:
        local_a8 = plVar14;
        local_f0 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      }
      pvVar11 = _pthread_getspecific(pVar19);
      if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar19 = (pthread_key_t)local_60;
      }
      FUN_015058d0();
      pvVar11 = _pthread_getspecific(pVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f020();
      bVar23 = local_39;
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar23 = local_39;
      }
    }
    local_39 = bVar23;
    FUN_00b5d7e0();
    plVar14 = local_d0;
    if (local_c8 == '\0') {
      if (local_d0 == (longlong *)0x0) goto LAB_0153c270;
      FUN_00d50b00();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0153bcd0:
      puVar18 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar18 = &DAT_025683c0;
      (*local_2c8)();
      FUN_00c92170();
      local_c8 = '\0';
      local_d0 = (longlong *)0x0;
      local_c0 = plVar14;
      local_b8 = 0xffffffff;
      local_b0 = 0;
      local_91 = local_50 == (longlong *)0x0 || local_39 == 0;
      local_b8._4_4_ = 0;
      while( true ) {
        if (local_b8._4_4_ != 0) {
          if (local_b8._4_4_ < 1) {
            iVar22 = -local_b8._4_4_;
          }
          else {
            iVar22 = (int)local_b8 - local_b8._4_4_;
            local_b8 = CONCAT44(local_b8._4_4_,iVar22);
            FUN_00d23690();
            local_b0 = local_b0 + local_b8._4_4_;
            iVar22 = 0;
          }
          local_b8 = CONCAT44(iVar22,(int)local_b8);
        }
        lVar12 = (longlong)(int)local_b8;
        iVar22 = (int)local_b8 + 1;
        local_b8 = CONCAT44(local_b8._4_4_,iVar22);
        local_170 = (char)param_1;
        if (*(int *)((longlong)local_c0 + 0xc) <= iVar22) break;
        lVar16 = local_c0[2];
        local_d0 = *(longlong **)(lVar16 + 8 + lVar12 * 8);
        iVar22 = FUN_00b60810();
        if (iVar22 == 0) {
          pvVar11 = _pthread_getspecific((pthread_key_t)lVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00b5beb0();
          local_90 = (longlong *)FUN_016c26c0();
        }
        else {
          dVar24 = (double)FUN_00b5beb0();
          local_90 = (longlong *)(dVar24 + (double)local_148);
        }
        FUN_00b5b3a0();
        dVar24 = local_120;
        if (local_118 == '\0') {
          if (local_120 != 0.0) {
            FUN_00d50b00();
            if ((local_118 != '\0') && (local_120 != 0.0)) {
              FUN_00d50b20();
            }
            goto LAB_0153bece;
          }
        }
        else if (local_120 != 0.0) {
LAB_0153bece:
          local_118 = '\0';
          local_120 = 0.0;
          local_f8 = dVar24;
          local_110 = dVar24;
          local_108 = 0xffffffff;
          local_100 = 0;
          local_108._4_4_ = 0;
          while( true ) {
            if (local_108._4_4_ != 0) {
              if (local_108._4_4_ < 1) {
                iVar22 = -local_108._4_4_;
              }
              else {
                iVar22 = (int)local_108 - local_108._4_4_;
                local_108 = CONCAT44(local_108._4_4_,iVar22);
                FUN_00d23690();
                local_100 = local_100 + local_108._4_4_;
                iVar22 = 0;
              }
              local_108 = CONCAT44(iVar22,(int)local_108);
            }
            lVar12 = (longlong)(int)local_108;
            iVar22 = (int)local_108 + 1;
            local_108 = CONCAT44(local_108._4_4_,iVar22);
            if (*(int *)((longlong)local_110 + 0xc) <= iVar22) break;
            local_120 = *(double *)(*(longlong *)((longlong)local_110 + 0x10) + 8 + lVar12 * 8);
            cVar6 = FUN_00b518a0();
            dVar24 = local_120;
            if (cVar6 == '\0') {
              cVar6 = FUN_00b51910();
              if ((cVar6 != '\0') && (0xf < *(int *)(puVar18 + 3))) {
                lVar16 = 0;
                lVar12 = 0;
                do {
                  cVar6 = FUN_00b518d0();
                  cVar7 = FUN_00b518d0();
                  if (cVar6 == cVar7) {
                    cVar6 = FUN_00b518f0();
                    cVar7 = FUN_00b518f0();
                    plVar14 = local_50;
                    if (cVar6 == cVar7) {
                      if (local_170 == '\0') {
                        if (local_91 == '\0') {
                          FUN_00d50b00();
                          local_d8 = plVar14;
                          bVar23 = local_39;
                        }
                        else {
                          local_d8 = local_50;
                          bVar23 = 0;
                        }
                      }
                      else {
                        lVar12 = *(longlong *)(puVar18[2] + lVar16);
                        uVar13 = extraout_XMM0_Qa_00;
                        if (lVar12 != 0) {
                          uVar13 = FUN_00d50b00();
                        }
                        local_378 = 1;
                        local_380 = lVar12;
                        FUN_01539540(uVar13,&local_380);
                        plVar14 = local_138;
                        if (local_138 == (longlong *)0x0) {
                          bVar21 = 0;
                          bVar23 = 0;
                        }
                        else {
                          bVar21 = 1;
                          bVar23 = 1;
                          if (local_130 == '\0') {
                            FUN_00d50b00();
                          }
                        }
                        local_d8 = plVar14;
                        if (lVar12 != 0) {
                          FUN_00d50b20();
                          bVar23 = bVar21;
                        }
                      }
                      plVar14 = local_d8;
                      lVar12 = puVar18[2];
                      lVar2 = *(longlong *)(lVar12 + lVar16);
                      if (lVar2 != 0) {
                        FUN_00d50b00();
                        lVar12 = puVar18[2];
                      }
                      local_368 = 1;
                      local_360 = local_120;
                      local_358 = 0;
                      local_350 = plVar14;
                      local_348 = 0;
                      local_340 = local_a8;
                      local_338 = 0;
                      local_370 = lVar2;
                      FUN_01539b60(*(undefined8 *)(lVar12 + 8 + lVar16),local_90);
                      if (lVar2 != 0) {
                        FUN_00d50b20();
                      }
                      FUN_00e7b4e0();
                      FUN_00c921e0();
                      if ((bVar23 != 0) && (local_d8 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      break;
                    }
                  }
                  lVar12 = lVar12 + 1;
                  iVar22 = *(int *)(puVar18 + 3);
                  iVar20 = iVar22 + 0xf;
                  if (-1 < iVar22) {
                    iVar20 = iVar22;
                  }
                  lVar16 = lVar16 + 0x10;
                } while (lVar12 < iVar20 >> 4);
              }
            }
            else {
              iVar22 = *(int *)(puVar18 + 3);
              FUN_00c8e340(extraout_XMM0_Qa,1);
              lVar12 = puVar18[2];
              *(double *)(lVar12 + iVar22) = dVar24;
              *(longlong **)(lVar12 + 8 + (longlong)iVar22) = local_90;
            }
          }
          FUN_00b671d0();
          FUN_00d50b20();
        }
      }
      plVar14 = local_c0;
      FUN_00b66ae0();
      if (0xf < *(int *)(puVar18 + 3)) {
        iVar22 = FUN_00b60810();
        if (iVar22 == 0) {
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar14);
          if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar14 = local_48;
          }
          FUN_00b5ec40();
          local_2b8 = (double)FUN_016c26c0();
        }
        else {
          local_2b8 = (double)FUN_00b5ec40();
          local_2b8 = local_2b8 + (double)local_148;
        }
        if (0xf < *(int *)(puVar18 + 3)) {
          lVar12 = 0;
          local_d8 = (longlong *)0x0;
          do {
            puVar17 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar17 = &DAT_02539a88;
            puVar17[2] = 0;
            (*local_2d0)();
            uVar8 = FUN_00b518f0();
            uVar9 = FUN_00b518d0();
            uVar13 = FUN_00b519f0(uVar9,uVar8,0);
            plVar14 = local_50;
            if (local_170 == '\0') {
              if (local_91 == '\0') {
                FUN_00d50b00();
                local_90 = plVar14;
                local_f8 = (double)CONCAT44(local_f8._4_4_,(uint)local_39);
              }
              else {
                local_f8 = (double)((ulonglong)local_f8 & 0xffffffff00000000);
                local_90 = local_50;
              }
            }
            else {
              local_330 = local_50;
              local_328 = 0;
              lVar16 = *(longlong *)(puVar18[2] + lVar12);
              if (lVar16 != 0) {
                uVar13 = FUN_00d50b00();
              }
              local_318 = 1;
              local_320 = lVar16;
              FUN_01539540(uVar13,&local_320);
              local_90 = local_d0;
              if (local_d0 == (longlong *)0x0) {
                local_f8 = (double)((ulonglong)local_f8._4_4_ << 0x20);
              }
              else {
                local_f8 = (double)CONCAT44(local_f8._4_4_,
                                            (int)CONCAT71((int7)((ulonglong)local_d0 >> 8),1));
                if (local_c8 == '\0') {
                  FUN_00d50b00();
                }
              }
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
            lVar16 = puVar18[2];
            lVar2 = *(longlong *)(lVar16 + lVar12);
            if (lVar2 != 0) {
              FUN_00d50b00();
              lVar16 = puVar18[2];
            }
            local_308 = 1;
            local_2f8 = 0;
            local_2f0 = local_90;
            local_2e8 = 0;
            local_2e0 = local_a8;
            local_2d8 = 0;
            local_310 = lVar2;
            local_300 = puVar17;
            FUN_01539b60(*(undefined8 *)(lVar16 + 8 + lVar12),local_2b8);
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (((char)local_f8 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            plVar14 = (longlong *)((longlong)local_d8 + 1);
            iVar22 = *(int *)(puVar18 + 3);
            iVar20 = iVar22 + 0xf;
            if (-1 < iVar22) {
              iVar20 = iVar22;
            }
            lVar12 = lVar12 + 0x10;
            local_d8 = plVar14;
          } while ((longlong)plVar14 < (longlong)(iVar20 >> 4));
        }
      }
      pVar19 = (pthread_key_t)plVar14;
      FUN_00d50b20();
      bVar5 = false;
      bVar3 = false;
    }
    else {
      if (local_d0 != (longlong *)0x0) goto LAB_0153bcd0;
LAB_0153c270:
      bVar5 = true;
      bVar3 = true;
    }
    if (param_2 == '\0') {
      FUN_00b5d860();
      if (local_c8 == '\0') {
        if (local_d0 == (longlong *)0x0) goto LAB_0153c66e;
        FUN_00d50b00();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0153c5c0:
        puVar18 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar18 = &DAT_025795a8;
        uVar13 = (*local_2c0)();
        FUN_00d902b0(uVar13,4);
        iVar22 = FUN_00d8c7a0();
        if (iVar22 < 1) {
          FUN_00d50b20();
          bVar4 = false;
          goto LAB_0153c6c6;
        }
        pvVar11 = _pthread_getspecific(pVar19);
        if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          pVar19 = (pthread_key_t)local_50;
        }
        FUN_012e5f80();
        FUN_00d50b20();
        bVar4 = false;
      }
      else {
        if (local_d0 != (longlong *)0x0) goto LAB_0153c5c0;
LAB_0153c66e:
        bVar4 = true;
LAB_0153c6c6:
        pvVar11 = _pthread_getspecific(pVar19);
        lVar12 = DAT_027c4408;
        if ((pvVar11 != (void *)0x0) &&
           (lVar16 = FUN_00e8b990(), lVar12 = DAT_027c4408, lVar16 != 0)) {
          pVar19 = (pthread_key_t)local_50;
        }
        DAT_027c4408 = lVar12;
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        FUN_012e5f80();
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
      }
      pvVar11 = _pthread_getspecific(pVar19);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7900();
      bVar3 = bVar5;
      if (!bVar4) {
        FUN_00d50b20();
      }
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    bVar23 = local_39;
  }
  FUN_00b67020();
  FUN_00d50b20();
LAB_0153c7f2:
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar19 = 0x25d7080;
  *puVar18 = &DAT_025d7080;
  puVar18[7] = 0;
  puVar18[8] = 0;
  (*DAT_025d7098)();
  pvVar11 = _pthread_getspecific(pVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013132f0();
  pvVar11 = _pthread_getspecific(pVar19);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313360();
  *unaff_RDI = puVar18;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_f0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar23 != 0) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar14 = local_58;
  uVar13 = local_140;
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_98 == '\0') {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)uVar13 == '\0') {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_dc == '\0') {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e8 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


