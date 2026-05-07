// Function: FUN_0192ed00
// Address: 0192ed00
// Size: 2068 bytes
// Class: MUDetectionEditorView


ulonglong FUN_0192ed00(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 uVar12;
  pthread_key_t pVar13;
  ulonglong in_RCX;
  ulonglong uVar14;
  undefined7 uVar15;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  double extraout_XMM0_Qa;
  double dVar17;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  longlong local_118;
  char local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f0 [8];
  undefined1 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8;
  double local_d0;
  ulonglong local_c8;
  char local_c0;
  ulonglong local_b8;
  char local_b0;
  ulonglong local_a8;
  char local_a0;
  ulonglong local_98;
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_6c;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  undefined8 uVar16;
  
  local_88 = (double)param_1;
  uStack_80 = in_XMM0_Qb;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b630(), iVar8 == 1)) {
    (**(code **)(&UNK_00001668 + *(longlong *)*unaff_RDI))();
    uVar6 = local_58;
    if ((local_50 == '\0') &&
       (((local_58 != 0 && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)))) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      in_RCX = uVar6;
    }
    FUN_01328ff0();
    lVar11 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_e8 = 1;
    FUN_0192eab0(local_88,local_f0);
    uVar14 = local_58;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_48 = uVar14;
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    iVar8 = FUN_01d3b620();
    pVar13 = (pthread_key_t)in_RCX;
    if (iVar8 == 2) {
      if (local_48 == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar13 = (pthread_key_t)uVar6;
        }
        FUN_01329770();
        lVar11 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_d8 = 1;
        FUN_0192eab0(local_88,local_e0);
        uVar14 = local_48;
        if ((local_58 != 0) && (uVar14 = local_58, local_50 == '\0')) {
          FUN_00d50b00();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (uVar14 == 0) {
          pvVar10 = _pthread_getspecific(pVar13);
          uVar14 = uVar6;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            uVar14 = *(ulonglong *)(uVar6 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          }
          local_88 = (double)(**(code **)(*(longlong *)*unaff_RDI + 0x930))(local_88);
          dVar17 = (double)(**(code **)(&UNK_000016a8 + *(longlong *)*unaff_RDI))();
          FUN_01364d50(local_88 - dVar17,1);
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = '\0';
          local_b8 = uVar14;
          FUN_0135de20();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          uVar14 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = local_48;
        local_c0 = '\0';
        FUN_0135d960();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_0192f217;
    }
    if (local_48 != 0) {
      uVar12 = (**(code **)(*(longlong *)*unaff_RDI + 0x930))(local_88);
      local_6c = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      dVar17 = extraout_XMM0_Qa;
LAB_0192ef10:
      (**(code **)(*(longlong *)*unaff_RDI + 0x658))();
      uVar7 = local_58;
      uVar1 = *unaff_RSI;
      if (uVar1 == local_58) {
        if (((char)unaff_RSI[1] == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0192efbc;
          }
LAB_0192ef73:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_50 = '\0';
        }
        pVar13 = (pthread_key_t)in_RCX;
        uVar1 = *unaff_RSI;
      }
      else {
        uVar5 = unaff_RSI[1];
        uVar14 = 0;
        if (local_50 != '\0') {
          *unaff_RSI = local_58;
          if (((char)uVar5 != '\0') && (uVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0192ef73;
        }
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = uVar7;
        if (((char)uVar5 != '\0') && (uVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_0192efbc:
        pVar13 = (pthread_key_t)in_RCX;
        *(undefined1 *)(unaff_RSI + 1) = 1;
        uVar1 = *unaff_RSI;
      }
      if (uVar1 != 0) {
        uVar9 = FUN_01d3a5a0();
        uVar14 = (ulonglong)uVar9;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pVar13 = (pthread_key_t)in_RCX;
        if (uVar9 == 6) goto LAB_0192f23f;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          uVar14 = *unaff_RDI;
          FUN_01d3abf0();
          uVar12 = FUN_01e466c0();
          local_d0 = (double)(**(code **)(*(longlong *)*unaff_RDI + 0x930))();
          pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = uVar6;
          }
          local_a8 = local_48;
          local_a0 = '\0';
          FUN_013663a0(local_d0 - dVar17,1);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          auVar18._0_8_ = FUN_01e436c0();
          auVar18._8_8_ = extraout_XMM0_Qb_00;
          local_108 = (float)uVar12;
          fStack_104 = (float)((ulonglong)uVar12 >> 0x20);
          fStack_100 = (float)extraout_XMM0_Qb;
          fStack_fc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          if ((float)local_88 < local_108) {
            local_108 = local_108 - (float)local_88;
            fStack_104 = fStack_104 - local_88._4_4_;
            fStack_100 = fStack_100 - (float)uStack_80;
            fStack_fc = fStack_fc - uStack_80._4_4_;
            auVar4._4_4_ = local_88._4_4_;
            auVar4._0_4_ = (float)local_88 + DAT_0241f374;
            auVar4._8_4_ = (float)uStack_80;
            auVar4._12_4_ = uStack_80._4_4_;
            auVar18 = blendps(auVar18,auVar4,1);
            uVar16 = auVar18._0_8_;
          }
          else {
            auVar2._4_4_ = fStack_104;
            auVar2._0_4_ = local_108 + DAT_0241f374;
            auVar2._8_4_ = fStack_100;
            auVar2._12_4_ = fStack_fc;
            auVar18 = blendps(auVar18,auVar2,1);
            uVar16 = auVar18._0_8_;
            local_108 = (float)local_88 - local_108;
            fStack_104 = local_88._4_4_ - fStack_104;
            fStack_100 = (float)uStack_80 - fStack_100;
            fStack_fc = uStack_80._4_4_ - fStack_fc;
          }
          auVar3._4_4_ = fStack_104;
          auVar3._0_4_ = local_108 + DAT_023b36a0;
          auVar3._8_4_ = fStack_100;
          auVar3._12_4_ = fStack_fc;
          in_XMM1 = blendps(in_XMM1,auVar3,1);
          (**(code **)(*(longlong *)*unaff_RDI + 0x618))(uVar16,in_XMM1._0_8_);
          local_6c = 0;
          (**(code **)(*(longlong *)*unaff_RDI + 0xa48))();
          local_88 = (double)uVar12;
          uStack_80 = extraout_XMM0_Qb;
          dVar17 = local_d0;
        }
        goto LAB_0192ef10;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
LAB_0192f23f:
      local_98 = *unaff_RSI;
      local_90 = '\0';
      FUN_0199eb40();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = (undefined7)(uVar14 >> 8);
      if ((local_6c & 1) == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013668f0();
        (**(code **)(*(longlong *)*unaff_RDI + 0x620))();
        (**(code **)(*(longlong *)*unaff_RDI + 0xa48))();
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar15,1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar15,1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_0192f217;
    }
    if (uVar6 != 0) {
      FUN_00d50b20();
    }
  }
  uVar14 = 0;
LAB_0192f217:
  return uVar14 & 0xffffffff;
}


