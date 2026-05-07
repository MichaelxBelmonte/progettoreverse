// Function: FUN_016f5b80
// Address: 016f5b80
// Size: 4463 bytes
// Class: Unknown

uint64_t FUN_016f5b80(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void*puVar8;
  uint64_t *puVar9;
  void* pVar10;
  void*puVar11;
  void*puVar12;
  undefined7 uVar13;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar14;
  void* pVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar16;
  double dVar17;
  uint64_t extraout_XMM0_Qa_02;
  int64_t local_128;
  uint8_t local_120;
  uint64_t local_118;
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  void*local_f8;
  uint8_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d0;
  char local_c8;
  uint64_t local_c0;
  double local_b8;
  double local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  double local_98;
  double local_90;
  uint64_t local_78;
  uint32_t local_6c;
  uint64_t local_68;
  void*local_60;
  uint64_t local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  uVar6 = param_1;
  local_c0 = param_2;
  local_40 = FUN_00e7bcc0();
  pVar10 = (void*)uVar6;
  uVar16 = extraout_XMM0_Qa;
  if ((param_2 >> 0x20 != 0) && (local_40 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c000();
    uVar6 = CONCAT71((uint7)(param_2 >> 0x28),1);
    uVar16 = extraout_XMM0_Qa_00;
    if (cVar2 != '\0') goto LAB_016f6cfa;
  }
  local_128 = *arg1;
  local_120 = 0;
  FUN_016ebbb0(uVar16,&local_128);
  local_48 = local_40;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = FUN_019079b0();
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = FUN_01909dc0();
    if (((local_40._4_4_ != 0) && (local_58 >> 0x20 != 0)) &&
       (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
      if (local_48 != 0) {
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = FUN_019079b0();
        pvVar4 = _pthread_getspecific(pVar10);
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar10 = (void*)local_48;
        }
        uVar6 = FUN_01909dc0();
        if (((local_68._4_4_ == 0) || (uVar6 >> 0x20 == 0)) ||
           (cVar2 = FUN_00e7c020(), cVar2 == '\0')) goto LAB_016f5da6;
      }
      if (*(int64_t *)(this_ptr + 0x78) != 0) {
        FUN_00d64850();
        if (*(int64_t *)(this_ptr + 0x78) != 0) {
          *(int64_t *)(this_ptr + 0x78) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
      }
    }
  }
LAB_016f5da6:
  local_6c = 0xffffffff;
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_018fe5d0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = FUN_01909dc0();
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = FUN_019079b0();
    uVar16 = extraout_XMM0_Qa_01;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    FUN_016cbad0(uVar16,0);
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_90 = (double)FUN_018fcb10();
    local_a8 = local_78;
    if (local_48 != 0) {
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar10 = (void*)local_48;
      }
      local_78 = FUN_01909dc0();
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = (double)FUN_018fcb10();
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = &local_6c;
      local_40 = FUN_0165cf20(puVar11,0);
      pVar10 = (void*)puVar11;
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165d690();
      local_40 = FUN_016cbad0();
      local_a0 = CONCAT44(local_a0._4_4_,3);
      FUN_00e7c2a0();
      local_58 = local_40;
      local_40 = local_78;
      FUN_00e7b970();
      local_a8 = local_40;
      if (((local_40 >> 0x20 != 0) && (local_68._4_4_ != 0)) &&
         (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
        local_a8 = local_68;
      }
    }
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_6c;
    FUN_0165cf20(puVar11,0);
    pvVar4 = _pthread_getspecific((void*)puVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_6c;
    uVar16 = FUN_0165cf20(puVar11,0);
    pVar10 = (void*)puVar11;
    FUN_016d62b0(extraout_XMM0_Qa_02,uVar16);
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = (double)FUN_018fd630();
    local_b8 = (double)FUN_00e7c860();
    local_b0 = (double)FUN_00e7c860();
    local_e0 = param_1;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar12 = &g_02572358;
    *puVar8 = &g_02572358;
    (*g_02572370)();
    local_b0 = ((g_023b4df8 / local_98) * local_b8) / local_b0;
    local_a0 = local_68;
    local_b8 = 0.0;
    bVar1 = false;
    local_60 = puVar8;
    while( true ) {
      if (bVar1) {
        local_40 = local_a0;
        FUN_00e7b970();
        FUN_00e7bdc0();
        local_58 = local_40;
        dVar17 = (double)FUN_00e7c860();
        local_98 = dVar17 * local_b0 + local_b8;
      }
      else {
        local_40 = local_a0;
        FUN_00e7b970();
        FUN_00e7bdc0();
        local_58 = local_40;
        local_40 = local_68;
        FUN_00e7b820();
        param_1 = local_40;
        pvVar4 = _pthread_getspecific((void*)puVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = (double)FUN_018fcb10();
      }
      FUN_01907b60();
      uVar6 = local_58;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_40 = uVar6;
      local_38[0] = '\0';
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (uVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 < local_98) break;
      local_40 = param_1;
      FUN_00e7b820();
      local_58 = local_40;
      if ((local_40 >> 0x20 != 0) && (local_a8._4_4_ != 0)) {
        bVar3 = FUN_00e7c020();
        puVar12 = (void*)CONCAT71((int7)((uint64_t)puVar12 >> 8),!bVar1);
        if ((bVar3 & !bVar1) == 1) {
          FUN_00d23340();
          uVar6 = local_40;
          local_58 = CONCAT71(local_58._1_7_,local_38[0]);
          puVar9 = (uint64_t *)local_38;
          if (local_38[0] == '\0') {
            puVar9 = &local_58;
          }
          *(void*)puVar9 = 0;
          if ((local_38[0] != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((void*)puVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = FUN_019079b0();
          if (((char)local_58 != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23340();
          uVar6 = local_40;
          local_58 = CONCAT71(local_58._1_7_,local_38[0]);
          puVar9 = (uint64_t *)local_38;
          if (local_38[0] == '\0') {
            puVar9 = &local_58;
          }
          *(void*)puVar9 = 0;
          if ((local_38[0] != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((void*)puVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = (double)FUN_01907950();
          if (((char)local_58 != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
        }
      }
      FUN_00e7b820();
    }
    uVar6 = FUN_00e7bdb0();
    puVar8 = local_60;
    pVar10 = (void*)puVar12;
    if (local_48 == 0) {
LAB_016f6ab6:
      pVar15 = (void*)uVar6;
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pVar10 = 0;
      FUN_018fef60(0,local_68);
      uVar6 = local_40;
      if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar16 = FUN_00e7bdb0();
      if (local_48 == 0) {
        uVar14 = 0;
        bVar1 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_018fef60(0,local_78);
        uVar14 = local_40;
        if (local_40 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_01909dc0();
      }
      local_118 = uVar6;
      local_110 = 0;
      local_100 = 0;
      local_f8 = local_60;
      local_f0 = 0;
      local_108 = uVar14;
      FUN_016e9760(0,&local_108,&local_f8,uVar16);
      pvVar4 = _pthread_getspecific(pVar15);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0190a010();
      if ((bVar1) && (uVar14 != 0)) {
        FUN_00d50b20();
      }
      puVar8 = local_60;
      if (uVar6 != 0) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      uVar13 = (undefined7)((uint64_t)puVar8 >> 8);
      goto joined_r0x016f6cf3;
    }
    local_90 = local_90 + local_b0 * g_024119f0;
    while (*(int *)((int64_t)puVar8 + 0xc) != 0) {
      FUN_00d23340();
      uVar6 = local_40;
      local_58 = CONCAT71(local_58._1_7_,local_38[0]);
      puVar9 = (uint64_t *)local_38;
      if (local_38[0] == '\0') {
        puVar9 = &local_58;
      }
      *(void*)puVar9 = 0;
      if ((local_38[0] != '\0') && (uVar6 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)puVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = (double)FUN_01907950();
      if (((char)local_58 != '\0') && (uVar6 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 <= local_90) {
        if (*(int *)((int64_t)puVar8 + 0xc) != 0) {
          FUN_00d23340();
          uVar6 = local_40;
          puVar9 = (uint64_t *)local_38;
          if (local_38[0] == '\0') {
            puVar9 = &local_58;
          }
          local_58 = CONCAT71(local_58._1_7_,local_38[0]);
          *(void*)puVar9 = 0;
          if ((local_38[0] != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          pVar10 = (void*)puVar9;
          pvVar4 = _pthread_getspecific(pVar10);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = FUN_019079b0();
          FUN_00e7b820();
          uVar14 = local_40;
          if (((char)local_58 != '\0') && (uVar6 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar10);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar10 = (void*)local_48;
          }
          local_58 = FUN_01909dc0();
          local_40 = uVar14;
          FUN_00e7b970();
          uVar6 = local_40;
          goto LAB_016f6ab6;
        }
        break;
      }
      FUN_00d23740();
    }
    FUN_00d50b20();
    uVar6 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    uVar6 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d0 = uVar6;
    local_c8 = '\0';
    pVar10 = 0;
    FUN_01900ec0(0,&local_d0);
    uVar14 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = (double)FUN_01907950();
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (void*)FUN_01907950();
    local_90 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar17 = (double)FUN_01907950();
    FUN_01907cc0((local_98 - (double)local_60) / local_90 + dVar17);
    lVar5 = *arg1;
    pvVar4 = _pthread_getspecific(pVar10);
    if (pvVar4 != (void *)0x0) {
      lVar5 = *arg1;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
    }
    FUN_0190a010();
    if (uVar14 != 0) {
      FUN_00d50b20();
    }
    uVar13 = (undefined7)((uint64_t)lVar5 >> 8);
    if (uVar6 != 0) {
      FUN_00d50b20();
    }
joined_r0x016f6cf3:
    uVar6 = CONCAT71(uVar13,1);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_016f6cfa:
  return uVar6 & 0xffffffff;
}

