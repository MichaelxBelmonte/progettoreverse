// Function: FUN_00348560
// Address: 00348560
// Size: 2768 bytes
// Class: MUTool

int64_t * FUN_00348560(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar11;
  uint64_t uVar12;
  double dVar13;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  local_100 = *param_2;
  local_f8 = '\0';
  uVar12 = FUN_01948a20(param_1,&local_100);
  lVar1 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (uVar12 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_f0 = *param_2;
    local_e8 = '\0';
    (**(code **)(&UNK_00001850 + *arg1))(uVar12,&local_f0);
    local_48 = local_70;
    if (local_70 == 0) {
      local_48 = lVar1;
    }
    else if (local_68 == '\0') {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = lVar1;
    if ((char)param_1 == '\0') goto LAB_00349048;
  }
  lVar1 = g_026e1810;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar13 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar13 * g_023907c0);
  dVar13 = dVar13 * g_023907c0 - g_023907c8;
  pVar8 = 0xaaaaaaab;
  FUN_0071a120();
  if ((((local_68 == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68 != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar13 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_a0 = lVar1;
  local_98 = '\0';
  FUN_000175c0();
  lVar7 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    local_68 = '\0';
    local_70 = lVar7;
    bVar3 = FUN_00c70bc0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar7 != 0 & bVar3) != 0) {
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    lVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 == 0) goto LAB_00349048;
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == 0) goto LAB_00349048;
    local_68 = 0;
    local_70 = 0;
    local_60 = lVar1;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar11 = 0;
LAB_003488b9:
      lVar7 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar11 * 8);
      pVar8 = uVar11;
      local_70 = lVar7;
      pvVar5 = _pthread_getspecific(uVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_78 = local_a0;
      if ((((local_98 == '\0') && (local_a0 != 0)) && (FUN_00d50b00(), local_98 != '\0')) &&
         (local_a0 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      lVar6 = local_a0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar8 = (void*)local_78;
        }
        FUN_013dfcb0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_a8 = local_a0;
        if (local_98 == '\0') {
          if (((local_a0 != 0) && (FUN_00d50b00(), local_98 != '\0')) && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_90 = local_a8;
          local_88 = 0xffffffff;
          local_80 = 0;
          local_88._4_4_ = 0;
          do {
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar10 = -local_88._4_4_;
              }
              else {
                iVar10 = (int)local_88 - local_88._4_4_;
                local_88 = CONCAT44(local_88._4_4_,iVar10);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar10 = 0;
              }
              local_88 = CONCAT44(iVar10,(int)local_88);
            }
            lVar6 = (int64_t)(int)local_88;
            iVar10 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar10);
            if (*(int *)(local_90 + 0xc) <= iVar10) goto LAB_00349008;
            lVar9 = *(int64_t *)(local_90 + 0x10);
            local_a0 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar6 = local_40;
            if (((local_38 == '\0') && (local_40 != 0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
              FUN_00d50b20();
            }
            if (lVar6 != lVar7) {
              pvVar5 = _pthread_getspecific((void*)lVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              lVar2 = local_40;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) goto LAB_00348c2c;
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          } while( true );
        }
      }
      goto LAB_00349020;
    }
LAB_00349037:
    FUN_001159b0();
    FUN_00d50b20();
  }
LAB_00349048:
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
LAB_00348c2c:
  pvVar5 = _pthread_getspecific((void*)lVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific((void*)lVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  local_e0 = local_40;
  pvVar5 = _pthread_getspecific((void*)lVar9);
  if (pvVar5 != (void *)0x0) {
    local_e0 = local_40;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar9 = *(int64_t *)(local_e0 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      local_e0 = lVar9;
    }
  }
  pVar8 = (void*)lVar9;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507970();
  FUN_015084d0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508610();
  FUN_015085a0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
LAB_00349008:
  FUN_0015edf0();
  FUN_00d50b20();
LAB_00349020:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  uVar11 = uVar11 + 1;
  local_58 = CONCAT44(local_58._4_4_,uVar11);
  if (*(int *)(lVar1 + 0xc) <= (int)uVar11) goto LAB_00349037;
  goto LAB_003488b9;
}

