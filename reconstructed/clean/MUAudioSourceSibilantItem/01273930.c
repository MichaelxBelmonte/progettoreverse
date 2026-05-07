// Function: FUN_01273930
// Address: 01273930
// Size: 2807 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01273930(void* param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  void**ppuVar8;
  char *pcVar9;
  void* pVar10;
  int iVar12;
  int64_t *arg1;
  void*this_ptr;
  void*local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  int64_t *local_98;
  void*local_90;
  void*local_88;
  void*local_80;
  void*local_78;
  uint64_t local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  void*local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  int64_t lVar11;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*arg1 + 0xc) == 0) {
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_98 = plVar3;
    FUN_00d23310();
    puVar6 = local_88;
    local_48 = (void*)CONCAT71(local_48._1_7_,(char)local_80);
    ppuVar8 = &local_48;
    if ((char)local_80 != '\0') {
      ppuVar8 = &local_80;
    }
    *(void*)ppuVar8 = 0;
    if (((char)local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      lVar5 = puVar6[9];
    }
    else {
      lVar5 = *(int64_t *)(puVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x48);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (puVar6 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (lVar5 == 0) {
      FUN_01273200();
      local_50 = local_88;
      if (((char)local_80 == '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c9fe20();
      puVar6 = local_88;
      ppuVar8 = &local_80;
      if ((char)local_80 == '\0') {
        ppuVar8 = (void**)&local_60;
      }
      local_60 = (char)local_80;
      *(void*)ppuVar8 = 0;
      if (((char)local_80 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 == '\0') {
        if (puVar6 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_012e8850();
      puVar7 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 == (void*)0x0) {
        *this_ptr = plVar3;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (void*)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(void**)(puVar7[2] + lVar5 * 8);
            FUN_00805b20();
            lVar11 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00c9fe20();
            puVar6 = local_48;
            local_38[0] = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_c0 = 0;
            if (local_38[0] == '\0') {
              if (puVar6 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_c0 = '\x01';
            local_c8 = puVar6;
            FUN_012fceb0();
            lVar1 = CONCAT71(local_d8._1_7_,(char)local_d8);
            if (local_d0 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d0 = '\0';
            }
            FUN_01274b90();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((int64_t)puVar7 + 0xc));
        }
        FUN_000be170();
        *this_ptr = local_98;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
      }
      if (local_50 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      pcVar2 = g_02572370;
      (*g_02572370)();
      local_90 = puVar6;
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      local_50 = puVar7;
      if ((void*)*arg1 != (void*)0x0) {
        local_80._0_1_ = '\0';
        local_88 = (void*)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        local_78 = (void*)*arg1;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar5 = (int64_t)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)((int64_t)local_78 + 0xc) <= iVar12) break;
          lVar11 = local_78[2];
          puVar6 = *(void**)(lVar11 + 8 + lVar5 * 8);
          local_88 = puVar6;
          pvVar4 = _pthread_getspecific((void*)lVar11);
          puVar7 = local_88;
          pVar10 = (void*)lVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), puVar6 = puVar7, lVar5 != 0)) {
            puVar6 = (void*)puVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          if (puVar6[0x20] != 0) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f4d60();
            puVar6 = local_48;
            local_60 = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = &local_60;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            local_48 = puVar6;
            iVar12 = FUN_00d237a0();
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (iVar12 == -1) {
              local_40[0] = '\0';
              local_48 = puVar6;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b20();
              }
              puVar7 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar7 = &g_02572358;
              (*pcVar2)();
              local_40[0] = '\0';
              local_48 = puVar7;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            local_48 = local_88;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_001159b0();
        puVar6 = local_90;
      }
      FUN_012e8850();
      puVar7 = local_88;
      if ((char)local_80 == '\0') {
        if (((local_88 != (void*)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
           (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80._0_1_ = '\0';
      }
      if (puVar7 == (void*)0x0) {
        *this_ptr = plVar3;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (void*)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(void**)(puVar7[2] + lVar5 * 8);
            local_40[0] = '\0';
            local_48 = local_88;
            iVar12 = FUN_00d23d20();
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            lVar11 = *(int64_t *)(local_90[2] + (int64_t)iVar12 * 8);
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            plVar3 = local_98;
            FUN_00c9fe20();
            puVar6 = local_48;
            local_d8._0_1_ = local_40[0];
            ppuVar8 = (void**)local_40;
            if (local_40[0] == '\0') {
              ppuVar8 = &local_d8;
            }
            *(char *)ppuVar8 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = 0;
            if ((char)local_d8 == '\0') {
              if (puVar6 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d8._0_1_ = '\0';
            }
            local_a0 = '\x01';
            local_a8 = puVar6;
            FUN_012fceb0();
            local_b0 = 0;
            lVar1 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_b0 = '\x01';
            local_b8 = lVar1;
            FUN_01274b90();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((int64_t)puVar7 + 0xc));
        }
        FUN_000be170();
        *this_ptr = plVar3;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
        puVar6 = local_90;
      }
      if (local_50 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}

