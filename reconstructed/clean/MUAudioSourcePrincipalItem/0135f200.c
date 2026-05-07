// Function: FUN_0135f200
// Address: 0135f200
// Size: 17039 bytes
// Class: MUAudioSourcePrincipalItem

void*
FUN_0135f200(int64_t *******param_1,void*param_2,void*param_3,void*param_4)

{
  void* pVar1;
  int64_t *****ppppplVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint64_t uVar13;
  void *pvVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t *******ppppppplVar17;
  void*puVar18;
  byte bVar19;
  byte bVar20;
  void* pVar21;
  void* pVar22;
  void* pVar23;
  int64_t *******ppppppplVar24;
  int64_t *******ppppppplVar25;
  int64_t *plVar26;
  int64_t *******ppppppplVar27;
  undefined7 uVar28;
  int64_t arg1;
  void*this_ptr;
  uint uVar29;
  int64_t *******ppppppplVar30;
  uint64_t uVar31;
  int64_t *****ppppplVar32;
  float fVar33;
  float fVar34;
  uint64_t extraout_XMM0_Qa;
  double dVar35;
  uint64_t extraout_XMM0_Qa_00;
  double dVar36;
  char local_res8;
  char local_res10;
  uint8_t local_res18;
  char local_res20;
  int64_t *******local_3e0;
  uint8_t local_3d8;
  uint64_t local_3d0;
  uint8_t local_3c8;
  int64_t *******local_3c0;
  uint8_t local_3b8;
  int64_t *******local_3b0;
  uint8_t local_3a8;
  int64_t *******local_3a0;
  uint8_t local_398;
  void*local_390;
  uint8_t local_388;
  int64_t *****local_380;
  uint8_t local_378;
  int64_t *******local_370;
  uint8_t local_368;
  int64_t *******local_360;
  uint8_t local_358;
  int64_t *******local_350;
  uint8_t local_348;
  int64_t *******local_340;
  uint8_t local_338;
  double local_330;
  int64_t local_328;
  uint64_t local_320;
  uint64_t local_318;
  int64_t *******local_310;
  char local_308;
  int64_t *******local_300;
  char local_2f8;
  int64_t *******local_2f0;
  char local_2e8;
  int64_t *******local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t *******local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t *******local_270;
  char local_268;
  uint local_25c;
  int64_t *******local_258;
  int64_t *******local_250;
  char local_248;
  double local_1a8;
  void* local_198;
  int64_t *******local_140;
  int64_t *******local_100;
  int64_t *******local_f8;
  int64_t *******local_f0;
  int64_t *******local_e8;
  int64_t *******local_d8;
  char local_d0;
  int64_t *******local_c8;
  char local_c0 [8];
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *******local_98;
  int64_t *******local_90;
  uint64_t local_88;
  int64_t *******local_80;
  int64_t *******local_78;
  uint64_t local_70;
  int64_t *******local_68;
  uint64_t local_60;
  int64_t *******local_58;
  int64_t *******local_50;
  int64_t *******local_40;
  int64_t *******local_38;
  
  ppppppplVar25 = param_1;
  uVar13 = FUN_00e7b4e0();
  *param_3 = uVar13;
  pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  local_80 = local_c8;
  if (local_c8 == (int64_t *******)0x0) {
    pVar21 = 1;
    local_80 = (int64_t *******)0x0;
  }
  else {
    if (local_c0[0] == '\0') {
      FUN_00d50b00();
      pVar21 = 0;
      if ((local_c0[0] == '\0') || (local_c8 == (int64_t *******)0x0)) goto LAB_0135f2e1;
      FUN_00d50b20();
    }
    pVar21 = 0;
  }
LAB_0135f2e1:
  pVar22 = pVar21;
  local_58 = param_1;
  if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
     (*(int64_t *)(arg1 + 0x148) != 0)) {
    local_60 = 0;
    local_50 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
    pvVar14 = _pthread_getspecific(pVar21);
    if (pvVar14 != (void *)0x0) {
      local_60 = 0;
      local_50 = (int64_t *******)0x0;
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      local_78 = (int64_t *******)0x0;
      FUN_00e8b990();
    }
    local_60 = 0;
    local_50 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
    iVar12 = FUN_0141bab0();
    if (iVar12 == 3) {
      local_60 = 0;
      local_50 = (int64_t *******)0x0;
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      local_78 = (int64_t *******)0x0;
      pvVar14 = _pthread_getspecific(pVar22);
      if (pvVar14 != (void *)0x0) {
        local_60 = 0;
        local_50 = (int64_t *******)0x0;
        local_98 = (int64_t *******)0x0;
        local_90 = (int64_t *******)0x0;
        local_78 = (int64_t *******)0x0;
        lVar15 = FUN_00e8b990();
        if (lVar15 != 0) {
          pVar22 = (void*)local_80;
        }
      }
      local_60 = 0;
      local_50 = (int64_t *******)0x0;
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      local_78 = (int64_t *******)0x0;
      cVar11 = FUN_014bc070();
      if (cVar11 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        goto LAB_01362f2f;
      }
    }
  }
  local_60 = 0;
  local_50 = (int64_t *******)0x0;
  local_98 = (int64_t *******)0x0;
  local_90 = (int64_t *******)0x0;
  local_78 = (int64_t *******)0x0;
  pvVar14 = _pthread_getspecific(pVar22);
  ppppppplVar25 = local_80;
  if (pvVar14 != (void *)0x0) {
    local_60 = 0;
    local_50 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
    lVar15 = FUN_00e8b990();
    ppppppplVar25 = local_80;
    if (lVar15 != 0) {
      ppppppplVar25 = (int64_t *******)local_80[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
  }
  local_60 = 0;
  local_50 = (int64_t *******)0x0;
  local_98 = (int64_t *******)0x0;
  local_90 = (int64_t *******)0x0;
  ppppppplVar24 = (int64_t *******)0x0;
  local_78 = (int64_t *******)0x0;
  (*(*ppppppplVar25)[0x71])();
  if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
     (*(int64_t *)(arg1 + 0x148) != 0)) {
    local_60 = 0;
    local_50 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    if (pvVar14 != (void *)0x0) {
      local_60 = 0;
      local_50 = (int64_t *******)0x0;
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      local_78 = (int64_t *******)0x0;
      FUN_00e8b990();
    }
    local_60 = 0;
    local_50 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
    iVar12 = FUN_0141bab0();
    if (iVar12 != 1) goto LAB_0135f43d;
    local_3e0 = local_80;
    local_3d8 = 0;
    FUN_013699d0(extraout_XMM0_Qa_00,&local_3e0);
    local_e8 = local_c8;
    ppppppplVar24 = local_c8;
    if (local_c8 == (int64_t *******)0x0) {
      local_e8 = (int64_t *******)0x0;
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
      if (local_c0[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
LAB_0135f43d:
    local_60 = 0;
    local_e8 = (int64_t *******)0x0;
    uVar13 = local_60;
  }
  local_60 = uVar13;
  local_50 = (int64_t *******)0x0;
  local_98 = (int64_t *******)0x0;
  local_90 = (int64_t *******)0x0;
  local_78 = (int64_t *******)0x0;
  pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
  if (pvVar14 != (void *)0x0) {
    local_50 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
    FUN_00e8b990();
  }
  local_50 = (int64_t *******)0x0;
  local_98 = (int64_t *******)0x0;
  local_90 = (int64_t *******)0x0;
  local_78 = (int64_t *******)0x0;
  uVar13 = FUN_013de3b0();
  ppppppplVar25 = local_58;
  if (local_res10 == '\0') {
    local_88 = (int64_t *******)
               CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((uint64_t)uVar13 >> 8),1));
    bVar19 = 0;
    uVar28 = 0;
    bVar6 = false;
    ppppppplVar30 = (int64_t *******)0x0;
  }
  else {
    uVar13 = FUN_01367880(extraout_XMM0_Qa,local_58);
    ppppppplVar30 = local_c8;
    if (local_c8 == (int64_t *******)0x0) {
      local_88 = (int64_t *******)
                 CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((uint64_t)uVar13 >> 8),1));
      bVar19 = 0;
      uVar28 = 0;
      bVar6 = false;
      ppppppplVar30 = (int64_t *******)0x0;
    }
    else {
      if (local_c0[0] == '\0') {
        FUN_00d50b00();
      }
      plVar26 = *(int64_t **)(arg1 + 0x38);
      pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
      if (pvVar14 != (void *)0x0) {
        plVar26 = *(int64_t **)(arg1 + 0x38);
        lVar15 = FUN_00e8b990();
        if (lVar15 != 0) {
          plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
      }
      dVar35 = (double)(**(code **)(*plVar26 + 0x370))();
      pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
      ppppppplVar27 = ppppppplVar30;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar24 = ppppppplVar30;
        ppppppplVar27 =
             (int64_t *******)ppppppplVar30[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      pVar22 = (void*)ppppppplVar24;
      lVar15 = (*(*ppppppplVar27)[0x74])();
      pvVar14 = _pthread_getspecific(pVar22);
      ppppppplVar24 = ppppppplVar30;
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        ppppppplVar24 =
             (int64_t *******)ppppppplVar30[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
      }
      lVar16 = (*(*ppppppplVar24)[0x70])();
      ppppppplVar27 = (int64_t *******)(lVar15 - (int64_t)(g_0240d3c8 * dVar35));
      if (lVar16 < (int64_t)ppppppplVar27) {
        pvVar14 = _pthread_getspecific((void*)(int64_t)(g_0240d3c8 * dVar35));
        ppppppplVar24 = ppppppplVar30;
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar24 =
               (int64_t *******)ppppppplVar30[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
        ppppppplVar27 = (int64_t *******)(*(*ppppppplVar24)[0x70])();
      }
      ppppppplVar24 = (int64_t *******)((int64_t)ppppppplVar25 - (int64_t)ppppppplVar27);
      ppppppplVar17 = ppppppplVar25;
      if ((int64_t)ppppppplVar24 < (int64_t)(dVar35 * g_0240d790)) {
        ppppppplVar17 = ppppppplVar27;
      }
      if ((int64_t)ppppppplVar27 < (int64_t)ppppppplVar25) {
        ppppppplVar25 = ppppppplVar17;
      }
      uVar28 = (undefined7)((uint64_t)ppppppplVar27 >> 8);
      bVar19 = 1;
      local_88 = (int64_t *******)((uint64_t)local_88._4_4_ << 0x20);
      bVar6 = true;
    }
  }
  pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014d6590(local_res18,ppppppplVar25);
  local_78 = local_c8;
  local_50 = ppppppplVar30;
  if (local_c8 == (int64_t *******)0x0) {
    bVar4 = true;
    ppppppplVar24 = (int64_t *******)0x0;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    local_f8 = (int64_t *******)0x0;
    cVar11 = '\0';
    ppppppplVar25 = (int64_t *******)0x0;
    local_78 = (int64_t *******)0x0;
  }
  else {
    ppppppplVar25 = local_c8;
    if (((local_c0[0] == '\0') && (FUN_00d50b00(), local_c0[0] != '\0')) &&
       (local_c8 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    ppppppplVar25 = local_80;
    if (pvVar14 != (void *)0x0) {
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      lVar15 = FUN_00e8b990();
      ppppppplVar25 = local_80;
      if (lVar15 != 0) {
        ppppppplVar25 = (int64_t *******)local_80[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
    }
    local_98 = (int64_t *******)0x0;
    pVar22 = 0;
    local_90 = (int64_t *******)0x0;
    (*(*ppppppplVar25)[0x71])();
    local_58 = (int64_t *******)*param_2;
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      FUN_00e8b990();
    }
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    FUN_013de790();
    local_98 = (int64_t *******)0x0;
    local_90 = (int64_t *******)0x0;
    pvVar14 = _pthread_getspecific(pVar22);
    ppppppplVar25 = local_78;
    if (pvVar14 != (void *)0x0) {
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      lVar15 = FUN_00e8b990();
      ppppppplVar25 = local_78;
      if (lVar15 != 0) {
        ppppppplVar25 = (int64_t *******)local_78[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
    }
    local_98 = (int64_t *******)0x0;
    pVar22 = 0;
    local_90 = (int64_t *******)0x0;
    local_58 = (int64_t *******)(*(*ppppppplVar25)[0x70])();
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    local_90 = local_c8;
    if (local_c8 == (int64_t *******)0x0) {
      local_98 = (int64_t *******)0x0;
      local_90 = (int64_t *******)0x0;
      ppppppplVar25 = (int64_t *******)0x0;
    }
    else {
      ppppppplVar25 = local_c8;
      if (((local_c0[0] == '\0') && (FUN_00d50b00(), local_c0[0] != '\0')) &&
         (local_c8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      ppppppplVar25 = local_c8;
      if (local_c8 == local_50) {
        bVar19 = (byte)local_88 & local_c8 != (int64_t *******)0x0;
        ppppppplVar24 =
             (int64_t *******)(uint64_t)CONCAT31((int3)((uint64_t)local_88 >> 8),bVar19);
        if (bVar19 == 1) {
          bVar6 = true;
          if (local_c0[0] != '\0') goto LAB_0135ff94;
          bVar6 = true;
          FUN_00d50b00();
        }
joined_r0x0135ff81:
        if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          bVar19 = bVar19 & local_50 != (int64_t *******)0x0;
          ppppppplVar24 = (int64_t *******)CONCAT71(uVar28,bVar19);
          bVar6 = true;
          local_50 = ppppppplVar25;
          if (bVar19 == 1) {
            FUN_00d50b20();
          }
          goto joined_r0x0135ff81;
        }
        bVar19 = bVar19 & local_50 != (int64_t *******)0x0;
        ppppppplVar24 = (int64_t *******)CONCAT71(uVar28,bVar19);
        bVar6 = true;
        if (bVar19 == 1) {
          local_50 = local_c8;
          FUN_00d50b20();
        }
        else {
          local_50 = local_c8;
        }
      }
LAB_0135ff94:
      local_98 = (int64_t *******)&g_02802501;
      pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar24 = local_50;
      }
      lVar15 = FUN_014bb590();
      ppppppplVar25 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar24 >> 8),1);
      local_98 = ppppppplVar25;
      if ((int64_t)local_58 <= lVar15) {
        local_3d0 = *param_2;
        local_3c8 = 0;
        FUN_0133aef0();
        *param_4 = 1;
      }
    }
    local_f8 = (int64_t *******)FUN_00115860();
    (*(*local_f8)[3])();
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      ppppppplVar25 = local_f8;
    }
    local_310 = local_78;
    local_308 = '\0';
    FUN_013dd650();
    if ((local_308 != '\0') && (local_310 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      ppppppplVar25 = local_78;
    }
    local_2f8 = '\0';
    local_300 = local_f8;
    FUN_014bc440();
    if ((local_2f8 != '\0') && (local_300 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    ppppppplVar24 = (int64_t *******)FUN_00e8fc40();
    FUN_007eeec0();
    (*(*ppppppplVar24)[3])();
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    local_88 = ppppppplVar24;
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      ppppppplVar25 = local_88;
    }
    ppppplVar32 = (int64_t *****)0x0;
    local_2e8 = '\0';
    local_2f0 = local_f8;
    FUN_013dfbc0();
    if ((local_2e8 != '\0') && (local_2f0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_3c0 = local_88;
    local_3b8 = 0;
    FUN_01327c60();
    local_3b0 = local_78;
    local_3a8 = 0;
    FUN_01328c70();
    if (local_res8 == '\0') {
LAB_013603e6:
      pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar25 = local_80;
      }
      FUN_014bc000();
      ppppppplVar24 = local_c8;
      if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      bVar19 = 1;
      if (ppppppplVar24 != (int64_t *******)0x0) {
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar25 = local_78;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar25 = local_80;
        }
        FUN_014bc000();
        ppppppplVar24 = local_c8;
        if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0[0] = '\0';
        }
        FUN_014bbe30();
        if (ppppppplVar24 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_3a0 = local_88;
      local_398 = 0;
      ppppppplVar25 = (int64_t *******)0x0;
      uVar13 = FUN_0135d2e0(0,&local_3a0);
      ppppppplVar24 = local_250;
      if (local_248 == '\0') {
        if (local_250 != (int64_t *******)0x0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_248 = '\0';
      }
      local_c8 = ppppppplVar24;
      local_c0[0] = '\0';
      local_d8 = local_88;
      local_d0 = '\0';
      cVar11 = FUN_01346520(uVar13,1);
      if (ppppppplVar24 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (cVar11 == '\0') goto LAB_013603e6;
      *param_4 = 1;
      pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar25 = local_78;
      }
      local_2e0 = local_80;
      local_2d8 = '\0';
      cVar11 = FUN_014d36f0();
      if ((local_2d8 != '\0') && (local_2e0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      bVar19 = 1;
      if (cVar11 == '\0') {
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar25 = local_80;
        }
        local_2c8 = '\0';
        local_2d0 = 0;
        FUN_014bc360();
        if ((local_2c8 != '\0') && (local_2d0 != 0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar25 = local_78;
        }
        local_2b8 = '\0';
        local_2c0 = 0;
        FUN_014bc2e0();
        if ((local_2b8 != '\0') && (local_2c0 != 0)) {
          FUN_00d50b20();
        }
        bVar19 = 0;
      }
    }
    if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
       (*(int64_t *)(arg1 + 0x148) != 0)) {
      pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_0141bab0();
      if (iVar12 == 2) {
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar25 = local_80;
        }
        local_2a8 = '\0';
        local_2b0 = 0;
        FUN_014bc360();
        if ((local_2a8 != '\0') && (local_2b0 != 0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          ppppppplVar25 = local_78;
        }
        local_298 = '\0';
        local_2a0 = 0;
        FUN_014bc2e0();
        if ((local_298 != '\0') && (local_2a0 != 0)) {
          FUN_00d50b20();
        }
        bVar19 = 0;
      }
    }
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfef0();
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013e0cc0();
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      ppppppplVar25 = local_88;
    }
    FUN_013dfef0();
    pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      ppppppplVar25 = local_88;
    }
    FUN_013e0cc0();
    pVar22 = (void*)ppppppplVar25;
    if (local_res20 != '\0') {
      if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
         (*(int64_t *)(arg1 + 0x148) != 0)) {
        pvVar14 = _pthread_getspecific(pVar22);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar12 = FUN_0141bab0();
        pVar22 = (void*)ppppppplVar25;
        if (iVar12 == 3) goto LAB_013609a7;
      }
      pVar22 = (void*)ppppppplVar25;
      if (*(int64_t *)(arg1 + 0x150) != 0) {
        pvVar14 = _pthread_getspecific(pVar22);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar12 = FUN_01538fa0();
        pVar22 = (void*)ppppppplVar25;
        if (iVar12 != 0) {
          pvVar14 = _pthread_getspecific(pVar22);
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            ppppppplVar25 = local_88;
          }
          pVar22 = (void*)ppppppplVar25;
          lVar15 = *(int64_t *)(arg1 + 0x150);
          if (lVar15 != 0) {
            FUN_00d50b00();
          }
          FUN_013e1570();
          if (lVar15 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
LAB_013609a7:
    pvVar14 = _pthread_getspecific(pVar22);
    ppppppplVar25 = local_80;
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), ppppppplVar25 = local_80, lVar15 != 0)
       ) {
      ppppppplVar25 = (int64_t *******)local_80[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    (*(*ppppppplVar25)[0x70])();
    uVar13 = FUN_00e7b4e0();
    *param_3 = uVar13;
    if (*(int64_t *)(arg1 + 0x1f8) == 0) {
      if ((*(int64_t *)(arg1 + 0x200) == 0) && (*(int64_t *)(arg1 + 0x148) != 0)) {
        pvVar14 = _pthread_getspecific((void*)param_3);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar12 = FUN_0141bab0();
        if (iVar12 == 3) {
          puVar18 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          param_3 = (void*)&g_02572358;
          *puVar18 = &g_02572358;
          (*g_02572370)();
          local_c8 = local_80;
          local_c0[0] = '\0';
          FUN_00d21140();
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          local_c8 = local_78;
          local_c0[0] = '\0';
          FUN_00d21140();
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          local_388 = 0;
          local_390 = puVar18;
          FUN_0135d660();
          FUN_00d50b20();
        }
      }
      if (((*(int64_t *)(arg1 + 0x1f8) != 0) || (*(int64_t *)(arg1 + 0x200) != 0)) ||
         (*(int64_t *)(arg1 + 0x148) == 0)) goto LAB_01360a36;
      pvVar14 = _pthread_getspecific((void*)param_3);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_0141bab0();
      if (iVar12 != 1) goto LAB_01360a36;
      if (0 < *(int *)((int64_t)local_e8 + 0xc)) {
        lVar15 = 0;
        ppppplVar32 = (int64_t *****)&local_380;
        do {
          ppppplVar2 = local_e8[2][lVar15];
          if (ppppplVar2 != (int64_t *****)0x0) {
            FUN_00d50b00();
          }
          local_378 = 1;
          local_380 = ppppplVar2;
          FUN_013295b0();
          if (ppppplVar2 != (int64_t *****)0x0) {
            FUN_00d50b20();
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)((int64_t)local_e8 + 0xc));
      }
      ppppppplVar25 = local_e8;
      pvVar14 = _pthread_getspecific((void*)local_e8);
      ppppppplVar24 = local_80;
      if ((pvVar14 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), ppppppplVar24 = local_80, lVar15 != 0)) {
        ppppppplVar25 = local_80;
        ppppppplVar24 = (int64_t *******)local_80[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      FUN_014e8b20();
      ppppppplVar30 = local_c8;
      if (local_c8 == (int64_t *******)0x0) {
        uVar28 = (undefined7)((uint64_t)ppppppplVar24 >> 8);
        bVar4 = true;
        ppppppplVar30 = (int64_t *******)0x0;
        ppppplVar32 = (int64_t *****)0x0;
      }
      else {
        if (local_c0[0] == '\0') {
          FUN_00d50b00();
          bVar4 = false;
          uVar28 = 0;
          ppppplVar32 = (int64_t *****)CONCAT71((int7)((uint64_t)ppppplVar32 >> 8),1);
          if ((local_c0[0] == '\0') || (local_c8 == (int64_t *******)0x0)) goto LAB_013634d0;
          FUN_00d50b20();
        }
        else {
          local_c0[0] = '\0';
        }
        ppppplVar32 = (int64_t *****)CONCAT71((int7)((uint64_t)ppppplVar32 >> 8),1);
        bVar4 = false;
        uVar28 = 0;
      }
LAB_013634d0:
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if (!bVar4) {
        local_368 = 0;
        local_370 = ppppppplVar30;
        FUN_013293f0();
      }
      pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar25 = local_78;
      }
      pVar22 = (void*)ppppppplVar25;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      FUN_014e8b20();
      ppppppplVar25 = local_c8;
      if (local_c8 == ppppppplVar30) {
        ppppppplVar25 = ppppppplVar30;
        if ((bool)(bVar4 & local_c8 != (int64_t *******)0x0)) {
          if (local_c0[0] != '\0') goto LAB_013635d0;
          uVar31 = CONCAT71(uVar28,1);
          FUN_00d50b00();
        }
        else {
          uVar31 = (uint64_t)ppppplVar32 & 0xffffffff;
        }
LAB_01363621:
        if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          bVar20 = (byte)((uint64_t)ppppplVar32 & 0xffffffff) &
                   ppppppplVar30 != (int64_t *******)0x0;
          pVar22 = (void*)
                   CONCAT71((int7)(((uint64_t)ppppplVar32 & 0xffffffff) >> 8),bVar20);
          uVar31 = CONCAT71(uVar28,1);
          if (bVar20 == 1) {
            FUN_00d50b20();
          }
          goto LAB_01363621;
        }
        bVar20 = (byte)((uint64_t)ppppplVar32 & 0xffffffff) &
                 ppppppplVar30 != (int64_t *******)0x0;
        pVar22 = (void*)CONCAT71((int7)(((uint64_t)ppppplVar32 & 0xffffffff) >> 8),bVar20);
        ppppppplVar30 = ppppppplVar25;
        if (bVar20 == 1) {
          FUN_00d50b20();
        }
LAB_013635d0:
        local_c0[0] = '\0';
        uVar31 = CONCAT71(uVar28,1);
        ppppppplVar25 = ppppppplVar30;
      }
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if (ppppppplVar25 == (int64_t *******)0x0) {
        ppppppplVar25 = (int64_t *******)0x0;
      }
      else {
        local_358 = 0;
        local_360 = ppppppplVar25;
        FUN_013293f0();
      }
    }
    else {
LAB_01360a36:
      pVar22 = (void*)param_3;
      uVar31 = 0;
      ppppppplVar25 = (int64_t *******)0x0;
    }
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar14 = _pthread_getspecific(pVar22);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    local_140 = local_c8;
    ppppppplVar24 = local_c8;
    if (local_c8 == (int64_t *******)0x0) {
      bVar4 = true;
      local_140 = (int64_t *******)0x0;
    }
    else {
      if (local_c0[0] == '\0') {
        FUN_00d50b00();
        bVar4 = false;
        if ((local_c0[0] == '\0') || (local_c8 == (int64_t *******)0x0)) goto LAB_01360b4f;
        FUN_00d50b20();
      }
      else {
        local_c0[0] = '\0';
      }
      bVar4 = false;
    }
LAB_01360b4f:
    if ((local_d0 != '\0') && (local_d8 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar15 = FUN_013de650();
    if (*(int64_t *)(arg1 + 0x38) == 0) {
      local_1a8 = 0.0;
    }
    else {
      pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1a8 = (double)FUN_0124d430();
    }
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      ppppppplVar24 = local_80;
    }
    dVar35 = (double)FUN_014bb310();
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      ppppppplVar24 = local_80;
    }
    FUN_014bc0d0();
    ppppppplVar30 = local_c8;
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    ppppppplVar27 = local_c8;
    if ((pvVar14 != (void *)0x0) &&
       (lVar16 = FUN_00e8b990(), ppppppplVar30 = ppppppplVar27, lVar16 != 0)) {
      ppppppplVar30 =
           (int64_t *******)ppppppplVar27[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
    dVar36 = 0.0;
    if (0.0 <= dVar35 + g_0241d658) {
      dVar36 = dVar35 + g_0241d658;
    }
    dVar35 = (double)(*(*ppppppplVar30)[0x74])(dVar36);
    if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      ppppppplVar24 = local_78;
    }
    dVar36 = (double)FUN_014bb310();
    local_40 = (int64_t *******)g_023934c8;
    if (dVar36 < g_023934c8) {
      pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        ppppppplVar24 = local_78;
      }
      local_40 = (int64_t *******)FUN_014bb310();
    }
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      ppppppplVar24 = local_78;
    }
    FUN_014bc0d0();
    ppppppplVar30 = local_c8;
    pvVar14 = _pthread_getspecific((void*)ppppppplVar24);
    ppppppplVar27 = local_c8;
    if ((pvVar14 != (void *)0x0) &&
       (lVar16 = FUN_00e8b990(), ppppppplVar30 = ppppppplVar27, lVar16 != 0)) {
      ppppppplVar30 =
           (int64_t *******)ppppppplVar27[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
    dVar36 = (double)(*(*ppppppplVar30)[0x74])(0,local_40);
    if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_198 = (void*)
                CONCAT71((int7)((uint64_t)ppppppplVar24 >> 8),
                         g_0240d3d0 <= dVar35 && g_0240d3d0 <= dVar36);
    if ((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) {
      pVar22 = local_198;
      if (*(int64_t *)(arg1 + 0x148) == 0) {
LAB_01363258:
        if ((*(int64_t *)(arg1 + 0x200) == 0) && (*(int64_t *)(arg1 + 0x148) != 0)) {
          pvVar14 = _pthread_getspecific(pVar22);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar12 = FUN_0141bab0();
          if (iVar12 == 4) goto LAB_013630e9;
        }
      }
      else {
        pvVar14 = _pthread_getspecific(local_198);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar12 = FUN_0141bab0();
        if (iVar12 != 2) {
          if (*(int64_t *)(arg1 + 0x1f8) != 0) goto LAB_01360ead;
          goto LAB_01363258;
        }
LAB_013630e9:
        local_198 = 0;
      }
    }
LAB_01360ead:
    uVar29 = *(uint *)((int64_t)local_140 + 0xc);
    if ((int)uVar29 < 1) {
      bVar9 = false;
      local_f0 = (int64_t *******)0x0;
    }
    else {
      lVar15 = (int64_t)local_58 - lVar15;
      lVar16 = (uint64_t)uVar29 + 1;
      bVar8 = false;
      local_100 = (int64_t *******)0x0;
      bVar10 = false;
      local_38 = (int64_t *******)0x0;
      bVar7 = false;
      local_40 = (int64_t *******)0x0;
      bVar9 = false;
      local_f0 = (int64_t *******)0x0;
      local_70 = uVar31;
      local_68 = ppppppplVar25;
      do {
        uVar29 = uVar29 - 1;
        ppppppplVar25 = (int64_t *******)(uint64_t)uVar29;
        local_328 = lVar16;
        pvVar14 = _pthread_getspecific(uVar29);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        ppppppplVar24 = local_c8;
        if (local_c8 == local_40) {
          ppppppplVar24 = local_40;
          bVar5 = bVar7;
          if ((bVar7) || (local_c8 == (int64_t *******)0x0)) goto joined_r0x013610af;
          bVar7 = true;
          if (local_c0[0] == '\0') {
            FUN_00d50b00();
            goto LAB_0136108d;
          }
        }
        else if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar7) && (local_40 != (int64_t *******)0x0)) {
            FUN_00d50b20();
            local_40 = ppppppplVar24;
LAB_0136108d:
            ppppppplVar24 = local_40;
            bVar5 = true;
          }
joined_r0x013610af:
          bVar7 = bVar5;
          local_40 = ppppppplVar24;
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((bVar7) && (local_40 != (int64_t *******)0x0)) {
          FUN_00d50b20();
          local_40 = ppppppplVar24;
          bVar7 = true;
        }
        else {
          local_40 = local_c8;
          bVar7 = true;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        fVar33 = (float)FUN_0125a2c0();
        fVar34 = 0.0;
        if ((!NAN(fVar33)) && (!NAN((float)extraout_XMM0_Qa))) {
          pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            ppppppplVar25 = local_40;
          }
          fVar34 = (float)FUN_0125a2c0();
          fVar34 = fVar34 - (float)extraout_XMM0_Qa;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_012641c0();
        ppppppplVar24 = local_c8;
        local_25c = uVar29;
        if (local_100 == local_c8) {
          if ((bVar8) || (local_100 == (int64_t *******)0x0)) goto joined_r0x0136131c;
          bVar8 = true;
          if (local_c0[0] == '\0') {
            FUN_00d50b00();
            ppppppplVar24 = local_100;
            goto LAB_013612f5;
          }
        }
        else if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_100 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_013612f5:
          bVar8 = true;
          local_100 = ppppppplVar24;
joined_r0x0136131c:
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((bVar8) && (local_100 != (int64_t *******)0x0)) {
          local_100 = local_c8;
          FUN_00d50b20();
          bVar8 = true;
        }
        else {
          bVar8 = true;
          local_100 = local_c8;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01264180();
        ppppppplVar24 = local_d8;
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        ppppppplVar30 = local_d8;
        if ((pvVar14 != (void *)0x0) &&
           (lVar16 = FUN_00e8b990(), ppppppplVar24 = ppppppplVar30, lVar16 != 0)) {
          ppppppplVar24 =
               (int64_t *******)ppppppplVar30[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
        }
        (*(*ppppppplVar24)[0x6f])();
        ppppppplVar24 = local_c8;
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        ppppppplVar30 = local_c8;
        if ((pvVar14 != (void *)0x0) &&
           (lVar16 = FUN_00e8b990(), ppppppplVar24 = ppppppplVar30, lVar16 != 0)) {
          ppppppplVar24 =
               (int64_t *******)ppppppplVar30[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
        }
        dVar35 = (double)(*(*ppppppplVar24)[0x70])(local_1a8 * (double)lVar15);
        if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        local_330 = (double)FUN_01264170();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_0126e7e0();
        ppppppplVar24 = local_c8;
        if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        pVar23 = (void*)ppppppplVar25;
        pVar22 = (void*)local_40;
        if (ppppppplVar24 == (int64_t *******)0x0) {
          local_58 = (int64_t *******)0x0;
          bVar5 = false;
        }
        else {
          pvVar14 = _pthread_getspecific(pVar23);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar23 = pVar22;
          }
          FUN_0126e7e0();
          ppppppplVar25 = local_d8;
          if (local_d0 == '\0') {
            if (local_d8 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_01290750();
          local_58 = local_c8;
          if (local_c8 == (int64_t *******)0x0) {
            bVar5 = false;
            local_58 = (int64_t *******)0x0;
          }
          else if (local_c0[0] == '\0') {
            FUN_00d50b00();
            bVar5 = true;
            if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_c0[0] = '\0';
            bVar5 = true;
          }
          if (ppppppplVar25 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d23310();
          ppppppplVar24 = local_c8;
          local_d8 = (int64_t *******)CONCAT71(local_d8._1_7_,local_c0[0]);
          ppppppplVar25 = (int64_t *******)&local_d8;
          ppppppplVar30 = (int64_t *******)local_c0;
          if (local_c0[0] == '\0') {
            ppppppplVar30 = ppppppplVar25;
          }
          *(char *)ppppppplVar30 = '\0';
          if ((local_c0[0] != '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          pVar23 = (void*)ppppppplVar25;
          if (((char)local_d8 == '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_012902c0();
          if (ppppppplVar24 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          FUN_00d23340();
          ppppppplVar24 = local_c8;
          local_d8 = (int64_t *******)CONCAT71(local_d8._1_7_,local_c0[0]);
          ppppppplVar25 = (int64_t *******)&local_d8;
          ppppppplVar30 = (int64_t *******)local_c0;
          if (local_c0[0] == '\0') {
            ppppppplVar30 = ppppppplVar25;
          }
          *(char *)ppppppplVar30 = '\0';
          if ((local_c0[0] != '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          pVar23 = (void*)ppppppplVar25;
          if (((char)local_d8 == '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_012902c0();
          if (ppppppplVar24 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          FUN_00d23310();
          ppppppplVar25 = local_c8;
          local_d8 = (int64_t *******)CONCAT71(local_d8._1_7_,local_c0[0]);
          ppppppplVar24 = (int64_t *******)local_c0;
          if (local_c0[0] == '\0') {
            ppppppplVar24 = (int64_t *******)&local_d8;
          }
          *(char *)ppppppplVar24 = '\0';
          if ((local_c0[0] != '\0') && (ppppppplVar25 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_d8 == '\0') && (ppppppplVar25 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          FUN_01290740();
          if (ppppppplVar25 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          FUN_00d23340();
          ppppppplVar24 = local_c8;
          local_d8 = (int64_t *******)CONCAT71(local_d8._1_7_,local_c0[0]);
          ppppppplVar25 = (int64_t *******)&local_d8;
          ppppppplVar30 = (int64_t *******)local_c0;
          if (local_c0[0] == '\0') {
            ppppppplVar30 = ppppppplVar25;
          }
          *(void*)ppppppplVar30 = 0;
          if ((local_c0[0] != '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_d8 == '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          FUN_01290740();
          if (ppppppplVar24 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01266fe0();
        ppppppplVar24 = local_c8;
        if (local_c8 == local_f0) {
          ppppppplVar24 = local_f0;
          bVar3 = bVar9;
          if ((bVar9) || (local_c8 == (int64_t *******)0x0)) goto joined_r0x01361b65;
          bVar9 = true;
          if (local_c0[0] == '\0') {
            FUN_00d50b00();
            goto LAB_01361b43;
          }
        }
        else if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar9) && (local_f0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
            local_f0 = ppppppplVar24;
LAB_01361b43:
            ppppppplVar24 = local_f0;
            bVar3 = true;
          }
joined_r0x01361b65:
          bVar9 = bVar3;
          local_f0 = ppppppplVar24;
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((bVar9) && (local_f0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
          local_f0 = ppppppplVar24;
          bVar9 = true;
        }
        else {
          local_f0 = local_c8;
          bVar9 = true;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01259540(dVar35);
        if (local_58 != (int64_t *******)0x0) {
          pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d23310();
          ppppppplVar24 = local_c8;
          local_d8 = (int64_t *******)CONCAT71(local_d8._1_7_,local_c0[0]);
          ppppppplVar25 = (int64_t *******)&local_d8;
          ppppppplVar30 = (int64_t *******)local_c0;
          if (local_c0[0] == '\0') {
            ppppppplVar30 = ppppppplVar25;
          }
          *(void*)ppppppplVar30 = 0;
          if ((local_c0[0] != '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_d8 == '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          FUN_0126dd90();
          if (ppppppplVar24 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_0126f610();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        ppppppplVar24 = local_80;
        if ((pvVar14 != (void *)0x0) &&
           (lVar16 = FUN_00e8b990(), ppppppplVar24 = local_80, lVar16 != 0)) {
          ppppppplVar25 = local_80;
          ppppppplVar24 = (int64_t *******)local_80[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4]
          ;
        }
        fVar33 = (float)(*(*ppppppplVar24)[0x7c])();
        FUN_012595a0(fVar33 + fVar34);
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_0125a5f0();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        local_320 = FUN_01266110();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        local_318 = FUN_012661f0();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_012660b0(g_023908c8);
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01266190(g_0238fee8);
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_012682a0();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_88;
        }
        FUN_013e5700(0);
        ppppppplVar24 = local_c8;
        if (local_c8 == local_38) {
          ppppppplVar24 = local_38;
          bVar3 = bVar10;
          if ((bVar10) || (local_c8 == (int64_t *******)0x0)) goto joined_r0x013620e6;
          bVar10 = true;
          if (local_c0[0] == '\0') {
            FUN_00d50b00();
            goto LAB_013620c8;
          }
        }
        else if (local_c0[0] == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar10) && (local_38 != (int64_t *******)0x0)) {
            FUN_00d50b20();
            local_38 = ppppppplVar24;
LAB_013620c8:
            ppppppplVar24 = local_38;
            bVar3 = true;
          }
joined_r0x013620e6:
          bVar10 = bVar3;
          local_38 = ppppppplVar24;
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((bVar10) && (local_38 != (int64_t *******)0x0)) {
          FUN_00d50b20();
          local_38 = ppppppplVar24;
          bVar10 = true;
        }
        else {
          local_38 = local_c8;
          bVar10 = true;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01259520();
        FUN_012642b0();
        if (local_58 != (int64_t *******)0x0) {
          pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d23340();
          ppppppplVar24 = local_c8;
          local_d8 = (int64_t *******)CONCAT71(local_d8._1_7_,local_c0[0]);
          ppppppplVar25 = (int64_t *******)&local_d8;
          ppppppplVar30 = (int64_t *******)local_c0;
          if (local_c0[0] == '\0') {
            ppppppplVar30 = ppppppplVar25;
          }
          *(void*)ppppppplVar30 = 0;
          if ((local_c0[0] != '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_d8 == '\0') && (ppppppplVar24 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          FUN_0126dd90();
          if (ppppppplVar24 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        dVar36 = (double)FUN_01264170();
        FUN_012756a0((local_330 - dVar35) - dVar36);
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        fVar33 = (float)FUN_0125a2c0();
        FUN_012595a0(fVar34 + fVar33);
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01265b60();
        FUN_01265b00();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_01265b70();
        FUN_01259600();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_40;
        }
        FUN_0125eba0();
        FUN_0125eb40();
        pvVar14 = _pthread_getspecific((void*)ppppppplVar25);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          ppppppplVar25 = local_38;
        }
        pVar23 = (void*)ppppppplVar25;
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar22;
        }
        FUN_0125ea80();
        FUN_0125ea20();
        pvVar14 = _pthread_getspecific(pVar23);
        pVar1 = (void*)local_38;
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar1;
        }
        FUN_012660b0(local_320);
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar1;
        }
        FUN_01266190(local_318);
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar1;
        }
        FUN_012682a0();
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (void*)local_f0;
        }
        local_290 = local_38;
        local_288 = '\0';
        FUN_012e6a70();
        if ((local_288 != '\0') && (local_290 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar1;
        }
        FUN_0128c620();
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = pVar22;
        }
        FUN_012708c0();
        ppppppplVar25 = local_c8;
        if (local_c0[0] == '\0') {
          if (local_c8 == (int64_t *******)0x0) goto LAB_013629a0;
          FUN_00d50b00();
          if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01362880:
          pvVar14 = _pthread_getspecific(pVar23);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar23 = pVar22;
          }
          local_278 = '\0';
          local_280 = 0;
          FUN_01270710();
          if ((local_278 != '\0') && (local_280 != 0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_270 = ppppppplVar25;
          local_268 = '\0';
          FUN_01270710();
          if ((local_268 != '\0') && (local_270 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          bVar3 = false;
          if (local_40 != (int64_t *******)0x0 && !(bool)(bVar19 ^ 1)) {
LAB_013629b6:
            if (local_38 != (int64_t *******)0x0) {
              local_350 = local_40;
              local_348 = 0;
              local_340 = local_38;
              local_338 = 0;
              ppppppplVar24 = (int64_t *******)&local_340;
              FUN_01329cf0(ppppppplVar24,&local_350);
              pVar22 = (void*)ppppppplVar24;
              if (ppppppplVar25 == local_c8) {
                if ((local_c0[0] != '\0') && (local_c8 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                ppppppplVar25 = local_c8;
                if (local_c0[0] == '\0') {
                  if (local_c8 != (int64_t *******)0x0) {
                    FUN_00d50b00();
                  }
                  if (!bVar3) {
                    FUN_00d50b20();
                  }
                }
                else if (!bVar3) {
                  FUN_00d50b20();
                }
              }
              if ((char)local_198 != '\0') {
                pvVar14 = _pthread_getspecific(pVar22);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar35 = (double)FUN_012dfb80();
                if (dVar35 < g_02420c40) {
                  pvVar14 = _pthread_getspecific(pVar22);
                  if (pvVar14 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012df4a0(g_02420c40);
                  pvVar14 = _pthread_getspecific(pVar22);
                  if (pvVar14 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012df4e0(g_02420c40);
                }
              }
            }
          }
        }
        else {
          if (local_c8 != (int64_t *******)0x0) goto LAB_01362880;
LAB_013629a0:
          bVar3 = true;
          if (local_40 != (int64_t *******)0x0 && !(bool)(bVar19 ^ 1)) goto LAB_013629b6;
        }
        if (ppppppplVar25 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        local_250 = local_40;
        local_258 = local_38;
        FUN_00083ea0(2,&local_258);
        FUN_00790070();
        ppppppplVar25 = local_d8;
        if (local_d0 == '\0') {
          if (local_d8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d0 = '\0';
        }
        FUN_00e7bdb0();
        FUN_01287c80();
        if (ppppppplVar25 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        local_c8 = (int64_t *******)&g_0253d630;
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_c8 = (int64_t *******)&g_024c5048;
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        local_250 = local_40;
        local_258 = local_38;
        FUN_00083ea0(2,&local_258);
        FUN_00790070();
        ppppppplVar25 = local_d8;
        if (local_d0 == '\0') {
          if (local_d8 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d0 = '\0';
        }
        FUN_012879b0();
        lVar16 = local_328;
        if (ppppppplVar25 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        local_c8 = (int64_t *******)&g_0253d630;
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_c8 = (int64_t *******)&g_024c5048;
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((bVar5) && (local_58 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        lVar16 = lVar16 + -1;
        uVar29 = local_25c;
      } while (1 < lVar16);
      if ((bVar8) && (local_100 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      ppppppplVar25 = local_68;
      uVar31 = local_70;
      if ((bVar10) && (local_38 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar7) && (local_40 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar11 = (char)uVar31;
    if (!bVar4 && local_140 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    if ((bVar9) && (local_f0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = false;
    ppppppplVar24 = local_88;
  }
  *this_ptr = ppppppplVar24;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_60 != '\0') && (local_e8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_90 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (local_f8 != (int64_t *******)0x0 && !bVar4) {
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (ppppppplVar25 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar4 && local_78 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
LAB_01362f2f:
  if ((char)pVar21 == '\0' && local_80 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

