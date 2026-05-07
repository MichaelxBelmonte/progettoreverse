// Function: FUN_01616770
// Address: 01616770
// Size: 3322 bytes
// Class: Unknown

void FUN_01616770(uint32_t param_1,uint32_t param_2,uint64_t param_3,int64_t *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int64_t lVar29;
  int64_t lVar30;
  int in_ECX;
  int iVar31;
  int64_t *plVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t *plVar35;
  int64_t lVar36;
  uint64_t in_RDX;
  void *pvVar37;
  int64_t *plVar38;
  int64_t lVar39;
  uint64_t uVar40;
  int64_t lVar41;
  uint unaff_ESI;
  uint64_t uVar42;
  int64_t *this_ptr;
  int64_t lVar43;
  uint64_t uVar44;
  int iVar45;
  size_t sVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  int64_t *plVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  int64_t lVar52;
  float fVar53;
  float fVar54;
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  int iVar59;
  int iVar65;
  int iVar66;
  uint8_t in_XMM2 [16];
  int iVar67;
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a0;
  int64_t *local_98;
  int64_t local_90;
  int64_t *local_88;
  int local_7c;
  int64_t local_78;
  
  local_a0 = CONCAT44(local_a0._4_4_,param_2);
  iVar45 = (int)param_3;
  local_b8 = in_XMM2;
  FUN_00c8e690();
  if ((local_e8 == '\0') && (local_f0 != 0)) {
    FUN_00d50b00();
  }
  local_78 = local_f0;
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  sVar46 = (size_t)param_3;
  iVar31 = (int)in_RDX;
  local_7c = in_ECX;
  if (0 < (int)unaff_ESI) {
    pvVar37 = (void *)(int64_t)((iVar31 - in_ECX) * 4);
    plVar32 = (int64_t *)(int64_t)iVar31;
    local_90 = (int64_t)in_ECX;
    local_98 = (int64_t *)(uint64_t)unaff_ESI;
    local_c0 = plVar32;
    local_88 = param_4;
    if (unaff_ESI != 1) {
      uVar48 = 0;
      plVar32 = (int64_t *)((int64_t)plVar32 * 8);
      do {
        _memcpy(plVar32,pvVar37,(size_t)param_3);
        _memcpy(plVar32,pvVar37,(size_t)param_3);
        sVar46 = (size_t)param_3;
        uVar48 = uVar48 + 2;
      } while ((unaff_ESI & 0xfffffffe) != uVar48);
    }
    in_ECX = local_7c;
    param_4 = local_88;
    if (((uint64_t)local_98 & 1) != 0) {
      _memcpy(plVar32,pvVar37,sVar46);
    }
  }
  local_e0 = *param_4;
  local_d8 = '\0';
  FUN_01604630(param_1,in_RDX,in_RDX & 0xffffffff,&local_e0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = *param_4;
  local_c8 = '\0';
  FUN_016044e0((uint32_t)local_a0,in_RDX,in_RDX & 0xffffffff,&local_d0,0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar29 = FUN_00e83010();
  iVar28 = _UNK_023de2dc;
  iVar27 = _UNK_023de2d8;
  iVar26 = _UNK_023de2d4;
  iVar25 = g_023de2d0;
  iVar24 = _UNK_023de2cc;
  iVar23 = _UNK_023de2c8;
  iVar22 = _UNK_023de2c4;
  iVar21 = g_023de2c0;
  iVar20 = _UNK_023de2bc;
  iVar19 = _UNK_023de2b8;
  iVar18 = _UNK_023de2b4;
  iVar17 = g_023de2b0;
  iVar16 = _UNK_0239418c;
  iVar15 = _UNK_02394188;
  iVar14 = _UNK_02394184;
  iVar13 = g_02394180;
  if (iVar45 - in_ECX == 0 || iVar45 < in_ECX) goto LAB_0161701b;
  fVar53 = g_02390124 / (float)(iVar45 - in_ECX);
  plVar49 = (int64_t *)(int64_t)local_7c;
  plVar38 = (int64_t *)(int64_t)iVar45;
  uVar48 = (int64_t)plVar38 - (int64_t)plVar49;
  plVar32 = plVar49;
  if (uVar48 < 8) {
LAB_01616b4a:
    do {
      *(float *)(lVar29 + (int64_t)plVar32 * 4) = (float)((int)plVar32 - local_7c) * fVar53;
      plVar32 = (int64_t *)((int64_t)plVar32 + 1);
    } while (plVar38 != plVar32);
  }
  else {
    uVar42 = uVar48 & 0xfffffffffffffff8;
    iVar72 = g_0238fcc0 + local_7c;
    iVar73 = _UNK_0238fcc4 + local_7c;
    iVar74 = _UNK_0238fcc8 + local_7c;
    iVar75 = _UNK_0238fccc + local_7c;
    uVar47 = (uVar42 - 8 >> 3) + 1;
    if (uVar42 - 8 == 0) {
      lVar43 = 0;
LAB_01616b1e:
      auVar70._0_4_ = (float)(iVar72 - local_7c) * fVar53;
      auVar70._4_4_ = (float)(iVar73 - local_7c) * fVar53;
      auVar70._8_4_ = (float)(iVar74 - local_7c) * fVar53;
      auVar70._12_4_ = (float)(iVar75 - local_7c) * fVar53;
      auVar68._0_4_ = (float)((iVar72 - local_7c) + g_02394180) * fVar53;
      auVar68._4_4_ = (float)((iVar73 - local_7c) + _UNK_02394184) * fVar53;
      auVar68._8_4_ = (float)((iVar74 - local_7c) + _UNK_02394188) * fVar53;
      auVar68._12_4_ = (float)((iVar75 - local_7c) + _UNK_0239418c) * fVar53;
      *(uint8_t (*) [16])(lVar29 + (lVar43 + (int64_t)plVar49) * 4) = auVar70;
      *(uint8_t (*) [16])(lVar29 + 0x10 + (lVar43 + (int64_t)plVar49) * 4) = auVar68;
    }
    else {
      lVar34 = lVar29 + (int64_t)plVar49 * 4;
      lVar33 = -(uVar47 & 0xfffffffffffffffe);
      lVar43 = 0;
      do {
        iVar59 = iVar72 - local_7c;
        iVar65 = iVar73 - local_7c;
        iVar66 = iVar74 - local_7c;
        iVar67 = iVar75 - local_7c;
        pfVar1 = (float *)(lVar34 + lVar43 * 4);
        *pfVar1 = (float)iVar59 * fVar53;
        pfVar1[1] = (float)iVar65 * fVar53;
        pfVar1[2] = (float)iVar66 * fVar53;
        pfVar1[3] = (float)iVar67 * fVar53;
        pfVar1 = (float *)(lVar34 + 0x10 + lVar43 * 4);
        *pfVar1 = (float)(iVar59 + iVar13) * fVar53;
        pfVar1[1] = (float)(iVar65 + iVar14) * fVar53;
        pfVar1[2] = (float)(iVar66 + iVar15) * fVar53;
        pfVar1[3] = (float)(iVar67 + iVar16) * fVar53;
        auVar64._0_4_ = (float)(iVar59 + iVar21) * fVar53;
        auVar64._4_4_ = (float)(iVar65 + iVar22) * fVar53;
        auVar64._8_4_ = (float)(iVar66 + iVar23) * fVar53;
        auVar64._12_4_ = (float)(iVar67 + iVar24) * fVar53;
        pfVar1 = (float *)(lVar34 + 0x20 + lVar43 * 4);
        *pfVar1 = (float)(iVar59 + iVar17) * fVar53;
        pfVar1[1] = (float)(iVar65 + iVar18) * fVar53;
        pfVar1[2] = (float)(iVar66 + iVar19) * fVar53;
        pfVar1[3] = (float)(iVar67 + iVar20) * fVar53;
        *(uint8_t (*) [16])(lVar34 + 0x30 + lVar43 * 4) = auVar64;
        lVar43 = lVar43 + 0x10;
        iVar72 = iVar72 + iVar25;
        iVar73 = iVar73 + iVar26;
        iVar74 = iVar74 + iVar27;
        iVar75 = iVar75 + iVar28;
        lVar33 = lVar33 + 2;
      } while (lVar33 != 0);
      if ((uVar47 & 1) != 0) goto LAB_01616b1e;
    }
    if (uVar48 != uVar42) {
      plVar32 = (int64_t *)(uVar42 + (int64_t)plVar49);
      goto LAB_01616b4a;
    }
  }
  if (0 < (int)unaff_ESI) {
    lVar43 = *(int64_t *)(local_78 + 0x10);
    lVar34 = (int64_t)iVar31;
    uVar42 = (uint64_t)unaff_ESI;
    if (uVar48 < 8) {
      uVar47 = 0;
      lVar33 = lVar43;
      do {
        plVar32 = plVar49;
        if ((uVar48 & 1) != 0) {
          plVar32 = (int64_t *)(uVar47 * lVar34 + (int64_t)plVar49);
          *(float *)(lVar43 + (int64_t)plVar32 * 4) =
               *(float *)(lVar29 + (int64_t)plVar49 * 4) *
               *(float *)(lVar43 + (int64_t)plVar32 * 4);
          plVar32 = (int64_t *)((int64_t)plVar49 + 1);
        }
        if (~(uint64_t)plVar49 != -(int64_t)plVar38) {
          do {
            *(float *)(lVar33 + (int64_t)plVar32 * 4) =
                 *(float *)(lVar29 + (int64_t)plVar32 * 4) *
                 *(float *)(lVar33 + (int64_t)plVar32 * 4);
            *(float *)(lVar33 + 4 + (int64_t)plVar32 * 4) =
                 *(float *)(lVar29 + 4 + (int64_t)plVar32 * 4) *
                 *(float *)(lVar33 + 4 + (int64_t)plVar32 * 4);
            plVar32 = (int64_t *)((int64_t)plVar32 + 2);
          } while (plVar38 != plVar32);
        }
        uVar47 = uVar47 + 1;
        lVar33 = lVar33 + lVar34 * 4;
      } while (uVar47 != uVar42);
    }
    else {
      uVar44 = uVar48 & 0xfffffffffffffff8;
      uVar47 = lVar29 + (int64_t)plVar49 * 4;
      uVar50 = lVar29 + (int64_t)plVar38 * 4;
      if (uVar48 == uVar44) {
        local_a0 = uVar44 - 8;
        uVar44 = (local_a0 >> 3) + 1;
        local_88 = (int64_t *)~(uint64_t)plVar49;
        local_c0 = (int64_t *)((int64_t)plVar49 + 1);
        local_98 = (int64_t *)-(int64_t)plVar38;
        lVar36 = lVar43 + (int64_t)plVar49 * 4 + 0x30;
        lVar33 = lVar29 + (int64_t)plVar49 * 4;
        local_90 = -(uVar44 & 0xfffffffffffffffe);
        uVar40 = 0;
        lVar39 = lVar43;
        do {
          lVar41 = uVar40 * lVar34;
          plVar32 = (int64_t *)((int64_t)plVar49 + lVar41);
          if (((uint64_t)(lVar43 + (int64_t)plVar32 * 4) < uVar50) &&
             (uVar47 < (uint64_t)(lVar43 + (int64_t)((int64_t)plVar38 + lVar41) * 4))) {
            plVar35 = plVar49;
            if ((uVar48 & 1) != 0) {
              *(float *)(lVar43 + (int64_t)plVar32 * 4) =
                   *(float *)(lVar29 + (int64_t)plVar49 * 4) *
                   *(float *)(lVar43 + (int64_t)plVar32 * 4);
              plVar35 = local_c0;
            }
            if (local_88 != local_98) {
              do {
                *(float *)(lVar39 + (int64_t)plVar35 * 4) =
                     *(float *)(lVar29 + (int64_t)plVar35 * 4) *
                     *(float *)(lVar39 + (int64_t)plVar35 * 4);
                *(float *)(lVar39 + 4 + (int64_t)plVar35 * 4) =
                     *(float *)(lVar29 + 4 + (int64_t)plVar35 * 4) *
                     *(float *)(lVar39 + 4 + (int64_t)plVar35 * 4);
                plVar35 = (int64_t *)((int64_t)plVar35 + 2);
              } while (plVar38 != plVar35);
            }
          }
          else {
            if (local_a0 == 0) {
              lVar52 = 0;
            }
            else {
              lVar52 = 0;
              lVar30 = local_90;
              do {
                pfVar1 = (float *)(lVar33 + lVar52 * 4);
                pfVar2 = (float *)(lVar33 + 0x10 + lVar52 * 4);
                fVar53 = *pfVar2;
                fVar54 = pfVar2[1];
                fVar4 = pfVar2[2];
                fVar5 = pfVar2[3];
                pfVar2 = (float *)(lVar36 + -0x30 + lVar52 * 4);
                auVar60._0_4_ = *pfVar2 * *pfVar1;
                auVar60._4_4_ = pfVar2[1] * pfVar1[1];
                auVar60._8_4_ = pfVar2[2] * pfVar1[2];
                auVar60._12_4_ = pfVar2[3] * pfVar1[3];
                pfVar1 = (float *)(lVar36 + -0x20 + lVar52 * 4);
                fVar6 = pfVar1[1];
                fVar7 = pfVar1[2];
                fVar8 = pfVar1[3];
                pfVar2 = (float *)(lVar36 + -0x10 + lVar52 * 4);
                fVar9 = *pfVar2;
                fVar10 = pfVar2[1];
                fVar11 = pfVar2[2];
                fVar12 = pfVar2[3];
                auVar64 = *(uint8_t (*) [16])(lVar36 + lVar52 * 4);
                *(uint8_t (*) [16])(lVar36 + -0x30 + lVar52 * 4) = auVar60;
                pfVar2 = (float *)(lVar36 + -0x20 + lVar52 * 4);
                *pfVar2 = *pfVar1 * fVar53;
                pfVar2[1] = fVar6 * fVar54;
                pfVar2[2] = fVar7 * fVar4;
                pfVar2[3] = fVar8 * fVar5;
                pfVar2 = (float *)(lVar33 + 0x20 + lVar52 * 4);
                fVar53 = pfVar2[1];
                fVar54 = pfVar2[2];
                fVar4 = pfVar2[3];
                pfVar1 = (float *)(lVar33 + 0x30 + lVar52 * 4);
                auVar55._0_4_ = *pfVar1 * auVar64._0_4_;
                auVar55._4_4_ = pfVar1[1] * auVar64._4_4_;
                auVar55._8_4_ = pfVar1[2] * auVar64._8_4_;
                auVar55._12_4_ = pfVar1[3] * auVar64._12_4_;
                pfVar1 = (float *)(lVar36 + -0x10 + lVar52 * 4);
                *pfVar1 = *pfVar2 * fVar9;
                pfVar1[1] = fVar53 * fVar10;
                pfVar1[2] = fVar54 * fVar11;
                pfVar1[3] = fVar4 * fVar12;
                *(uint8_t (*) [16])(lVar36 + lVar52 * 4) = auVar55;
                lVar52 = lVar52 + 0x10;
                lVar30 = lVar30 + 2;
              } while (lVar30 != 0);
              if ((uVar44 & 1) == 0) goto LAB_01616cc0;
            }
            lVar52 = lVar52 + (int64_t)plVar49;
            pfVar1 = (float *)(lVar29 + lVar52 * 4);
            auVar64 = *(uint8_t (*) [16])(lVar29 + 0x10 + lVar52 * 4);
            lVar52 = lVar52 + lVar41;
            pfVar2 = (float *)(lVar43 + lVar52 * 4);
            auVar61._0_4_ = *pfVar2 * *pfVar1;
            auVar61._4_4_ = pfVar2[1] * pfVar1[1];
            auVar61._8_4_ = pfVar2[2] * pfVar1[2];
            auVar61._12_4_ = pfVar2[3] * pfVar1[3];
            pfVar1 = (float *)(lVar43 + 0x10 + lVar52 * 4);
            fVar53 = pfVar1[1];
            fVar54 = pfVar1[2];
            fVar4 = pfVar1[3];
            *(uint8_t (*) [16])(lVar43 + lVar52 * 4) = auVar61;
            pfVar2 = (float *)(lVar43 + 0x10 + lVar52 * 4);
            *pfVar2 = *pfVar1 * auVar64._0_4_;
            pfVar2[1] = fVar53 * auVar64._4_4_;
            pfVar2[2] = fVar54 * auVar64._8_4_;
            pfVar2[3] = fVar4 * auVar64._12_4_;
          }
LAB_01616cc0:
          uVar40 = uVar40 + 1;
          lVar36 = lVar36 + lVar34 * 4;
          lVar39 = lVar39 + lVar34 * 4;
        } while (uVar40 != uVar42);
      }
      else {
        local_88 = (int64_t *)(uVar44 + (int64_t)plVar49);
        local_a0 = uVar44 - 8;
        local_98 = (int64_t *)((local_a0 >> 3) + 1);
        lVar36 = lVar43 + (int64_t)plVar49 * 4 + 0x30;
        lVar39 = lVar29 + (int64_t)plVar49 * 4;
        local_90 = -((uint64_t)local_98 & 0xfffffffffffffffe);
        lVar33 = lVar43 + 4;
        uVar48 = 0;
        do {
          lVar41 = uVar48 * lVar34;
          if ((uVar50 <= (uint64_t)(lVar43 + (int64_t)(lVar41 + (int64_t)plVar49) * 4)) ||
             (plVar32 = plVar49,
             (uint64_t)(lVar43 + (int64_t)(lVar41 + (int64_t)plVar38) * 4) <= uVar47)) {
            plVar32 = local_88;
            if (local_a0 == 0) {
              lVar52 = 0;
            }
            else {
              lVar52 = 0;
              lVar30 = local_90;
              do {
                pfVar1 = (float *)(lVar39 + lVar52 * 4);
                pfVar2 = (float *)(lVar39 + 0x10 + lVar52 * 4);
                fVar53 = *pfVar2;
                fVar54 = pfVar2[1];
                fVar4 = pfVar2[2];
                fVar5 = pfVar2[3];
                pfVar2 = (float *)(lVar36 + -0x30 + lVar52 * 4);
                auVar62._0_4_ = *pfVar2 * *pfVar1;
                auVar62._4_4_ = pfVar2[1] * pfVar1[1];
                auVar62._8_4_ = pfVar2[2] * pfVar1[2];
                auVar62._12_4_ = pfVar2[3] * pfVar1[3];
                pfVar1 = (float *)(lVar36 + -0x20 + lVar52 * 4);
                fVar6 = pfVar1[1];
                fVar7 = pfVar1[2];
                fVar8 = pfVar1[3];
                pfVar2 = (float *)(lVar36 + -0x10 + lVar52 * 4);
                fVar9 = *pfVar2;
                fVar10 = pfVar2[1];
                fVar11 = pfVar2[2];
                fVar12 = pfVar2[3];
                auVar64 = *(uint8_t (*) [16])(lVar36 + lVar52 * 4);
                *(uint8_t (*) [16])(lVar36 + -0x30 + lVar52 * 4) = auVar62;
                pfVar2 = (float *)(lVar36 + -0x20 + lVar52 * 4);
                *pfVar2 = *pfVar1 * fVar53;
                pfVar2[1] = fVar6 * fVar54;
                pfVar2[2] = fVar7 * fVar4;
                pfVar2[3] = fVar8 * fVar5;
                pfVar2 = (float *)(lVar39 + 0x20 + lVar52 * 4);
                fVar53 = pfVar2[1];
                fVar54 = pfVar2[2];
                fVar4 = pfVar2[3];
                pfVar1 = (float *)(lVar39 + 0x30 + lVar52 * 4);
                auVar56._0_4_ = *pfVar1 * auVar64._0_4_;
                auVar56._4_4_ = pfVar1[1] * auVar64._4_4_;
                auVar56._8_4_ = pfVar1[2] * auVar64._8_4_;
                auVar56._12_4_ = pfVar1[3] * auVar64._12_4_;
                pfVar1 = (float *)(lVar36 + -0x10 + lVar52 * 4);
                *pfVar1 = *pfVar2 * fVar9;
                pfVar1[1] = fVar53 * fVar10;
                pfVar1[2] = fVar54 * fVar11;
                pfVar1[3] = fVar4 * fVar12;
                *(uint8_t (*) [16])(lVar36 + lVar52 * 4) = auVar56;
                lVar52 = lVar52 + 0x10;
                lVar30 = lVar30 + 2;
              } while (lVar30 != 0);
              if (((uint64_t)local_98 & 1) == 0) goto LAB_01616f97;
            }
            lVar52 = lVar52 + (int64_t)plVar49;
            pfVar1 = (float *)(lVar29 + lVar52 * 4);
            auVar64 = *(uint8_t (*) [16])(lVar29 + 0x10 + lVar52 * 4);
            lVar52 = lVar52 + lVar41;
            pfVar2 = (float *)(lVar43 + lVar52 * 4);
            auVar63._0_4_ = *pfVar2 * *pfVar1;
            auVar63._4_4_ = pfVar2[1] * pfVar1[1];
            auVar63._8_4_ = pfVar2[2] * pfVar1[2];
            auVar63._12_4_ = pfVar2[3] * pfVar1[3];
            pfVar1 = (float *)(lVar43 + 0x10 + lVar52 * 4);
            fVar53 = pfVar1[1];
            fVar54 = pfVar1[2];
            fVar4 = pfVar1[3];
            *(uint8_t (*) [16])(lVar43 + lVar52 * 4) = auVar63;
            pfVar2 = (float *)(lVar43 + 0x10 + lVar52 * 4);
            *pfVar2 = *pfVar1 * auVar64._0_4_;
            pfVar2[1] = fVar53 * auVar64._4_4_;
            pfVar2[2] = fVar54 * auVar64._8_4_;
            pfVar2[3] = fVar4 * auVar64._12_4_;
          }
LAB_01616f97:
          plVar35 = plVar32;
          if ((iVar45 - (int)plVar32 & 1U) != 0) {
            *(float *)(lVar43 + (int64_t)(lVar41 + (int64_t)plVar32) * 4) =
                 *(float *)(lVar29 + (int64_t)plVar32 * 4) *
                 *(float *)(lVar43 + (lVar41 + (int64_t)plVar32) * 4);
            plVar35 = (int64_t *)((int64_t)plVar32 + 1);
          }
          if (~(uint64_t)plVar32 != -(int64_t)plVar38) {
            do {
              *(float *)(lVar33 + -4 + (int64_t)plVar35 * 4) =
                   *(float *)(lVar29 + (int64_t)plVar35 * 4) *
                   *(float *)(lVar33 + -4 + (int64_t)plVar35 * 4);
              *(float *)(lVar33 + (int64_t)plVar35 * 4) =
                   *(float *)(lVar29 + 4 + (int64_t)plVar35 * 4) *
                   *(float *)(lVar33 + (int64_t)plVar35 * 4);
              plVar35 = (int64_t *)((int64_t)plVar35 + 2);
            } while (plVar38 != plVar35);
          }
          uVar48 = uVar48 + 1;
          lVar36 = lVar36 + lVar34 * 4;
          lVar33 = lVar33 + lVar34 * 4;
        } while (uVar48 != uVar42);
      }
    }
  }
LAB_0161701b:
  FUN_00e83070();
  if ((0 < (int)unaff_ESI) && (local_7c < iVar31)) {
    lVar29 = *(int64_t *)(local_78 + 0x10);
    lVar43 = *(int64_t *)(*this_ptr + 0x10);
    uVar50 = (uint64_t)local_7c;
    uVar47 = (uint64_t)iVar31;
    uVar48 = (uint64_t)unaff_ESI;
    uVar42 = uVar47 - uVar50;
    if (uVar42 < 8) {
      lVar34 = lVar29 + 4;
      uVar44 = 0;
      lVar33 = lVar43;
      do {
        uVar40 = uVar50;
        if ((uVar42 & 1) != 0) {
          lVar39 = uVar44 * uVar47 + uVar50;
          fVar54 = *(float *)(lVar43 + lVar39 * 4) -
                   *(float *)(lVar29 + lVar39 * 4) * (float)local_b8._0_4_;
          fVar53 = 0.0;
          if (0.0 <= fVar54) {
            fVar53 = fVar54;
          }
          *(float *)(lVar43 + lVar39 * 4) = fVar53;
          uVar40 = uVar50 + 1;
        }
        if (~uVar50 != -uVar47) {
          do {
            fVar54 = *(float *)(lVar33 + uVar40 * 4) -
                     *(float *)(lVar34 + -4 + uVar40 * 4) * (float)local_b8._0_4_;
            fVar53 = 0.0;
            if (0.0 <= fVar54) {
              fVar53 = fVar54;
            }
            *(float *)(lVar33 + uVar40 * 4) = fVar53;
            fVar54 = *(float *)(lVar33 + 4 + uVar40 * 4) -
                     *(float *)(lVar34 + uVar40 * 4) * (float)local_b8._0_4_;
            fVar53 = 0.0;
            if (0.0 <= fVar54) {
              fVar53 = fVar54;
            }
            *(float *)(lVar33 + 4 + uVar40 * 4) = fVar53;
            uVar40 = uVar40 + 2;
          } while (uVar47 != uVar40);
        }
        uVar44 = uVar44 + 1;
        lVar33 = lVar33 + uVar47 * 4;
        lVar34 = lVar34 + uVar47 * 4;
      } while (uVar44 != uVar48);
    }
    else {
      uVar44 = uVar42 & 0xfffffffffffffff8;
      if (uVar42 == uVar44) {
        lVar36 = lVar43 + uVar50 * 4 + 0x10;
        lVar33 = uVar47 * 4;
        lVar41 = lVar29 + uVar50 * 4 + 0x10;
        lVar34 = lVar29 + 4;
        uVar40 = 0;
        lVar39 = lVar43;
        do {
          lVar52 = uVar40 * uVar47 + uVar50;
          lVar30 = uVar40 * uVar47 + uVar47;
          if (((uint64_t)(lVar43 + lVar52 * 4) < (uint64_t)(lVar29 + lVar30 * 4)) &&
             ((uint64_t)(lVar29 + lVar52 * 4) < (uint64_t)(lVar43 + lVar30 * 4))) {
            uVar51 = uVar50;
            if ((uVar42 & 1) != 0) {
              fVar54 = *(float *)(lVar43 + lVar52 * 4) -
                       *(float *)(lVar29 + lVar52 * 4) * (float)local_b8._0_4_;
              fVar53 = 0.0;
              if (0.0 <= fVar54) {
                fVar53 = fVar54;
              }
              *(float *)(lVar43 + lVar52 * 4) = fVar53;
              uVar51 = uVar50 + 1;
            }
            if (~uVar50 != -uVar47) {
              do {
                fVar54 = *(float *)(lVar39 + uVar51 * 4) -
                         *(float *)(lVar34 + -4 + uVar51 * 4) * (float)local_b8._0_4_;
                fVar53 = 0.0;
                if (0.0 <= fVar54) {
                  fVar53 = fVar54;
                }
                *(float *)(lVar39 + uVar51 * 4) = fVar53;
                fVar54 = *(float *)(lVar39 + 4 + uVar51 * 4) -
                         *(float *)(lVar34 + uVar51 * 4) * (float)local_b8._0_4_;
                fVar53 = 0.0;
                if (0.0 <= fVar54) {
                  fVar53 = fVar54;
                }
                *(float *)(lVar39 + 4 + uVar51 * 4) = fVar53;
                uVar51 = uVar51 + 2;
              } while (uVar47 != uVar51);
            }
          }
          else {
            uVar51 = 0;
            do {
              pfVar2 = (float *)(lVar41 + -0x10 + uVar51 * 4);
              pfVar1 = (float *)(lVar41 + uVar51 * 4);
              pfVar3 = (float *)(lVar36 + -0x10 + uVar51 * 4);
              auVar69._0_4_ = *pfVar3 - *pfVar2 * (float)local_b8._0_4_;
              auVar69._4_4_ = pfVar3[1] - pfVar2[1] * (float)local_b8._0_4_;
              auVar69._8_4_ = pfVar3[2] - pfVar2[2] * (float)local_b8._0_4_;
              auVar69._12_4_ = pfVar3[3] - pfVar2[3] * (float)local_b8._0_4_;
              pfVar2 = (float *)(lVar36 + uVar51 * 4);
              auVar57._0_4_ = *pfVar2 - *pfVar1 * (float)local_b8._0_4_;
              auVar57._4_4_ = pfVar2[1] - pfVar1[1] * (float)local_b8._0_4_;
              auVar57._8_4_ = pfVar2[2] - pfVar1[2] * (float)local_b8._0_4_;
              auVar57._12_4_ = pfVar2[3] - pfVar1[3] * (float)local_b8._0_4_;
              auVar64 = maxps(ZEXT816(0),auVar69);
              auVar70 = maxps(ZEXT816(0),auVar57);
              *(uint8_t (*) [16])(lVar36 + -0x10 + uVar51 * 4) = auVar64;
              *(uint8_t (*) [16])(lVar36 + uVar51 * 4) = auVar70;
              uVar51 = uVar51 + 8;
            } while (uVar44 != uVar51);
          }
          uVar40 = uVar40 + 1;
          lVar36 = lVar36 + lVar33;
          lVar41 = lVar41 + lVar33;
          lVar39 = lVar39 + lVar33;
          lVar34 = lVar34 + lVar33;
        } while (uVar40 != uVar48);
      }
      else {
        lVar41 = lVar43 + uVar50 * 4 + 0x10;
        lVar33 = uVar47 * 4;
        lVar36 = lVar29 + uVar50 * 4 + 0x10;
        lVar34 = lVar43 + 4;
        uVar42 = 0;
        lVar39 = lVar29;
        do {
          lVar52 = uVar42 * uVar47;
          if ((lVar29 + (lVar52 + uVar47) * 4 <= lVar43 + (uVar50 + lVar52) * 4) ||
             (uVar40 = uVar50, lVar43 + (lVar52 + uVar47) * 4 <= lVar29 + (uVar50 + lVar52) * 4)) {
            uVar51 = 0;
            do {
              pfVar2 = (float *)(lVar36 + -0x10 + uVar51 * 4);
              pfVar1 = (float *)(lVar36 + uVar51 * 4);
              pfVar3 = (float *)(lVar41 + -0x10 + uVar51 * 4);
              auVar71._0_4_ = *pfVar3 - *pfVar2 * (float)local_b8._0_4_;
              auVar71._4_4_ = pfVar3[1] - pfVar2[1] * (float)local_b8._0_4_;
              auVar71._8_4_ = pfVar3[2] - pfVar2[2] * (float)local_b8._0_4_;
              auVar71._12_4_ = pfVar3[3] - pfVar2[3] * (float)local_b8._0_4_;
              pfVar2 = (float *)(lVar41 + uVar51 * 4);
              auVar58._0_4_ = *pfVar2 - *pfVar1 * (float)local_b8._0_4_;
              auVar58._4_4_ = pfVar2[1] - pfVar1[1] * (float)local_b8._0_4_;
              auVar58._8_4_ = pfVar2[2] - pfVar1[2] * (float)local_b8._0_4_;
              auVar58._12_4_ = pfVar2[3] - pfVar1[3] * (float)local_b8._0_4_;
              auVar64 = maxps(ZEXT816(0),auVar71);
              auVar70 = maxps(ZEXT816(0),auVar58);
              *(uint8_t (*) [16])(lVar41 + -0x10 + uVar51 * 4) = auVar64;
              *(uint8_t (*) [16])(lVar41 + uVar51 * 4) = auVar70;
              uVar51 = uVar51 + 8;
              uVar40 = uVar50 + uVar44;
            } while (uVar44 != uVar51);
          }
          uVar51 = uVar40;
          if ((iVar31 - (int)uVar40 & 1U) != 0) {
            lVar52 = lVar52 + uVar40;
            fVar54 = *(float *)(lVar43 + lVar52 * 4) -
                     *(float *)(lVar29 + lVar52 * 4) * (float)local_b8._0_4_;
            fVar53 = 0.0;
            if (0.0 <= fVar54) {
              fVar53 = fVar54;
            }
            *(float *)(lVar43 + lVar52 * 4) = fVar53;
            uVar51 = uVar40 + 1;
          }
          if (~uVar40 != -uVar47) {
            do {
              fVar54 = *(float *)(lVar34 + -4 + uVar51 * 4) -
                       *(float *)(lVar39 + uVar51 * 4) * (float)local_b8._0_4_;
              fVar53 = 0.0;
              if (0.0 <= fVar54) {
                fVar53 = fVar54;
              }
              *(float *)(lVar34 + -4 + uVar51 * 4) = fVar53;
              fVar54 = *(float *)(lVar34 + uVar51 * 4) -
                       *(float *)(lVar39 + 4 + uVar51 * 4) * (float)local_b8._0_4_;
              fVar53 = 0.0;
              if (0.0 <= fVar54) {
                fVar53 = fVar54;
              }
              *(float *)(lVar34 + uVar51 * 4) = fVar53;
              uVar51 = uVar51 + 2;
            } while (uVar47 != uVar51);
          }
          uVar42 = uVar42 + 1;
          lVar41 = lVar41 + lVar33;
          lVar36 = lVar36 + lVar33;
          lVar34 = lVar34 + lVar33;
          lVar39 = lVar39 + lVar33;
        } while (uVar42 != uVar48);
      }
    }
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return;
}

