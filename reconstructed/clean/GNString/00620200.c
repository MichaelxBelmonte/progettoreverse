// Function: FUN_00620200
// Address: 00620200
// Size: 2468 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_00620200(void* param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  byte bVar4;
  uint32_t uVar5;
  uint64_t in_RAX;
  void *pvVar6;
  int64_t *plVar7;
  uint64_t unaff_R12;
  uint64_t uVar8;
  void*puVar9;
  void*puVar10;
  bool bVar11;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int local_e8;
  uint32_t uStack_e4;
  char local_e0;
  void*local_d8;
  void*local_d0;
  void*local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  int64_t *local_90;
  char local_88;
  uint32_t local_7c;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  void*local_60;
  uint local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_7c = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
  if (param_2 == 0) {
    FUN_01caeae0();
    local_98 = local_60;
    param_1 = 0;
    if (local_60 == (void*)0x0) goto LAB_00620309;
    if ((char)local_58 == '\0') {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_026f6f70;
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02725a60;
    if (g_02725a60 != 0) {
      FUN_00d50b00();
    }
    local_158 = lVar2;
    local_150 = '\x01';
    local_148 = 0;
    local_140 = '\0';
    plVar7 = &local_148;
    FUN_00d31230(plVar7,&local_158);
    local_c8 = local_60;
    param_1 = (void*)plVar7;
    local_c0 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_c0 = '\x01';
    FUN_01d64eb0();
    if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
    local_7c = 0;
  }
  else {
LAB_00620309:
    local_98 = (void*)0x0;
    uVar8 = 0;
  }
  FUN_0063f230();
  puVar3 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_002218b0();
  if (local_60 == (void*)0x0) {
    bVar4 = 1;
  }
  else {
    FUN_002218b0();
    bVar4 = FUN_00751ba0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = bVar4 ^ 1;
  }
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4 == 0) {
    FUN_002218b0();
    (**(code **)(*local_90 + 0x628))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01710460();
    local_d8 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_d8 != (void*)0x0) {
      local_68 = uVar8;
      FUN_0021a630();
      (**(code **)(*local_40 + 0xe20))();
      puVar9 = local_60;
      if ((char)local_58 == '\0') {
        if (local_60 != (void*)0x0) {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((puVar9 == (void*)0x0) || (*(int *)((int64_t)puVar9 + 0xc) == 0)) {
        FUN_0021a630();
        (**(code **)(*local_40 + 0x9b0))();
        puVar10 = local_60;
        if (puVar9 == local_60) {
LAB_0062069c:
          if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_58 == '\0') {
            if (local_60 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar11 = puVar9 != (void*)0x0;
            puVar9 = puVar10;
            if (bVar11) {
              FUN_00d50b20();
            }
            goto LAB_0062069c;
          }
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
          }
          local_58 = local_58 & 0xffffff00;
          puVar9 = puVar10;
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar9 != (void*)0x0) goto LAB_006206cd;
        uVar5 = 0;
      }
      else {
LAB_006206cd:
        if (*(int *)((int64_t)puVar9 + 0xc) == 0) {
          uVar5 = 0;
        }
        else {
          FUN_002218b0();
          (**(code **)(*(int64_t *)CONCAT44(uStack_e4,local_e8) + 0x628))();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a11a0();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01713990();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          puVar10 = local_60;
          if ((char)local_58 == '\0') {
            if (local_60 != (void*)0x0) {
              FUN_00d50b00();
              if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_58 = local_58 & 0xffffff00;
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (CONCAT44(uStack_e4,local_e8) != 0)) {
            FUN_00d50b20();
          }
          local_130 = '\0';
          local_128 = puVar10;
          local_120 = '\0';
          local_138 = puVar9;
          uVar5 = FUN_01300180(1,param_2 & 0xff,0,0);
          if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
            FUN_00d50b20();
          }
          lVar1 = g_026f6f70;
          if ((local_98 != (void*)0x0) && (1 < local_e8)) {
            local_d0 = puVar10;
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar2 = g_02725a68;
            local_118 = lVar1;
            local_110 = '\x01';
            if (g_02725a68 != 0) {
              FUN_00d50b00();
            }
            local_108 = lVar2;
            local_100 = '\x01';
            local_f8 = 0;
            local_f0 = '\0';
            FUN_00d31230(&local_f8,&local_108);
            local_a8 = local_78;
            local_a0 = 0;
            if (local_70 == '\0') {
              if (local_78 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            local_a0 = '\x01';
            FUN_00d46530();
            local_50 = local_90;
            local_58 = 1;
            local_60 = &g_024c5048;
            local_48 = 0;
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_48 = '\x01';
            FUN_00d93690();
            local_b8 = local_40;
            local_b0 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_b0 = '\x01';
            FUN_01d64eb0();
            if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_60 = &g_024c5048;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            puVar10 = local_d0;
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
          }
          if (puVar10 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_00620b70;
    }
  }
  uVar5 = 0;
LAB_00620b70:
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_7c == '\0') {
    FUN_00d50b20();
  }
  return uVar5;
}

