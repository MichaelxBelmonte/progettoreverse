// Function: FUN_01942ac0
// Address: 01942ac0
// Size: 4953 bytes
// Class: Unknown

void FUN_01942ac0(uint64_t param_1,void*param_2)

{
  void* pVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  int64_t lVar7;
  void* pVar8;
  void* unaff_ESI;
  int64_t *this_ptr;
  bool bVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint64_t local_1a8;
  uint8_t local_1a0;
  uint64_t local_198;
  uint8_t local_190;
  uint64_t local_188;
  uint8_t local_180;
  uint64_t local_178;
  uint8_t local_170;
  uint64_t local_168;
  uint8_t local_160;
  uint64_t local_158;
  uint8_t local_150;
  uint64_t local_148;
  uint8_t local_140;
  uint64_t local_138;
  uint8_t local_130;
  uint64_t local_128;
  uint8_t local_120;
  uint64_t local_118;
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint64_t local_f8;
  uint8_t local_f0;
  uint64_t local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  char local_60 [8];
  char local_58 [8];
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  local_1a8 = *param_2;
  local_1a0 = 0;
  FUN_01941c70(param_1,&local_1a8);
  lVar2 = local_50;
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012e5ae0();
  iVar4 = *(int *)(local_40 + 0xc);
  if (local_38[0] != '\0') {
    uVar10 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (lVar2 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (iVar4 != 0) {
    local_198 = *param_2;
    local_190 = 0;
    FUN_01941c70(uVar10,&local_198);
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    lVar2 = local_40;
    pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    local_58[0] = local_38[0];
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = local_58;
    }
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    local_60[0] = local_58[0] != '\0';
    pcVar6 = local_58;
    if (!(bool)local_60[0]) {
      pcVar6 = local_60;
    }
    *pcVar6 = '\0';
    if ((local_58[0] != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    pVar1 = (void*)lVar2;
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar8 = pVar1;
    }
    FUN_01264240();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar9 = true;
    if (iVar4 != 2) {
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar8 = pVar1;
      }
      FUN_01264240();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01326de0();
      bVar9 = iVar4 == 4;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      unaff_ESI = 0;
    }
    pVar8 = unaff_ESI;
    pvVar5 = _pthread_getspecific(unaff_ESI);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar8 = pVar1;
    }
    FUN_01264240();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01390340();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6d60(*(void*)((int64_t)this_ptr + 0x584));
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_012c6cf0(0);
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (unaff_ESI == 0) {
        (**(code **)(&UNK_00001668 + *this_ptr))();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_0134a7d0();
        uVar10 = extraout_XMM0_Da;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          local_108 = *param_2;
          local_100 = 0;
          FUN_01941ba0(uVar10,&local_108);
          lVar7 = local_50;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_012c6d60(0);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (lVar7 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          local_f8 = *param_2;
          local_f0 = 0;
          FUN_01941ba0(uVar10,&local_f8);
          lVar7 = local_50;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_012c6cf0(0);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (lVar7 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          local_e8 = *param_2;
          local_e0 = 0;
          FUN_01941c70(uVar10,&local_e8);
          lVar7 = local_50;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_012c6d60(0);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (lVar7 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          local_d8 = *param_2;
          local_d0 = 0;
          FUN_01941c70(uVar10,&local_d8);
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6cf0(g_02390124);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_148 = *param_2;
          local_140 = 0;
          FUN_01941ba0(uVar10,&local_148);
          lVar7 = local_50;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_012c6d60(0);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (lVar7 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          local_138 = *param_2;
          local_130 = 0;
          FUN_01941ba0(uVar10,&local_138);
          lVar7 = local_50;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_012c6cf0(g_02390124);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (lVar7 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          local_128 = *param_2;
          local_120 = 0;
          FUN_01941c70(uVar10,&local_128);
          lVar7 = local_50;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_012c6d60(0);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (lVar7 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          local_118 = *param_2;
          local_110 = 0;
          FUN_01941c70(uVar10,&local_118);
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6cf0(0);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (unaff_ESI == 1) {
        local_c8 = *param_2;
        local_c0 = 0;
        FUN_01941ba0(uVar10,&local_c8);
        lVar7 = local_50;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012c6d60(0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (lVar7 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_b8 = *param_2;
        local_b0 = 0;
        FUN_01941ba0(uVar10,&local_b8);
        lVar7 = local_50;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012c6cf0(0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (lVar7 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_a8 = *param_2;
        local_a0 = 0;
        FUN_01941c70(uVar10,&local_a8);
        lVar7 = local_50;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012c6d60(*(void*)((int64_t)this_ptr + 0x584));
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (lVar7 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_98 = *param_2;
        local_90 = 0;
        FUN_01941c70(uVar10,&local_98);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cf0(0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6d60(*(void*)((int64_t)this_ptr + 0x584));
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_012c6cf0(0);
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (unaff_ESI == 0) {
        local_188 = *param_2;
        local_180 = 0;
        FUN_01941c70(uVar10,&local_188);
        lVar7 = local_50;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012c6d60(0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (lVar7 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_178 = *param_2;
        local_170 = 0;
        FUN_01941c70(uVar10,&local_178);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cf0(g_02390124);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (unaff_ESI == 1) {
        local_168 = *param_2;
        local_160 = 0;
        FUN_01941c70(uVar10,&local_168);
        lVar7 = local_50;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012c6d60(*(void*)((int64_t)this_ptr + 0x584));
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (lVar7 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_158 = *param_2;
        local_150 = 0;
        FUN_01941c70(uVar10,&local_158);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cf0(0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_60[0] != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

