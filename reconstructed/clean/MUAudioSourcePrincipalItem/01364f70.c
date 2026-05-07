// Function: FUN_01364f70
// Address: 01364f70
// Size: 2760 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01364f70(uint64_t param_1,uint param_2)

{
  int64_t *plVar1;
  byte bVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  void* pVar9;
  void*puVar10;
  int64_t *plVar11;
  int iVar12;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar13;
  int64_t *plVar14;
  char cVar15;
  bool bVar16;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  uint8_t local_148;
  int64_t *local_140;
  uint8_t local_138;
  void*local_130;
  uint8_t local_128;
  void*local_120;
  uint8_t local_118;
  uint8_t local_110 [4];
  int iStack_10c;
  int64_t *local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint local_d4;
  int64_t local_d0;
  char local_c8;
  uint64_t local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  uint64_t local_a0;
  int local_98;
  void*local_90;
  void*local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  uint local_54;
  void*local_48;
  byte local_39;
  void*local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  local_90 = puVar4;
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  puVar7 = (void*)*arg1;
  local_88 = puVar4;
  if (puVar7 == (void*)0x0) {
    local_48 = (void*)0x0;
    local_c0 = 0;
LAB_013650de:
    puVar7 = (void*)0x0;
    plVar14 = (int64_t *)0x0;
    local_54 = 0;
    if (*(int64_t *)(this_ptr + 0x1f8) == 0) goto LAB_0136577e;
LAB_01365790:
    cVar15 = (char)puVar7;
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') goto LAB_013657ec;
  }
  else {
    if ((*(int *)(puVar7 + 0xc) == 0) ||
       (lVar6 = *(int64_t *)(**(int64_t **)(puVar7 + 0x10) + 0x28), *(int *)(lVar6 + 0xc) == 0)) {
      local_48 = (void*)0x0;
      local_c0 = 0;
    }
    else {
      lVar13 = **(int64_t **)(lVar6 + 0x10);
      pvVar5 = _pthread_getspecific((void*)lVar6);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      FUN_01266fe0();
      local_48 = local_b8;
      puVar10 = local_b8;
      if (local_b8 == (void*)0x0) {
        local_48 = (void*)0x0;
        uVar8 = 0;
      }
      else {
        uVar8 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
        if (((local_b0 == '\0') && (FUN_00d50b00(), local_b0 != '\0')) &&
           (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      puVar7 = (void*)*arg1;
      local_c0 = uVar8;
      if (puVar7 == (void*)0x0) goto LAB_013650de;
    }
    local_b0 = '\0';
    local_b8 = (void*)0x0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_d4 = param_2 & 0xff;
    local_38 = (void*)0x0;
    plVar14 = (int64_t *)0x0;
    local_54 = 0;
    local_a0._4_4_ = 0;
    local_a8 = puVar7;
    while( true ) {
      puVar7 = local_38;
      if (local_a0._4_4_ != 0) {
        if (local_a0._4_4_ < 1) {
          iVar12 = -local_a0._4_4_;
        }
        else {
          iVar12 = (int)local_a0 - local_a0._4_4_;
          local_a0 = CONCAT44(local_a0._4_4_,iVar12);
          FUN_00d23690();
          local_98 = local_98 + local_a0._4_4_;
          iVar12 = 0;
        }
        local_a0 = CONCAT44(iVar12,(int)local_a0);
      }
      lVar6 = (int64_t)(int)local_a0;
      iVar12 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar12);
      if (*(int *)(local_a8 + 0xc) <= iVar12) break;
      local_b8 = *(void**)(*(int64_t *)(local_a8 + 0x10) + 8 + lVar6 * 8);
      local_39 = 0;
      lVar6 = *(int64_t *)(local_b8 + 0x10);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_158 = 1;
      puVar10 = *(void**)(local_b8 + 0x20);
      local_160 = lVar6;
      uVar8 = FUN_0135f200(puVar10,&local_160,local_110,&local_39);
      plVar11 = local_80;
      cVar15 = (char)puVar7;
      if (local_80 == plVar14) {
        if ((cVar15 == '\0') && (local_80 != (int64_t *)0x0)) {
          puVar10 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),1);
          puVar7 = puVar10;
          if (local_78 == '\0') {
            local_38 = puVar10;
            FUN_00d50b00();
            puVar7 = local_38;
          }
        }
        else if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01365716:
        pVar9 = (void*)puVar10;
        local_38 = puVar7;
        plVar11 = plVar14;
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (int64_t *)0x0) {
            uVar8 = FUN_00d50b00();
          }
          pVar9 = (void*)puVar10;
          local_38 = (void*)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          if (cVar15 == '\0') goto joined_r0x01365759;
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar14 = plVar11;
            puVar7 = local_38;
            goto joined_r0x01365716;
          }
        }
        else {
          local_38 = (void*)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          if ((cVar15 != '\0') && (plVar14 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar14 = plVar11;
            puVar7 = local_38;
            goto joined_r0x01365716;
          }
        }
        pVar9 = (void*)puVar10;
      }
joined_r0x01365759:
      plVar14 = plVar11;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (plVar14 == (int64_t *)0x0) {
LAB_01365170:
        *(void*)(local_b8 + 0x20) = 0xffffffffffffffff;
      }
      else {
        lVar6 = *(int64_t *)(local_b8 + 0x10);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_148 = 1;
        local_150 = lVar6;
        FUN_01326e80();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_138 = 0;
        local_140 = plVar14;
        FUN_01326e80();
        if (iStack_10c < 1) goto LAB_01365170;
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar11 = local_80;
        pvVar5 = _pthread_getspecific(pVar9);
        plVar1 = local_80;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar11 = plVar1, lVar6 != 0)) {
          plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        uVar8 = (**(code **)(*plVar11 + 0x380))();
        *(void*)(local_b8 + 0x20) = uVar8;
        puVar10 = local_b8;
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (void*)puVar10;
        local_f8 = local_90;
        local_f0 = '\0';
        FUN_015b4ee0();
        if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        lVar6 = *(int64_t *)(local_b8 + 0x10);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\0';
        local_80 = (int64_t *)lVar6;
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_78 = '\0';
        local_80 = plVar14;
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        bVar2 = local_39;
        bVar16 = local_80 != plVar14;
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_54 = local_54 & 0xff;
        if (bVar16 || (bVar2 & 1) != 0) {
          local_54 = 1;
        }
        if (local_48 != (void*)0x0) {
          pvVar5 = _pthread_getspecific(1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = '\0';
          local_e8 = plVar14;
          FUN_012eb1d0();
          plVar11 = local_80;
          if (local_78 == '\0') {
            if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
               (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (int64_t *)0x0) {
            local_78 = '\0';
            local_80 = (int64_t *)0x0;
            local_70 = plVar11;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar12 = -local_68._4_4_;
                }
                else {
                  iVar12 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar12);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar12 = 0;
                }
                local_68 = CONCAT44(iVar12,(int)local_68);
              }
              lVar6 = (int64_t)(int)local_68;
              iVar12 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar12);
              if (*(int *)((int64_t)local_70 + 0xc) <= iVar12) break;
              local_108 = *(int64_t **)(local_70[2] + 8 + lVar6 * 8);
              local_100 = '\0';
              local_80 = local_108;
              FUN_00d235a0();
              if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
        }
      }
    }
    puVar10 = local_a8;
    FUN_01954b60();
    if (*(int64_t *)(this_ptr + 0x1f8) != 0) goto LAB_01365790;
LAB_0136577e:
    cVar15 = (char)puVar7;
    if ((*(int64_t *)(this_ptr + 0x200) != 0) || (*(int64_t *)(this_ptr + 0x148) == 0))
    goto LAB_01365790;
    pvVar5 = _pthread_getspecific((void*)puVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar12 = FUN_0141bab0();
    if (iVar12 != 3) goto LAB_01365790;
  }
  if (0xe < *(int *)(local_90 + 3) + 7U) {
    if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
       (*(int64_t *)(this_ptr + 0x148) != 0)) {
      pvVar5 = _pthread_getspecific((void*)puVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_0141bab0();
      if (iVar12 == 3) {
        if ((local_54 & 1) == 0) {
          if (0 < *(int *)((int64_t)local_88 + 0xc)) {
            lVar6 = 0;
            do {
              pvVar5 = _pthread_getspecific((void*)puVar10);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de560();
              puVar7 = local_b8;
              if ((((local_b0 == '\0') && (local_b8 != (void*)0x0)) &&
                  (FUN_00d50b00(), local_b0 != '\0')) && (local_b8 != (void*)0x0)) {
                FUN_00d50b20();
              }
              local_38 = puVar7;
              pvVar5 = _pthread_getspecific((void*)puVar10);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = 0;
              FUN_00d50b00();
              local_c8 = '\x01';
              local_d0 = this_ptr;
              FUN_014d0690();
              puVar7 = local_38;
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if (puVar7 != (void*)0x0) {
                FUN_00d50b20();
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < *(int *)((int64_t)local_88 + 0xc));
          }
        }
        else {
          local_130 = local_90;
          local_128 = 0;
          FUN_01353f80();
        }
        goto LAB_013657ec;
      }
    }
    local_120 = local_90;
    local_118 = 0;
    FUN_01353f80();
  }
LAB_013657ec:
  if (((char)local_c0 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar15 != '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = local_90;
  if (local_88 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

