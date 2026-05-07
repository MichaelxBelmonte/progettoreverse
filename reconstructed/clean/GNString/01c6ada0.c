// Function: FUN_01c6ada0
// Address: 01c6ada0
// Size: 6675 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01c6ada0(void*param_1,void*param_2)

{
  uint uVar1;
  void*puVar2;
  void*puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  void *pvVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  void* pVar11;
  void*in_RCX;
  void*puVar12;
  void*puVar13;
  void**ppuVar14;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  bool bVar15;
  uint uVar16;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qa_00;
  double dVar18;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  uint64_t extraout_XMM0_Qa_07;
  uint64_t extraout_XMM0_Qa_08;
  uint64_t local_c0;
  uint32_t local_b4;
  int local_b0;
  uint32_t local_ac;
  void*local_a8;
  void*local_a0;
  uint32_t local_94;
  void*local_90;
  char local_81;
  uint64_t local_80;
  uint32_t local_74;
  void*local_70;
  uint64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  void*local_48;
  char local_40 [8];
  void*local_38;
  
  local_38 = *(void**)(this_ptr + 0x188);
  local_90 = param_1;
  if (local_38 == (void*)0x0) {
    puVar13 = (void*)FUN_00e7bdb0();
    return puVar13;
  }
  puVar12 = in_RCX;
  local_ac = unaff_ESI;
  FUN_00d50b00();
  *param_2 = 1;
  *in_RCX = 0;
  pvVar7 = _pthread_getspecific((void*)puVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cb850(local_90,0);
  FUN_00e7d850();
  local_50 = (void*)FUN_00e7bcc0();
  local_b0 = *(int *)(this_ptr + 0x1c8);
  uVar1 = *(uint *)(this_ptr + 0x1cc);
  local_81 = (0x487eU >> (uVar1 - 4 & 0x1f) & 1) != 0;
  local_b4 = 0xffffffff;
  pvVar7 = _pthread_getspecific(0x487e);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar13 = &local_b4;
  local_80 = (void*)FUN_016c4630(puVar13,1);
  pvVar7 = _pthread_getspecific((void*)puVar13);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar13 = &local_b4;
  FUN_016c47d0(puVar13,local_50);
  puVar3 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (void*)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_74 = FUN_0123ffa0();
  pvVar7 = _pthread_getspecific((void*)puVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    puVar13 = local_38;
  }
  FUN_016d8ab0();
  local_a8 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  cVar4 = FUN_016bf360();
  if (cVar4 != '\0') {
    local_c0 = (void*)FUN_016bf2e0();
    local_a0 = (void*)FUN_016bf310();
  }
  if (0 < *(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc)) {
    lVar8 = 0;
    bVar15 = false;
    do {
      cVar4 = FUN_01c82ad0();
      if (cVar4 != '\0') {
        bVar15 = true;
        FUN_01c82ae0();
      }
      lVar8 = lVar8 + 1;
      puVar13 = (void*)(int64_t)*(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc);
    } while (lVar8 < (int64_t)puVar13);
    if (bVar15) {
      FUN_016bf0c0();
    }
  }
  FUN_01c45dc0();
  *(void*)(this_ptr + 0x218) = 0;
  uVar16 = uVar1 & 0xfffffffe;
  pVar11 = (void*)puVar13;
  if (uVar16 == 0x12) {
    *param_2 = 0;
    if (0x11 < uVar1 - 4 || local_81 != '\0') {
      *in_RCX = 1;
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_016c2730();
      pVar11 = 0x2802558;
      if (cVar4 == '\0') {
        pvVar7 = _pthread_getspecific(0x2802558);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_016f4e50();
        puVar13 = local_a0;
        if (cVar4 == '\0') {
          local_50 = local_c0;
          FUN_016bf110();
          puVar13 = local_50;
        }
        else {
          local_68._0_4_ = 1;
          local_48 = local_a0;
          FUN_00e7c280();
          local_50 = local_48;
          local_68 = (void*)CONCAT44(local_68._4_4_,1);
          local_48 = puVar13;
          FUN_00e7c280();
          local_58 = (void*)CONCAT44(local_58._4_4_,1);
          local_48 = puVar13;
          uVar17 = FUN_00e7c280();
          FUN_016bf110(uVar17,local_48);
          puVar13 = local_50;
        }
      }
      else {
        pvVar7 = _pthread_getspecific(0x2802558);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar11 = (void*)local_38;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar11 = (void*)local_38;
        }
        FUN_016c2660();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_019079b0();
        local_50 = (void*)FUN_016caaa0(uVar17,0);
        if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_68 = (void*)CONCAT44(local_68._4_4_,1);
        local_48 = local_50;
        uVar17 = FUN_00e7c280();
        FUN_016bf110(uVar17,local_50);
        puVar13 = local_50;
      }
      goto LAB_01c6c2c1;
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      puVar13 = local_38;
    }
    cVar4 = FUN_016c2730();
    if (cVar4 != '\0') {
      pvVar7 = _pthread_getspecific((void*)puVar13);
      puVar9 = local_38;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), puVar9 = local_38, lVar8 != 0)) {
        puVar9 = *(void**)(local_38 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 2 + 8);
        puVar13 = local_38;
      }
      local_90 = puVar9;
      pvVar7 = _pthread_getspecific((void*)puVar13);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        puVar13 = local_38;
      }
      FUN_016c2660();
      pvVar7 = _pthread_getspecific((void*)puVar13);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar17 = FUN_019079b0();
      local_68 = (void*)FUN_016caaa0(uVar17,0);
      cVar4 = '\0';
      if ((local_50._4_4_ != 0) && ((uint64_t)local_68 >> 0x20 != 0)) {
        cVar4 = FUN_00e7c000();
      }
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        *in_RCX = 1;
        local_68 = (void*)CONCAT44(local_68._4_4_,1);
        local_48 = local_50;
        uVar17 = FUN_00e7c280();
        FUN_016bf110(uVar17,local_50);
        puVar13 = local_50;
        goto LAB_01c6c2c1;
      }
    }
    pvVar7 = _pthread_getspecific((void*)puVar13);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      puVar13 = local_38;
    }
    cVar4 = FUN_016f4e50();
    pVar11 = (void*)puVar13;
    if (cVar4 != '\0') {
      FUN_016bf110(extraout_XMM0_Qa_00,local_a0);
      *(void*)(this_ptr + 0x1cc) = 0x15;
      FUN_01c5fd60();
LAB_01c6b8df:
      *in_RCX = 1;
LAB_01c6b8e3:
      *(void*)(this_ptr + 0x218) = 1;
      puVar13 = local_50;
      goto LAB_01c6c2c1;
    }
    if ((local_50._4_4_ != 0) && (local_c0._4_4_ != 0)) {
      cVar4 = FUN_00e7c020();
      pVar11 = (void*)puVar13;
      if (cVar4 != '\0') {
        pvVar7 = _pthread_getspecific(pVar11);
        puVar9 = local_a0;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          puVar13 = local_38;
        }
        cVar4 = FUN_016c2730();
        pVar11 = (void*)puVar13;
        if (cVar4 != '\0') {
LAB_01c6c5c2:
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_016c2730();
          uVar17 = extraout_XMM0_Qa_07;
          if ((((cVar4 != '\0') && (local_80._4_4_ != 0)) && (local_50._4_4_ != 0)) &&
             (cVar4 = FUN_00e7c000(), uVar17 = extraout_XMM0_Qa_08, cVar4 != '\0')) {
            local_48 = local_80;
            uVar17 = FUN_00e7c280();
          }
          FUN_016bf110(uVar17,local_50);
          *(void*)(this_ptr + 0x1cc) = 0x14;
          FUN_01c5fd60();
          goto LAB_01c6b8df;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        local_a0 = puVar9;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          puVar13 = local_38;
        }
        pvVar7 = _pthread_getspecific((void*)puVar13);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          puVar13 = local_38;
        }
        FUN_016c2660();
        FUN_00d23340();
        puVar9 = local_48;
        pVar11 = (void*)CONCAT71((int7)((uint64_t)puVar13 >> 8),local_40[0]);
        ppuVar14 = &local_70;
        if (local_40[0] != '\0') {
          ppuVar14 = (void**)local_40;
        }
        local_70 = (void*)CONCAT71(local_70._1_7_,local_40[0]);
        *(char *)ppuVar14 = '\0';
        if ((local_40[0] != '\0') && (puVar9 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_019079b0();
        local_58 = (void*)FUN_016caaa0(uVar17,0);
        bVar6 = 0;
        if ((local_50._4_4_ != 0) && (bVar6 = 0, (uint64_t)local_58 >> 0x20 != 0)) {
          bVar6 = FUN_00e7c020();
          bVar6 = bVar6 ^ 1;
        }
        if (((char)local_70 != '\0') && (puVar9 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (bVar6 != 0) goto LAB_01c6c5c2;
        local_48 = local_a0;
        FUN_00e7b970();
        local_68 = local_48;
        if (((uint64_t)local_48 >> 0x20 == 0) || (cVar4 = FUN_00e7c650(), cVar4 != '\0'))
        goto LAB_01c6c5c2;
        if (((local_80._4_4_ == 0) || (local_50._4_4_ == 0)) ||
           (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
          FUN_016bf1f0();
          local_48 = local_80;
          FUN_00e7c260();
          local_68 = (void*)CONCAT44(local_68._4_4_,1);
          FUN_00e7c280();
          FUN_016bf260();
        }
        else {
          local_48 = local_80;
          FUN_00e7c280();
          FUN_016bf1f0();
          local_48 = local_80;
          FUN_00e7c260();
          local_68 = (void*)CONCAT44(local_68._4_4_,1);
          FUN_00e7c280();
          FUN_016bf260();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016efaf0();
        *param_2 = 1;
        *(void*)(this_ptr + 0x1cc) = 0xc;
        FUN_01c5fd60();
        goto LAB_01c6b8e3;
      }
    }
LAB_01c6be7e:
    if (((local_80._4_4_ == 0) || (local_50._4_4_ == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0'))
    {
      FUN_016bf1f0();
      if (uVar16 == 0x12) {
        FUN_016bf260();
      }
      else {
        local_48 = local_80;
        FUN_00e7c260();
        local_68 = (void*)CONCAT44(local_68._4_4_,1);
        FUN_00e7c280();
        FUN_016bf260();
      }
    }
    else {
      local_48 = local_80;
      FUN_00e7c280();
      FUN_016bf1f0();
      if (uVar16 == 0x12) {
        FUN_016bf260();
      }
      else {
        local_48 = local_80;
        FUN_00e7c260();
        local_68 = (void*)CONCAT44(local_68._4_4_,1);
        FUN_00e7c280();
        FUN_016bf260();
      }
    }
    *(void*)(this_ptr + 0x218) = 1;
  }
  else if (uVar1 == 0x11) {
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      puVar13 = local_38;
    }
    pvVar7 = _pthread_getspecific((void*)puVar13);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      puVar13 = local_38;
    }
    uVar17 = FUN_016c4760();
    FUN_016d5810(extraout_XMM0_Qa,uVar17);
    puVar9 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (void*)0x0) goto LAB_01c6b542;
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_48 == (void*)0x0) {
LAB_01c6b542:
      pvVar7 = _pthread_getspecific((void*)puVar13);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        puVar13 = local_38;
      }
      FUN_016d8130();
      puVar2 = (void*)**(uint64_t **)(local_48 + 4);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b00();
        puVar9 = puVar2;
      }
      if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar7 = _pthread_getspecific((void*)puVar13);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      puVar13 = local_38;
    }
    FUN_016ebbb0();
    puVar2 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    pvVar7 = _pthread_getspecific((void*)puVar13);
    puVar10 = local_38;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), puVar10 = local_38, lVar8 != 0)) {
      puVar13 = local_38;
      puVar10 = *(void**)(local_38 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 2 + 8);
    }
    pVar11 = (void*)puVar13;
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    local_68 = (void*)FUN_016caaa0();
    if (puVar2 != (void*)0x0) {
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar11 = (void*)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      puVar10 = (void*)FUN_016caaa0();
      local_48 = local_50;
      FUN_00e7b970();
      local_58 = local_48;
      local_94 = 4;
      if (((uint64_t)local_48 >> 0x20 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
        local_48 = puVar10;
        FUN_00e7b970();
        local_70 = local_48;
        if (((uint64_t)local_48 >> 0x20 != 0) && (cVar4 = FUN_00e7c6b0(), cVar4 == '\0')) {
          *(void*)(this_ptr + 0x1cc) = 4;
          FUN_01c5fd60();
          local_58 = (void*)CONCAT44(local_58._4_4_,1);
          local_48 = local_50;
          uVar17 = FUN_00e7c280();
          FUN_016bf110(uVar17,local_50);
        }
      }
    }
    if (*(int *)(this_ptr + 0x1cc) != 4) {
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar11 = (void*)local_38;
      }
      FUN_016d8130();
      puVar13 = (void*)**(uint64_t **)(local_48 + 4);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      if (puVar13 == puVar9) {
        local_48 = (void*)CONCAT44(local_48._4_4_,4);
        if ((local_50._4_4_ == 0) || (cVar4 = FUN_00e7c6b0(), cVar4 != '\0')) {
          FUN_016bf1f0();
        }
        else {
          FUN_016bf510();
          local_48 = (void*)((uint64_t)local_48 & 0xffffffff00000000);
          FUN_00e7c240();
        }
      }
      else {
        local_48 = local_50;
        FUN_00e7b970();
        puVar13 = local_48;
        local_58 = local_48;
        local_48 = (void*)CONCAT44(local_48._4_4_,4);
        if (((uint64_t)puVar13 >> 0x20 == 0) || (cVar4 = FUN_00e7c6b0(), cVar4 != '\0')) {
          FUN_016bf1f0();
        }
        else {
          FUN_016bf1f0();
          local_50 = local_68;
        }
      }
      if (puVar2 == (void*)0x0) {
        FUN_016bf540();
      }
      else {
        local_58 = (void*)CONCAT44(local_58._4_4_,1);
        local_48 = puVar10;
        FUN_00e7c280();
        FUN_016bf260();
      }
      *(void*)(this_ptr + 0x218) = 1;
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (((local_b0 == 1) && (cVar4 = FUN_016bf360(), cVar4 == '\0')) && ((uVar1 & 0xfffffffd) == 8))
    {
      pvVar7 = _pthread_getspecific((void*)puVar13);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        puVar13 = local_38;
      }
      pVar11 = (void*)puVar13;
      FUN_016f4e60();
      if (local_40[0] == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c6be3d;
        }
      }
      else if (local_48 != (void*)0x0) {
LAB_01c6be3d:
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar11 = (void*)local_38;
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        local_68 = (void*)FUN_016caaa0();
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar11 = (void*)local_38;
        }
        FUN_016cb850(local_90);
        FUN_00e7d850();
        local_58 = (void*)FUN_00e7bcc0();
        if ((((uint64_t)local_58 >> 0x20 == 0) || (local_68._4_4_ == 0)) ||
           (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
          local_70 = (void*)CONCAT44(local_70._4_4_,3);
          local_48 = local_68;
          uVar17 = FUN_00e7c260();
          FUN_016bf110(uVar17,local_48);
        }
        else {
          local_70 = (void*)CONCAT44(local_70._4_4_,4);
          local_48 = local_68;
          FUN_00e7c280();
          local_94 = 1;
          local_48 = local_68;
          uVar17 = FUN_00e7c280();
          FUN_016bf110(uVar17,local_48);
        }
        local_50 = local_68;
        *(void*)(this_ptr + 0x218) = 1;
        FUN_00d50b20();
        goto LAB_01c6c175;
      }
      goto LAB_01c6be7e;
    }
    if ((uVar1 == 0x14) && (cVar4 = FUN_016bf360(), cVar4 != '\0')) {
      local_68 = (void*)FUN_016bf310();
      local_70 = (void*)CONCAT44(local_70._4_4_,1);
      local_48 = local_50;
      FUN_00e7c280();
      local_58 = local_48;
      if ((local_68._4_4_ != 0) &&
         (((uint64_t)local_48 >> 0x20 != 0 && (cVar4 = FUN_00e7c000(), cVar4 != '\0')))) {
        local_48 = (void*)FUN_016bf310();
        local_68 = (void*)CONCAT44(local_68._4_4_,1);
        FUN_00e7c260();
        FUN_016bf260();
      }
    }
    local_68 = (void*)FUN_016bf310();
    local_58 = (void*)FUN_016bf2e0();
    if (uVar1 == 0x15) {
      local_48 = (void*)CONCAT44(local_48._4_4_,1);
      FUN_00e7c280();
    }
    cVar4 = FUN_016bf360();
    if (((((cVar4 == '\0') || (local_50._4_4_ == 0)) || (local_58._4_4_ == 0)) ||
        ((cVar4 = FUN_00e7c020(), cVar4 == '\0' || (local_50._4_4_ == 0)))) || (local_68._4_4_ == 0)
       ) {
      pVar11 = (void*)
               CONCAT71((int7)((uint64_t)puVar13 >> 8),uVar1 != 0xc | (byte)local_ac);
      bVar6 = 0;
LAB_01c6b385:
      if ((uVar1 - 2 < 3) || ((char)pVar11 == '\0')) {
        if (uVar16 == 2) {
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar11 = 0;
          dVar18 = (double)FUN_016c46a0(0,0);
          if ((double)local_90 < dVar18) {
            local_70 = (void*)CONCAT44(local_70._4_4_,1);
            local_48 = local_50;
            FUN_00e7c280();
            local_50 = local_48;
          }
        }
LAB_01c6bdda:
        *(void*)(this_ptr + 0x218) = 1;
        local_70 = (void*)CONCAT44(local_70._4_4_,1);
        local_48 = local_50;
        uVar17 = FUN_00e7c280();
        FUN_016bf110(uVar17,local_50);
        goto LAB_01c6c175;
      }
    }
    else {
      bVar5 = FUN_00e7c020();
      bVar6 = bVar5 ^ 1;
      local_ac._0_1_ = uVar1 != 0xc | (byte)local_ac;
      pVar11 = (void*)CONCAT71((int7)((uint64_t)puVar13 >> 8),(byte)local_ac);
      if (bVar5 != 0 || (byte)local_ac != 0) goto LAB_01c6b385;
      cVar4 = FUN_016bf450();
      if (cVar4 != '\0') goto LAB_01c6bdda;
    }
    if ((((local_b0 == 1) && (uVar1 < 0x16)) && ((0x301040U >> (uVar1 & 0x1f) & 1) != 0)) &&
       (bVar6 == 0)) goto LAB_01c6be7e;
  }
LAB_01c6c175:
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016d8ab0();
  puVar9 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (void*)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_016bf360();
  if (cVar4 != '\0') {
    local_68 = (void*)FUN_016bf2e0();
    local_58 = (void*)FUN_016bf310();
    local_48 = (void*)FUN_016bf2e0();
    if (((local_68._4_4_ != 0) && ((uint64_t)local_48 >> 0x20 != 0)) &&
       (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
      local_70 = (void*)FUN_016bf2e0();
      if (((local_58._4_4_ != 0) && ((uint64_t)local_70 >> 0x20 != 0)) &&
         (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
        local_48 = (void*)FUN_016bf2e0();
        if (((local_50._4_4_ == 0) || ((uint64_t)local_48 >> 0x20 == 0)) ||
           (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
          local_48 = (void*)FUN_016bf2e0();
          local_70 = (void*)CONCAT44(local_70._4_4_,1);
          FUN_00e7c280();
          local_58 = local_48;
        }
        else {
          local_58 = (void*)FUN_016bf2e0();
        }
      }
    }
    local_48 = (void*)FUN_016bf310();
    uVar17 = extraout_XMM0_Qa_01;
    if (((local_68._4_4_ != 0) && ((uint64_t)local_48 >> 0x20 != 0)) &&
       (cVar4 = FUN_00e7c020(), uVar17 = extraout_XMM0_Qa_02, cVar4 == '\0')) {
      local_70 = (void*)FUN_016bf310();
      uVar17 = extraout_XMM0_Qa_04;
      if (((local_58._4_4_ != 0) && ((uint64_t)local_70 >> 0x20 != 0)) &&
         (cVar4 = FUN_00e7c020(), uVar17 = extraout_XMM0_Qa_05, cVar4 == '\0')) {
        local_68 = (void*)FUN_016bf310();
        uVar17 = extraout_XMM0_Qa_06;
      }
    }
    if (((local_68._4_4_ == 0) || (local_58._4_4_ == 0)) ||
       (cVar4 = FUN_00e7c020(), uVar17 = extraout_XMM0_Qa_03, cVar4 == '\0')) {
      FUN_016bf110(uVar17,local_58);
    }
    else {
      FUN_016bf0c0();
    }
  }
  puVar13 = local_50;
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_01c6c2c1:
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return puVar13;
}

