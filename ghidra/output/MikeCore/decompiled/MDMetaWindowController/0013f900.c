// Function: FUN_0013f900
// Address: 0013f900
// Size: 6716 bytes
// Class: MDMetaWindowController
// String references:
//   "%I"


/* WARNING: Removing unreachable block (ram,0x00140260) */
/* WARNING: Removing unreachable block (ram,0x0014026c) */
/* WARNING: Removing unreachable block (ram,0x0013f953) */
/* WARNING: Removing unreachable block (ram,0x0013f95f) */
/* WARNING: Removing unreachable block (ram,0x0013f9a5) */
/* WARNING: Removing unreachable block (ram,0x0013f9b1) */
/* WARNING: Removing unreachable block (ram,0x0014027a) */
/* WARNING: Removing unreachable block (ram,0x00140286) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013f900(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  pthread_key_t pVar16;
  longlong *in_RCX;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar28;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  float local_190;
  int local_18c;
  int local_188;
  int local_184;
  longlong local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
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
  undefined8 local_d8;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a4;
  double local_a0;
  longlong *local_60;
  undefined4 local_58;
  int local_54;
  float local_4c;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  uVar23 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar22 = (undefined4)param_2;
  cVar8 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar8 != '\0') {
    return;
  }
  FUN_0006bed0(param_1);
  (**(code **)(*unaff_RDI + 0x948))();
  lVar13 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar13 == 0) {
    return;
  }
  local_b8 = (longlong *)FUN_01e436c0();
  local_d8 = (double)CONCAT44(uVar23,uVar22);
  fVar25 = *(float *)(unaff_RDI + 0x2b);
  fVar24 = *(float *)((longlong)unaff_RDI + 0x15c);
  uStack_b0 = extraout_XMM0_Dc;
  uStack_ac = extraout_XMM0_Dd;
  (**(code **)(*unaff_RDI + 0x948))();
  pvVar12 = _pthread_getspecific((pthread_key_t)in_RCX);
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
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_a0 = *(double *)(lVar13 + 0x38);
  if ((longlong *)unaff_RDI[0x3c] == (longlong *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (**(code **)(*(longlong *)unaff_RDI[0x3c] + 0x920))();
  }
  (**(code **)(*unaff_RDI + 0x958))();
  lVar17 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar13;
  if (lVar17 == 0) {
    (**(code **)(*unaff_RDI + 0x938))();
    lVar13 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar13 == 0) {
      iVar19 = 0;
      lVar13 = 0;
      goto LAB_0013fd2f;
    }
    (**(code **)(*unaff_RDI + 0x938))();
    iVar19 = *(int *)(local_40 + 0x100);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x938))();
    (**(code **)(*unaff_RDI + 0x940))();
    local_4c = (float)(**(code **)(*(longlong *)unaff_RDI[0x4e] + 0x930))();
    uVar22 = (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x930))();
    local_a4 = (**(code **)(*(longlong *)unaff_RDI[0x50] + 0x930))();
    uVar23 = (**(code **)(*(longlong *)unaff_RDI[0x51] + 0x930))();
    in_RCX = (longlong *)(ulonglong)*(byte *)((longlong)unaff_RDI + 0x189);
    lVar13 = FUN_01647910(local_4c,uVar22,local_a4,uVar23);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x958))();
    iVar19 = *(int *)(local_40 + 0x19c);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x958))();
    local_4c = (float)(**(code **)(*(longlong *)unaff_RDI[0x4e] + 0x930))();
    uVar22 = (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x930))();
    local_a4 = (**(code **)(*(longlong *)unaff_RDI[0x50] + 0x930))();
    uVar23 = (**(code **)(*(longlong *)unaff_RDI[0x51] + 0x930))();
    lVar13 = FUN_0162a940(local_4c,uVar22,local_a4,uVar23);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x189) = 0;
LAB_0013fd2f:
  if (DAT_02801608 != 0) {
    lVar13 = DAT_02801608;
    iVar9 = 0;
  }
  (**(code **)(*unaff_RDI + 0x928))();
  if (local_40 == 0) {
    bVar21 = false;
  }
  else {
    (**(code **)(*unaff_RDI + 0x928))();
    bVar21 = *(char *)((longlong)local_60 + 0xac) != '\0';
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
    local_4c = local_4c * DAT_0239011c;
  }
  local_a4 = (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x920))();
  iVar10 = (**(code **)(*(longlong *)unaff_RDI[0x42] + 0x920))();
  local_b8._0_4_ = (float)local_b8 + (float)local_d8 * DAT_0239011c;
  local_d8 = (double)(DAT_0239012c + (float)local_b8);
  dVar4 = (double)local_4c;
  iVar19 = (int)((local_d8 / (double)fVar24) / dVar4);
  if ((((iVar9 == 0xd) && (lVar13 != 0)) && (-1 < iVar19)) && (iVar19 < (int)local_a0._0_4_)) {
    FUN_0173ba80();
    lVar17 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    local_190 = *(float *)((longlong)unaff_RDI + 0x15c);
    local_18c = iVar19;
    iVar19 = FUN_01483610(DAT_023941e4);
    iVar11 = FUN_01483610(DAT_023941e8);
    local_188 = FUN_01483610(DAT_023941ec);
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
    puVar1 = *(undefined4 **)(local_180 + 0x10);
    puVar2 = *(undefined4 **)(lVar7 + 0x10);
    *puVar1 = *(undefined4 *)(lVar13 + (longlong)(iVar9 + iVar19) * 4);
    *puVar2 = *(undefined4 *)(lVar13 + (longlong)(iVar9 + iVar11) * 4);
    puVar1[1] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 10 + iVar19) * 4);
    puVar2[1] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 10 + iVar11) * 4);
    puVar1[2] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x14 + iVar19) * 4);
    puVar2[2] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x14 + iVar11) * 4);
    puVar1[3] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x1e + iVar19) * 4);
    puVar2[3] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x1e + iVar11) * 4);
    puVar1[4] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x28 + iVar19) * 4);
    puVar2[4] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x28 + iVar11) * 4);
    puVar1[5] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x32 + iVar19) * 4);
    puVar2[5] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x32 + iVar11) * 4);
    puVar1[6] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x3c + iVar19) * 4);
    puVar2[6] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x3c + iVar11) * 4);
    puVar1[7] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x46 + iVar19) * 4);
    puVar2[7] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x46 + iVar11) * 4);
    puVar1[8] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x50 + iVar19) * 4);
    puVar2[8] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x50 + iVar11) * 4);
    puVar1[9] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x5a + iVar19) * 4);
    puVar2[9] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x5a + iVar11) * 4);
    puVar1[10] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 100 + iVar19) * 4);
    puVar2[10] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 100 + iVar11) * 4);
    puVar1[0xb] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x6e + iVar19) * 4);
    puVar2[0xb] = *(undefined4 *)(lVar13 + (longlong)(iVar9 + 0x6e + iVar11) * 4);
    in_RCX = (longlong *)(ulonglong)(uint)(local_188 + iVar9);
    uVar22 = FUN_00e7d780(*(undefined4 *)(lVar13 + (longlong)(local_188 + iVar9) * 4));
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
    fVar24 = (float)(**(code **)(*(longlong *)unaff_RDI[0x4b] + 0x930))();
    (**(code **)(*unaff_RDI + 0x938))();
    lVar17 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),iVar9 < 8);
    fVar26 = DAT_02390124;
    if (lVar17 == 0) {
      in_RCX = (longlong *)&DAT_023942b0;
      fVar26 = *(float *)(&DAT_023942b0 + (ulonglong)(iVar9 < 8) * 4);
    }
    local_d8 = (double)CONCAT44(local_d8._4_4_,fVar26);
    fVar24 = (float)_powf(DAT_023908e0,fVar24 + DAT_02390d00);
    FUN_01d48b40(DAT_02390124);
    FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
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
    fVar25 = fVar25 / DAT_023941e0;
    fVar24 = fVar24 * (float)local_d8 * DAT_023941f0;
    if (iVar19 < 3) {
      lVar17 = 0;
      do {
        if (lVar17 == 0) {
          (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))
                    ((float)local_b8 -
                     *(float *)(lVar13 + (longlong)(iVar19 * 0x7e4) * 4 + lVar17 * 4) * fVar24,
                     *(float *)(unaff_RDI + 0x2b) - ((float)(int)lVar17 * fVar25 + DAT_0239011c));
        }
        else {
          (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x7e4);
    }
    else {
      lVar17 = 0;
      do {
        if (lVar17 == 0) {
          (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))
                    (*(float *)(lVar13 + (longlong)(iVar19 * 0x7e4) * 4 + lVar17 * 4) * fVar24 +
                     (float)local_b8,
                     *(float *)(unaff_RDI + 0x2b) - ((float)(int)lVar17 * fVar25 + DAT_0239011c));
        }
        else {
          (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x7e4);
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
    uVar15 = *(uint *)(unaff_RDI + 0x34);
    if (uVar15 < 0x7e4) {
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)unaff_RDI[0x2b]);
      local_4c = (DAT_02390124 / *(float *)((longlong)unaff_RDI + 0x15c)) / local_4c;
      fVar26 = (float)(int)local_a0._0_4_ / local_4c;
      lVar17 = FUN_00e83010();
      FUN_01d48b40(DAT_02390124);
      local_d8 = (double)(ulonglong)(uint)(int)fVar26;
      FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
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
      fVar25 = (float)local_b8 - (fVar25 * (float)(int)uVar15 + DAT_0239011c);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,fVar25);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
                (DAT_02390114,fVar25,(float)SUB84(dVar4,0) + DAT_02390114);
      FUN_01cfbee0(0,0,DAT_02390124);
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
        uVar20 = (ulonglong)dVar4 & 0xffffffff;
        uVar14 = 0;
        do {
          uVar15 = (uint)((float)(int)uVar14 * local_4c);
          in_RCX = (longlong *)(ulonglong)uVar15;
          if ((int)local_a0._0_4_ <= (int)uVar15) break;
          in_RCX = (longlong *)((longlong)(int)uVar15 * 0x7e4);
          *(undefined4 *)(lVar17 + uVar14 * 4) =
               *(undefined4 *)
                (lVar13 + (longlong)((longlong)(int)unaff_RDI[0x34] + (longlong)in_RCX) * 4);
          uVar14 = uVar14 + 1;
        } while (uVar20 != uVar14);
        uVar14 = 0;
        do {
          if (uVar14 == 0) {
            (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))
                      ((float)(int)uVar14 + DAT_02390114,
                       (float)local_b8 - *(float *)(lVar17 + uVar14 * 4) * fVar24);
          }
          else {
            (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))();
          }
          uVar14 = uVar14 + 1;
        } while (uVar20 != uVar14);
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
      FUN_00e83070();
    }
  }
  if (local_a4 != 0) {
    dVar4 = (double)unaff_RDI[0x35];
    fVar25 = (float)_exp2f((float)(double)unaff_RDI[0x36] * DAT_023941f4);
    local_a0 = (double)CONCAT44(local_a0._4_4_,
                                (float)dVar4 * *(float *)((longlong)unaff_RDI + 0x15c));
    FUN_01cfbee0(DAT_02390128,0,DAT_02390128);
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
    FUN_01d48b40(DAT_02390124);
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
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar25 = fVar25 * DAT_023941f8;
    fVar24 = local_a0._0_4_ + DAT_02390114;
    local_4c = DAT_023908e0 + fVar24;
    local_d8 = (double)CONCAT44(local_d8._4_4_,DAT_023941fc + fVar24);
    fVar26 = 0.0;
    local_a0 = (double)CONCAT44(local_a0._4_4_,fVar24);
    fVar24 = DAT_02394200 + fVar24;
    iVar9 = 1;
    do {
      pVar16 = (pthread_key_t)in_RCX;
      FUN_01e3f820();
      fVar27 = (float)_logf((float)iVar9 * fVar25 * DAT_02394204);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,fVar27 * DAT_02394208);
      fVar27 = fVar26 - (fVar27 * DAT_02394208 + _DAT_0239420c) * *(float *)(unaff_RDI + 0x2c);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(local_a0._0_4_,fVar27,local_4c,fVar27);
      (**(code **)(*unaff_RDI + 0x948))();
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
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar3 = (longlong *)*unaff_RSI;
      (**(code **)(*unaff_RDI + 0x948))();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d820();
      plVar18 = local_60;
      pvVar12 = _pthread_getspecific(pVar16);
      plVar6 = local_60;
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar18 = plVar6, lVar13 != 0)) {
        plVar18 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
      lVar13 = DAT_026e3bc8;
      local_b8 = plVar3;
      if (DAT_026e3bc8 != 0) {
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
      uVar22 = (**(code **)(*local_b8 + 0x3f0))((float)local_d8,fVar27 + DAT_02394210);
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
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      plVar3 = (longlong *)*unaff_RSI;
      local_58 = 1;
      local_60 = &DAT_024cc6f0;
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
    FUN_01cfbee0(DAT_02390120,DAT_02394214,DAT_02390120);
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
      pVar16 = (pthread_key_t)in_RCX;
      fVar28 = 0.0;
      uVar22 = 0;
      fVar26 = (float)_logf((fVar25 / (float)iVar9) * DAT_02394204);
      fVar26 = fVar26 * DAT_02394208;
      FUN_01e3f820();
      fVar27 = fVar28 - (fVar26 + _DAT_0239420c) * *(float *)(unaff_RDI + 0x2c);
      local_b8 = (longlong *)CONCAT44(fVar28,fVar27);
      uStack_b0 = uVar22;
      uStack_ac = uVar22;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(local_a0._0_4_,fVar27,local_4c,fVar27);
      (**(code **)(*unaff_RDI + 0x948))();
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
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar3 = (longlong *)*unaff_RSI;
      (**(code **)(*unaff_RDI + 0x948))();
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d820();
      plVar18 = local_60;
      pvVar12 = _pthread_getspecific(pVar16);
      plVar6 = local_60;
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar18 = plVar6, lVar13 != 0)) {
        plVar18 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
      lVar13 = DAT_026e3bc8;
      if (DAT_026e3bc8 != 0) {
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
      uVar22 = (**(code **)(*plVar3 + 0x3f0))((float)local_d8,(float)local_b8 + DAT_02394210);
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
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar22 = FUN_00d50b20();
      }
      plVar3 = (longlong *)*unaff_RSI;
      local_58 = 1;
      local_60 = &DAT_024cc6f0;
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
      (**(code **)(*plVar3 + 0x3f0))(fVar24,(float)local_b8 + DAT_023908ec);
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


