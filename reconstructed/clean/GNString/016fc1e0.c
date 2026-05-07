// Function: FUN_016fc1e0
// Address: 016fc1e0
// Size: 4054 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_016fc1e0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  uint uVar10;
  bool bVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  double dVar13;
  uint64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  uint64_t local_1b8;
  uint8_t local_1b0;
  uint64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  uint8_t local_160;
  uint64_t local_158;
  uint8_t local_150;
  uint64_t local_148;
  uint8_t local_140;
  uint64_t local_138;
  uint8_t local_130;
  uint64_t local_128;
  uint8_t local_120;
  double local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  char local_f8;
  uint64_t local_f0;
  char local_e8;
  uint32_t local_dc;
  uint64_t local_d8;
  uint64_t local_d0;
  double local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  int local_ac;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  double local_90;
  double local_88;
  uint64_t local_78;
  uint32_t local_6c;
  double local_68;
  uint64_t local_60;
  uint32_t local_54;
  int64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  char local_38;
  
  if (param_2 == 0) {
    uVar8 = 0;
    goto LAB_016fd1c3;
  }
  local_1d8 = *arg1;
  local_1d0 = 0;
  FUN_016f56f0(param_1,&local_1d8);
  pVar5 = (void*)param_1;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_50 = local_40;
  if (param_2 < 1) {
    local_1c8 = local_40;
    local_1c0 = 0;
    local_40 = FUN_016f51d0();
    local_60 = CONCAT44(local_60._4_4_,3);
    if (local_40 >> 0x20 != 0) {
      cVar2 = FUN_00e7c6b0();
      goto LAB_016fc2d8;
    }
LAB_016fc2e0:
    FUN_016d53b0();
    local_b8 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_6c = 0xffffffff;
    local_54 = 0xffffffff;
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = FUN_01909dc0();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_90 = (double)FUN_018fcb10();
    local_1a8 = *arg1;
    local_1a0 = 0;
    local_110 = FUN_01700f60(local_90,(uint)(0 < param_2) + (uint)(0 < param_2) + -1);
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_6c;
    FUN_018ff980(puVar6,local_a8);
    uVar8 = local_40;
    pVar5 = (void*)puVar6;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_108 = uVar8;
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = (double)FUN_01907950();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = FUN_019079b0();
    FUN_00e7b970();
    local_60 = local_40;
    local_68 = (double)FUN_00e7c860();
    local_40 = local_a8;
    FUN_00e7b820();
    local_98 = local_40;
    local_c8 = (double)FUN_00e7c860();
    if (0 < param_2) {
      FUN_016da710(local_c8,local_98);
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      local_60 = *(void*)(this_ptr + 0x68);
      local_40 = local_98;
      uVar12 = FUN_00e7b820();
      FUN_016da710(uVar12,local_40);
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
    }
    local_ac = 4;
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_54;
    uVar12 = FUN_0165cf20(puVar6,0);
    pVar5 = (void*)puVar6;
    local_40 = uVar12;
    FUN_00e7c280();
    FUN_00e7c860();
    FUN_00e7cc50();
    local_60 = CONCAT44(local_60._4_4_,local_ac + 2);
    local_40 = uVar12;
    FUN_00e7c280();
    FUN_00e7c860();
    FUN_00e7cc50();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = FUN_0165d690();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = FUN_0165d690();
    lVar7 = local_50;
    if (local_50 == **(int64_t **)(*(int64_t *)(this_ptr + 0x60) + 0x10)) {
      pvVar3 = _pthread_getspecific((void*)local_50);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar7 = local_50;
      }
      local_40 = FUN_01909dc0();
      uVar12 = extraout_XMM0_Qa_01;
      if ((((local_d8._4_4_ != 0) && (local_40 >> 0x20 != 0)) &&
          (cVar2 = FUN_00e7c020(), uVar12 = extraout_XMM0_Qa_02, cVar2 == '\0')) &&
         ((uVar12 = FUN_016da710(extraout_XMM0_Qa_02,local_d8), local_170 != '\0' &&
          (local_178 != 0)))) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      pvVar3 = _pthread_getspecific((void*)local_50);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar7 = local_50;
      }
      local_40 = FUN_01909dc0();
      local_78._4_4_ = (int)(local_78 >> 0x20);
      bVar11 = local_78._4_4_ != 0;
      uVar12 = extraout_XMM0_Qa;
      if (((bVar11) && (local_40 >> 0x20 != 0)) &&
         (cVar2 = FUN_00e7c020(), uVar12 = extraout_XMM0_Qa_00, cVar2 != '\0')) {
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar7 = local_50;
        }
        local_78 = FUN_01909dc0();
        uVar12 = extraout_XMM0_Qa_03;
      }
    }
    FUN_016da710(uVar12,local_78);
    local_c0 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific((void*)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_118 = (double)FUN_018fd630();
    local_d0 = local_98;
    if (param_2 < 1) {
      local_d0 = local_a8;
    }
    pvVar3 = _pthread_getspecific((void*)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    uVar8 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_48 = uVar8;
    uVar10 = *(uint *)(uVar8 + 0xc);
    if (0 < (int)uVar10) {
      lVar4 = (uint64_t)uVar10 + 1;
      do {
        uVar10 = uVar10 - 1;
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_019079b0();
        if (((local_40 >> 0x20 != 0) && (local_78._4_4_ != 0)) &&
           (cVar2 = FUN_00e7c020(), cVar2 == '\0')) break;
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_019079b0();
        if (((local_40 >> 0x20 != 0) && (local_d0._4_4_ != 0)) &&
           (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
          lVar1 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)uVar10 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_160 = 1;
          local_168 = lVar1;
          FUN_016ebff0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + -1;
      } while (1 < lVar4);
    }
    pVar5 = 0;
    FUN_016d7110(0,local_98);
    uVar8 = local_40;
    local_88 = ((local_88 - local_90) / local_68) * local_c8 + local_90;
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_016fcb9c;
      FUN_00d50b00();
LAB_016fcb4d:
      local_68 = (double)uVar8;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        local_68 = (double)uVar8;
        FUN_00e8b990();
      }
      local_68 = (double)uVar8;
      uVar12 = FUN_01907cc0(local_88);
    }
    else {
      if (local_40 != 0) goto LAB_016fcb4d;
LAB_016fcb9c:
      FUN_01907b60(local_88);
      local_68 = (double)local_40;
      if (local_40 == 0) {
        local_68 = (double)uVar8;
      }
      else if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_100 = (uint64_t)local_68;
      local_f8 = '\0';
      uVar12 = FUN_01902110();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    local_158 = *arg1;
    local_150 = 0;
    uVar12 = FUN_016ec340(uVar12,local_98);
    local_a0 = FUN_016cbad0(uVar12,&local_54);
    local_40 = local_78;
    FUN_00e7b820();
    FUN_00e7b970();
    local_148 = (uint64_t)local_68;
    local_140 = 0;
    puVar6 = &local_6c;
    FUN_016d5bb0(0,&local_148);
    local_90 = (double)FUN_00e7c860();
    uVar8 = local_c0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = g_023b4df8 / local_118;
    local_88 = local_88 + local_90 * local_c8 * g_024119f0;
    while( true ) {
      pVar5 = (void*)puVar6;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_019079b0();
      local_a0 = FUN_016cbad0(uVar12,&local_54);
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = (double)FUN_01907950();
      dVar13 = (double)FUN_00e7c860();
      local_90 = local_90 + dVar13 * local_c8;
      if (local_88 < local_90) break;
      local_138 = (uint64_t)local_68;
      local_130 = 0;
      puVar6 = &local_6c;
      FUN_016d5bb0(0,&local_138);
      pvVar3 = _pthread_getspecific((void*)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      FUN_00e7b820();
      FUN_01907b60(local_90);
      uVar9 = local_40;
      if (local_40 == uVar8) {
LAB_016fcf11:
        uVar9 = uVar8;
        if (local_38 != '\0') {
LAB_016fcf17:
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          if (uVar8 != 0) {
            FUN_00d50b20();
            uVar8 = uVar9;
            goto LAB_016fcf11;
          }
          if (local_38 == '\0') goto LAB_016fcf30;
          goto LAB_016fcf17;
        }
        if (uVar8 != 0) {
          FUN_00d50b20();
        }
      }
LAB_016fcf30:
      pvVar3 = _pthread_getspecific((void*)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e8 = '\0';
      local_f0 = uVar9;
      FUN_01902110();
      uVar8 = uVar9;
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_54;
    local_40 = FUN_0165cf20(puVar6,0);
    pVar5 = (void*)puVar6;
    local_60 = CONCAT44(local_60._4_4_,2);
    FUN_00e7c280();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_54;
    local_40 = FUN_0165cf20(puVar6,0);
    pVar5 = (void*)puVar6;
    local_dc = 2;
    uVar12 = FUN_00e7c260();
    FUN_016d62b0(uVar12,local_40);
    uVar12 = FUN_016d63b0();
    local_128 = local_b8;
    local_120 = 0;
    FUN_016d6df0(uVar12,1);
    lVar7 = *(int64_t *)(this_ptr + 0x50);
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      lVar7 = *(int64_t *)(this_ptr + 0x50);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    FUN_018f9310();
    if (uVar8 != 0) {
      FUN_00d50b20();
    }
    uVar9 = local_b8;
    if (local_68 != 0.0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if (local_c0 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
    if (uVar9 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_1b8 = *arg1;
    local_1b0 = 0;
    local_40 = FUN_016f51d0();
    if (local_40 >> 0x20 == 0) goto LAB_016fc2e0;
    local_60 = CONCAT44(local_60._4_4_,3);
    cVar2 = FUN_00e7c6b0();
LAB_016fc2d8:
    if (cVar2 != '\0') goto LAB_016fc2e0;
    uVar8 = 0;
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
LAB_016fd1c3:
  return uVar8 & 0xffffffff;
}

