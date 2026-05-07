// Function: FUN_01759fb0
// Address: 01759fb0
// Size: 9301 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0175c46d) */
/* WARNING: Removing unreachable block (ram,0x0175b0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_01759fb0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  code cVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  undefined1 uVar23;
  undefined *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 *puVar31;
  longlong lVar32;
  undefined8 uVar33;
  undefined7 uVar37;
  void *pvVar34;
  longlong lVar35;
  code *pcVar36;
  undefined4 in_ECX;
  int iVar38;
  int iVar39;
  pthread_key_t pVar40;
  code *in_RDX;
  code *pcVar41;
  int iVar42;
  longlong lVar43;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar44;
  size_t sVar45;
  ulonglong uVar46;
  int iVar47;
  code *pcVar48;
  longlong lVar49;
  code *pcVar50;
  ulonglong uVar51;
  bool bVar52;
  uint uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 in_XMM4 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int local_res8;
  size_t local_res10;
  undefined4 local_res18;
  char local_res20;
  code *local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined1 local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  code *local_1c0;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  code *local_1a8;
  undefined1 local_1a0;
  code *local_198;
  undefined1 local_190;
  code *local_188;
  char local_180;
  longlong local_178;
  char local_170;
  code *local_168;
  char local_160;
  code *local_158;
  char local_150;
  code *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  ulonglong local_108;
  uint local_100;
  int local_fc;
  longlong local_f8;
  char local_f0;
  undefined8 *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  char local_c0;
  undefined4 local_b4;
  float local_b0;
  int local_ac;
  code *local_a8;
  undefined8 local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  char local_50;
  undefined *local_48;
  code *local_40;
  
  local_68 = (code *)CONCAT44(local_68._4_4_,param_2);
  bVar52 = true;
  local_1b0 = param_3;
  local_114 = param_1;
  local_110 = in_ECX;
  local_b4 = param_4;
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
LAB_0175a15a:
    local_d0 = (code *)0x0;
    bVar19 = false;
  }
  else {
    local_b4._0_1_ = (char)param_4;
    local_d8 = (code *)CONCAT44(local_d8._4_4_,local_res10);
    sVar45 = local_res10;
    uVar23 = (char)local_b4;
    FUN_0175d1d0(local_res8,uVar23,local_res10,local_res18);
    local_d0 = local_58;
    if (local_58 == (code *)0x0) goto LAB_0175a15a;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    uVar26 = *(uint *)(local_d0 + 0x18);
    uVar28 = uVar26 + 3;
    if (-1 < (int)uVar26) {
      uVar28 = uVar26;
    }
    local_90 = (code *)(ulonglong)uVar28;
    local_78 = in_RDX;
    FUN_00c8e690();
    local_a8 = local_58;
    if ((((local_50 == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    puVar31 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pcVar50 = (code *)&DAT_025f0d98;
    *puVar31 = &DAT_025f0d98;
    puVar31[2] = 0;
    puVar31[3] = 0;
    puVar31[4] = 0;
    puVar31[5] = 0;
    puVar31[6] = 0;
    puVar31[7] = 0;
    (*DAT_025f0db0)();
    auVar63 = _DAT_02411250;
    fVar57 = _UNK_0241124c;
    fVar56 = _UNK_02411248;
    fVar55 = _UNK_02411244;
    fVar54 = _DAT_02411240;
    uVar22 = _UNK_0239014c;
    uVar53 = _UNK_02390148;
    uVar21 = _UNK_02390144;
    uVar28 = _DAT_02390140;
    uVar25 = (int)local_90 >> 2;
    local_90 = (code *)(ulonglong)uVar25;
    if (3 < (int)uVar26) {
      lVar35 = *(longlong *)(local_d0 + 0x10);
      pcVar50 = local_90;
      if (uVar25 < 4) {
        pcVar41 = (code *)0x0;
        uVar28 = DAT_023b3e04;
        fVar54 = DAT_02394270;
        uVar21 = _DAT_02390140;
      }
      else {
        pcVar41 = (code *)(ulonglong)(uVar25 & 0xfffffffc);
        uVar51 = 0;
        do {
          auVar4 = *(undefined1 (*) [16])(lVar35 + uVar51);
          auVar61 = sqrtps(in_XMM4,auVar4);
          auVar62._0_4_ = auVar61._0_4_ & uVar28;
          auVar62._4_4_ = auVar61._4_4_ & uVar21;
          auVar62._8_4_ = auVar61._8_4_ & uVar53;
          auVar62._12_4_ = auVar61._12_4_ & uVar22;
          auVar61._4_4_ = -(uint)(auVar4._4_4_ == fVar55);
          auVar61._0_4_ = -(uint)(auVar4._0_4_ == fVar54);
          auVar61._8_4_ = -(uint)(auVar4._8_4_ == fVar56);
          auVar61._12_4_ = -(uint)(auVar4._12_4_ == fVar57);
          in_XMM4 = blendvps(auVar62,auVar63,auVar61);
          *(undefined1 (*) [16])(lVar35 + uVar51) = in_XMM4;
          uVar51 = uVar51 + 0x10;
        } while (((longlong)local_90 * 4 & 0xfffffffffffffff0U) != uVar51);
        uVar28 = DAT_023b3e04;
        fVar54 = DAT_02394270;
        uVar21 = _DAT_02390140;
        if (pcVar41 == local_90) goto LAB_0175a23e;
      }
      do {
        fVar55 = *(float *)(lVar35 + (longlong)pcVar41 * 4);
        uVar53 = -(uint)(fVar55 <= fVar54);
        *(uint *)(lVar35 + (longlong)pcVar41 * 4) =
             uVar53 & uVar28 | ~uVar53 & (uint)SQRT(fVar55) & uVar21;
        pcVar41 = pcVar41 + 1;
      } while (local_90 != pcVar41);
    }
LAB_0175a23e:
    local_e8 = puVar31;
    if ((char)local_b4 == '\0') {
      local_c8 = local_d0;
      local_c0 = '\0';
      FUN_00c8e4f0();
      local_80 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (code *)0x0) && (FUN_00d50b00(local_58), local_50 != '\0')) &&
           (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_c0 != '\0') && (local_c8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pcVar50 = local_80;
      FUN_00c92170();
      uVar33 = FUN_00c92160();
      local_a0 = CONCAT71((int7)((ulonglong)uVar33 >> 8),pcVar50 != (code *)0x0);
      local_1e8 = *(longlong *)(pcVar50 + 0x10);
      FUN_015c15b0(local_68._0_4_,(ulonglong)local_90 & 0xffffffff);
      local_1e0 = *(longlong *)(pcVar50 + 0x10);
      FUN_015b3230();
      pcVar50 = local_a8;
      if (0xb < (int)uVar26) {
        uVar26 = (int)local_90 - 1;
        uVar51 = 2;
        if (2 < (int)uVar26) {
          uVar51 = (ulonglong)uVar26;
        }
        uVar46 = 1;
        do {
          lVar35 = *(longlong *)(local_80 + 0x10);
          fVar54 = *(float *)(lVar35 + uVar46 * 4);
          pfVar1 = (float *)(lVar35 + -4 + uVar46 * 4);
          if ((*pfVar1 <= fVar54 && fVar54 != *pfVar1) &&
             (*(float *)(lVar35 + 4 + uVar46 * 4) <= fVar54)) {
            iVar30 = *(int *)(pcVar50 + 0x18);
            FUN_00c8e340(fVar54,1);
            *(float *)(*(longlong *)(pcVar50 + 0x10) + (longlong)iVar30) =
                 (float)(int)(local_res10 + (int)uVar46);
          }
          uVar46 = uVar46 + 1;
        } while (uVar51 != uVar46);
      }
    }
    else {
      FUN_00c8e690();
      pcVar41 = local_58;
      if ((((local_50 == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
         && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = pcVar41;
      FUN_00c92170();
      FUN_00c92160();
      local_80 = (code *)CONCAT44(local_80._4_4_,uVar25 * 3);
      ___bzero();
      pcVar48 = (code *)(longlong)(int)(uVar25 * 4);
      local_70 = (code *)(ulonglong)(uVar25 * 4);
      _memcpy(pcVar50,pcVar48,sVar45);
      local_40 = (code *)(longlong)(int)uVar25;
      lVar35 = (longlong)local_40 * 4;
      _memcpy(pcVar50,pcVar48,sVar45);
      pcVar36 = local_80;
      local_98 = (code *)CONCAT44(local_98._4_4_,uVar25 * 2);
      local_88 = pcVar48;
      _memcpy(pcVar50,pcVar48,sVar45);
      local_1f8 = *(longlong *)(pcVar41 + 0x10);
      pvVar34 = (void *)0x0;
      FUN_015c15b0(local_68._0_4_,(ulonglong)pcVar36 & 0xffffffff);
      local_1f0 = *(longlong *)(pcVar41 + 0x10);
      FUN_015b3230();
      FUN_00c8e690();
      pcVar41 = local_58;
      pcVar50 = local_60;
      if (((local_50 == '\0') && (local_58 != (code *)0x0)) &&
         ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (code *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_80 = pcVar41;
      _memcpy(pvVar34,local_88,sVar45);
      pcVar41 = local_a8;
      if ((int)local_90 < (int)local_98) {
        lVar49 = (longlong)(int)(uVar25 * 2) - (longlong)local_40;
        lVar43 = 0;
        do {
          lVar32 = *(longlong *)(pcVar50 + 0x10) + lVar35;
          fVar54 = *(float *)(lVar32 + lVar43 * 4);
          pfVar1 = (float *)(lVar32 + -4 + lVar43 * 4);
          if ((*pfVar1 <= fVar54 && fVar54 != *pfVar1) &&
             (*(float *)(lVar32 + 4 + lVar43 * 4) <= fVar54)) {
            iVar30 = *(int *)(pcVar41 + 0x18);
            FUN_00c8e340(fVar54,1);
            *(float *)(*(longlong *)(pcVar41 + 0x10) + (longlong)iVar30) = (float)(int)lVar43;
            pcVar50 = local_60;
          }
          lVar43 = lVar43 + 1;
        } while (lVar49 != lVar43);
      }
      uVar33 = FUN_00d50b20();
      local_a0 = CONCAT71((int7)((ulonglong)uVar33 >> 8),1);
    }
    if (local_78 != (code *)0x0) {
      pcVar50 = *(code **)local_78;
      if (pcVar50 != local_80) {
        cVar5 = local_78[8];
        if (((char)local_a0 != '\0') && (local_80 != (code *)0x0)) {
          FUN_00d50b00();
        }
        *(code **)local_78 = local_80;
        if ((cVar5 != (code)0x0) && (pcVar50 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_78[8] = SUB81(local_a0,0);
        goto LAB_0175a651;
      }
      if ((char)local_a0 != '\0') {
        if ((local_78[8] == (code)0x0) && (local_80 != (code *)0x0)) {
          FUN_00d50b00();
          local_78[8] = (code)0x1;
        }
        goto LAB_0175a651;
      }
      puVar31 = local_e8;
      if (*(int *)(local_a8 + 0x18) + 3U < 7) goto LAB_0175a67d;
LAB_0175a6a4:
      pcVar50 = local_a8 + 0x18;
      local_100 = 0xffffffff;
      local_fc = 1;
      uVar51 = 0;
      local_ac = 1;
      local_b0 = 0.0;
      if (((char)local_b4 != '\0') && (local_res8 == 0x4b0)) {
        local_98 = pcVar50;
        uVar26 = FUN_00e7d780(local_68._0_4_);
        uVar51 = 1;
        if (0 < (int)uVar26) {
          uVar51 = (ulonglong)uVar26;
        }
        FUN_00c8e690();
        pcVar50 = local_58;
        if ((((local_50 == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
            ) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        iVar30 = (int)uVar51;
        uVar26 = iVar30 * 2 + 0x4b0;
        ___bzero();
        local_1d8 = *(longlong *)(pcVar50 + 0x10);
        *(undefined4 *)(local_1d8 + uVar51 * 4) = 0x3f800000;
        *(undefined4 *)(local_1d8 + 800 + uVar51 * 4) = 0x3f800000;
        *(undefined4 *)(local_1d8 + 0x640 + uVar51 * 4) = 0x3f800000;
        *(undefined4 *)(local_1d8 + 2000 + uVar51 * 4) = 0x3f800000;
        *(undefined4 *)(local_1d8 + 0xaf0 + uVar51 * 4) = 0x3f800000;
        *(undefined4 *)(local_1d8 + 0xe10 + uVar51 * 4) = 0x3f800000;
        pcVar3 = "/System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork" +
                 uVar51 * 4 + local_1d8 + 0x28;
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = -0x80;
        pcVar3[3] = '?';
        pcVar3 = "/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                 uVar51 * 4 + local_1d8 + 0x20;
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = -0x80;
        pcVar3[3] = '?';
        local_70 = pcVar50;
        FUN_015c15b0(local_68._0_4_,uVar26);
        local_1d0 = *(longlong *)(pcVar50 + 0x10);
        FUN_015b3230();
        fVar57 = _UNK_02411e1c;
        fVar56 = _UNK_02411e18;
        fVar55 = _UNK_02411e14;
        fVar54 = _DAT_02411e10;
        lVar35 = *(longlong *)(pcVar50 + 0x10);
        uVar51 = (ulonglong)(uVar26 & 0x7ffffff8);
        uVar46 = (uVar51 - 8 >> 3) + 1;
        if (uVar51 - 8 == 0) {
          lVar43 = 0;
LAB_0175a892:
          pfVar1 = (float *)(lVar35 + lVar43 * 4);
          pfVar2 = (float *)(lVar35 + 0x10 + lVar43 * 4);
          fVar54 = pfVar1[1] * _UNK_02411e14;
          fVar55 = pfVar1[2] * _UNK_02411e18;
          fVar56 = pfVar1[3] * _UNK_02411e1c;
          fVar57 = *pfVar2 * _DAT_02411e10;
          fVar58 = pfVar2[1] * _UNK_02411e14;
          fVar59 = pfVar2[2] * _UNK_02411e18;
          fVar60 = pfVar2[3] * _UNK_02411e1c;
          pfVar2 = (float *)(lVar35 + lVar43 * 4);
          *pfVar2 = *pfVar1 * _DAT_02411e10;
          pfVar2[1] = fVar54;
          pfVar2[2] = fVar55;
          pfVar2[3] = fVar56;
          pfVar1 = (float *)(lVar35 + 0x10 + lVar43 * 4);
          *pfVar1 = fVar57;
          pfVar1[1] = fVar58;
          pfVar1[2] = fVar59;
          pfVar1[3] = fVar60;
        }
        else {
          lVar49 = -(uVar46 & 0xfffffffffffffffe);
          lVar43 = 0;
          do {
            pfVar1 = (float *)(lVar35 + lVar43 * 4);
            fVar58 = pfVar1[1];
            fVar59 = pfVar1[2];
            fVar60 = pfVar1[3];
            pfVar2 = (float *)(lVar35 + 0x10 + lVar43 * 4);
            fVar7 = *pfVar2;
            fVar8 = pfVar2[1];
            fVar9 = pfVar2[2];
            fVar10 = pfVar2[3];
            pfVar2 = (float *)(lVar35 + 0x20 + lVar43 * 4);
            fVar11 = *pfVar2;
            fVar12 = pfVar2[1];
            fVar13 = pfVar2[2];
            fVar14 = pfVar2[3];
            pfVar2 = (float *)(lVar35 + 0x30 + lVar43 * 4);
            fVar15 = *pfVar2;
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar2 = (float *)(lVar35 + lVar43 * 4);
            *pfVar2 = *pfVar1 * fVar54;
            pfVar2[1] = fVar58 * fVar55;
            pfVar2[2] = fVar59 * fVar56;
            pfVar2[3] = fVar60 * fVar57;
            pfVar1 = (float *)(lVar35 + 0x10 + lVar43 * 4);
            *pfVar1 = fVar7 * fVar54;
            pfVar1[1] = fVar8 * fVar55;
            pfVar1[2] = fVar9 * fVar56;
            pfVar1[3] = fVar10 * fVar57;
            auVar63._0_4_ = fVar15 * fVar54;
            auVar63._4_4_ = fVar16 * fVar55;
            auVar63._8_4_ = fVar17 * fVar56;
            auVar63._12_4_ = fVar18 * fVar57;
            pfVar1 = (float *)(lVar35 + 0x20 + lVar43 * 4);
            *pfVar1 = fVar11 * fVar54;
            pfVar1[1] = fVar12 * fVar55;
            pfVar1[2] = fVar13 * fVar56;
            pfVar1[3] = fVar14 * fVar57;
            *(undefined1 (*) [16])(lVar35 + 0x30 + lVar43 * 4) = auVar63;
            lVar43 = lVar43 + 0x10;
            lVar49 = lVar49 + 2;
          } while (lVar49 != 0);
          if ((uVar46 & 1) != 0) goto LAB_0175a892;
        }
        fVar54 = DAT_0239011c;
        if (uVar51 != uVar26) {
          do {
            *(float *)(lVar35 + uVar51 * 4) = *(float *)(lVar35 + uVar51 * 4) * fVar54;
            uVar51 = uVar51 + 1;
          } while (uVar51 < uVar26);
        }
        FUN_00c8e690();
        pcVar41 = local_58;
        if (((local_50 == '\0') && (local_58 != (code *)0x0)) &&
           ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (code *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_88 = pcVar41;
        FUN_00c8e690();
        pcVar36 = local_58;
        if (((local_50 == '\0') && (local_58 != (code *)0x0)) &&
           ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (code *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_60 = pcVar36;
        ___bzero();
        FUN_00c8e690();
        pcVar36 = local_58;
        if ((((local_50 == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
            ) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_78 = (code *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(undefined **)local_78 = &DAT_024c1200;
        *(undefined8 *)(local_78 + 0xc) = 0;
        *(undefined8 *)(local_78 + 0x14) = 0;
        *(undefined4 *)(local_78 + 0x1c) = 0;
        FUN_00d500e0();
        FUN_00e3d400();
        lVar35 = *(longlong *)(local_80 + 0x10);
        lVar43 = *(longlong *)(pcVar41 + 0x10);
        lVar49 = *(longlong *)(pcVar50 + 0x10);
        lVar32 = *(longlong *)(local_60 + 0x10);
        lVar44 = 0;
        do {
          fVar55 = (float)(int)lVar44 * DAT_02411de8;
          iVar42 = (int)fVar55;
          iVar38 = ((iVar42 + 1) / 0x4b0) * -0x4b0 + iVar42 + 1;
          fVar54 = *(float *)(lVar35 + (longlong)(iVar42 % 0x4b0) * 4);
          *(float *)(lVar43 + lVar44 * 4) =
               (*(float *)(lVar35 + (longlong)iVar38 * 4) - fVar54) * (fVar55 - (float)(int)fVar55)
               + fVar54;
          fVar54 = *(float *)(lVar49 + (longlong)(iVar42 % 0x4b0 + iVar30) * 4);
          *(float *)(lVar32 + lVar44 * 4) =
               (*(float *)(lVar49 + (longlong)(iVar38 + iVar30) * 4) - fVar54) *
               (fVar55 - (float)(int)fVar55) + fVar54;
          lVar44 = lVar44 + 1;
        } while (lVar44 != 0x400);
        FUN_00e3db90(*(longlong *)(pcVar36 + 0x10));
        local_1c8 = *(longlong *)(pcVar36 + 0x10);
        FUN_015b3230();
        lVar35 = *(longlong *)(pcVar36 + 0x10);
        fVar54 = 0.0;
        local_ac = 1;
        iVar30 = 0;
        lVar43 = 0;
        fVar55 = DAT_02411de8;
        do {
          fVar56 = *(float *)(lVar35 + lVar43 * 4);
          lVar49 = lVar43 + 1;
          pfVar1 = (float *)(lVar35 + (ulonglong)((int)lVar43 - 1U & 0x3ff) * 4);
          if ((*pfVar1 <= fVar56 && fVar56 != *pfVar1) &&
             (*(float *)(lVar35 + (ulonglong)((uint)lVar49 & 0x3ff) * 4) <= fVar56)) {
            local_68 = (code *)CONCAT44(local_68._4_4_,fVar54);
            iVar27 = FUN_00e7d780((float)(int)lVar43 * fVar55);
            iVar38 = *(int *)(local_80 + 0x18);
            iVar42 = iVar38 + 3;
            if (-1 < iVar38) {
              iVar42 = iVar38;
            }
            iVar42 = iVar42 >> 2;
            lVar35 = *(longlong *)(local_80 + 0x10);
            iVar39 = 0x29;
            iVar38 = iVar42 + iVar27 % 0x4b0 + -0x15;
            do {
              fVar54 = *(float *)(lVar35 + (longlong)((iVar38 + 1) % iVar42) * 4);
              pfVar1 = (float *)(lVar35 + (longlong)(iVar38 % iVar42) * 4);
              if ((*pfVar1 <= fVar54 && fVar54 != *pfVar1) &&
                 (*(float *)(lVar35 + (longlong)((iVar38 + 2) % iVar42) * 4) <= fVar54))
              goto LAB_0175ace9;
              iVar39 = iVar39 + -1;
              iVar38 = iVar38 + 1;
            } while (iVar39 != 0);
            fVar54 = *(float *)(lVar35 + (longlong)(iVar27 % 0x4b0) * 4);
LAB_0175ace9:
            iVar47 = (iVar27 + 500) % 0x4b0;
            iVar39 = 0x29;
            iVar38 = iVar47 + iVar42 + -0x15;
            do {
              fVar55 = *(float *)(lVar35 + (longlong)((iVar38 + 1) % iVar42) * 4);
              pfVar1 = (float *)(lVar35 + (longlong)(iVar38 % iVar42) * 4);
              if ((*pfVar1 <= fVar55 && fVar55 != *pfVar1) &&
                 (*(float *)(lVar35 + (longlong)((iVar38 + 2) % iVar42) * 4) <= fVar55))
              goto LAB_0175ad69;
              iVar39 = iVar39 + -1;
              iVar38 = iVar38 + 1;
            } while (iVar39 != 0);
            fVar55 = *(float *)(lVar35 + (longlong)iVar47 * 4);
LAB_0175ad69:
            iVar47 = (iVar27 + 700) % 0x4b0;
            iVar39 = 0x29;
            iVar38 = iVar47 + iVar42 + -0x15;
            do {
              fVar56 = *(float *)(lVar35 + (longlong)((iVar38 + 1) % iVar42) * 4);
              pfVar1 = (float *)(lVar35 + (longlong)(iVar38 % iVar42) * 4);
              if ((*pfVar1 <= fVar56 && fVar56 != *pfVar1) &&
                 (*(float *)(lVar35 + (longlong)((iVar38 + 2) % iVar42) * 4) <= fVar56))
              goto LAB_0175adf9;
              iVar39 = iVar39 + -1;
              iVar38 = iVar38 + 1;
            } while (iVar39 != 0);
            fVar56 = *(float *)(lVar35 + (longlong)iVar47 * 4);
LAB_0175adf9:
            iVar47 = (iVar27 + 900) % 0x4b0;
            iVar39 = 0x29;
            iVar38 = iVar47 + iVar42 + -0x15;
            do {
              fVar57 = *(float *)(lVar35 + (longlong)((iVar38 + 1) % iVar42) * 4);
              pfVar1 = (float *)(lVar35 + (longlong)(iVar38 % iVar42) * 4);
              if ((*pfVar1 <= fVar57 && fVar57 != *pfVar1) &&
                 (*(float *)(lVar35 + (longlong)((iVar38 + 2) % iVar42) * 4) <= fVar57))
              goto LAB_0175ae89;
              iVar39 = iVar39 + -1;
              iVar38 = iVar38 + 1;
            } while (iVar39 != 0);
            fVar57 = *(float *)(lVar35 + (longlong)iVar47 * 4);
LAB_0175ae89:
            iVar47 = (iVar27 + 0x578) % 0x4b0;
            iVar39 = 0x29;
            iVar38 = iVar47 + iVar42 + -0x15;
            do {
              fVar58 = *(float *)(lVar35 + (longlong)((iVar38 + 1) % iVar42) * 4);
              pfVar1 = (float *)(lVar35 + (longlong)(iVar38 % iVar42) * 4);
              if ((*pfVar1 <= fVar58 && fVar58 != *pfVar1) &&
                 (*(float *)(lVar35 + (longlong)((iVar38 + 2) % iVar42) * 4) <= fVar58))
              goto LAB_0175af09;
              iVar39 = iVar39 + -1;
              iVar38 = iVar38 + 1;
            } while (iVar39 != 0);
            fVar58 = *(float *)(lVar35 + (longlong)iVar47 * 4);
LAB_0175af09:
            iVar47 = (iVar27 + 0x640) % 0x4b0;
            iVar39 = 0x29;
            iVar38 = iVar47 + iVar42 + -0x15;
            do {
              fVar59 = *(float *)(lVar35 + (longlong)((iVar38 + 1) % iVar42) * 4);
              pfVar1 = (float *)(lVar35 + (longlong)(iVar38 % iVar42) * 4);
              if ((*pfVar1 <= fVar59 && fVar59 != *pfVar1) &&
                 (*(float *)(lVar35 + (longlong)((iVar38 + 2) % iVar42) * 4) <= fVar59))
              goto LAB_0175ab8a;
              iVar39 = iVar39 + -1;
              iVar38 = iVar38 + 1;
            } while (iVar39 != 0);
            fVar59 = *(float *)(lVar35 + (longlong)iVar47 * 4);
LAB_0175ab8a:
            lVar35 = *(longlong *)(pcVar36 + 0x10);
            fVar60 = *(float *)(lVar35 + lVar43 * 4);
            fVar60 = fVar60 * fVar60;
            fVar55 = (fVar54 + fVar55 * _DAT_023b294c + fVar56 * DAT_02390120) * fVar60;
            fVar60 = fVar60 * (fVar57 + fVar58 * _DAT_023b294c + fVar59 * DAT_02390120);
            fVar54 = fVar55;
            if (fVar55 <= local_68._0_4_) {
              fVar54 = local_68._0_4_;
            }
            if (fVar54 < fVar60) {
              iVar30 = iVar27;
            }
            if (local_68._0_4_ < fVar55) {
              local_ac = 1;
              iVar30 = iVar27;
            }
            fVar55 = DAT_02411de8;
            if (fVar54 < fVar60) {
              local_ac = 0;
              fVar54 = fVar60;
            }
          }
          lVar43 = lVar49;
        } while (lVar49 != 0x400);
        uVar28 = FUN_00e7d780((float)iVar30 / DAT_023908e0);
        pcVar41 = local_70;
        uVar26 = uVar28;
        if (local_ac == 0) {
          iVar38 = uVar28 + 9;
          uVar26 = iVar38 + (((uint)(iVar38 / 6 + (iVar38 >> 0x1f)) >> 1) - (iVar38 >> 0x1f)) * -0xc
          ;
        }
        uVar51 = (ulonglong)uVar26;
        if (local_78 != (code *)0x0) {
          FUN_00d50b20();
        }
        if (pcVar36 != (code *)0x0) {
          FUN_00d50b20();
        }
        if (local_60 != (code *)0x0) {
          FUN_00d50b20();
        }
        if (local_88 != (code *)0x0) {
          FUN_00d50b20();
        }
        local_b0 = (float)(int)(uVar28 * -100 + iVar30);
        pcVar50 = local_98;
        if (pcVar41 != (code *)0x0) {
          FUN_00d50b20();
          pcVar50 = local_98;
        }
      }
      pcVar41 = (code *)FUN_00e8fc40();
      FUN_01a016a0();
      (**(code **)(*(longlong *)pcVar41 + 0x18))();
      local_108 = uVar51;
      local_60 = pcVar41;
      pcVar41 = (code *)FUN_00e8fc40();
      FUN_0013e060();
      (**(code **)(*(longlong *)pcVar41 + 0x18))();
      uVar26 = *(uint *)pcVar50;
      uVar51 = (ulonglong)uVar26;
      uVar28 = uVar26 + 3;
      if (-1 < (int)uVar26) {
        uVar28 = uVar26;
      }
      local_88 = pcVar41;
      FUN_00c8e690();
      pcVar50 = local_58;
      if ((((local_50 == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
         && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_e0 = pcVar50;
      FUN_00c92170();
      FUN_00c92160();
      uVar28 = (int)uVar28 >> 2;
      ___bzero();
      local_40 = DAT_025ffd78;
      pcVar50 = (code *)0x0;
      local_98 = (code *)0x0;
      uVar29 = (int)local_d8;
      if ((char)local_b4 != '\0') {
        uVar29 = 0;
      }
      local_d8 = (code *)CONCAT44(local_d8._4_4_,uVar29);
      local_10c = uVar28;
      if ((int)uVar26 < 4) {
        local_78 = (code *)0x0;
        local_70 = (code *)0x0;
        local_68 = (code *)0x0;
      }
      else {
        local_1c0 = DAT_025fe688;
        local_1b8 = (ulonglong)uVar28;
        uVar51 = 0;
        local_48 = &DAT_025ffd60;
        local_68 = (code *)0x0;
        local_70 = (code *)0x0;
        local_78 = (code *)0x0;
        local_98 = (code *)0x0;
        do {
          pcVar41 = (code *)FUN_00e8fc40();
          FUN_00d4ff40();
          *(undefined **)pcVar41 = local_48;
          *(longlong *)(pcVar41 + 0x38) = 0;
          *(longlong *)(pcVar41 + 0x40) = 0;
          uVar33 = (*local_40)();
          uVar37 = (undefined7)((ulonglong)uVar33 >> 8);
          if (pcVar41 == local_68) {
            if ((char)local_70 == '\0') {
              local_70 = (code *)CONCAT71(uVar37,1);
              pcVar41 = local_68;
            }
            else {
              FUN_00d50b20();
              pcVar41 = local_68;
            }
          }
          else {
            bVar52 = (char)local_70 != '\0';
            local_70 = (code *)CONCAT71(uVar37,1);
            if ((bVar52) && (local_68 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_68 = pcVar41;
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
            pcVar50 = local_68;
          }
          FUN_01779ed0(*(undefined4 *)(*(longlong *)(local_a8 + 0x10) + uVar51 * 4));
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
            pcVar50 = local_60;
          }
          local_188 = local_68;
          local_180 = '\0';
          FUN_0176fde0();
          if ((local_180 != '\0') && (local_188 != (code *)0x0)) {
            FUN_00d50b20();
          }
          pcVar41 = (code *)FUN_00e8fc40();
          FUN_00d4ff40();
          *(undefined **)pcVar41 = &DAT_025fe670;
          *(longlong *)(pcVar41 + 0x38) = 0;
          *(longlong *)(pcVar41 + 0x40) = 0;
          *(longlong *)(pcVar41 + 0x48) = 0;
          uVar33 = (*local_1c0)();
          uVar37 = (undefined7)((ulonglong)uVar33 >> 8);
          if (pcVar41 == local_78) {
            if ((char)local_98 == '\0') {
              local_98 = (code *)CONCAT71(uVar37,1);
              pcVar41 = local_78;
            }
            else {
              FUN_00d50b20();
              pcVar41 = local_78;
            }
          }
          else {
            bVar52 = (char)local_98 != '\0';
            local_98 = (code *)CONCAT71(uVar37,1);
            if ((bVar52) && (local_78 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_78 = pcVar41;
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          lVar35 = DAT_027cd560;
          if ((pvVar34 != (void *)0x0) &&
             (lVar43 = FUN_00e8b990(), lVar35 = DAT_027cd560, lVar43 != 0)) {
            pcVar50 = local_78;
          }
          pVar40 = (pthread_key_t)pcVar50;
          DAT_027cd560 = lVar35;
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          local_170 = '\x01';
          local_178 = lVar35;
          FUN_017395b0();
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          pvVar34 = _pthread_getspecific(pVar40);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_168 = local_78;
          local_160 = '\0';
          FUN_01735cb0();
          if ((local_160 != '\0') && (local_168 != (code *)0x0)) {
            FUN_00d50b20();
          }
          iVar30 = FUN_00e7d780(*(undefined4 *)(*(longlong *)(local_a8 + 0x10) + uVar51 * 4));
          uVar26 = iVar30 - (int)local_d8;
          pcVar50 = (code *)(ulonglong)uVar26;
          if ((-1 < (int)uVar26) && ((int)uVar26 < (int)local_90)) {
            pcVar50 = *(code **)(local_80 + 0x10);
            *(undefined4 *)(*(longlong *)(local_e0 + 0x10) + uVar51 * 4) =
                 *(undefined4 *)(pcVar50 + (ulonglong)uVar26 * 4);
          }
          uVar51 = uVar51 + 1;
        } while (local_1b8 != uVar51);
      }
      pcVar41 = local_70;
      if ((char)local_b4 == '\0') {
        pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
        if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
          pcVar50 = local_60;
        }
        FUN_01770880();
        pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
        if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
          pcVar50 = local_88;
        }
        FUN_01736d20();
      }
      else {
        pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
        if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
          pcVar50 = local_60;
        }
        FUN_01770f00();
        if ((((local_50 == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
            ) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pcVar36 = (code *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(undefined **)pcVar36 = &DAT_025ffd60;
        *(longlong *)(pcVar36 + 0x38) = 0;
        *(longlong *)(pcVar36 + 0x40) = 0;
        (*local_40)();
        pcVar41 = local_70;
        if (pcVar36 == local_68) {
          if ((char)local_70 == '\0') {
            pcVar41 = (code *)CONCAT71((int7)((ulonglong)local_70 >> 8),1);
            pcVar36 = local_68;
          }
          else {
            FUN_00d50b20();
            pcVar36 = local_68;
          }
        }
        else {
          pcVar41 = (code *)CONCAT71((int7)(uVar51 >> 8),1);
          if (((char)local_70 != '\0') && (local_68 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_68 = pcVar36;
        pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
        if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
          pcVar50 = local_68;
        }
        pVar40 = (pthread_key_t)pcVar50;
        pvVar34 = _pthread_getspecific(pVar40);
        if (pvVar34 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar54 = (float)FUN_01779ec0();
        FUN_01779ed0(fVar54 + (float)local_res8);
        pvVar34 = _pthread_getspecific(pVar40);
        if (pvVar34 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_158 = local_68;
        local_150 = '\0';
        FUN_0176fde0();
        if ((local_150 != '\0') && (local_158 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pcVar50 = *(code **)(local_e0 + 0x10);
        *(undefined4 *)(pcVar50 + (longlong)(int)local_10c * 4) = 0;
        FUN_00d50b20();
      }
      local_70 = (code *)((ulonglong)pcVar41 & 0xffffffff);
      pcVar41 = (code *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(longlong *)(pcVar41 + 0x50) = 0;
      *(longlong *)(pcVar41 + 0x38) = 0;
      *(longlong *)(pcVar41 + 0x40) = 0;
      *(undefined4 *)(pcVar41 + 0x48) = 0;
      *(undefined **)pcVar41 = &DAT_025fee18;
      *(undefined8 *)(pcVar41 + 0x6c) = 0;
      *(longlong *)(pcVar41 + 0x58) = 0;
      *(longlong *)(pcVar41 + 0x60) = 0;
      *(undefined2 *)(pcVar41 + 0x68) = 0;
      FUN_00d500e0();
      local_90 = pcVar41;
      pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
      if ((pvVar34 == (void *)0x0) || (lVar35 = FUN_00e8b990(), lVar35 == 0)) {
        pcVar41 = local_90;
        if (*(code **)(local_90 + 0x60) != local_60) goto LAB_0175b8f0;
      }
      else {
        pcVar50 = local_90;
        pcVar41 = *(code **)(local_90 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20);
        if (*(code **)(*(code **)(local_90 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20)
                      + 0x60) != local_60) {
LAB_0175b8f0:
          FUN_00d64850();
          pcVar36 = *(code **)(pcVar41 + 0x60);
          if (pcVar36 != local_60) {
            if (local_60 != (code *)0x0) {
              FUN_00d50b00();
            }
            *(code **)(pcVar41 + 0x60) = local_60;
            if (pcVar36 != (code *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
      }
      pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
      if ((pvVar34 == (void *)0x0) || (lVar35 = FUN_00e8b990(), lVar35 == 0)) {
        pcVar50 = local_90;
        if (*(code **)(local_90 + 0x58) != local_88) goto LAB_0175b98e;
      }
      else {
        pcVar50 = *(code **)(local_90 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20);
        if (*(code **)(*(code **)(local_90 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20)
                      + 0x58) != local_88) {
LAB_0175b98e:
          FUN_00d64850();
          pcVar41 = *(code **)(pcVar50 + 0x58);
          if (pcVar41 != local_88) {
            if (local_88 != (code *)0x0) {
              FUN_00d50b00();
            }
            *(code **)(pcVar50 + 0x58) = local_88;
            if (pcVar41 != (code *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
      }
      local_218 = local_e0;
      local_210 = 0;
      local_208 = *local_1b0;
      local_200 = 0;
      pcVar50 = (code *)&local_208;
      FUN_0175f5f0(local_114,&local_218,(undefined1)local_110,&local_100,local_90,0);
      pcVar41 = local_58;
      if ((local_50 == '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b00();
      }
      pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
      if ((pvVar34 == (void *)0x0) || (lVar35 = FUN_00e8b990(), lVar35 == 0)) {
        lVar35 = *(longlong *)(pcVar41 + 0x58);
      }
      else {
        lVar35 = *(longlong *)
                  (*(longlong *)(pcVar41 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20) +
                  0x58);
      }
      if (lVar35 != 0) {
        FUN_00d50b00();
      }
      pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      local_d8 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (code *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if (lVar35 != 0) {
        FUN_00d50b20();
      }
      pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
      if ((pvVar34 == (void *)0x0) || (lVar35 = FUN_00e8b990(), lVar35 == 0)) {
        lVar35 = *(longlong *)(pcVar41 + 0x60);
      }
      else {
        lVar35 = *(longlong *)
                  (*(longlong *)(pcVar41 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20) +
                  0x60);
      }
      if (lVar35 != 0) {
        FUN_00d50b00();
      }
      pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_148 = local_d8;
      local_140 = '\0';
      FUN_0176fd70();
      if ((local_140 != '\0') && (local_148 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar35 != 0) {
        FUN_00d50b20();
      }
      uVar26 = local_100;
      if (local_res20 == '\0') {
        *unaff_RDI = pcVar41;
        bVar19 = true;
        bVar52 = true;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        if (local_100 == 0xffffffff) {
LAB_0175bdba:
          if (local_ac != 0) goto LAB_0175bdc7;
LAB_0175be8d:
          lVar35 = DAT_027e3be0;
          if (DAT_027e3be0 != 0) {
            FUN_00d50b00();
          }
          local_128 = lVar35;
          local_120 = '\x01';
          FUN_017c0610();
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          pcVar36 = local_c8;
          if (local_c0 == '\0') {
            if (local_c8 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_190 = 1;
          local_198 = pcVar36;
          FUN_0173b120();
          if (local_58 == (code *)0x0) {
            bVar52 = true;
            local_40 = (code *)0x0;
            bVar19 = false;
          }
          else {
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
            bVar19 = true;
            bVar52 = false;
            local_40 = local_58;
          }
          pcVar48 = local_40;
          if (pcVar36 != (code *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar52) {
            pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
            if ((pvVar34 != (void *)0x0) &&
               (lVar35 = FUN_00e8b990(), pcVar48 = local_40, lVar35 != 0)) {
              pcVar50 = local_40;
              pcVar48 = *(code **)(local_40 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar35 = *(longlong *)(pcVar48 + 0x58);
            if (lVar35 != 0) {
              FUN_00d50b00();
            }
            pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
            if (pvVar34 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01737f00();
            if (lVar35 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_ac = local_fc;
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          pcVar36 = pcVar41;
          if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
            pcVar36 = *(code **)(pcVar41 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20);
          }
          lVar35 = *(longlong *)(pcVar36 + 0x60);
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = (float)FUN_01770220();
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          pcVar36 = pcVar41;
          if ((pvVar34 != (void *)0x0) && (lVar43 = FUN_00e8b990(), lVar43 != 0)) {
            pcVar36 = *(code **)(pcVar41 + (ulonglong)(*(uint *)(lVar43 + 0x154) & 1) * 8 + 0x20);
          }
          lVar43 = *(longlong *)(pcVar36 + 0x60);
          if (lVar43 != 0) {
            FUN_00d50b00();
          }
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar30 = FUN_017702f0();
          if (lVar43 != 0) {
            FUN_00d50b20();
          }
          local_b0 = local_b0 + (float)iVar30 * DAT_0241b664;
          if (lVar35 != 0) {
            FUN_00d50b20();
            local_108 = (ulonglong)uVar26;
            goto LAB_0175bdba;
          }
          local_108 = (ulonglong)uVar26;
          if (local_ac == 0) goto LAB_0175be8d;
LAB_0175bdc7:
          lVar35 = DAT_027e3bd8;
          if (DAT_027e3bd8 != 0) {
            FUN_00d50b00();
          }
          local_138 = lVar35;
          local_130 = '\x01';
          FUN_017c0610();
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          pcVar36 = local_c8;
          if (local_c0 == '\0') {
            if (local_c8 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_1a0 = 1;
          local_1a8 = pcVar36;
          FUN_0173b120();
          if (local_58 == (code *)0x0) {
            bVar20 = true;
            bVar52 = true;
            bVar19 = false;
            pcVar48 = (code *)0x0;
          }
          else {
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
            bVar19 = true;
            bVar20 = false;
            bVar52 = false;
            pcVar48 = local_58;
          }
          local_40 = pcVar48;
          if (pcVar36 != (code *)0x0) {
            FUN_00d50b20();
            bVar52 = bVar20;
          }
          if ((local_c0 != '\0') && (local_c8 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar52) {
            pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
            if ((pvVar34 != (void *)0x0) &&
               (lVar35 = FUN_00e8b990(), pcVar48 = local_40, lVar35 != 0)) {
              pcVar50 = local_40;
              pcVar48 = *(code **)(local_40 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar35 = *(longlong *)(pcVar48 + 0x58);
            if (lVar35 != 0) {
              FUN_00d50b00();
            }
            pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
            if (pvVar34 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01737f00();
            if (lVar35 != 0) {
              FUN_00d50b20();
            }
          }
        }
        if (local_40 == (code *)0x0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        else {
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          pcVar36 = local_40;
          if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), pcVar36 = local_40, lVar35 != 0)
             ) {
            pcVar36 = *(code **)(local_40 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20);
            pcVar50 = local_40;
          }
          puVar6 = *(undefined **)(pcVar36 + 0x60);
          if (puVar6 != (undefined *)0x0) {
            FUN_00d50b00();
          }
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          puVar24 = puVar6;
          if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), lVar35 != 0)) {
            puVar24 = *(undefined **)
                       (puVar6 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20);
          }
          local_48 = puVar24;
          pvVar34 = _pthread_getspecific((pthread_key_t)pcVar50);
          pcVar36 = local_40;
          if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), pcVar36 = local_40, lVar35 != 0)
             ) {
            pcVar36 = *(code **)(local_40 + (ulonglong)(*(uint *)(lVar35 + 0x154) & 1) * 8 + 0x20);
            pcVar50 = local_40;
          }
          pVar40 = (pthread_key_t)pcVar50;
          lVar35 = *(longlong *)(pcVar36 + 0x60);
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          pvVar34 = _pthread_getspecific(pVar40);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar54 = (float)FUN_01770220();
          FUN_01770230(local_b0 + fVar54);
          if (lVar35 != 0) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined *)0x0) {
            FUN_00d50b20();
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (!bVar19) {
            FUN_00d50b00();
          }
        }
        *unaff_RDI = local_40;
        bVar19 = false;
        bVar52 = false;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      if (local_d8 != (code *)0x0) {
        FUN_00d50b20();
        bVar52 = bVar19;
      }
      pcVar50 = local_80;
      if (!bVar52 && pcVar41 != (code *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      puVar31 = local_e8;
      if (local_e0 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_98 != '\0') && (local_78 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_70 != '\0') && (local_68 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_60 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_a0 != '\0') && (pcVar50 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar31 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_a8 != (code *)0x0) {
        FUN_00d50b20();
      }
      bVar52 = false;
      goto LAB_0175a178;
    }
LAB_0175a651:
    puVar31 = local_e8;
    if (6 < *(int *)(local_a8 + 0x18) + 3U) goto LAB_0175a6a4;
    if (((char)local_a0 != '\0') && (local_80 != (code *)0x0)) {
      FUN_00d50b20();
    }
LAB_0175a67d:
    if (puVar31 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    bVar19 = true;
    bVar52 = false;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  if (!bVar19) {
    return unaff_RDI;
  }
LAB_0175a178:
  if (!bVar52) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


