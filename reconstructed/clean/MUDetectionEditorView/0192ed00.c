// Function: FUN_0192ed00
// Address: 0192ed00
// Size: 2068 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0192ed00(uint64_t param_1)

{
  uint64_t uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int64_t lVar11;
  uint64_t uVar12;
  void* pVar13;
  uint64_t in_RCX;
  uint64_t uVar14;
  undefined7 uVar15;
  uint64_t *arg1;
  uint64_t *this_ptr;
  double extraout_XMM0_Qa;
  double dVar17;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar18 [16];
  uint8_t in_XMM1 [16];
  int64_t local_118;
  char local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint8_t local_f0 [8];
  uint8_t local_e8;
  uint8_t local_e0 [8];
  uint8_t local_d8;
  double local_d0;
  uint64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  char local_a0;
  uint64_t local_98;
  char local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint local_6c;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  char local_50;
  uint64_t local_48;
  uint64_t uVar16;
  
  local_88 = (double)param_1;
  uStack_80 = in_XMM0_Qb;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b630(), iVar8 == 1)) {
    (**(code **)(&UNK_00001668 + *(int64_t *)*this_ptr))();
    uVar6 = local_58;
    if ((local_50 == '\0') &&
       (((local_58 != 0 && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)))) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((void*)in_RCX);
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
    pVar13 = (void*)in_RCX;
    if (iVar8 == 2) {
      if (local_48 == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar13 = (void*)uVar6;
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
            uVar14 = *(uint64_t *)(uVar6 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          }
          local_88 = (double)(**(code **)(*(int64_t *)*this_ptr + 0x930))(local_88);
          dVar17 = (double)(**(code **)(&UNK_000016a8 + *(int64_t *)*this_ptr))();
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
          uVar14 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
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
      uVar12 = (**(code **)(*(int64_t *)*this_ptr + 0x930))(local_88);
      local_6c = (uint)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
      dVar17 = extraout_XMM0_Qa;
LAB_0192ef10:
      (**(code **)(*(int64_t *)*this_ptr + 0x658))();
      uVar7 = local_58;
      uVar1 = *arg1;
      if (uVar1 == local_58) {
        if (((char)arg1[1] == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0192efbc;
          }
LAB_0192ef73:
          *(void*)(arg1 + 1) = 1;
          local_50 = '\0';
        }
        pVar13 = (void*)in_RCX;
        uVar1 = *arg1;
      }
      else {
        uVar5 = arg1[1];
        uVar14 = 0;
        if (local_50 != '\0') {
          *arg1 = local_58;
          if (((char)uVar5 != '\0') && (uVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0192ef73;
        }
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *arg1 = uVar7;
        if (((char)uVar5 != '\0') && (uVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_0192efbc:
        pVar13 = (void*)in_RCX;
        *(void*)(arg1 + 1) = 1;
        uVar1 = *arg1;
      }
      if (uVar1 != 0) {
        uVar9 = FUN_01d3a5a0();
        uVar14 = (uint64_t)uVar9;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pVar13 = (void*)in_RCX;
        if (uVar9 == 6) goto LAB_0192f23f;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          uVar14 = *this_ptr;
          FUN_01d3abf0();
          uVar12 = FUN_01e466c0();
          local_d0 = (double)(**(code **)(*(int64_t *)*this_ptr + 0x930))();
          pvVar10 = _pthread_getspecific((void*)in_RCX);
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
          fStack_104 = (float)((uint64_t)uVar12 >> 0x20);
          fStack_100 = (float)extraout_XMM0_Qb;
          fStack_fc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
          if ((float)local_88 < local_108) {
            local_108 = local_108 - (float)local_88;
            fStack_104 = fStack_104 - local_88._4_4_;
            fStack_100 = fStack_100 - (float)uStack_80;
            fStack_fc = fStack_fc - uStack_80._4_4_;
            auVar4._4_4_ = local_88._4_4_;
            auVar4._0_4_ = (float)local_88 + g_0241f374;
            auVar4._8_4_ = (float)uStack_80;
            auVar4._12_4_ = uStack_80._4_4_;
            auVar18 = blendps(auVar18,auVar4,1);
            uVar16 = auVar18._0_8_;
          }
          else {
            auVar2._4_4_ = fStack_104;
            auVar2._0_4_ = local_108 + g_0241f374;
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
          auVar3._0_4_ = local_108 + g_023b36a0;
          auVar3._8_4_ = fStack_100;
          auVar3._12_4_ = fStack_fc;
          in_XMM1 = blendps(in_XMM1,auVar3,1);
          (**(code **)(*(int64_t *)*this_ptr + 0x618))(uVar16,in_XMM1._0_8_);
          local_6c = 0;
          (**(code **)(*(int64_t *)*this_ptr + 0xa48))();
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
      local_98 = *arg1;
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
        (**(code **)(*(int64_t *)*this_ptr + 0x620))();
        (**(code **)(*(int64_t *)*this_ptr + 0xa48))();
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

