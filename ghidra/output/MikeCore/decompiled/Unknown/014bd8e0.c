// Function: FUN_014bd8e0
// Address: 014bd8e0
// Size: 4956 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014bdd3c) */
/* WARNING: Removing unreachable block (ram,0x014bdd48) */
/* WARNING: Removing unreachable block (ram,0x014bddfe) */
/* WARNING: Removing unreachable block (ram,0x014bde0a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_014bd8e0(undefined8 param_1,double param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float *pfVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  uint uVar35;
  int iVar36;
  ulonglong in_RDX;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint unaff_ESI;
  longlong lVar41;
  uint unaff_EDI;
  uint uVar42;
  ulonglong uVar43;
  float fVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  int iVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar50 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar57;
  int iVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar59;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  float fVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar70;
  undefined1 auVar69 [16];
  int iVar71;
  int iVar74;
  undefined1 auVar72 [16];
  int iVar75;
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  undefined1 auVar81 [16];
  longlong lVar82;
  undefined1 auVar83 [16];
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  int local_f4;
  longlong local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  int local_b4;
  double local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  undefined1 local_88 [16];
  int local_6c;
  ulonglong local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong local_50;
  int local_48;
  undefined4 uStack_44;
  char local_40;
  longlong local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  local_88._0_8_ = param_1;
  uVar32 = (ulonglong)unaff_ESI;
  if ((int)unaff_EDI < (int)unaff_ESI) {
    pfVar31 = (float *)(param_3 + (longlong)(int)unaff_EDI * 4);
    uVar38 = unaff_EDI;
    do {
      if (DAT_023b4df0 <= *pfVar31) {
        if (uVar38 != 0xffffffff) goto LAB_014bd940;
        break;
      }
      uVar38 = uVar38 + 1;
      pfVar31 = pfVar31 + 1;
    } while (unaff_ESI != uVar38);
  }
  goto LAB_014bd95e;
  while (lVar1 = uVar32 * 4, uVar32 = uVar32 - 1, *(float *)(param_3 + -4 + lVar1) < DAT_023b4df0) {
LAB_014bd940:
    unaff_EDI = uVar38;
    if ((int)uVar32 < 1) goto LAB_014bd95e;
  }
  unaff_ESI = (int)uVar32 + 1;
LAB_014bd95e:
  local_b0 = DAT_0238fee8 / param_2;
  local_90 = in_RDX;
  puVar33 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar33 = &DAT_025f0d98;
  puVar33[2] = 0;
  puVar33[3] = 0;
  puVar33[4] = 0;
  puVar33[5] = 0;
  puVar33[6] = 0;
  puVar33[7] = 0;
  local_58 = puVar33;
  (*DAT_025f0db0)();
  iVar28 = FUN_00e7d850(_DAT_0240d308 / local_b0);
  uVar38 = unaff_ESI - unaff_EDI;
  uVar32 = (ulonglong)uVar38;
  local_b4 = 1;
  if (0 < iVar28) {
    local_b4 = iVar28;
  }
  local_6c = uVar38 * 4;
  FUN_00c8e690();
  lVar1 = CONCAT44(uStack_44,local_48);
  if ((((local_40 == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (CONCAT44(uStack_44,local_48) != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar1;
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  local_50 = CONCAT44(uStack_44,local_48);
  if (((local_40 == '\0') && (local_50 != 0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (CONCAT44(uStack_44,local_48) != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_d0 = (longlong)(int)unaff_EDI;
  uVar45 = uVar32;
  local_68 = uVar32;
  if (0 < (int)uVar38) {
    local_c8._0_4_ = (undefined4)(double)local_88._0_8_;
    local_c8._4_4_ = local_88._4_4_;
    uVar43 = *(ulonglong *)(local_38 + 0x10);
    local_c8._8_8_ = 0;
    if (uVar38 < 4) {
      uVar39 = 0;
    }
    else {
      uVar45 = local_90 + local_d0 * 4;
      if ((uVar43 < local_90 + (local_d0 + uVar32) * 4) && (uVar45 < uVar43 + uVar32 * 4)) {
        uVar39 = 0;
      }
      else {
        uVar39 = (ulonglong)(uVar38 & 0xfffffffc);
        uVar46 = 0;
        local_e8 = (float)local_c8._0_4_;
        fStack_e4 = (float)local_c8._0_4_;
        fStack_e0 = (float)local_c8._0_4_;
        fStack_dc = (float)local_c8._0_4_;
        do {
          auVar49._4_4_ = fStack_e4;
          auVar49._0_4_ = local_e8;
          auVar49._8_4_ = fStack_e0;
          auVar49._12_4_ = fStack_dc;
          auVar49 = divps(auVar49,*(undefined1 (*) [16])(uVar45 + uVar46 * 4));
          local_a8 = auVar49._0_4_ * _DAT_02394160;
          fStack_a4 = auVar49._4_4_ * _UNK_02394164;
          fStack_a0 = auVar49._8_4_ * _UNK_02394168;
          fStack_9c = auVar49._12_4_ * _UNK_0239416c;
          local_88._0_8_ = _logf();
          local_88._8_8_ = extraout_XMM0_Qb;
          auVar50._0_8_ = _logf();
          auVar50._8_8_ = extraout_XMM0_Qb_00;
          local_88 = insertps(local_88,auVar50,0x10);
          auVar13._4_8_ = extraout_XMM0_Qb_00;
          auVar13._0_4_ = fStack_a4;
          auVar64._0_8_ = auVar13._0_8_ << 0x20;
          auVar64._8_4_ = fStack_a0;
          auVar64._12_4_ = fStack_9c;
          auVar69._0_8_ = _logf(auVar64._8_8_);
          auVar69._8_8_ = extraout_XMM0_Qb_01;
          local_88 = insertps(local_88,auVar69,0x20);
          auVar83._0_8_ = _logf();
          auVar83._8_8_ = extraout_XMM0_Qb_02;
          auVar49 = insertps(local_88,auVar83,0x30);
          fVar48 = auVar49._4_4_ * _UNK_02394174;
          fVar59 = auVar49._8_4_ * _UNK_02394178;
          fVar63 = auVar49._12_4_ * _UNK_0239417c;
          pfVar31 = (float *)(uVar43 + uVar46 * 4);
          *pfVar31 = auVar49._0_4_ * _DAT_02394170;
          pfVar31[1] = fVar48;
          pfVar31[2] = fVar59;
          pfVar31[3] = fVar63;
          uVar46 = uVar46 + 4;
        } while (uVar39 != uVar46);
        uVar45 = local_68;
        if (uVar39 == uVar32) goto LAB_014bdc93;
      }
    }
    uVar45 = local_68;
    uVar46 = ~uVar39;
    if ((uVar38 & 1) != 0) {
      auVar51._4_12_ = local_c8._4_12_;
      auVar51._0_4_ =
           (local_c8._0_4_ / *(float *)(local_90 + (local_d0 + uVar39) * 4)) * DAT_02394204;
      fVar48 = (float)_logf(auVar51._0_8_);
      *(float *)(uVar43 + uVar39 * 4) = fVar48 * DAT_02394208;
      uVar39 = uVar39 | 1;
    }
    if (uVar46 + uVar32 != 0) {
      lVar1 = local_90 + local_d0 * 4;
      do {
        auVar52._4_12_ = local_c8._4_12_;
        auVar52._0_4_ = (local_c8._0_4_ / *(float *)(lVar1 + uVar39 * 4)) * DAT_02394204;
        fVar48 = (float)_logf(auVar52._0_8_);
        *(float *)(uVar43 + uVar39 * 4) = fVar48 * DAT_02394208;
        auVar53._4_12_ = local_c8._4_12_;
        auVar53._0_4_ = (local_c8._0_4_ / *(float *)(lVar1 + 4 + uVar39 * 4)) * DAT_02394204;
        fVar48 = (float)_logf(auVar53._0_8_);
        *(float *)(uVar43 + 4 + uVar39 * 4) = fVar48 * DAT_02394208;
        uVar39 = uVar39 + 2;
      } while (uVar32 != uVar39);
    }
  }
LAB_014bdc93:
  iVar28 = (int)uVar45;
  iVar29 = FUN_00e7d850(DAT_0240de98 / local_b0);
  local_118 = 0;
  local_110 = '\0';
  FUN_0161e150(DAT_0238fee8 / local_b0,&local_118);
  local_d8 = CONCAT44(uStack_44,local_48);
  if (local_40 == '\0') {
    if (((local_d8 != 0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (CONCAT44(uStack_44,local_48) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  local_108 = local_d8;
  local_100 = '\0';
  FUN_0161e1a0();
  local_60 = CONCAT44(uStack_44,local_48);
  if (local_40 == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (CONCAT44(uStack_44,local_48) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (0xe < *(int *)(local_60 + 0x18) + 7U) {
    FUN_00c8e4f0();
    lVar1 = CONCAT44(uStack_44,local_48);
    if (local_40 == '\0') {
      if (((lVar1 != 0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (CONCAT44(uStack_44,local_48) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_015c15b0(CONCAT44((int)((ulonglong)(DAT_0240de90 / local_b0) >> 0x20),
                          (float)(DAT_0240de90 / local_b0)),uVar45 & 0xffffffff);
    lVar41 = _UNK_0240dfb8;
    lVar9 = _DAT_0240dfb0;
    auVar50 = _DAT_0240dfa0;
    auVar49 = _DAT_023b2d50;
    iVar26 = _UNK_0239418c;
    iVar25 = _UNK_02394188;
    iVar24 = _UNK_02394184;
    iVar23 = _DAT_02394180;
    fVar48 = DAT_02390124;
    uVar7 = *(uint *)(local_60 + 0x18);
    local_90 = (ulonglong)uVar7;
    if (7 < (int)uVar7) {
      local_f4 = iVar28 + -1;
      fVar65 = (float)iVar29;
      local_90 = (ulonglong)(uVar7 >> 3);
      local_f0 = *(longlong *)(local_60 + 0x10);
      auVar76._4_4_ = fVar65;
      auVar76._0_4_ = fVar65;
      auVar76._8_4_ = fVar65;
      auVar76._12_4_ = fVar65;
      fVar59 = DAT_023b2d50._4_4_;
      fVar63 = DAT_023b2d50._12_4_;
      uVar43 = 0;
      do {
        uVar7 = *(uint *)(local_f0 + uVar43 * 8);
        iVar28 = *(int *)(local_f0 + 4 + uVar43 * 8) + uVar7;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        if ((int)uVar45 <= iVar28) {
          iVar28 = local_f4;
        }
        if ((int)uVar7 <= iVar28) {
          fVar44 = (float)(iVar28 + 1);
          iVar30 = iVar28 - iVar29;
          iVar36 = uVar7 + iVar29;
          lVar40 = *(longlong *)(local_38 + 0x10);
          lVar8 = *(longlong *)(lVar1 + 0x10);
          uVar45 = (ulonglong)uVar7;
          uVar46 = (ulonglong)(uint)fVar44;
          uVar39 = uVar46 - uVar45;
          uVar35 = uVar7;
          if (3 < uVar39) {
            uVar2 = lVar40 + uVar45 * 4;
            uVar3 = lVar8 + uVar45 * 4;
            if ((lVar8 + uVar46 * 4 <= uVar2) || (lVar40 + uVar46 * 4 <= uVar3)) {
              local_a8 = (float)(1 - uVar7);
              uVar34 = uVar39 & 0xfffffffffffffffc;
              auVar81._0_8_ = uVar45 + _DAT_0240df80;
              auVar81._8_8_ = (ulonglong)uVar7 + _UNK_0240df88;
              lVar11 = uVar45 + _DAT_0240df90;
              lVar12 = uVar45 + _UNK_0240df98;
              iVar77 = uVar7 + _DAT_0238fcc0;
              iVar78 = uVar7 + _UNK_0238fcc4;
              iVar79 = uVar7 + _UNK_0238fcc8;
              iVar80 = uVar7 + _UNK_0238fccc;
              local_88._0_8_ = SEXT48(iVar36);
              local_88._8_4_ = iVar36;
              local_88._12_4_ = iVar36 >> 0x1f;
              local_c8._0_8_ = SEXT48(iVar30);
              local_c8._8_4_ = iVar30;
              local_c8._12_4_ = iVar30 >> 0x1f;
              uVar37 = 0;
              iVar47 = iVar77;
              iVar66 = iVar78;
              iVar67 = iVar79;
              iVar68 = iVar80;
              do {
                auVar72._8_4_ = (int)lVar12;
                auVar72._0_8_ = lVar11;
                auVar72._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
                auVar72 = auVar72 ^ auVar50;
                auVar64 = local_88 ^ auVar50;
                iVar57 = auVar64._4_4_;
                iVar74 = auVar72._4_4_;
                iVar58 = auVar64._12_4_;
                iVar75 = auVar72._12_4_;
                auVar69 = auVar81 ^ auVar50;
                iVar70 = auVar69._4_4_;
                iVar71 = auVar69._12_4_;
                auVar60._0_4_ = -(uint)(iVar57 == iVar74 && auVar72._0_4_ < auVar64._0_4_);
                auVar60._4_4_ = -(uint)(iVar58 == iVar75 && auVar72._8_4_ < auVar64._8_4_);
                auVar60._8_4_ = -(uint)(iVar57 == iVar70 && auVar69._0_4_ < auVar64._0_4_);
                auVar60._12_4_ = -(uint)(iVar58 == iVar71 && auVar69._8_4_ < auVar64._8_4_);
                auVar54._4_4_ = -(uint)(iVar75 < iVar58);
                auVar54._0_4_ = -(uint)(iVar74 < iVar57);
                auVar54._8_4_ = -(uint)(iVar70 < iVar57);
                auVar54._12_4_ = -(uint)(iVar71 < iVar58);
                auVar61._0_4_ = (float)((int)local_a8 + iVar77);
                auVar61._4_4_ = (float)((int)local_a8 + iVar78);
                auVar61._8_4_ = (float)((int)local_a8 + iVar79);
                auVar61._12_4_ = (float)((int)local_a8 + iVar80);
                auVar64 = divps(auVar61,auVar76);
                auVar83 = blendvps(auVar49,auVar64,auVar54 | auVar60);
                auVar64 = local_c8 ^ auVar50;
                iVar57 = auVar64._4_4_;
                iVar58 = auVar64._12_4_;
                auVar73._0_4_ = -(uint)(iVar74 == iVar57 && auVar64._0_4_ < auVar72._0_4_);
                auVar73._4_4_ = -(uint)(iVar75 == iVar58 && auVar64._8_4_ < auVar72._8_4_);
                auVar73._8_4_ = -(uint)(iVar57 == iVar70 && auVar64._0_4_ < auVar69._0_4_);
                auVar73._12_4_ = -(uint)(iVar58 == iVar71 && auVar64._8_4_ < auVar69._8_4_);
                auVar55._4_4_ = -(uint)(iVar58 < iVar75);
                auVar55._0_4_ = -(uint)(iVar57 < iVar74);
                auVar55._8_4_ = -(uint)(iVar57 < iVar70);
                auVar55._12_4_ = -(uint)(iVar58 < iVar71);
                auVar62._0_4_ = (float)((int)fVar44 - iVar47);
                auVar62._4_4_ = (float)((int)fVar44 - iVar66);
                auVar62._8_4_ = (float)((int)fVar44 - iVar67);
                auVar62._12_4_ = (float)((int)fVar44 - iVar68);
                auVar64 = divps(auVar62,auVar76);
                auVar64 = blendvps(auVar83,auVar64,auVar55 | auVar73);
                pfVar31 = (float *)(uVar2 + uVar37 * 4);
                fVar14 = pfVar31[1];
                fVar15 = pfVar31[2];
                fVar16 = pfVar31[3];
                pfVar4 = (float *)(uVar3 + uVar37 * 4);
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar19 = pfVar4[3];
                pfVar5 = (float *)(uVar2 + uVar37 * 4);
                *pfVar5 = *pfVar4 * auVar64._0_4_ + (auVar49._0_4_ - auVar64._0_4_) * *pfVar31;
                pfVar5[1] = fVar17 * auVar64._4_4_ + (fVar59 - auVar64._4_4_) * fVar14;
                pfVar5[2] = fVar18 * auVar64._8_4_ + (auVar49._8_4_ - auVar64._8_4_) * fVar15;
                pfVar5[3] = fVar19 * auVar64._12_4_ + (fVar63 - auVar64._12_4_) * fVar16;
                uVar37 = uVar37 + 4;
                lVar11 = lVar11 + lVar9;
                lVar12 = lVar12 + lVar41;
                lVar82 = auVar81._8_8_;
                auVar81._0_8_ = auVar81._0_8_ + lVar9;
                auVar81._8_8_ = lVar82 + lVar41;
                iVar77 = iVar77 + iVar23;
                iVar78 = iVar78 + iVar24;
                iVar79 = iVar79 + iVar25;
                iVar80 = iVar80 + iVar26;
                iVar47 = iVar47 + iVar23;
                iVar66 = iVar66 + iVar24;
                iVar67 = iVar67 + iVar25;
                iVar68 = iVar68 + iVar26;
              } while (uVar34 != uVar37);
              uVar45 = uVar34 + uVar45;
              uVar35 = (int)uVar34 + uVar7;
              local_e8 = fVar44;
              fStack_e4 = fVar44;
              fStack_e0 = fVar44;
              fStack_dc = fVar44;
              fStack_a4 = local_a8;
              fStack_a0 = local_a8;
              fStack_9c = local_a8;
              if (uVar39 == uVar34) goto LAB_014bdef0;
            }
          }
          iVar28 = (iVar28 - (int)uVar45) + 1;
          iVar47 = uVar35 - uVar7;
          do {
            iVar47 = iVar47 + 1;
            fVar44 = fVar48;
            if ((longlong)uVar45 < (longlong)iVar36) {
              fVar44 = (float)iVar47 / fVar65;
            }
            if ((longlong)iVar30 < (longlong)uVar45) {
              fVar44 = (float)iVar28 / fVar65;
            }
            *(float *)(lVar40 + uVar45 * 4) =
                 fVar44 * *(float *)(lVar8 + uVar45 * 4) +
                 (fVar48 - fVar44) * *(float *)(lVar40 + uVar45 * 4);
            uVar45 = uVar45 + 1;
            iVar28 = iVar28 + -1;
          } while (uVar46 != uVar45);
        }
LAB_014bdef0:
        uVar43 = uVar43 + 1;
        iVar28 = (int)local_68;
        uVar45 = local_68;
      } while (uVar43 != local_90);
      if (lVar1 == 0) goto LAB_014be28e;
    }
    FUN_00d50b20();
  }
LAB_014be28e:
  FUN_00c8e690();
  uVar27 = uStack_44;
  iVar29 = local_48;
  lVar1 = CONCAT44(uStack_44,local_48);
  if (((local_40 == '\0') && (lVar1 != 0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (CONCAT44(uStack_44,local_48) != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar7 = _DAT_02390140;
  local_e8 = (float)iVar29;
  fStack_e4 = (float)uVar27;
  if (iVar28 < 3) {
    if (iVar28 == 2) {
      fVar48 = (float)((double)(float)((uint)(**(float **)(local_38 + 0x10) -
                                             (*(float **)(local_38 + 0x10))[1]) & _DAT_02390140) /
                      local_b0);
      pfVar31 = *(float **)(lVar1 + 0x10);
      *pfVar31 = fVar48;
      pfVar31[1] = fVar48;
    }
    else {
      **(undefined4 **)(lVar1 + 0x10) = 0x43c80000;
    }
  }
  else {
    uVar35 = iVar28 - 1;
    lVar9 = *(longlong *)(local_38 + 0x10);
    puVar10 = *(undefined4 **)(lVar1 + 0x10);
    uVar45 = 1;
    do {
      uVar42 = (int)uVar45 - local_b4;
      uVar43 = (ulonglong)uVar42;
      if ((int)uVar42 < 0) {
        uVar43 = 0;
      }
      uVar42 = local_b4 + (int)uVar45;
      if (iVar28 <= (int)uVar42) {
        uVar42 = uVar35;
      }
      puVar10[uVar45] =
           (float)((double)((float)((uint)(*(float *)(lVar9 + uVar43 * 4) -
                                          *(float *)(lVar9 + (longlong)(int)uVar42 * 4)) & uVar7) /
                           (float)(int)(uVar42 - (int)uVar43)) / local_b0);
      uVar45 = uVar45 + 1;
    } while (uVar45 < uVar35);
    *puVar10 = puVar10[1];
    puVar10[uVar35] = puVar10[iVar28 - 2];
  }
  FUN_015c15b0((float)local_b4 + DAT_02391090,iVar28);
  FUN_00c8e690();
  lVar1 = CONCAT44(uStack_44,local_48);
  if ((((local_40 == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (CONCAT44(uStack_44,local_48) != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  uVar45 = *(ulonglong *)(lVar1 + 0x10);
  uVar7 = (uint)local_68;
  if (0 < (int)(uint)local_68) {
    if (((uint)local_68 < 8) ||
       ((uVar45 < param_3 + (local_d0 + uVar32) * 4 &&
        ((ulonglong)(param_3 + local_d0 * 4) < uVar45 + uVar32 * 4)))) {
      uVar43 = 0;
    }
    else {
      uVar43 = (ulonglong)(uVar38 & 0xfffffff8);
      uVar46 = (uVar43 - 8 >> 3) + 1;
      uVar39 = (ulonglong)((uint)uVar46 & 3);
      if (uVar43 - 8 < 0x18) {
        lVar40 = 0;
      }
      else {
        lVar9 = param_3 + local_d0 * 4;
        lVar41 = -(uVar46 & 0xfffffffffffffffc);
        lVar40 = 0;
        do {
          puVar6 = (undefined8 *)(lVar9 + lVar40 * 4);
          uVar20 = puVar6[1];
          puVar33 = (undefined8 *)(lVar9 + 0x10 + lVar40 * 4);
          uVar21 = *puVar33;
          uVar22 = puVar33[1];
          puVar33 = (undefined8 *)(uVar45 + lVar40 * 4);
          *puVar33 = *puVar6;
          puVar33[1] = uVar20;
          puVar33 = (undefined8 *)(uVar45 + 0x10 + lVar40 * 4);
          *puVar33 = uVar21;
          puVar33[1] = uVar22;
          puVar33 = (undefined8 *)(lVar9 + 0x20 + lVar40 * 4);
          uVar20 = puVar33[1];
          puVar6 = (undefined8 *)(lVar9 + 0x30 + lVar40 * 4);
          uVar21 = *puVar6;
          uVar22 = puVar6[1];
          puVar6 = (undefined8 *)(uVar45 + 0x20 + lVar40 * 4);
          *puVar6 = *puVar33;
          puVar6[1] = uVar20;
          puVar33 = (undefined8 *)(uVar45 + 0x30 + lVar40 * 4);
          *puVar33 = uVar21;
          puVar33[1] = uVar22;
          puVar33 = (undefined8 *)(lVar9 + 0x40 + lVar40 * 4);
          uVar20 = puVar33[1];
          puVar6 = (undefined8 *)(lVar9 + 0x50 + lVar40 * 4);
          uVar21 = *puVar6;
          uVar22 = puVar6[1];
          puVar6 = (undefined8 *)(uVar45 + 0x40 + lVar40 * 4);
          *puVar6 = *puVar33;
          puVar6[1] = uVar20;
          puVar33 = (undefined8 *)(uVar45 + 0x50 + lVar40 * 4);
          *puVar33 = uVar21;
          puVar33[1] = uVar22;
          puVar6 = (undefined8 *)(lVar9 + 0x60 + lVar40 * 4);
          uVar20 = puVar6[1];
          puVar33 = (undefined8 *)(lVar9 + 0x70 + lVar40 * 4);
          uVar21 = *puVar33;
          uVar22 = puVar33[1];
          puVar33 = (undefined8 *)(uVar45 + 0x60 + lVar40 * 4);
          *puVar33 = *puVar6;
          puVar33[1] = uVar20;
          puVar33 = (undefined8 *)(uVar45 + 0x70 + lVar40 * 4);
          *puVar33 = uVar21;
          puVar33[1] = uVar22;
          lVar40 = lVar40 + 0x20;
          lVar41 = lVar41 + 4;
        } while (lVar41 != 0);
      }
      if (uVar39 != 0) {
        lVar9 = uVar45 + lVar40 * 4;
        lVar41 = param_3 + (lVar40 + local_d0) * 4;
        lVar40 = 0;
        do {
          puVar6 = (undefined8 *)(lVar41 + lVar40);
          uVar20 = puVar6[1];
          puVar33 = (undefined8 *)(lVar41 + 0x10 + lVar40);
          uVar21 = *puVar33;
          uVar22 = puVar33[1];
          puVar33 = (undefined8 *)(lVar9 + lVar40);
          *puVar33 = *puVar6;
          puVar33[1] = uVar20;
          puVar33 = (undefined8 *)(lVar9 + 0x10 + lVar40);
          *puVar33 = uVar21;
          puVar33[1] = uVar22;
          lVar40 = lVar40 + 0x20;
        } while (uVar39 << 5 != lVar40);
      }
      if (uVar43 == uVar32) goto LAB_014be668;
    }
    uVar39 = ~uVar43;
    uVar46 = uVar32 & 3;
    if ((uVar38 & 3) != 0) {
      do {
        *(undefined4 *)(uVar45 + uVar43 * 4) = *(undefined4 *)(param_3 + local_d0 * 4 + uVar43 * 4);
        uVar43 = uVar43 + 1;
        uVar46 = uVar46 - 1;
      } while (uVar46 != 0);
    }
    if (2 < uVar39 + uVar32) {
      param_3 = param_3 + local_d0 * 4;
      do {
        *(undefined4 *)(uVar45 + uVar43 * 4) = *(undefined4 *)(param_3 + uVar43 * 4);
        *(undefined4 *)(uVar45 + 4 + uVar43 * 4) = *(undefined4 *)(param_3 + 4 + uVar43 * 4);
        *(undefined4 *)(uVar45 + 8 + uVar43 * 4) = *(undefined4 *)(param_3 + 8 + uVar43 * 4);
        *(undefined4 *)(uVar45 + 0xc + uVar43 * 4) = *(undefined4 *)(param_3 + 0xc + uVar43 * 4);
        uVar43 = uVar43 + 4;
      } while (uVar32 != uVar43);
    }
  }
LAB_014be668:
  fVar48 = (float)FUN_015c22b0();
  lVar9 = local_50;
  if (0 < (int)uVar7) {
    fVar59 = fVar48 + fVar48;
    lVar41 = *(longlong *)(lVar1 + 0x10);
    if ((uint)local_68 < 8) {
      uVar45 = 0;
    }
    else {
      uVar45 = (ulonglong)(uVar38 & 0xfffffff8);
      uVar43 = 0;
      do {
        pfVar31 = (float *)(lVar41 + uVar43 * 4);
        fVar63 = pfVar31[1];
        fVar65 = pfVar31[2];
        fVar44 = pfVar31[3];
        if (fVar59 < *pfVar31) {
          *(float *)(lVar41 + uVar43 * 4) = fVar48;
        }
        if (fVar63 <= fVar59) {
          if (fVar65 > fVar59) goto LAB_014be72c;
LAB_014be700:
          if (fVar59 < fVar44) goto LAB_014be70c;
LAB_014be73e:
          pfVar31 = (float *)(lVar41 + 0x10 + uVar43 * 4);
          fVar63 = *pfVar31;
          fVar65 = pfVar31[1];
          fVar44 = pfVar31[2];
          fVar14 = pfVar31[3];
        }
        else {
          *(float *)(lVar41 + 4 + uVar43 * 4) = fVar48;
          if (fVar65 <= fVar59) goto LAB_014be700;
LAB_014be72c:
          *(float *)(lVar41 + 8 + uVar43 * 4) = fVar48;
          if (fVar59 >= fVar44) goto LAB_014be73e;
LAB_014be70c:
          *(float *)(lVar41 + 0xc + uVar43 * 4) = fVar48;
          pfVar31 = (float *)(lVar41 + 0x10 + uVar43 * 4);
          fVar63 = *pfVar31;
          fVar65 = pfVar31[1];
          fVar44 = pfVar31[2];
          fVar14 = pfVar31[3];
        }
        if (fVar59 < fVar63) {
          *(float *)(lVar41 + 0x10 + uVar43 * 4) = fVar48;
        }
        if (fVar59 < fVar65) {
          *(float *)(lVar41 + 0x14 + uVar43 * 4) = fVar48;
        }
        if (fVar59 < fVar44) {
          *(float *)(lVar41 + 0x18 + uVar43 * 4) = fVar48;
        }
        if (fVar59 < fVar14) {
          *(float *)(lVar41 + 0x1c + uVar43 * 4) = fVar48;
        }
        uVar43 = uVar43 + 8;
      } while (uVar45 != uVar43);
      if (uVar45 == uVar32) goto LAB_014be7c6;
    }
    do {
      if (fVar59 < *(float *)(lVar41 + uVar45 * 4)) {
        *(float *)(lVar41 + uVar45 * 4) = fVar48;
      }
      uVar45 = uVar45 + 1;
    } while (uVar32 != uVar45);
  }
LAB_014be7c6:
  FUN_00c8e690();
  lVar41 = CONCAT44(uStack_44,local_48);
  if (((local_40 == '\0') && (lVar41 != 0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (CONCAT44(uStack_44,local_48) != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  local_a8 = DAT_02394288;
  fVar48 = DAT_023b4df0;
  if ((int)(uint)local_68 < 1) {
    local_88._0_8_ = lVar9 + 0x10;
    local_a8 = DAT_02391074;
    auVar49 = ZEXT416(DAT_02391078);
  }
  else {
    while( true ) {
      uVar45 = 0;
      do {
        local_88._0_4_ = fVar48;
        fVar48 = (float)FUN_014eeba0();
        *(float *)(*(longlong *)(lVar41 + 0x10) + uVar45 * 4) = fVar48;
        if (fVar48 <= (float)local_88._0_4_) {
          fVar48 = (float)local_88._0_4_;
        }
        uVar45 = uVar45 + 1;
      } while (uVar32 != uVar45);
      if ((DAT_023b4df0 < fVar48) || (local_a8 < DAT_02394254)) break;
      local_a8 = local_a8 + DAT_0241b638;
    }
    local_88._0_8_ = local_50 + 0x10;
    uVar45 = 0;
    do {
      fVar48 = (float)FUN_00e84a50();
      *(float *)(*(longlong *)local_88._0_8_ + uVar45 * 4) =
           SQRT(fVar48 * *(float *)(*(longlong *)(lVar41 + 0x10) + uVar45 * 4));
      uVar45 = uVar45 + 1;
    } while (uVar32 != uVar45);
    lVar9 = *(longlong *)(local_38 + 0x10);
    local_a8 = DAT_02391074;
    if (uVar32 - 1 < 3) {
      auVar49 = ZEXT416(DAT_02391078);
      uVar45 = 0;
    }
    else {
      auVar49 = ZEXT416(DAT_02391078);
      uVar45 = 0;
      do {
        fVar48 = *(float *)(lVar9 + uVar45 * 4);
        fVar59 = *(float *)(lVar9 + 4 + uVar45 * 4);
        fVar63 = fVar48;
        if (auVar49._0_4_ <= fVar48) {
          fVar63 = auVar49._0_4_;
        }
        if (fVar48 <= local_a8) {
          fVar48 = local_a8;
        }
        fVar65 = fVar59;
        if (fVar63 <= fVar59) {
          fVar65 = fVar63;
        }
        if (fVar59 <= fVar48) {
          fVar59 = fVar48;
        }
        fVar48 = *(float *)(lVar9 + 8 + uVar45 * 4);
        fVar63 = fVar48;
        if (fVar65 <= fVar48) {
          fVar63 = fVar65;
        }
        if (fVar48 <= fVar59) {
          fVar48 = fVar59;
        }
        local_a8 = *(float *)(lVar9 + 0xc + uVar45 * 4);
        fVar59 = local_a8;
        if (fVar63 <= local_a8) {
          fVar59 = fVar63;
        }
        auVar49 = ZEXT416((uint)fVar59);
        if (local_a8 <= fVar48) {
          local_a8 = fVar48;
        }
        uVar45 = uVar45 + 4;
      } while ((uVar38 & 0xfffffffc) != uVar45);
    }
    if ((ulonglong)(uVar38 & 3) != 0) {
      uVar43 = 0;
      fVar48 = local_a8;
      do {
        local_a8 = *(float *)(lVar9 + uVar45 * 4 + uVar43 * 4);
        fVar59 = local_a8;
        if (auVar49._0_4_ <= local_a8) {
          fVar59 = auVar49._0_4_;
        }
        auVar49 = ZEXT416((uint)fVar59);
        if (local_a8 <= fVar48) {
          local_a8 = fVar48;
        }
        uVar43 = uVar43 + 1;
        fVar48 = local_a8;
      } while ((uVar38 & 3) != uVar43);
    }
  }
  auVar56._4_12_ = auVar49._4_12_;
  auVar56._0_4_ = auVar49._0_4_ / DAT_023908e0;
  iVar28 = FUN_00e7d780(auVar56._0_8_);
  iVar29 = FUN_00e7d780(local_a8 / DAT_023908e0);
  local_a8 = (float)iVar28 * DAT_023908e0 + DAT_0241b664;
  iVar28 = FUN_00e7d780((((float)iVar29 * DAT_023908e0 + DAT_023908e0) - local_a8) / DAT_023908e0);
  FUN_00c8e690();
  lVar9 = CONCAT44(uStack_44,local_48);
  if ((((local_40 == '\0') && (lVar9 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (CONCAT44(uStack_44,local_48) != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_90 = CONCAT44(local_90._4_4_,iVar28);
  local_c8._0_8_ = lVar9;
  ___bzero();
  if (0 < (int)(uint)local_68) {
    uVar45 = 0;
    do {
      uVar38 = FUN_00e7d780(*(float *)(*(longlong *)(local_38 + 0x10) + uVar45 * 4) - local_a8);
      if ((-1 < (int)uVar38) && ((int)uVar38 < iVar28 * 100)) {
        *(float *)(*(longlong *)(local_c8._0_8_ + 0x10) + (ulonglong)uVar38 * 4) =
             *(float *)(*(longlong *)local_88._0_8_ + uVar45 * 4) +
             *(float *)(*(longlong *)(local_c8._0_8_ + 0x10) + (ulonglong)uVar38 * 4);
      }
      uVar45 = uVar45 + 1;
    } while (uVar32 != uVar45);
  }
  puVar33 = local_58;
  FUN_015c15b0(0,iVar28 * 100);
  local_48 = (int)local_90 * 0x32;
  FUN_015b32a0();
  iVar28 = local_48;
  FUN_00d50b20();
  if (lVar41 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (CONCAT44(fStack_e4,local_e8) != 0) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (local_d8 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (puVar33 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return local_a8 + (float)iVar28;
}


