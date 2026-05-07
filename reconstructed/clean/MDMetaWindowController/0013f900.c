// Function: FUN_0013f900
// Address: 0013f900
// Size: 6716 bytes
// Class: MDMetaWindowController
// String references:
//   "%I"

void FUN_0013f900(uint32_t param_1,uint64_t param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t *plVar3;
  double dVar4;
  double dVar5;
  int64_t *plVar6;
  int64_t lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint uVar15;
  void* pVar16;
  int64_t *in_RCX;
  int64_t lVar17;
  int64_t *plVar18;
  void*arg1;
  int64_t *this_ptr;
  int iVar19;
  uint64_t uVar20;
  bool bVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint32_t extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar28;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  float local_190;
  int local_18c;
  int local_188;
  int local_184;
  int64_t local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  int64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  int local_a4;
  double local_a0;
  int64_t *local_60;
  uint32_t local_58;
  int local_54;
  float local_4c;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  uVar23 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar22 = (uint32_t)param_2;
  cVar8 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar8 != '\0') {
    return;
  }
  FUN_0006bed0(param_1);
  (**(code **)(*this_ptr + 0x948))();
  lVar13 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar13 == 0) {
    return;
  }
  local_b8 = (int64_t *)FUN_01e436c0();
  local_d8 = (double)CONCAT44(uVar23,uVar22);
  fVar25 = *(float *)(this_ptr + 0x2b);
  fVar24 = *(float *)((int64_t)this_ptr + 0x15c);
  uStack_b0 = extraout_XMM0_Dc;
  uStack_ac = extraout_XMM0_Dd;
  (**(code **)(*this_ptr + 0x948))();
  pvVar12 = _pthread_getspecific((void*)in_RCX);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  lVar13 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_a0 = *(double *)(lVar13 + 0x38);
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x920))();
  }
  (**(code **)(*this_ptr + 0x958))();
  lVar17 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar13;
  if (lVar17 == 0) {
    (**(code **)(*this_ptr + 0x938))();
    lVar13 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar13 == 0) {
      iVar19 = 0;
      lVar13 = 0;
      goto LAB_0013fd2f;
    }
    (**(code **)(*this_ptr + 0x938))();
    iVar19 = *(int *)(local_40 + 0x100);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x938))();
    (**(code **)(*this_ptr + 0x940))();
    local_4c = (float)(**(code **)(*(int64_t *)this_ptr[0x4e] + 0x930))();
    uVar22 = (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x930))();
    local_a4 = (**(code **)(*(int64_t *)this_ptr[0x50] + 0x930))();
    uVar23 = (**(code **)(*(int64_t *)this_ptr[0x51] + 0x930))();
    in_RCX = (int64_t *)(uint64_t)*(byte *)((int64_t)this_ptr + 0x189);
    lVar13 = FUN_01647910(local_4c,uVar22,local_a4,uVar23);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x958))();
    iVar19 = *(int *)(local_40 + 0x19c);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x958))();
    local_4c = (float)(**(code **)(*(int64_t *)this_ptr[0x4e] + 0x930))();
    uVar22 = (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x930))();
    local_a4 = (**(code **)(*(int64_t *)this_ptr[0x50] + 0x930))();
    uVar23 = (**(code **)(*(int64_t *)this_ptr[0x51] + 0x930))();
    lVar13 = FUN_0162a940(local_4c,uVar22,local_a4,uVar23);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)((int64_t)this_ptr + 0x189) = 0;
LAB_0013fd2f:
  if (g_02801608 != 0) {
    lVar13 = g_02801608;
    iVar9 = 0;
  }
  (**(code **)(*this_ptr + 0x928))();
  if (local_40 == 0) {
    bVar21 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x928))();
    bVar21 = *(char *)((int64_t)local_60 + 0xac) != '\0';
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_4c = (float)local_a0;
  iVar10 = iVar19 * 2 + -1;
  if (!bVar21) {
    iVar10 = iVar19;
  }
  local_a0 = (double)CONCAT44(local_a0._4_4_,iVar10);
  if (bVar21) {
    local_4c = local_4c * g_0239011c;
  }
  local_a4 = (**(code **)(*(int64_t *)this_ptr[0x41] + 0x920))();
  iVar10 = (**(code **)(*(int64_t *)this_ptr[0x42] + 0x920))();
  local_b8._0_4_ = (float)local_b8 + (float)local_d8 * g_0239011c;
  local_d8 = (double)(g_0239012c + (float)local_b8);
  dVar4 = (double)local_4c;
  iVar19 = (int)((local_d8 / (double)fVar24) / dVar4);
  if ((((iVar9 == 0xd) && (lVar13 != 0)) && (-1 < iVar19)) && (iVar19 < (int)local_a0._0_4_)) {
    FUN_0173ba80();
    lVar17 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    local_190 = *(float *)((int64_t)this_ptr + 0x15c);
    local_18c = iVar19;
    iVar19 = FUN_01483610(g_023941e4);
    iVar11 = FUN_01483610(g_023941e8);
    local_188 = FUN_01483610(g_023941ec);
    FUN_00c8e690();
    local_180 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00c8e690();
    lVar7 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_184 = iVar9;
    FUN_00c92170();
    FUN_00c92160();
    dVar5 = local_d8 / (double)local_190;
    ___bzero();
    iVar9 = (int)(dVar5 / dVar4) * 0x7e4;
    puVar1 = *(void**)(local_180 + 0x10);
    puVar2 = *(void**)(lVar7 + 0x10);
    *puVar1 = *(void*)(lVar13 + (int64_t)(iVar9 + iVar19) * 4);
    *puVar2 = *(void*)(lVar13 + (int64_t)(iVar9 + iVar11) * 4);
    puVar1[1] = *(void*)(lVar13 + (int64_t)(iVar9 + 10 + iVar19) * 4);
    puVar2[1] = *(void*)(lVar13 + (int64_t)(iVar9 + 10 + iVar11) * 4);
    puVar1[2] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x14 + iVar19) * 4);
    puVar2[2] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x14 + iVar11) * 4);
    puVar1[3] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x1e + iVar19) * 4);
    puVar2[3] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x1e + iVar11) * 4);
    puVar1[4] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x28 + iVar19) * 4);
    puVar2[4] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x28 + iVar11) * 4);
    puVar1[5] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x32 + iVar19) * 4);
    puVar2[5] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x32 + iVar11) * 4);
    puVar1[6] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x3c + iVar19) * 4);
    puVar2[6] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x3c + iVar11) * 4);
    puVar1[7] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x46 + iVar19) * 4);
    puVar2[7] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x46 + iVar11) * 4);
    puVar1[8] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x50 + iVar19) * 4);
    puVar2[8] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x50 + iVar11) * 4);
    puVar1[9] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x5a + iVar19) * 4);
    puVar2[9] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x5a + iVar11) * 4);
    puVar1[10] = *(void*)(lVar13 + (int64_t)(iVar9 + 100 + iVar19) * 4);
    puVar2[10] = *(void*)(lVar13 + (int64_t)(iVar9 + 100 + iVar11) * 4);
    puVar1[0xb] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x6e + iVar19) * 4);
    puVar2[0xb] = *(void*)(lVar13 + (int64_t)(iVar9 + 0x6e + iVar11) * 4);
    in_RCX = (int64_t *)(uint64_t)(uint)(local_188 + iVar9);
    uVar22 = FUN_00e7d780(*(void*)(lVar13 + (int64_t)(local_188 + iVar9) * 4));
    FUN_019847b0(extraout_XMM0_Da,uVar22);
    iVar9 = local_184;
    iVar19 = local_18c;
    FUN_00d50b20();
    FUN_00d50b20();
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  if (((iVar10 != 0) && (lVar13 != 0)) && ((-1 < iVar19 && (iVar19 < (int)local_a0._0_4_)))) {
    fVar24 = (float)(**(code **)(*(int64_t *)this_ptr[0x4b] + 0x930))();
    (**(code **)(*this_ptr + 0x938))();
    lVar17 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),iVar9 < 8);
    fVar26 = g_02390124;
    if (lVar17 == 0) {
      in_RCX = (int64_t *)&g_023942b0;
      fVar26 = *(float *)(&g_023942b0 + (uint64_t)(iVar9 < 8) * 4);
    }
    local_d8 = (double)CONCAT44(local_d8._4_4_,fVar26);
    fVar24 = (float)_powf(g_023908e0,fVar24 + g_02390d00);
    FUN_01d48b40(g_02390124);
    FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
    local_178 = local_40;
    local_170 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_170 = '\x01';
    FUN_01d488d0();
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fVar25 = fVar25 / g_023941e0;
    fVar24 = fVar24 * (float)local_d8 * g_023941f0;
    if (iVar19 < 3) {
      lVar17 = 0;
      do {
        if (lVar17 == 0) {
          (**(code **)(*(int64_t *)*arg1 + 0x4d8))
                    ((float)local_b8 -
                     *(float *)(lVar13 + (int64_t)(iVar19 * 0x7e4) * 4 + lVar17 * 4) * fVar24,
                     *(float *)(this_ptr + 0x2b) - ((float)(int)lVar17 * fVar25 + g_0239011c));
        }
        else {
          (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x7e4);
    }
    else {
      lVar17 = 0;
      do {
        if (lVar17 == 0) {
          (**(code **)(*(int64_t *)*arg1 + 0x4d8))
                    (*(float *)(lVar13 + (int64_t)(iVar19 * 0x7e4) * 4 + lVar17 * 4) * fVar24 +
                     (float)local_b8,
                     *(float *)(this_ptr + 0x2b) - ((float)(int)lVar17 * fVar25 + g_0239011c));
        }
        else {
          (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x7e4);
    }
    (**(code **)(*(int64_t *)*arg1 + 0x520))();
    uVar15 = *(uint *)(this_ptr + 0x34);
    if (uVar15 < 0x7e4) {
      local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,(int)this_ptr[0x2b]);
      local_4c = (g_02390124 / *(float *)((int64_t)this_ptr + 0x15c)) / local_4c;
      fVar26 = (float)(int)local_a0._0_4_ / local_4c;
      lVar17 = FUN_00e83010();
      FUN_01d48b40(g_02390124);
      local_d8 = (double)(uint64_t)(uint)(int)fVar26;
      FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
      local_168 = local_40;
      local_160 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_160 = '\x01';
      FUN_01d488d0();
      dVar4 = local_d8;
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      fVar25 = (float)local_b8 - (fVar25 * (float)(int)uVar15 + g_0239011c);
      local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,fVar25);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))
                (g_02390114,fVar25,(float)SUB84(dVar4,0) + g_02390114);
      FUN_01cfbee0(0,0,g_02390124);
      local_158 = local_40;
      local_150 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_150 = '\x01';
      FUN_01d488d0();
      dVar4 = local_d8;
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (0 < SUB84(dVar4,0)) {
        uVar20 = (uint64_t)dVar4 & 0xffffffff;
        uVar14 = 0;
        do {
          uVar15 = (uint)((float)(int)uVar14 * local_4c);
          in_RCX = (int64_t *)(uint64_t)uVar15;
          if ((int)local_a0._0_4_ <= (int)uVar15) break;
          in_RCX = (int64_t *)((int64_t)(int)uVar15 * 0x7e4);
          *(void*)(lVar17 + uVar14 * 4) =
               *(void*)
                (lVar13 + (int64_t)((int64_t)(int)this_ptr[0x34] + (int64_t)in_RCX) * 4);
          uVar14 = uVar14 + 1;
        } while (uVar20 != uVar14);
        uVar14 = 0;
        do {
          if (uVar14 == 0) {
            (**(code **)(*(int64_t *)*arg1 + 0x4d8))
                      ((float)(int)uVar14 + g_02390114,
                       (float)local_b8 - *(float *)(lVar17 + uVar14 * 4) * fVar24);
          }
          else {
            (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
          }
          uVar14 = uVar14 + 1;
        } while (uVar20 != uVar14);
      }
      (**(code **)(*(int64_t *)*arg1 + 0x520))();
      FUN_00e83070();
    }
  }
  if (local_a4 != 0) {
    dVar4 = (double)this_ptr[0x35];
    fVar25 = (float)_exp2f((float)(double)this_ptr[0x36] * g_023941f4);
    local_a0 = (double)CONCAT44(local_a0._4_4_,
                                (float)dVar4 * *(float *)((int64_t)this_ptr + 0x15c));
    FUN_01cfbee0(g_02390128,0,g_02390128);
    local_148 = local_40;
    local_140 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_140 = '\x01';
    FUN_01d488d0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(g_02390124);
    FUN_01cb4790();
    (**(code **)(*local_60 + 0x378))();
    local_138 = local_40;
    local_130 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_130 = '\x01';
    FUN_01d48a10();
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar25 = fVar25 * g_023941f8;
    fVar24 = local_a0._0_4_ + g_02390114;
    local_4c = g_023908e0 + fVar24;
    local_d8 = (double)CONCAT44(local_d8._4_4_,g_023941fc + fVar24);
    fVar26 = 0.0;
    local_a0 = (double)CONCAT44(local_a0._4_4_,fVar24);
    fVar24 = g_02394200 + fVar24;
    iVar9 = 1;
    do {
      pVar16 = (void*)in_RCX;
      FUN_01e3f820();
      fVar27 = (float)_logf((float)iVar9 * fVar25 * g_02394204);
      local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,fVar27 * g_02394208);
      fVar27 = fVar26 - (fVar27 * g_02394208 + g_0239420c) * *(float *)(this_ptr + 0x2c);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))(local_a0._0_4_,fVar27,local_4c,fVar27);
      (**(code **)(*this_ptr + 0x948))();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d820();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar22 = FUN_0173fc90((float)local_b8);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar3 = (int64_t *)*arg1;
      (**(code **)(*this_ptr + 0x948))();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d820();
      plVar18 = local_60;
      pvVar12 = _pthread_getspecific(pVar16);
      plVar6 = local_60;
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar18 = plVar6, lVar13 != 0)) {
        plVar18 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
      lVar13 = g_026e3bc8;
      local_b8 = plVar3;
      if (g_026e3bc8 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar13;
      local_1c8 = '\x01';
      local_1c0 = 0;
      local_1b8 = '\0';
      in_RCX = &local_1d0;
      (**(code **)(*plVar18 + 0x3c8))(in_RCX,uVar22,&local_1c0);
      local_128 = local_40;
      local_120 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_120 = '\x01';
      uVar22 = (**(code **)(*local_b8 + 0x3f0))((float)local_d8,fVar27 + g_02394210);
      if ((local_120 != '\0') && (local_128 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      plVar3 = (int64_t *)*arg1;
      local_58 = 1;
      local_60 = &g_024cc6f0;
      local_54 = iVar9;
      FUN_00d8cb40(uVar22,&local_60);
      local_118 = local_40;
      local_110 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_110 = '\x01';
      (**(code **)(*plVar3 + 0x3f0))(fVar24);
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x21);
    FUN_01cfbee0(g_02390120,g_02394214,g_02390120);
    local_108 = local_40;
    local_100 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = '\x01';
    FUN_01d488d0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    iVar9 = 2;
    do {
      pVar16 = (void*)in_RCX;
      fVar28 = 0.0;
      uVar22 = 0;
      fVar26 = (float)_logf((fVar25 / (float)iVar9) * g_02394204);
      fVar26 = fVar26 * g_02394208;
      FUN_01e3f820();
      fVar27 = fVar28 - (fVar26 + g_0239420c) * *(float *)(this_ptr + 0x2c);
      local_b8 = (int64_t *)CONCAT44(fVar28,fVar27);
      uStack_b0 = uVar22;
      uStack_ac = uVar22;
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))(local_a0._0_4_,fVar27,local_4c,fVar27);
      (**(code **)(*this_ptr + 0x948))();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d820();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990(fVar26);
      }
      uVar22 = FUN_0173fc90(fVar26);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar3 = (int64_t *)*arg1;
      (**(code **)(*this_ptr + 0x948))();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d820();
      plVar18 = local_60;
      pvVar12 = _pthread_getspecific(pVar16);
      plVar6 = local_60;
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar18 = plVar6, lVar13 != 0)) {
        plVar18 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
      lVar13 = g_026e3bc8;
      if (g_026e3bc8 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar13;
      local_1a8 = '\x01';
      local_1a0 = 0;
      local_198 = '\0';
      in_RCX = &local_1b0;
      (**(code **)(*plVar18 + 0x3c8))(in_RCX,uVar22,&local_1a0);
      local_f8 = local_40;
      local_f0 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_f0 = '\x01';
      uVar22 = (**(code **)(*plVar3 + 0x3f0))((float)local_d8,(float)local_b8 + g_02394210);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      plVar3 = (int64_t *)*arg1;
      local_58 = 1;
      local_60 = &g_024cc6f0;
      local_54 = iVar9;
      FUN_00d8cb40(uVar22,&local_60);
      local_e8 = local_40;
      local_e0 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_e0 = '\x01';
      (**(code **)(*plVar3 + 0x3f0))(fVar24,(float)local_b8 + g_023908ec);
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0xd);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

