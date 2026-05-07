// Function: FUN_016ecb60
// Address: 016ecb60
// Size: 8953 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016eee48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ecb60(pthread_key_t param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined7 uVar12;
  void *pvVar7;
  undefined8 *puVar8;
  undefined4 **ppuVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte bVar13;
  pthread_key_t pVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  double dVar23;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined4 *local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  undefined4 *local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  double local_1c0;
  double local_1b8;
  ulonglong uStack_1b0;
  undefined1 local_198;
  undefined1 local_188;
  undefined4 *local_180;
  undefined1 local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  undefined4 *local_150;
  char local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  undefined4 *local_100;
  char local_f8;
  undefined4 *local_f0;
  char local_e8;
  undefined4 *local_e0;
  char local_d8;
  undefined4 *local_d0;
  char local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  int local_8c;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  longlong local_70;
  undefined4 *local_68;
  char local_60;
  longlong *local_58;
  undefined4 *local_50;
  undefined4 *local_40;
  char local_38 [8];
  
  local_78 = (undefined4 *)CONCAT44(local_78._4_4_,param_1);
  uVar12 = (undefined7)((ulonglong)local_40 >> 8);
  local_8c = param_3;
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    local_120 = local_68;
    local_118 = 0;
    if (local_60 == '\0') {
      if (local_68 != (undefined4 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_118 = '\x01';
    FUN_016ebac0();
    local_70 = (longlong)local_40;
    puVar15 = local_40;
    if (local_40 == (undefined4 *)0x0) {
      local_70 = 0;
      local_a8 = 0;
    }
    else if (local_38[0] == '\0') {
      uVar22 = FUN_00d50b00();
      local_a8 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
      if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      local_a8 = CONCAT71(uVar12,1);
    }
    pVar14 = (pthread_key_t)puVar15;
    if ((local_118 != '\0') && (local_120 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_170 = *unaff_RSI;
    local_168 = '\0';
    FUN_01901690();
    local_70 = (longlong)local_40;
    puVar15 = local_40;
    if (local_40 == (undefined4 *)0x0) {
      local_70 = 0;
      local_a8 = 0;
    }
    else if (local_38[0] == '\0') {
      uVar22 = FUN_00d50b00();
      local_a8 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
      if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      local_a8 = CONCAT71(uVar12,1);
    }
    pVar14 = (pthread_key_t)puVar15;
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_78 == '\0') {
    FUN_016efaf0();
  }
  FUN_016d53b0();
  if ((local_38[0] == '\0') && (local_40 != (undefined4 *)0x0)) {
    FUN_00d50b00();
  }
  local_b0 = (longlong)local_40;
  iVar6 = *(int *)(local_70 + 0xc);
  pvVar7 = _pthread_getspecific(pVar14);
  plVar16 = (longlong *)(unaff_RDI + 0x50);
  local_58 = plVar16;
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar14 = (pthread_key_t)plVar16;
  FUN_018fbce0();
  iVar1 = *(int *)((longlong)local_40 + 0xc);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar6 == iVar1) {
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165be20();
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = (undefined4 *)FUN_018fcb10();
    local_50 = (undefined4 *)FUN_016cefb0();
    if ((local_8c == 1) && ((char)local_78 == '\0')) {
      local_a0 = (undefined4 *)FUN_016d0590(local_50);
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = (undefined4 *)FUN_0190a000();
    plVar16 = (longlong *)(unaff_RDI + 0x78);
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      FUN_00d64850();
      if (*plVar16 != 0) {
        *plVar16 = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    local_98 = plVar16;
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar14 = 0x25683c0;
    *puVar8 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    FUN_00d64850();
    puVar2 = *(undefined8 **)(unaff_RDI + 0x70);
    if (puVar2 != puVar8) {
      FUN_00d50b00();
      *(undefined8 **)(unaff_RDI + 0x70) = puVar8;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
    FUN_018f9320(local_50);
    if (local_38[0] == '\0') {
      if (local_40 != (undefined4 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    plVar16 = local_58;
    FUN_00d64850();
    lVar20 = *plVar16;
    if ((undefined4 *)lVar20 != local_40) {
      if (local_40 != (undefined4 *)0x0) {
        FUN_00d50b00();
      }
      *local_58 = (longlong)local_40;
      if (lVar20 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (local_40 != (undefined4 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_78 != '\0') {
      FUN_00e7bdb0();
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    local_108 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (undefined4 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_108 = '\x01';
    local_110 = (longlong)local_40;
    uVar22 = 0;
    FUN_01902aa0(local_a0,&local_110);
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
    pVar14 = (pthread_key_t)uVar22;
    if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) != 0) {
      do {
        uVar21 = FUN_00d23340();
        local_68 = (undefined4 *)CONCAT71(local_68._1_7_,local_38[0]);
        ppuVar9 = (undefined4 **)local_38;
        if (local_38[0] == '\0') {
          ppuVar9 = &local_68;
        }
        *(undefined1 *)ppuVar9 = 0;
        if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if (((char)local_68 == '\0') && (local_40 != (undefined4 *)0x0)) {
          uVar21 = FUN_00d50b00();
        }
        FUN_016d7fb0(uVar21,1);
        if (local_40 != (undefined4 *)0x0) {
          FUN_00d50b20();
        }
        pVar14 = (pthread_key_t)uVar22;
      } while (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) != 0);
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = FUN_019079b0();
    FUN_01909ea0(uVar22,local_80);
    if (local_38[0] == '\0') {
      if (local_40 != (undefined4 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_198 = 1;
    uVar22 = FUN_016d8160();
    if (local_40 != (undefined4 *)0x0) {
      uVar22 = FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
      uVar22 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (undefined4 *)0x0)) {
      uVar22 = FUN_00d50b20();
    }
    if (local_8c == 1) {
      if ((char)local_78 == '\0') {
        FUN_016d6df0(uVar22,1);
      }
      else {
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_0165be20();
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar14 = 0;
        FUN_0165c0f0(0,uVar22,0,0);
        if ((((local_38[0] == '\0') && (local_40 != (undefined4 *)0x0)) &&
            (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0123fef0();
        uVar5 = FUN_0123ff00();
        FUN_0123fbe0(extraout_XMM0_Qa_00,uVar5);
        local_100 = local_68;
        local_f8 = 0;
        if (local_60 == '\0') {
          if (local_68 != (undefined4 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_f8 = '\x01';
        FUN_0165b080();
        if (local_38[0] == '\0') {
          if (local_40 != (undefined4 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        FUN_00d64850();
        lVar20 = *(longlong *)(unaff_RDI + 0x58);
        if ((undefined4 *)lVar20 != local_40) {
          if (local_40 != (undefined4 *)0x0) {
            FUN_00d50b00();
          }
          *(longlong *)(unaff_RDI + 0x58) = (longlong)local_40;
          if (lVar20 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
        if (local_40 != (undefined4 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01901340();
        if (local_38[0] == '\0') {
          if (local_40 != (undefined4 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        plVar16 = local_98;
        if ((undefined4 *)*local_98 != local_40) {
          FUN_00d64850();
          lVar20 = *plVar16;
          if ((undefined4 *)lVar20 != local_40) {
            if (local_40 != (undefined4 *)0x0) {
              FUN_00d50b00();
            }
            *local_98 = (longlong)local_40;
            if (lVar20 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (local_40 != (undefined4 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (undefined4 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    goto LAB_016ee2c9;
  }
  pvVar7 = _pthread_getspecific(pVar14);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01901340();
  local_40 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (undefined4 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_38[0] = '\0';
  cVar4 = FUN_00d23d70();
  uVar22 = extraout_XMM0_Qa;
  if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
    uVar22 = FUN_00d50b20();
  }
  if (local_40 != (undefined4 *)0x0) {
    uVar22 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (undefined4 *)0x0)) {
    uVar22 = FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    uVar19 = *(uint *)(local_70 + 0xc);
    if (1 < (int)uVar19) {
      lVar20 = (ulonglong)uVar19 + 1;
      do {
        uVar19 = uVar19 - 1;
        lVar18 = *(longlong *)(local_70 + 0x10);
        lVar3 = *(longlong *)(lVar18 + (ulonglong)uVar19 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pVar14 = (pthread_key_t)lVar18;
        uVar22 = FUN_016d5920();
        if (lVar3 != 0) {
          uVar22 = FUN_00d50b20();
        }
        lVar20 = lVar20 + -1;
      } while (2 < lVar20);
    }
    if (local_8c == 1) {
      if ((char)local_78 != '\0') {
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_01901340();
        if (local_38[0] == '\0') {
          if (local_40 != (undefined4 *)0x0) {
            uVar22 = FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if (*(undefined4 **)(unaff_RDI + 0x78) != local_40) {
          FUN_00d64850();
          puVar15 = *(undefined4 **)(unaff_RDI + 0x78);
          if (puVar15 != local_40) {
            if (local_40 != (undefined4 *)0x0) {
              FUN_00d50b00();
            }
            *(undefined4 **)(unaff_RDI + 0x78) = local_40;
            if (puVar15 != (undefined4 *)0x0) {
              FUN_00d50b20();
            }
          }
          uVar22 = FUN_00d64910();
        }
        if (local_40 != (undefined4 *)0x0) {
          uVar22 = FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
      }
      FUN_016d6df0(uVar22,1);
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    goto LAB_016ee2c9;
  }
  if ((local_8c == 1) && ((char)local_78 != '\0')) {
    if (*(char *)(unaff_RDI + 0x80) != '\0') {
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d23340();
      pcVar10 = (char *)&local_88;
      if (local_38[0] != '\0') {
        pcVar10 = local_38;
      }
      local_88 = (undefined4 *)CONCAT71(local_88._1_7_,local_38[0]);
      *pcVar10 = '\0';
      if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
        FUN_00d50b20();
      }
      local_e8 = 0;
      if ((char)local_88 == '\0') {
        if (local_40 != (undefined4 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      }
      local_e8 = '\x01';
      local_f0 = local_40;
      uVar22 = 0;
      FUN_01900ec0(0,&local_f0);
      puVar15 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (undefined4 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = puVar15;
      if ((local_e8 != '\0') && (local_f0 != (undefined4 *)0x0)) {
        FUN_00d50b20();
      }
      while( true ) {
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar22);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019012b0();
        if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
        puVar15 = local_78;
        pVar14 = (pthread_key_t)uVar22;
        if (local_40 == local_78) break;
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019012b0();
        if (local_38[0] == '\0') {
          if (local_40 != (undefined4 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_188 = 1;
        FUN_016ebff0();
        if (local_40 != (undefined4 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      uVar22 = FUN_01909fa0();
      if (*(undefined4 **)(unaff_RDI + 0x78) != puVar15) {
        FUN_00d64850();
        puVar17 = *(undefined4 **)(unaff_RDI + 0x78);
        if (puVar17 != puVar15) {
          if (puVar15 != (undefined4 *)0x0) {
            FUN_00d50b00();
          }
          *(undefined4 **)(unaff_RDI + 0x78) = puVar15;
          if (puVar17 != (undefined4 *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar22 = FUN_00d64910();
      }
      FUN_016d6df0(uVar22,1);
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018f9310();
      if (puVar15 != (undefined4 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_016ee2c9;
    }
  }
  else if (local_8c == 0) {
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_160 = local_70;
    local_158 = '\0';
    FUN_01906d80();
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = 0;
    lVar20 = FUN_0165cf20(0,0);
    local_68 = (undefined4 *)CONCAT44(local_68._4_4_,2);
    FUN_00e7c280();
    FUN_00d23340();
    pVar14 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar22 >> 8),local_38[0]);
    pcVar10 = (char *)&local_c0;
    if (local_38[0] != '\0') {
      pcVar10 = local_38;
    }
    local_c0 = CONCAT71(local_c0._1_7_,local_38[0]);
    *pcVar10 = '\0';
    if ((local_38[0] != '\0') && (lVar20 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = FUN_0165cf20(0,0);
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,2);
    uVar21 = FUN_00e7c260();
    FUN_016d62b0(uVar21,uVar22);
    if (((char)local_c0 != '\0') && (lVar20 != 0)) {
      FUN_00d50b20();
    }
    FUN_016d63b0();
    goto LAB_016ee2c9;
  }
  if (((char)local_78 == '\0') &&
     ((FUN_00d23620(), *(int *)(local_70 + 0xc) == 0 ||
      (FUN_00d23740(), *(int *)(local_70 + 0xc) == 0)))) goto LAB_016ee2c9;
  local_b4 = 0xffffffff;
  pvVar7 = _pthread_getspecific(pVar14);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23310();
  local_88 = (undefined4 *)CONCAT71(local_88._1_7_,local_38[0]);
  pcVar10 = local_38;
  if (local_38[0] == '\0') {
    pcVar10 = (char *)&local_88;
  }
  *pcVar10 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = 0;
  if ((char)local_88 == '\0') {
    if (local_40 != (undefined4 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
  }
  local_d8 = '\x01';
  local_e0 = local_40;
  puVar15 = &local_b4;
  FUN_01900ad0(puVar15,&local_e0);
  pVar14 = (pthread_key_t)puVar15;
  local_a0 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (undefined4 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != (undefined4 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar14);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  pcVar10 = local_38;
  if (local_38[0] == '\0') {
    pcVar10 = (char *)&local_88;
  }
  local_88 = (undefined4 *)CONCAT71(local_88._1_7_,local_38[0]);
  *pcVar10 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
    FUN_00d50b20();
  }
  puVar15 = local_a0;
  local_c8 = 0;
  if ((char)local_88 == '\0') {
    if (local_40 != (undefined4 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
  }
  local_c8 = '\x01';
  local_d0 = local_40;
  puVar17 = &local_b4;
  FUN_01900ec0(puVar17,&local_d0);
  local_50 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (undefined4 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != (undefined4 *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = (undefined4 *)FUN_00e7bdb0();
  if ((puVar15 != (undefined4 *)0x0) && (local_50 != (undefined4 *)0x0)) {
    pvVar7 = _pthread_getspecific((pthread_key_t)puVar17);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != local_40) {
      pvVar7 = _pthread_getspecific((pthread_key_t)puVar17);
      if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        puVar17 = local_50;
      }
      local_40 = (undefined4 *)FUN_019079b0();
      pvVar7 = _pthread_getspecific((pthread_key_t)puVar17);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (undefined4 *)FUN_019079b0();
      FUN_00e7b970();
      local_88 = local_40;
      pvVar7 = _pthread_getspecific((pthread_key_t)puVar17);
      if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        puVar17 = local_50;
      }
      local_1b8 = (double)FUN_01907950();
      uStack_1b0 = extraout_XMM0_Qb;
      pvVar7 = _pthread_getspecific((pthread_key_t)puVar17);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (undefined4 *)FUN_01907950();
      pvVar7 = _pthread_getspecific((pthread_key_t)puVar17);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_150 = puVar15;
      local_148 = '\0';
      local_1c0 = (double)FUN_018fde50();
      local_1b8 = local_1b8 - (double)local_80;
      if ((local_148 != '\0') && (local_150 != (undefined4 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  bVar13 = local_50 == (undefined4 *)0x0 | (byte)local_78 ^ 1;
  pVar14 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar17 >> 8),bVar13);
  if (bVar13 == 0) {
    if (*(int *)(local_70 + 0xc) != 0) {
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar22 = FUN_019079b0();
      FUN_016d5810(extraout_XMM0_Qa_01,uVar22);
      if ((local_38[0] == '\0') && (local_40 != (undefined4 *)0x0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar14);
      if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pVar14 = (pthread_key_t)local_50;
      }
      uVar22 = FUN_019079b0();
      FUN_016d5810(extraout_XMM0_Qa_02,uVar22);
      if ((local_38[0] == '\0') && (local_40 != (undefined4 *)0x0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c0 = FUN_0190a000();
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_138 = FUN_0190a000();
      local_200 = local_40;
      local_1f8 = 0;
      FUN_016ebbb0(extraout_XMM0_Qa_03,&local_200);
      local_80 = local_40;
      puVar17 = local_40;
      if (local_40 == (undefined4 *)0x0) {
        local_98 = (longlong *)0x0;
        local_80 = (undefined4 *)0x0;
      }
      else {
        local_98 = (longlong *)CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
      }
      pVar14 = (pthread_key_t)puVar17;
      if (local_40 != (undefined4 *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      goto LAB_016ee655;
    }
    local_98 = (longlong *)0x0;
    local_80 = (undefined4 *)0x0;
  }
  else {
    local_80 = (undefined4 *)0x0;
    local_98 = (longlong *)0x0;
LAB_016ee655:
    uVar19 = *(uint *)(local_70 + 0xc);
    if (0 < (int)uVar19) {
      lVar20 = (ulonglong)uVar19 + 1;
      do {
        uVar19 = uVar19 - 1;
        lVar18 = *(longlong *)(local_70 + 0x10);
        lVar3 = *(longlong *)(lVar18 + (ulonglong)uVar19 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pVar14 = (pthread_key_t)lVar18;
        local_1e8 = 1;
        local_1f0 = lVar3;
        FUN_016d5920();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar20 = lVar20 + -1;
        puVar15 = local_a0;
      } while (1 < lVar20);
    }
  }
  local_40 = (undefined4 *)FUN_00e7bdb0();
  if (((local_88._4_4_ == 0) || ((ulonglong)local_40 >> 0x20 == 0)) ||
     (cVar4 = FUN_00e7c000(), uVar22 = extraout_XMM0_Qa_04, cVar4 == '\0')) {
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = FUN_019079b0();
    local_68 = (undefined4 *)FUN_016cbad0(uVar22,0);
    dVar23 = (double)FUN_00e7c860();
    dVar23 = (local_1b8 / (DAT_023b4df8 / local_1c0)) / dVar23;
    auVar24._8_8_ = _UNK_023945b8 & uStack_1b0 | _UNK_023945c8;
    auVar24._0_8_ = (double)(_DAT_023945b0 & (ulonglong)dVar23 | _DAT_023945c0) + dVar23;
    auVar24 = roundsd(auVar24,auVar24,0xb);
    local_130 = CONCAT44(local_130._4_4_,(int)auVar24._0_8_);
    local_40 = local_68;
    FUN_00e7c2a0();
    FUN_00e7b970();
    local_1e0 = local_50;
    local_1d8 = 0;
    pVar14 = 0;
    uVar22 = FUN_016d5bb0(0,&local_1e0);
  }
  puVar17 = local_40;
  if (local_50 != (undefined4 *)0x0) {
    pvVar7 = _pthread_getspecific(pVar14);
    if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar14 = (pthread_key_t)local_50;
    }
    uVar22 = FUN_019079b0();
    local_130 = FUN_016cbad0(uVar22,0);
    pvVar7 = _pthread_getspecific(pVar14);
    if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar14 = (pthread_key_t)local_50;
    }
    local_68 = (undefined4 *)FUN_019079b0();
    uVar22 = FUN_00e7b970();
    uVar22 = FUN_016da710(uVar22,local_68);
    if ((local_38[0] == '\0') && (local_40 != (undefined4 *)0x0)) {
      uVar22 = FUN_00d50b00();
    }
    if ((char)local_78 == '\0') {
      if (puVar15 != (undefined4 *)0x0) {
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar14 = 0;
        puVar11 = (undefined4 *)FUN_0165cf20(0,0);
        local_68 = (undefined4 *)CONCAT44(local_68._4_4_,2);
        FUN_00e7c280();
        local_78 = puVar11;
        pvVar7 = _pthread_getspecific(pVar14);
        if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
          pVar14 = (pthread_key_t)local_50;
        }
        FUN_019079b0();
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar14 = 0;
        uVar22 = FUN_0165cf20(0,0);
        local_128 = CONCAT44(local_128._4_4_,2);
        uVar21 = FUN_00e7c260();
        FUN_016d62b0(uVar21,uVar22);
        uVar22 = FUN_016d63b0();
      }
    }
    else {
      local_68 = local_40;
      local_60 = '\0';
      uVar22 = FUN_016e5180(uVar22,&local_68);
      if ((local_38[0] == '\0') || (local_40 == (undefined4 *)0x0)) {
        if (local_40 == (undefined4 *)0x0) {
          if (((local_c0._4_4_ == 0) || (local_138._4_4_ == 0)) ||
             (cVar4 = FUN_00e7c000(), uVar22 = extraout_XMM0_Qa_05, cVar4 == '\0')) {
            if (local_80 != (undefined4 *)0x0) {
              pvVar7 = _pthread_getspecific(pVar14);
              if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pVar14 = (pthread_key_t)local_80;
              }
              FUN_01909dc0();
              pvVar7 = _pthread_getspecific(pVar14);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar14 = 0;
              local_78 = (undefined4 *)FUN_0165cf20(0,0);
              pvVar7 = _pthread_getspecific(pVar14);
              if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
                pVar14 = (pthread_key_t)local_50;
              }
              FUN_019079b0();
              pvVar7 = _pthread_getspecific(pVar14);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar14 = 0;
              local_128 = FUN_0165cf20(0,0);
              puVar11 = local_78;
              local_40 = local_78;
              FUN_00e7b970();
              local_68 = puVar11;
              local_13c = 4;
              if (((ulonglong)puVar11 >> 0x20 != 0) &&
                 (cVar4 = FUN_00e7c6b0(), uVar22 = extraout_XMM0_Qa_06, cVar4 == '\0'))
              goto LAB_016eee1d;
            }
            pvVar7 = _pthread_getspecific(pVar14);
            if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
              pVar14 = (pthread_key_t)local_50;
            }
            uVar22 = FUN_019079b0();
            FUN_016d5810(extraout_XMM0_Qa_07,uVar22);
            if ((local_38[0] == '\0') && (local_40 != (undefined4 *)0x0)) {
              FUN_00d50b00();
            }
            local_78 = local_40;
            local_38[0] = '\0';
            iVar6 = FUN_00d237a0();
            if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar14);
            if ((pvVar7 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
              pVar14 = (pthread_key_t)local_50;
            }
            uVar22 = FUN_019079b0();
            uVar22 = FUN_01909ea0(uVar22,local_138);
            if (local_38[0] == '\0') {
              if (local_40 != (undefined4 *)0x0) {
                uVar22 = FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_178 = 1;
            local_180 = local_40;
            uVar22 = FUN_016efe10(uVar22,iVar6 + 1);
            puVar11 = local_78;
            if (local_40 != (undefined4 *)0x0) {
              uVar22 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (undefined4 *)0x0)) {
              uVar22 = FUN_00d50b20();
            }
            if (puVar11 != (undefined4 *)0x0) {
              uVar22 = FUN_00d50b20();
            }
          }
LAB_016eee1d:
          if (*(longlong *)(unaff_RDI + 0x78) != 0) {
            FUN_00d64850();
            lVar20 = *(longlong *)(unaff_RDI + 0x78);
            if ((lVar20 != 0) && (*(longlong *)(unaff_RDI + 0x78) = 0, lVar20 != 0)) {
              FUN_00d50b20();
            }
            uVar22 = FUN_00d64910();
          }
        }
      }
      else {
        uVar22 = FUN_00d50b20();
      }
    }
    if (puVar17 != (undefined4 *)0x0) {
      uVar22 = FUN_00d50b20();
    }
  }
  if (local_8c == 1) {
    local_1d0 = local_b0;
    local_1c8 = 0;
    FUN_016d6df0(uVar22,1);
  }
  pvVar7 = _pthread_getspecific(pVar14);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (((char)local_98 != '\0') && (local_80 != (undefined4 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (undefined4 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (undefined4 *)0x0) {
    FUN_00d50b20();
  }
LAB_016ee2c9:
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


