// Function: FUN_00113760
// Address: 00113760
// Size: 3368 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x001141ca) */
/* WARNING: Removing unreachable block (ram,0x00113818) */
/* WARNING: Removing unreachable block (ram,0x00113824) */

void FUN_00113760(double param_1,double param_2)

{
  char cVar1;
  double dVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *in_RCX;
  longlong lVar8;
  int iVar9;
  longlong *in_RDX;
  bool bVar10;
  double dVar11;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  double local_148;
  char local_140;
  double local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  double local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  ulonglong local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong local_78;
  char local_70;
  double local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  double local_40;
  char local_38 [8];
  
  if (*in_RDX == 0) {
    return;
  }
  if (*(int *)(*in_RDX + 0xc) == 0) {
    return;
  }
  local_168 = 0;
  local_160 = '\0';
  pVar7 = (pthread_key_t)&local_168;
  local_b0 = param_1;
  local_40 = param_2;
  FUN_01271d60();
  dVar11 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != 0.0) && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = dVar11;
  if (*in_RCX == 0) {
    if (((local_40 == local_b0) && (!NAN(local_40) && !NAN(local_b0))) || (*in_RDX == 0)) {
      bVar10 = true;
    }
    else {
      bVar10 = true;
      local_60[0] = '\0';
      local_68 = 0.0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = *in_RDX;
      while( true ) {
        lVar6 = (longlong)(int)local_50;
        iVar9 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar9);
        if (*(int *)(local_58 + 0xc) <= iVar9) break;
        lVar8 = *(longlong *)(local_58 + 0x10);
        local_68 = *(double *)(lVar8 + 8 + lVar6 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar8);
        pVar7 = (pthread_key_t)lVar8;
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        FUN_012642b0((dVar11 + local_40) - local_b0);
        if (local_50._4_4_ != 0) {
          if (local_50 < 0) {
            iVar9 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar9 = 0;
          }
          local_50 = CONCAT44(iVar9,(int)local_50);
        }
      }
      lVar6 = local_58;
      FUN_001159b0();
      pVar7 = (pthread_key_t)lVar6;
    }
    goto LAB_00113ffc;
  }
  dVar2 = (double)FUN_01a8fc90(local_40);
  FUN_01a8c310();
  dVar11 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == 0.0) goto LAB_00113a11;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != 0.0)) {
      FUN_00d50b20();
    }
LAB_00113a84:
    local_40 = dVar11;
  }
  else {
    local_40 = local_68;
    if (local_68 == 0.0) {
LAB_00113a11:
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_40 = local_68;
      if (local_68 == 0.0) goto LAB_00113a84;
      if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0.0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23310();
  dVar11 = local_68;
  local_88 = local_60[0];
  pcVar4 = &local_88;
  if (local_60[0] != '\0') {
    pcVar4 = local_60;
  }
  *pcVar4 = '\0';
  if ((local_60[0] != '\0') && (dVar11 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if (local_78 == 0) {
    bVar10 = false;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    bVar10 = local_68 == local_40;
    if ((local_60[0] != '\0') && (local_68 != 0.0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (dVar11 != 0.0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    FUN_00d23310();
    dVar11 = local_68;
    local_38[0] = local_60[0];
    pcVar4 = local_38;
    pcVar5 = local_60;
    if (local_60[0] == '\0') {
      pcVar5 = pcVar4;
    }
    *pcVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0.0)) {
      FUN_00d50b20();
    }
    pVar7 = (pthread_key_t)pcVar4;
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = FUN_01507970();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (dVar11 != 0.0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c98e0();
    local_a0 = FUN_01a8fc90();
    FUN_00d23310();
    dVar11 = local_68;
    pcVar4 = local_38;
    pcVar5 = local_60;
    if (local_60[0] == '\0') {
      pcVar5 = pcVar4;
    }
    local_38[0] = local_60[0];
    *pcVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0.0)) {
      FUN_00d50b20();
    }
    pVar7 = (pthread_key_t)pcVar4;
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_01507970();
    FUN_00e7b970();
    local_b8 = (ulonglong)local_68;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (dVar11 != 0.0)) {
      FUN_00d50b20();
    }
    bVar10 = true;
  }
  else {
    local_a0 = FUN_01a8fc90(local_b0);
    local_68 = (double)((ulonglong)local_68 & 0xffffffff00000000);
    FUN_00e7c240();
    bVar10 = false;
  }
  local_68 = dVar2;
  FUN_00e7b970();
  local_158 = *in_RDX;
  local_150 = '\0';
  local_148 = local_40;
  local_140 = '\0';
  local_138 = local_40;
  local_130 = '\0';
  local_128 = 0;
  local_120 = '\0';
  dVar11 = local_68;
  FUN_012910e0(DAT_0238fee8,&local_138,&local_128);
  pVar7 = SUB84(dVar11,0);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0.0) {
    FUN_00d50b20();
  }
LAB_00113ffc:
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = *in_RDX;
  local_110 = '\0';
  FUN_012e6c30();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_108 = *in_RDX;
  local_100 = '\0';
  FUN_0150ddd0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  dVar11 = local_a8;
  if (*in_RDX != 0) {
    local_60[0] = '\0';
    local_68 = 0.0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = *in_RDX;
    while( true ) {
      lVar6 = (longlong)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)(local_58 + 0xc) <= iVar9) break;
      lVar8 = *(longlong *)(local_58 + 0x10);
      local_68 = *(double *)(lVar8 + 8 + lVar6 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = FUN_01508530();
      local_b8 = FUN_00e7bdb0();
      cVar1 = '\0';
      if ((local_a0._4_4_ != 0) && (local_b8 >> 0x20 != 0)) {
        cVar1 = FUN_00e7c000();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        bVar10 = true;
        break;
      }
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
    }
    FUN_001159b0();
    dVar11 = local_a8;
  }
  local_a8 = dVar11;
  if (bVar10) {
    local_f8 = *in_RDX;
    local_f0 = '\0';
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_e8 = *in_RDX;
  local_e0 = '\0';
  local_d0 = '\0';
  local_d8 = dVar11;
  FUN_0127e4d0(0);
  if ((local_d0 != '\0') && (local_d8 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = *in_RDX;
  local_c0 = '\0';
  FUN_0127f8b0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (dVar11 != 0.0) {
    FUN_00d50b20();
  }
  return;
}


