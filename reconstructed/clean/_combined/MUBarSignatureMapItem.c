// ===================================================================
// MUBarSignatureMapItem — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (13):
//                   _map
//                   _sourceSignature
//                   _targetSignature
//                   _mapsTipletsToBeats
//                   _mapsTipletsToSwing
//                   _mapsSwingToTriplets
//                   _nextMap
//                   _modeSequence
//                   _sourceStartQuarter
//                   _sourceEndQuarter
//                   _targetStartQuarter
//                   _targetEndQuarter
//                   _quarterAssigmentFactor


// ============================================================
// 012046b0
// ============================================================
// Function: FUN_012046b0
// Address: 012046b0
// Size: 18628 bytes
// Class: MUBarSignatureMapItem
// === MUBarSignatureMapItem properties ===
//                   _map
//                   _sourceSignature
//                   _targetSignature
//                   _mapsTipletsToBeats
//                   _mapsTipletsToSwing
//                   _mapsSwingToTriplets
//                   _nextMap
//                   _modeSequence
//                   _sourceStartQuarter
//                   _sourceEndQuarter
//                   _targetStartQuarter
//                   _targetEndQuarter
//                   _quarterAssigmentFactor


void FUN_012046b0(double param_1,uint param_2,uint64_t param_3,int param_4,int64_t *param_5,
                 int64_t *param_6,int64_t *param_7)

{
  uint64_t *puVar1;
  double *pdVar2;
  float *pfVar3;
  uint64_t uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  bool bVar22;
  uint8_t auVar23 [12];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  int64_t lVar43;
  int64_t lVar44;
  int64_t lVar45;
  int64_t lVar46;
  int64_t lVar47;
  int64_t lVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  code *pcVar52;
  void *pvVar53;
  uint uVar54;
  int iVar55;
  int iVar56;
  int64_t lVar57;
  void*puVar58;
  int64_t lVar59;
  void *pvVar60;
  int64_t lVar61;
  int64_t *plVar62;
  void*puVar63;
  void*puVar64;
  int64_t lVar65;
  void *pvVar66;
  void*puVar67;
  void*puVar68;
  void *pvVar69;
  int64_t lVar70;
  uint64_t uVar71;
  void*puVar72;
  int64_t *plVar73;
  void*puVar74;
  void* pVar75;
  uint uVar76;
  uint64_t uVar77;
  uint64_t uVar78;
  int64_t lVar79;
  int64_t lVar80;
  uint64_t uVar81;
  void*puVar82;
  int64_t *plVar83;
  int64_t lVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int64_t lVar88;
  int64_t lVar89;
  uint64_t uVar90;
  int64_t *plVar91;
  uint64_t uVar92;
  int64_t *arg1;
  uint64_t uVar93;
  uint64_t uVar94;
  uint64_t uVar95;
  int64_t *this_ptr;
  int64_t *plVar96;
  uint uVar97;
  uint uVar98;
  int64_t lVar99;
  bool bVar100;
  float fVar101;
  float fVar102;
  uint32_t uVar103;
  float fVar104;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar105 [16];
  uint8_t auVar106 [16];
  uint8_t auVar107 [16];
  uint8_t auVar108 [16];
  float fVar109;
  uint8_t auVar110 [16];
  uint8_t auVar111 [16];
  uint8_t auVar112 [16];
  uint8_t auVar113 [16];
  uint8_t auVar114 [16];
  uint8_t auVar115 [16];
  int iVar116;
  int iVar123;
  int iVar124;
  uint8_t auVar117 [16];
  int iVar125;
  uint8_t auVar118 [16];
  uint8_t auVar119 [16];
  uint8_t auVar120 [16];
  uint8_t auVar121 [16];
  uint8_t auVar122 [16];
  uint8_t auVar126 [16];
  uint8_t auVar127 [16];
  uint8_t auVar128 [16];
  uint8_t auVar129 [16];
  float fVar130;
  uint8_t auVar131 [16];
  float fVar132;
  float fVar133;
  int64_t *local_res10;
  int64_t *local_res18;
  int64_t *local_res20;
  uint64_t local_178;
  uint8_t local_118 [8];
  uint64_t uStack_110;
  int64_t *local_f0;
  void*local_d8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  int64_t *local_b0;
  uint8_t local_a8 [16];
  int64_t *local_80;
  void*local_78;
  int64_t local_60;
  void *local_58;
  int64_t *local_50;
  int64_t *local_48;
  void *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  lVar16 = *local_res10;
  lVar43 = local_res10[1];
  if (((char)lVar43 != '\0') && (lVar16 != 0)) {
    FUN_00d50b00();
  }
  lVar17 = *local_res18;
  lVar44 = local_res18[1];
  if (((char)lVar44 != '\0') && (lVar17 != 0)) {
    FUN_00d50b00();
  }
  lVar18 = *local_res20;
  lVar45 = local_res20[1];
  if (((char)lVar45 != '\0') && (lVar18 != 0)) {
    FUN_00d50b00();
  }
  lVar19 = *param_5;
  lVar46 = param_5[1];
  if (((char)lVar46 != '\0') && (lVar19 != 0)) {
    FUN_00d50b00();
  }
  lVar20 = *param_6;
  lVar47 = param_6[1];
  if (((char)lVar47 != '\0') && (lVar20 != 0)) {
    FUN_00d50b00();
  }
  lVar21 = *param_7;
  lVar48 = param_7[1];
  if (((char)lVar48 != '\0') && (lVar21 != 0)) {
    FUN_00d50b00();
  }
  pcVar52 = g_02572370;
  lVar57 = *this_ptr;
  if (0 < *(int *)(lVar57 + 0xc)) {
    auVar110._0_4_ = (float)(int)param_2;
    iVar30 = param_4 * 3;
    lVar88 = (int64_t)(param_4 * 5);
    param_1 = param_1 * g_0240f0f8;
    puVar1 = (uint64_t *)(lVar16 + 0x10);
    uVar77 = (uint64_t)param_2;
    uVar78 = (uint64_t)(param_2 & 0xfffffffc);
    auVar110._4_4_ = auVar110._0_4_;
    auVar110._8_4_ = auVar110._0_4_;
    auVar110._12_4_ = auVar110._0_4_;
    uVar93 = (uVar78 - 4 >> 2) + 1;
    lVar89 = 0;
    do {
      pvVar53 = local_40;
      lVar57 = *(int64_t *)(*(int64_t *)(lVar57 + 0x10) + lVar89 * 8);
      if (lVar57 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
        FUN_00d50b00();
      }
      uVar76 = *(uint *)((int64_t)local_40 + 0xc);
      local_178 = (uint64_t)(int)uVar76;
      iVar85 = *(int *)(**(int64_t **)((int64_t)local_40 + 0x10) + 0xc) - param_2;
      if (iVar85 < 0) {
        iVar85 = 0;
      }
      iVar86 = *(int *)((*(int64_t **)((int64_t)local_40 + 0x10))[local_178 - 1] + 0xc);
      puVar58 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar58 = &g_02572358;
      (*pcVar52)();
      lVar79 = (int64_t)param_4;
      lVar59 = iVar86 * lVar79;
      lVar61 = *arg1;
      lVar80 = lVar79;
      if (0 < *(int *)(lVar61 + 0xc)) {
        lVar99 = 0;
        do {
          plVar62 = *(int64_t **)(*(int64_t *)(lVar61 + 0x10) + lVar99 * 8);
          pvVar60 = _pthread_getspecific((void*)lVar80);
          if ((pvVar60 != (void *)0x0) && (lVar61 = FUN_00e8b990(), lVar61 != 0)) {
            plVar62 = (int64_t *)plVar62[(uint64_t)(*(uint *)(lVar61 + 0x154) & 1) + 4];
          }
          lVar61 = (**(code **)(*plVar62 + 0x3a0))();
          if ((iVar85 * param_4 <= lVar61) && (lVar61 <= lVar59)) {
            local_40 = *(void **)(*(int64_t *)(*arg1 + 0x10) + lVar99 * 8);
            if (local_40 != (void *)0x0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            FUN_00d21140();
            if (local_40 != (void *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar99 = lVar99 + 1;
          lVar61 = *arg1;
          lVar80 = (int64_t)*(int *)(lVar61 + 0xc);
        } while (lVar99 < lVar80);
      }
      pvVar60 = local_40;
      FUN_00d242c0(lVar80,0);
      plVar62 = (int64_t *)((int64_t)pvVar53 + 0x10);
      if (0 < (int)uVar76) {
        uVar90 = 0;
        do {
          lVar61 = *(int64_t *)(*plVar62 + uVar90 * 8);
          if (lVar61 != 0) {
            FUN_00d50b00();
          }
          lVar80 = (int64_t)(int)(param_2 + (int)uVar90);
          uVar92 = *puVar1;
          _powf();
          fVar101 = (float)_powf();
          fVar101 = fVar101 * *(float *)(lVar61 + 0x40);
          *(float *)(uVar92 + lVar80 * 4) = fVar101;
          *(float *)(*(int64_t *)(lVar19 + 0x10) + lVar80 * 4) = fVar101;
          *(float *)(*(int64_t *)(lVar20 + 0x10) + lVar80 * 4) = fVar101;
          FUN_00d50b20();
          uVar90 = uVar90 + 1;
        } while (uVar76 != uVar90);
      }
      auVar122 = g_0240e270;
      iVar51 = _UNK_023de2bc;
      iVar50 = _UNK_023de2b8;
      iVar49 = _UNK_023de2b4;
      iVar87 = g_023de2b0;
      iVar56 = _UNK_0239418c;
      iVar55 = _UNK_02394188;
      iVar86 = _UNK_02394184;
      iVar85 = g_02394180;
      uVar98 = uVar76 + param_2;
      uVar90 = *puVar1;
      if (0 < (int)param_2) {
        fVar101 = *(float *)(uVar90 + (int64_t)(int)param_2 * 4);
        uVar92 = *(uint64_t *)(lVar19 + 0x10);
        uVar81 = *(uint64_t *)(lVar20 + 0x10);
        if (param_2 < 4) {
LAB_01204c58:
          auVar111 = ZEXT416(g_02411280);
          uVar94 = 0;
        }
        else {
          uVar94 = uVar92 + uVar77 * 4;
          uVar95 = uVar81 + uVar77 * 4;
          uVar4 = uVar90 + uVar77 * 4;
          param_3 = CONCAT71((int7)(param_3 >> 8),uVar90 < uVar95);
          if ((uVar92 < uVar95 && uVar81 < uVar94) || (uVar92 < uVar4 && uVar90 < uVar94))
          goto LAB_01204c58;
          auVar111 = ZEXT416(g_02411280);
          uVar94 = 0;
          if (uVar4 <= uVar81 || uVar90 >= uVar95) {
            if (uVar78 - 4 == 0) {
              lVar61 = 0;
              auVar111 = g_0238fcc0;
LAB_01204f08:
              auVar118._0_4_ = (float)auVar111._0_4_;
              auVar118._4_4_ = (float)auVar111._4_4_;
              auVar118._8_4_ = (float)auVar111._8_4_;
              auVar118._12_4_ = (float)auVar111._12_4_;
              auVar111 = divps(auVar118,auVar110);
              auVar122._0_4_ = fVar101 * auVar111._0_4_;
              auVar122._4_4_ = fVar101 * auVar111._4_4_;
              auVar122._8_4_ = fVar101 * auVar111._8_4_;
              auVar122._12_4_ = fVar101 * auVar111._12_4_;
              auVar122 = maxps(g_0240e270,auVar122);
              *(uint8_t (*) [16])(uVar92 + lVar61 * 4) = auVar122;
              *(uint8_t (*) [16])(uVar81 + lVar61 * 4) = auVar122;
              *(uint8_t (*) [16])(uVar90 + lVar61 * 4) = auVar122;
            }
            else {
              lVar61 = 0;
              lVar80 = -(uVar93 & 0xfffffffffffffffe);
              auVar111 = g_0238fcc0;
              do {
                iVar116 = auVar111._0_4_;
                auVar126._0_4_ = (float)iVar116;
                iVar123 = auVar111._4_4_;
                auVar126._4_4_ = (float)iVar123;
                iVar124 = auVar111._8_4_;
                auVar126._8_4_ = (float)iVar124;
                iVar125 = auVar111._12_4_;
                auVar126._12_4_ = (float)iVar125;
                auVar111 = divps(auVar126,auVar110);
                auVar127._0_4_ = auVar111._0_4_ * fVar101;
                auVar127._4_4_ = auVar111._4_4_ * fVar101;
                auVar127._8_4_ = auVar111._8_4_ * fVar101;
                auVar127._12_4_ = auVar111._12_4_ * fVar101;
                auVar111 = maxps(auVar122,auVar127);
                *(uint8_t (*) [16])(uVar92 + lVar61 * 4) = auVar111;
                *(uint8_t (*) [16])(uVar81 + lVar61 * 4) = auVar111;
                *(uint8_t (*) [16])(uVar90 + lVar61 * 4) = auVar111;
                auVar128._0_4_ = (float)(iVar116 + iVar85);
                auVar128._4_4_ = (float)(iVar123 + iVar86);
                auVar128._8_4_ = (float)(iVar124 + iVar55);
                auVar128._12_4_ = (float)(iVar125 + iVar56);
                auVar111 = divps(auVar128,auVar110);
                auVar129._0_4_ = auVar111._0_4_ * fVar101;
                auVar129._4_4_ = auVar111._4_4_ * fVar101;
                auVar129._8_4_ = auVar111._8_4_ * fVar101;
                auVar129._12_4_ = auVar111._12_4_ * fVar101;
                auVar111 = maxps(auVar122,auVar129);
                *(uint8_t (*) [16])(uVar92 + 0x10 + lVar61 * 4) = auVar111;
                *(uint8_t (*) [16])(uVar81 + 0x10 + lVar61 * 4) = auVar111;
                *(uint8_t (*) [16])(uVar90 + 0x10 + lVar61 * 4) = auVar111;
                lVar61 = lVar61 + 8;
                auVar111._0_4_ = iVar116 + iVar87;
                auVar111._4_4_ = iVar123 + iVar49;
                auVar111._8_4_ = iVar124 + iVar50;
                auVar111._12_4_ = iVar125 + iVar51;
                lVar80 = lVar80 + 2;
              } while (lVar80 != 0);
              if ((uVar93 & 1) != 0) goto LAB_01204f08;
            }
            auVar111 = ZEXT416(g_02411280);
            uVar94 = uVar78;
            if (uVar78 == uVar77) goto LAB_01204c9e;
          }
        }
        do {
          fVar109 = ((float)(int)uVar94 / auVar110._0_4_) * fVar101;
          auVar117 = auVar111;
          if (auVar111._0_4_ <= fVar109) {
            auVar117._4_12_ = auVar111._4_12_;
            auVar117._0_4_ = fVar109;
          }
          uVar103 = auVar117._0_4_;
          *(void*)(uVar92 + uVar94 * 4) = uVar103;
          *(void*)(uVar81 + uVar94 * 4) = uVar103;
          *(void*)(uVar90 + uVar94 * 4) = uVar103;
          uVar94 = uVar94 + 1;
        } while (uVar77 != uVar94);
      }
LAB_01204c9e:
      FUN_015c15b0(1,(uint64_t)uVar98);
      FUN_015c1230(1,uVar98);
      FUN_015c1230(0xffffffff);
      uVar90 = (uint64_t)uVar98;
      if (0 < (int)uVar98) {
        uVar92 = *(uint64_t *)(lVar20 + 0x10);
        uVar81 = *(uint64_t *)(lVar19 + 0x10);
        if ((uVar98 < 8) || ((uVar81 < uVar92 + uVar90 * 4 && (uVar92 < uVar81 + uVar90 * 4)))) {
          uVar94 = 0;
        }
        else {
          uVar94 = (uint64_t)(uVar98 & 0xfffffff8);
          uVar95 = 0;
          do {
            auVar122 = *(uint8_t (*) [16])(uVar92 + uVar95 * 4);
            auVar111 = *(uint8_t (*) [16])(uVar92 + 0x10 + uVar95 * 4);
            pfVar3 = (float *)(uVar81 + uVar95 * 4);
            fVar101 = pfVar3[1];
            if (*pfVar3 < auVar122._0_4_) {
              *(float *)(uVar81 + uVar95 * 4) = auVar122._0_4_;
            }
            if (fVar101 < auVar122._4_4_) {
              uVar71 = extractps(auVar122,1);
              *(void*)(uVar81 + 4 + uVar95 * 4) = uVar71;
              uVar71 = extractps(auVar122,3);
              *(void*)(uVar81 + 0xc + uVar95 * 4) = uVar71;
              pfVar3 = (float *)(uVar81 + 0x10 + uVar95 * 4);
              fVar101 = *pfVar3;
              fVar109 = pfVar3[1];
            }
            else {
              pfVar3 = (float *)(uVar81 + 0x10 + uVar95 * 4);
              fVar101 = *pfVar3;
              fVar109 = pfVar3[1];
            }
            if (fVar101 < auVar111._0_4_) {
              *(float *)(uVar81 + 0x10 + uVar95 * 4) = auVar111._0_4_;
            }
            if (fVar109 < auVar111._4_4_) {
              uVar71 = extractps(auVar111,1);
              *(void*)(uVar81 + 0x14 + uVar95 * 4) = uVar71;
              uVar71 = extractps(auVar111,3);
              *(void*)(uVar81 + 0x1c + uVar95 * 4) = uVar71;
            }
            uVar95 = uVar95 + 8;
          } while (uVar94 != uVar95);
          if (uVar94 == uVar90) goto LAB_012050e0;
        }
        uVar95 = uVar94;
        if ((uVar98 & 1) != 0) {
          fVar101 = *(float *)(uVar92 + uVar94 * 4);
          pfVar3 = (float *)(uVar81 + uVar94 * 4);
          if (*pfVar3 <= fVar101 && fVar101 != *pfVar3) {
            *(float *)(uVar81 + uVar94 * 4) = fVar101;
          }
          uVar95 = uVar94 | 1;
        }
        if (~uVar94 + uVar90 != 0) {
          do {
            fVar101 = *(float *)(uVar92 + uVar95 * 4);
            pfVar3 = (float *)(uVar81 + uVar95 * 4);
            if (fVar101 < *pfVar3 || fVar101 == *pfVar3) {
              fVar101 = *(float *)(uVar92 + 4 + uVar95 * 4);
              pfVar3 = (float *)(uVar81 + 4 + uVar95 * 4);
              if (*pfVar3 <= fVar101 && fVar101 != *pfVar3) goto LAB_01204ddd;
            }
            else {
              *(float *)(uVar81 + uVar95 * 4) = fVar101;
              fVar101 = *(float *)(uVar92 + 4 + uVar95 * 4);
              pfVar3 = (float *)(uVar81 + 4 + uVar95 * 4);
              if (*pfVar3 <= fVar101 && fVar101 != *pfVar3) {
LAB_01204ddd:
                *(float *)(uVar81 + 4 + uVar95 * 4) = fVar101;
              }
            }
            uVar95 = uVar95 + 2;
          } while (uVar90 != uVar95);
        }
      }
LAB_012050e0:
      FUN_015c1480(1,uVar98);
      lVar61 = (int64_t)(int)uVar98;
      if ((int)uVar98 < 1) {
LAB_0120537b:
        pvVar66 = (void *)(int64_t)(int)(uVar98 - 1);
        *(void*)(*(int64_t *)(lVar17 + 0x10) + (int64_t)pvVar66 * 4) =
             *(void*)(*(int64_t *)(lVar17 + 0x10) + -8 + lVar61 * 4);
        uVar90 = *(uint64_t *)(lVar18 + 0x10);
      }
      else {
        uVar92 = *(uint64_t *)(lVar19 + 0x10);
        uVar81 = *puVar1;
        if ((uVar98 < 4) || ((uVar81 < uVar92 + uVar90 * 4 && (uVar92 < uVar90 * 4 + uVar81)))) {
          local_48 = (int64_t *)0x0;
LAB_0120516a:
          plVar91 = local_48;
          if ((uVar98 & 1) != 0) {
            fVar101 = (float)_powf();
            *(float *)(uVar81 + (int64_t)local_48 * 4) =
                 *(float *)(uVar81 + (int64_t)local_48 * 4) / fVar101;
            plVar91 = (int64_t *)((uint64_t)local_48 | 1);
          }
          if (~(uint64_t)local_48 + uVar90 != 0) {
            do {
              fVar109 = (float)_powf();
              fVar101 = *(float *)(uVar81 + 4 + (int64_t)plVar91 * 4);
              local_a8._0_4_ = fVar101;
              *(float *)(uVar81 + (int64_t)plVar91 * 4) =
                   *(float *)(uVar81 + (int64_t)plVar91 * 4) / fVar109;
              fVar109 = (float)_powf();
              *(float *)(uVar81 + 4 + (int64_t)plVar91 * 4) = fVar101 / fVar109;
              plVar91 = (int64_t *)((int64_t)plVar91 + 2);
            } while ((int64_t *)uVar90 != plVar91);
          }
        }
        else {
          local_48 = (int64_t *)(uint64_t)(uVar98 & 0xfffffffc);
          uVar94 = 0;
          do {
            auVar122 = maxps(g_0240e1f0,*(uint8_t (*) [16])(uVar92 + uVar94 * 4));
            local_a8._0_8_ = _powf();
            local_a8._8_8_ = extraout_XMM0_Qb;
            auVar105._0_8_ = _powf();
            auVar105._8_8_ = extraout_XMM0_Qb_00;
            auVar111 = insertps(local_a8,auVar105,0x10);
            uStack_c4 = auVar122._4_4_;
            uStack_c0 = auVar122._8_4_;
            uStack_bc = auVar122._12_4_;
            auVar23._4_8_ = extraout_XMM0_Qb_00;
            auVar23._0_4_ = uStack_c4;
            auVar106._0_8_ = auVar23._0_8_ << 0x20;
            auVar106._8_4_ = uStack_c0;
            auVar106._12_4_ = uStack_bc;
            auVar107._0_8_ = _powf(auVar106._8_8_);
            auVar107._8_8_ = extraout_XMM0_Qb_01;
            local_a8 = insertps(auVar111,auVar107,0x20);
            auVar108._0_8_ = _powf();
            auVar108._8_8_ = extraout_XMM0_Qb_02;
            auVar122 = insertps(local_a8,auVar108,0x30);
            auVar122 = divps(*(uint8_t (*) [16])(uVar81 + uVar94 * 4),auVar122);
            *(uint8_t (*) [16])(uVar81 + uVar94 * 4) = auVar122;
            uVar94 = uVar94 + 4;
          } while (local_48 != (int64_t *)uVar94);
          if (local_48 != (int64_t *)uVar90) goto LAB_0120516a;
        }
        uVar97 = uVar98 - 1;
        if ((int)uVar98 < 2) goto LAB_0120537b;
        uVar90 = *puVar1;
        uVar92 = *(uint64_t *)(lVar17 + 0x10);
        pvVar66 = (void *)(uint64_t)uVar97;
        if (uVar97 < 8) {
          pvVar69 = (void *)0x0;
LAB_01205490:
          do {
            *(float *)(uVar92 + (int64_t)pvVar69 * 4) =
                 *(float *)(uVar90 + 4 + (int64_t)pvVar69 * 4) -
                 *(float *)(uVar90 + (int64_t)pvVar69 * 4);
            pvVar69 = (void *)((int64_t)pvVar69 + 1);
          } while (pvVar69 < pvVar66);
        }
        else {
          if ((uVar92 < uVar90 + (int64_t)pvVar66 * 4 + 4) &&
             (uVar90 < uVar92 + (int64_t)pvVar66 * 4)) {
            pvVar69 = (void *)0x0;
            goto LAB_01205490;
          }
          pvVar69 = (void *)(uint64_t)(uVar97 & 0xfffffff8);
          param_3 = ((int64_t)pvVar69 - 8U >> 3) + 1;
          if ((int64_t)pvVar69 - 8U == 0) {
            lVar80 = 0;
LAB_01205456:
            uVar81 = lVar80 * 4 | 4;
            pfVar3 = (float *)(uVar90 + uVar81);
            fVar101 = pfVar3[1];
            fVar109 = pfVar3[2];
            fVar104 = pfVar3[3];
            pfVar5 = (float *)(uVar90 + 0x10 + uVar81);
            pfVar6 = (float *)(uVar90 + lVar80 * 4);
            fVar102 = pfVar6[1];
            fVar24 = pfVar6[2];
            fVar25 = pfVar6[3];
            auVar122 = *(uint8_t (*) [16])(uVar90 + 0x10 + lVar80 * 4);
            auVar113._0_4_ = *pfVar5 - auVar122._0_4_;
            auVar113._4_4_ = pfVar5[1] - auVar122._4_4_;
            auVar113._8_4_ = pfVar5[2] - auVar122._8_4_;
            auVar113._12_4_ = pfVar5[3] - auVar122._12_4_;
            pfVar5 = (float *)(uVar92 + lVar80 * 4);
            *pfVar5 = *pfVar3 - *pfVar6;
            pfVar5[1] = fVar101 - fVar102;
            pfVar5[2] = fVar109 - fVar24;
            pfVar5[3] = fVar104 - fVar25;
            *(uint8_t (*) [16])(uVar92 + 0x10 + lVar80 * 4) = auVar113;
          }
          else {
            lVar99 = -(param_3 & 0xfffffffffffffffe);
            lVar80 = 0;
            do {
              pfVar3 = (float *)(uVar90 + lVar80 * 4);
              fVar101 = pfVar3[1];
              fVar109 = pfVar3[2];
              fVar104 = pfVar3[3];
              pfVar5 = (float *)(uVar90 + 4 + lVar80 * 4);
              fVar102 = pfVar5[1];
              fVar24 = pfVar5[2];
              fVar25 = pfVar5[3];
              pfVar6 = (float *)(uVar90 + 0x10 + lVar80 * 4);
              fVar26 = *pfVar6;
              fVar27 = pfVar6[1];
              fVar28 = pfVar6[2];
              fVar29 = pfVar6[3];
              pfVar6 = (float *)(uVar90 + 0x14 + lVar80 * 4);
              fVar130 = *pfVar6;
              fVar132 = pfVar6[1];
              fVar133 = pfVar6[2];
              fVar7 = pfVar6[3];
              pfVar6 = (float *)(uVar92 + lVar80 * 4);
              *pfVar6 = *pfVar5 - *pfVar3;
              pfVar6[1] = fVar102 - fVar101;
              pfVar6[2] = fVar24 - fVar109;
              pfVar6[3] = fVar25 - fVar104;
              pfVar3 = (float *)(uVar92 + 0x10 + lVar80 * 4);
              *pfVar3 = fVar130 - fVar26;
              pfVar3[1] = fVar132 - fVar27;
              pfVar3[2] = fVar133 - fVar28;
              pfVar3[3] = fVar7 - fVar29;
              pfVar3 = (float *)(uVar90 + 0x20 + lVar80 * 4);
              pfVar6 = (float *)(uVar90 + 0x24 + lVar80 * 4);
              auVar112._0_4_ = *pfVar6 - *pfVar3;
              auVar112._4_4_ = pfVar6[1] - pfVar3[1];
              auVar112._8_4_ = pfVar6[2] - pfVar3[2];
              auVar112._12_4_ = pfVar6[3] - pfVar3[3];
              pfVar3 = (float *)(uVar90 + 0x30 + lVar80 * 4);
              pfVar6 = (float *)(uVar90 + 0x34 + lVar80 * 4);
              auVar119._0_4_ = *pfVar6 - *pfVar3;
              auVar119._4_4_ = pfVar6[1] - pfVar3[1];
              auVar119._8_4_ = pfVar6[2] - pfVar3[2];
              auVar119._12_4_ = pfVar6[3] - pfVar3[3];
              *(uint8_t (*) [16])(uVar92 + 0x20 + lVar80 * 4) = auVar112;
              *(uint8_t (*) [16])(uVar92 + 0x30 + lVar80 * 4) = auVar119;
              lVar80 = lVar80 + 0x10;
              lVar99 = lVar99 + 2;
            } while (lVar99 != 0);
            if ((param_3 & 1) != 0) goto LAB_01205456;
          }
          if (pvVar69 != pvVar66) goto LAB_01205490;
        }
        *(void*)(uVar92 + (int64_t)pvVar66 * 4) = *(void*)((uVar92 - 8) + lVar61 * 4)
        ;
        uVar90 = *(uint64_t *)(lVar18 + 0x10);
        if (uVar97 < 8) {
          pvVar69 = (void *)0x0;
LAB_012055c0:
          do {
            *(float *)(uVar90 + (int64_t)pvVar69 * 4) =
                 *(float *)(uVar92 + 4 + (int64_t)pvVar69 * 4) -
                 *(float *)(uVar92 + (int64_t)pvVar69 * 4);
            pvVar69 = (void *)((int64_t)pvVar69 + 1);
          } while (pvVar69 < pvVar66);
        }
        else {
          if ((uVar90 < uVar92 + (int64_t)pvVar66 * 4 + 4) &&
             (uVar92 < uVar90 + (int64_t)pvVar66 * 4)) {
            pvVar69 = (void *)0x0;
            goto LAB_012055c0;
          }
          pvVar69 = (void *)(uint64_t)(uVar97 & 0xfffffff8);
          param_3 = ((int64_t)pvVar69 - 8U >> 3) + 1;
          if ((int64_t)pvVar69 - 8U == 0) {
            lVar80 = 0;
LAB_01205586:
            uVar81 = lVar80 * 4 | 4;
            pfVar3 = (float *)(uVar92 + uVar81);
            fVar101 = pfVar3[1];
            fVar109 = pfVar3[2];
            fVar104 = pfVar3[3];
            pfVar5 = (float *)(uVar92 + 0x10 + uVar81);
            pfVar6 = (float *)(uVar92 + lVar80 * 4);
            fVar102 = pfVar6[1];
            fVar24 = pfVar6[2];
            fVar25 = pfVar6[3];
            auVar122 = *(uint8_t (*) [16])(uVar92 + 0x10 + lVar80 * 4);
            auVar115._0_4_ = *pfVar5 - auVar122._0_4_;
            auVar115._4_4_ = pfVar5[1] - auVar122._4_4_;
            auVar115._8_4_ = pfVar5[2] - auVar122._8_4_;
            auVar115._12_4_ = pfVar5[3] - auVar122._12_4_;
            pfVar5 = (float *)(uVar90 + lVar80 * 4);
            *pfVar5 = *pfVar3 - *pfVar6;
            pfVar5[1] = fVar101 - fVar102;
            pfVar5[2] = fVar109 - fVar24;
            pfVar5[3] = fVar104 - fVar25;
            *(uint8_t (*) [16])(uVar90 + 0x10 + lVar80 * 4) = auVar115;
          }
          else {
            lVar99 = -(param_3 & 0xfffffffffffffffe);
            lVar80 = 0;
            do {
              pfVar3 = (float *)(uVar92 + lVar80 * 4);
              fVar101 = pfVar3[1];
              fVar109 = pfVar3[2];
              fVar104 = pfVar3[3];
              pfVar5 = (float *)(uVar92 + 4 + lVar80 * 4);
              fVar102 = pfVar5[1];
              fVar24 = pfVar5[2];
              fVar25 = pfVar5[3];
              pfVar6 = (float *)(uVar92 + 0x10 + lVar80 * 4);
              fVar26 = *pfVar6;
              fVar27 = pfVar6[1];
              fVar28 = pfVar6[2];
              fVar29 = pfVar6[3];
              pfVar6 = (float *)(uVar92 + 0x14 + lVar80 * 4);
              fVar130 = *pfVar6;
              fVar132 = pfVar6[1];
              fVar133 = pfVar6[2];
              fVar7 = pfVar6[3];
              pfVar6 = (float *)(uVar90 + lVar80 * 4);
              *pfVar6 = *pfVar5 - *pfVar3;
              pfVar6[1] = fVar102 - fVar101;
              pfVar6[2] = fVar24 - fVar109;
              pfVar6[3] = fVar25 - fVar104;
              pfVar3 = (float *)(uVar90 + 0x10 + lVar80 * 4);
              *pfVar3 = fVar130 - fVar26;
              pfVar3[1] = fVar132 - fVar27;
              pfVar3[2] = fVar133 - fVar28;
              pfVar3[3] = fVar7 - fVar29;
              pfVar3 = (float *)(uVar92 + 0x20 + lVar80 * 4);
              pfVar6 = (float *)(uVar92 + 0x24 + lVar80 * 4);
              auVar114._0_4_ = *pfVar6 - *pfVar3;
              auVar114._4_4_ = pfVar6[1] - pfVar3[1];
              auVar114._8_4_ = pfVar6[2] - pfVar3[2];
              auVar114._12_4_ = pfVar6[3] - pfVar3[3];
              pfVar3 = (float *)(uVar92 + 0x30 + lVar80 * 4);
              pfVar6 = (float *)(uVar92 + 0x34 + lVar80 * 4);
              auVar120._0_4_ = *pfVar6 - *pfVar3;
              auVar120._4_4_ = pfVar6[1] - pfVar3[1];
              auVar120._8_4_ = pfVar6[2] - pfVar3[2];
              auVar120._12_4_ = pfVar6[3] - pfVar3[3];
              *(uint8_t (*) [16])(uVar90 + 0x20 + lVar80 * 4) = auVar114;
              *(uint8_t (*) [16])(uVar90 + 0x30 + lVar80 * 4) = auVar120;
              lVar80 = lVar80 + 0x10;
              lVar99 = lVar99 + 2;
            } while (lVar99 != 0);
            if ((param_3 & 1) != 0) goto LAB_01205586;
          }
          if (pvVar69 != pvVar66) goto LAB_012055c0;
        }
      }
      *(void*)(uVar90 + (int64_t)pvVar66 * 4) = *(void*)(uVar90 + (lVar61 + -2) * 4);
      _memcpy(pvVar66,(void *)(int64_t)(int)(uVar98 * 4),(size_t)param_3);
      if (0 < (int)uVar98) {
        lVar80 = *(int64_t *)(lVar18 + 0x10);
        if (uVar98 == 1) {
          uVar90 = 0;
        }
        else {
          uVar90 = 0;
          do {
            pfVar3 = (float *)(lVar80 + uVar90 * 4);
            if ((*pfVar3 <= 0.0 && *pfVar3 != 0.0) ||
               (pfVar3 = (float *)(*(int64_t *)(lVar17 + 0x10) + uVar90 * 4),
               *pfVar3 <= 0.0 && *pfVar3 != 0.0)) {
              *(void*)(*(int64_t *)(lVar21 + 0x10) + uVar90 * 4) = 0;
            }
            pfVar3 = (float *)(lVar80 + 4 + uVar90 * 4);
            if ((*pfVar3 <= 0.0 && *pfVar3 != 0.0) ||
               (pfVar3 = (float *)(*(int64_t *)(lVar17 + 0x10) + 4 + uVar90 * 4),
               *pfVar3 <= 0.0 && *pfVar3 != 0.0)) {
              *(void*)(*(int64_t *)(lVar21 + 0x10) + 4 + uVar90 * 4) = 0;
            }
            uVar90 = uVar90 + 2;
          } while ((uVar98 & 0xfffffffe) != uVar90);
        }
        if (((uVar98 & 1) != 0) &&
           ((pfVar3 = (float *)(lVar80 + uVar90 * 4), *pfVar3 <= 0.0 && *pfVar3 != 0.0 ||
            (pfVar3 = (float *)(*(int64_t *)(lVar17 + 0x10) + uVar90 * 4),
            *pfVar3 <= 0.0 && *pfVar3 != 0.0)))) {
          *(void*)(*(int64_t *)(lVar21 + 0x10) + uVar90 * 4) = 0;
        }
      }
      FUN_015b4130(0,uVar98);
      local_58 = local_40;
      pvVar66 = local_40;
      if (local_40 == (void *)0x0) {
        bVar42 = true;
        local_58 = (void *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar42 = false;
      }
      else {
        bVar42 = false;
      }
      _memcpy(pvVar66,(void *)(int64_t)(int)(uVar98 * 4),(size_t)param_3);
      if (0 < (int)uVar98) {
        lVar80 = *(int64_t *)(lVar18 + 0x10);
        if (uVar98 == 1) {
          uVar90 = 0;
        }
        else {
          uVar90 = 0;
          do {
            pfVar3 = (float *)(lVar80 + uVar90 * 4);
            if ((*pfVar3 <= 0.0 && *pfVar3 != 0.0) ||
               (g_0239424c < *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar90 * 4))) {
              *(void*)(*(int64_t *)(lVar21 + 0x10) + uVar90 * 4) = 0;
            }
            pfVar3 = (float *)(lVar80 + 4 + uVar90 * 4);
            if ((*pfVar3 <= 0.0 && *pfVar3 != 0.0) ||
               (g_0239424c < *(float *)(*(int64_t *)(lVar17 + 0x10) + 4 + uVar90 * 4))) {
              *(void*)(*(int64_t *)(lVar21 + 0x10) + 4 + uVar90 * 4) = 0;
            }
            uVar90 = uVar90 + 2;
          } while ((uVar98 & 0xfffffffe) != uVar90);
        }
        if (((uVar98 & 1) != 0) &&
           ((pfVar3 = (float *)(lVar80 + uVar90 * 4), *pfVar3 <= 0.0 && *pfVar3 != 0.0 ||
            (g_0239424c < *(float *)(*(int64_t *)(lVar17 + 0x10) + uVar90 * 4))))) {
          *(void*)(*(int64_t *)(lVar21 + 0x10) + uVar90 * 4) = 0;
        }
      }
      FUN_015b4130(0);
      local_a8._0_8_ = local_40;
      if (local_40 == (void *)0x0) {
        bVar40 = true;
        bVar41 = true;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = local_a8._8_8_;
        local_a8 = auVar33 << 0x40;
        iVar85 = *(int *)((int64_t)local_58 + 0xc);
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        bVar40 = false;
        bVar41 = false;
        iVar85 = *(int *)((int64_t)local_58 + 0xc);
      }
      if (1 < iVar85) {
        uVar97 = FUN_00e7d850(*(void*)(**(int64_t **)((int64_t)local_58 + 0x10) + 0x10));
        iVar85 = FUN_00e7d850(*(void*)
                               (*(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + 8) + 0x10))
        ;
        bVar41 = bVar40;
        if ((int)(uVar97 + 1) < iVar85) {
          uVar90 = *puVar1;
          lVar80 = (int64_t)(int)(uVar97 + 1);
          uVar54 = ~uVar97 + iVar85 & 3;
          if (uVar54 == 0) {
            fVar101 = 0.0;
          }
          else {
            fVar109 = 0.0;
            do {
              fVar101 = *(float *)(uVar90 + lVar80 * 4);
              if (fVar101 <= fVar109) {
                fVar101 = fVar109;
              }
              lVar80 = lVar80 + 1;
              uVar54 = uVar54 - 1;
              fVar109 = fVar101;
            } while (uVar54 != 0);
          }
          if (2 < (iVar85 - uVar97) - 2) {
            do {
              fVar109 = *(float *)(uVar90 + lVar80 * 4);
              if (fVar109 <= fVar101) {
                fVar109 = fVar101;
              }
              fVar101 = *(float *)(uVar90 + 4 + lVar80 * 4);
              if (fVar101 <= fVar109) {
                fVar101 = fVar109;
              }
              fVar109 = *(float *)(uVar90 + 8 + lVar80 * 4);
              if (fVar109 <= fVar101) {
                fVar109 = fVar101;
              }
              fVar101 = *(float *)(uVar90 + 0xc + lVar80 * 4);
              if (fVar101 <= fVar109) {
                fVar101 = fVar109;
              }
              lVar80 = lVar80 + 4;
            } while (iVar85 != (int)lVar80);
          }
          if (g_02391094 <= fVar101) goto LAB_012059f7;
        }
        FUN_00d23620();
      }
LAB_012059f7:
      puVar63 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar63 = &g_02572358;
      (*pcVar52)();
      puVar64 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar64 = &g_02572358;
      (*pcVar52)();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      iVar85 = *(int *)((int64_t)local_58 + 0xc);
      iVar86 = 0;
      if (iVar85 < 1) {
        bVar40 = false;
        local_d8 = (void*)0x0;
      }
      else {
        lVar80 = 0;
        local_d8 = (void*)0x0;
        bVar40 = false;
        do {
          iVar85 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)
                                   (*(int64_t *)((int64_t)local_58 + 0x10) + lVar80 * 8) + 0x10));
          dVar14 = *(double *)
                    (*(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + lVar80 * 8) + 0x18);
          ___bzero();
          lVar99 = *(int64_t *)(lVar17 + 0x10);
          lVar65 = *(int64_t *)((int64_t)pvVar60 + 0x10);
          uVar90 = (uint64_t)iVar85;
          param_3 = (uint64_t)(iVar85 + 1U);
          if ((int)(iVar85 + 1U) < (int)uVar98) {
            param_3 = (uint64_t)uVar98;
          }
          auVar122 = ZEXT816(0);
          fVar101 = 0.0;
          do {
            fVar109 = *(float *)(lVar99 + uVar90 * 4);
            lVar84 = (int64_t)((int)uVar90 % 7);
            fVar104 = *(float *)(lVar65 + lVar84 * 4);
            *(float *)(lVar65 + lVar84 * 4) = fVar109;
            fVar101 = (fVar101 - fVar104) + fVar109;
            uVar92 = uVar90;
            if ((fVar101 < 0.0) ||
               (((float)dVar14 < *(float *)(*(int64_t *)(lVar18 + 0x10) + uVar90 * 4) &&
                (g_0239424c < *(float *)(lVar99 + uVar90 * 4))))) break;
            auVar131._0_4_ = ~-(uint)(0.0 < fVar109) & (uint)auVar122._0_4_;
            auVar131._4_4_ = 0;
            auVar131._8_4_ = auVar122._8_4_;
            auVar131._12_4_ = auVar122._12_4_;
            auVar122 = auVar131 | ZEXT416((uint)(auVar122._0_4_ + fVar109) & -(uint)(0.0 < fVar109))
            ;
            uVar90 = uVar90 + 1;
            uVar92 = param_3;
          } while ((int64_t)uVar90 < lVar61);
          lVar99 = *(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + lVar80 * 8);
          *(double *)(lVar99 + 0x18) =
               (double)(SQRT((float)*(double *)(lVar99 + 0x18)) * auVar122._0_4_);
          if ((lVar80 == 0) || (iVar86 <= iVar85)) {
            if (local_d8 != (void*)0x0) {
              if (bVar40) {
                FUN_00d50b20();
              }
              bVar40 = false;
            }
            local_d8 = (void*)0x0;
          }
          else {
            if (local_d8 == (void*)0x0) {
              local_d8 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *local_d8 = &g_02572358;
              (*pcVar52)();
              FUN_00d21140();
              bVar40 = true;
            }
            local_40 = *(void **)(*(int64_t *)((int64_t)local_58 + 0x10) + lVar80 * 8);
            if (local_40 != (void *)0x0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            FUN_00d21140();
            if (local_40 != (void *)0x0) {
              FUN_00d50b20();
            }
          }
          iVar86 = (int)uVar92 + -3;
          lVar80 = lVar80 + 1;
          iVar85 = *(int *)((int64_t)local_58 + 0xc);
        } while (lVar80 < iVar85);
      }
      uVar90 = (uint64_t)*(uint *)(local_a8._0_8_ + 0xc);
      if ((int)*(uint *)(local_a8._0_8_ + 0xc) < 1) {
        bVar39 = false;
        local_78 = (void*)0x0;
      }
      else {
        iVar85 = 0x7fffffff;
        local_78 = (void*)0x0;
        bVar39 = false;
        uVar92 = uVar90;
        do {
          uVar90 = (uint64_t)((int)uVar90 - 1);
          uVar54 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + uVar90 * 8) +
                                 0x10));
          ___bzero();
          lVar61 = *(int64_t *)((int64_t)pvVar60 + 0x10);
          uVar97 = 1;
          if ((int)uVar54 < 1) {
            uVar97 = uVar54;
          }
          param_3 = (uint64_t)uVar54;
          lVar80 = *(int64_t *)(lVar17 + 0x10);
          iVar86 = uVar97 - 1;
          auVar122 = ZEXT816(0);
          uVar81 = 0;
          lVar99 = 0;
          fVar101 = 0.0;
          do {
            lVar65 = (uVar81 / 7) * -0x1c;
            fVar109 = *(float *)((int64_t)(int)uVar54 * 4 + lVar80 + lVar99 * 4);
            fVar104 = *(float *)(lVar61 + lVar65);
            *(uint *)(lVar61 + lVar65) = (uint)fVar109 ^ g_023945e0;
            fVar101 = (fVar101 - fVar104) - fVar109;
            if (fVar101 < 0.0) {
              iVar86 = uVar54 + (int)lVar99;
              break;
            }
            auVar121._0_4_ = ~-(uint)(fVar109 < 0.0) & (uint)auVar122._0_4_;
            auVar121._4_4_ = 0;
            auVar121._8_4_ = auVar122._8_4_;
            auVar121._12_4_ = auVar122._12_4_;
            auVar122 = auVar121 | ZEXT416((uint)(auVar122._0_4_ - fVar109) & -(uint)(fVar109 < 0.0))
            ;
            lVar99 = lVar99 + -1;
            lVar61 = lVar61 + 4;
            uVar81 = uVar81 + 1;
          } while ((int)lVar99 + (1 - uVar97) + uVar54 != 0);
          lVar61 = *(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + uVar90 * 8);
          *(double *)(lVar61 + 0x18) =
               (double)(SQRT((float)*(double *)(lVar61 + 0x18)) * auVar122._0_4_);
          if (((int64_t)uVar92 < (int64_t)*(int *)(local_a8._0_8_ + 0xc)) &&
             (iVar85 < (int)uVar54)) {
            if (local_78 == (void*)0x0) {
              local_78 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *local_78 = &g_02572358;
              (*pcVar52)();
              FUN_00d21140();
              bVar39 = true;
            }
            local_40 = *(void **)(*(int64_t *)(local_a8._0_8_ + 0x10) + uVar90 * 8);
            if (local_40 != (void *)0x0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            FUN_00d21140();
            if (local_40 != (void *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 != (void*)0x0) {
              if (bVar39) {
                FUN_00d50b20();
              }
              bVar39 = false;
            }
            local_78 = (void*)0x0;
          }
          iVar85 = iVar86 + 3;
          bVar22 = 1 < (int64_t)uVar92;
          uVar92 = uVar92 - 1;
        } while (bVar22);
        iVar85 = *(int *)((int64_t)local_58 + 0xc);
      }
      if (0 < iVar85) {
        lVar61 = *(int64_t *)((int64_t)local_58 + 0x10);
        lVar80 = 0;
        do {
          iVar85 = FUN_00e7d850(*(void*)(*(int64_t *)(lVar61 + lVar80 * 8) + 0x10));
          fVar101 = *(float *)(*puVar1 + (int64_t)iVar85 * 4);
          fVar109 = g_023d59b4;
          if (g_023d59b4 <= fVar101) {
            fVar109 = fVar101;
          }
          lVar61 = *(int64_t *)((int64_t)local_58 + 0x10);
          lVar99 = *(int64_t *)(lVar61 + lVar80 * 8);
          *(double *)(lVar99 + 0x18) = *(double *)(lVar99 + 0x18) / (double)SQRT(fVar109);
          lVar80 = lVar80 + 1;
          iVar85 = *(int *)((int64_t)local_58 + 0xc);
        } while (lVar80 < iVar85);
      }
      iVar86 = *(int *)(local_a8._0_8_ + 0xc);
      if (0 < iVar86) {
        lVar61 = *(int64_t *)(local_a8._0_8_ + 0x10);
        lVar80 = 0;
        do {
          iVar85 = FUN_00e7d850(*(void*)(*(int64_t *)(lVar61 + lVar80 * 8) + 0x10));
          fVar101 = *(float *)(*puVar1 + (int64_t)iVar85 * 4);
          fVar109 = g_023d59b4;
          if (g_023d59b4 <= fVar101) {
            fVar109 = fVar101;
          }
          lVar61 = *(int64_t *)(local_a8._0_8_ + 0x10);
          lVar99 = *(int64_t *)(lVar61 + lVar80 * 8);
          *(double *)(lVar99 + 0x18) = *(double *)(lVar99 + 0x18) / (double)SQRT(fVar109);
          lVar80 = lVar80 + 1;
          iVar86 = *(int *)(local_a8._0_8_ + 0xc);
        } while (lVar80 < iVar86);
        iVar85 = *(int *)((int64_t)local_58 + 0xc);
      }
      if (0 < iVar85) {
        lVar61 = *(int64_t *)((int64_t)local_58 + 0x10);
        lVar80 = 0;
        do {
          iVar85 = FUN_00e7d850(*(void*)(*(int64_t *)(lVar61 + lVar80 * 8) + 0x10));
          fVar101 = g_0239425c;
          if (0 < iVar85) {
            fVar101 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 1) * 4) + g_0239424c;
          }
          fVar109 = g_0239425c;
          if (iVar85 + 1 < (int)uVar98) {
            fVar109 = *(float *)(*puVar1 + (int64_t)(iVar85 + 1) * 4) + g_0239424c;
          }
          fVar104 = g_0239425c;
          if (1 < iVar85) {
            fVar104 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 2) * 4);
          }
          fVar102 = g_0239425c;
          if (iVar85 + 2 < (int)uVar98) {
            fVar102 = *(float *)(*puVar1 + (int64_t)(iVar85 + 2) * 4);
          }
          fVar24 = g_0239425c;
          if (2 < iVar85) {
            fVar24 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 3) * 4);
          }
          fVar25 = g_0239425c;
          if (iVar85 + 3 < (int)uVar98) {
            fVar25 = *(float *)(*puVar1 + (int64_t)(iVar85 + 3) * 4);
          }
          fVar26 = g_0239425c;
          if (3 < iVar85) {
            fVar26 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 4) * 4);
          }
          fVar27 = g_0239425c;
          if (iVar85 + 4 < (int)uVar98) {
            fVar27 = *(float *)(*puVar1 + (int64_t)(iVar85 + 4) * 4);
          }
          fVar28 = g_0239425c;
          if (4 < iVar85) {
            fVar28 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 5) * 4);
          }
          fVar29 = g_0239425c;
          if (iVar85 + 5 < (int)uVar98) {
            fVar29 = *(float *)(*puVar1 + (int64_t)(iVar85 + 5) * 4);
          }
          fVar130 = g_0239425c;
          if (5 < iVar85) {
            fVar130 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 6) * 4);
          }
          fVar132 = g_0239425c;
          if (iVar85 + 6 < (int)uVar98) {
            fVar132 = *(float *)(*puVar1 + (int64_t)(iVar85 + 6) * 4);
          }
          fVar133 = g_0239425c;
          if (6 < iVar85) {
            fVar133 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 7) * 4);
          }
          fVar7 = g_0239425c;
          if (iVar85 + 7 < (int)uVar98) {
            fVar7 = *(float *)(*puVar1 + (int64_t)(iVar85 + 7) * 4);
          }
          fVar8 = g_0239425c;
          if (7 < iVar85) {
            fVar8 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 8) * 4);
          }
          fVar9 = g_0239425c;
          if (iVar85 + 8 < (int)uVar98) {
            fVar9 = *(float *)(*puVar1 + (int64_t)(iVar85 + 8) * 4);
          }
          fVar10 = g_0239425c;
          if (8 < iVar85) {
            fVar10 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 9) * 4);
          }
          fVar11 = g_0239425c;
          if (iVar85 + 9 < (int)uVar98) {
            fVar11 = *(float *)(*puVar1 + (int64_t)(iVar85 + 9) * 4);
          }
          fVar12 = g_0239425c;
          if (9 < iVar85) {
            fVar12 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 10) * 4);
          }
          fVar13 = g_0239425c;
          if (iVar85 + 10 < (int)uVar98) {
            fVar13 = *(float *)(*puVar1 + (int64_t)(iVar85 + 10) * 4);
          }
          lVar61 = *(int64_t *)((int64_t)local_58 + 0x10);
          lVar99 = *(int64_t *)(lVar61 + lVar80 * 8);
          *(double *)(lVar99 + 0x18) =
               (double)SQRT((fVar109 + fVar102 + fVar25 + fVar27 + fVar29 + fVar132 + fVar7 + fVar9
                             + fVar11 + fVar13) /
                            (fVar101 + fVar104 + fVar24 + fVar26 + fVar28 + fVar130 + fVar133 +
                             fVar8 + fVar10 + fVar12)) * *(double *)(lVar99 + 0x18);
          lVar80 = lVar80 + 1;
        } while (lVar80 < *(int *)((int64_t)local_58 + 0xc));
        iVar86 = *(int *)(local_a8._0_8_ + 0xc);
      }
      if (0 < iVar86) {
        lVar61 = *(int64_t *)(local_a8._0_8_ + 0x10);
        lVar80 = 0;
        do {
          iVar85 = FUN_00e7d850(*(void*)(*(int64_t *)(lVar61 + lVar80 * 8) + 0x10));
          fVar101 = g_0239425c;
          if (0 < iVar85) {
            fVar101 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 1) * 4) + g_0239424c;
          }
          fVar109 = g_0239425c;
          if (iVar85 + 1 < (int)uVar98) {
            fVar109 = *(float *)(*puVar1 + (int64_t)(iVar85 + 1) * 4) + g_0239424c;
          }
          fVar104 = g_0239425c;
          if (1 < iVar85) {
            fVar104 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 2) * 4);
          }
          fVar102 = g_0239425c;
          if (iVar85 + 2 < (int)uVar98) {
            fVar102 = *(float *)(*puVar1 + (int64_t)(iVar85 + 2) * 4);
          }
          fVar24 = g_0239425c;
          if (2 < iVar85) {
            fVar24 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 3) * 4);
          }
          fVar25 = g_0239425c;
          if (iVar85 + 3 < (int)uVar98) {
            fVar25 = *(float *)(*puVar1 + (int64_t)(iVar85 + 3) * 4);
          }
          fVar26 = g_0239425c;
          if (3 < iVar85) {
            fVar26 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 4) * 4);
          }
          fVar27 = g_0239425c;
          if (iVar85 + 4 < (int)uVar98) {
            fVar27 = *(float *)(*puVar1 + (int64_t)(iVar85 + 4) * 4);
          }
          fVar28 = g_0239425c;
          if (4 < iVar85) {
            fVar28 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 5) * 4);
          }
          fVar29 = g_0239425c;
          if (iVar85 + 5 < (int)uVar98) {
            fVar29 = *(float *)(*puVar1 + (int64_t)(iVar85 + 5) * 4);
          }
          fVar130 = g_0239425c;
          if (5 < iVar85) {
            fVar130 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 6) * 4);
          }
          fVar132 = g_0239425c;
          if (iVar85 + 6 < (int)uVar98) {
            fVar132 = *(float *)(*puVar1 + (int64_t)(iVar85 + 6) * 4);
          }
          fVar133 = g_0239425c;
          if (6 < iVar85) {
            fVar133 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 7) * 4);
          }
          fVar7 = g_0239425c;
          if (iVar85 + 7 < (int)uVar98) {
            fVar7 = *(float *)(*puVar1 + (int64_t)(iVar85 + 7) * 4);
          }
          fVar8 = g_0239425c;
          if (7 < iVar85) {
            fVar8 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 8) * 4);
          }
          fVar9 = g_0239425c;
          if (iVar85 + 8 < (int)uVar98) {
            fVar9 = *(float *)(*puVar1 + (int64_t)(iVar85 + 8) * 4);
          }
          fVar10 = g_0239425c;
          if (8 < iVar85) {
            fVar10 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 9) * 4);
          }
          fVar11 = g_0239425c;
          if (iVar85 + 9 < (int)uVar98) {
            fVar11 = *(float *)(*puVar1 + (int64_t)(iVar85 + 9) * 4);
          }
          fVar12 = g_0239425c;
          if (9 < iVar85) {
            fVar12 = *(float *)(*puVar1 + (uint64_t)(iVar85 - 10) * 4);
          }
          fVar13 = g_0239425c;
          if (iVar85 + 10 < (int)uVar98) {
            fVar13 = *(float *)(*puVar1 + (int64_t)(iVar85 + 10) * 4);
          }
          lVar61 = *(int64_t *)(local_a8._0_8_ + 0x10);
          lVar99 = *(int64_t *)(lVar61 + lVar80 * 8);
          *(double *)(lVar99 + 0x18) =
               (double)SQRT((fVar101 + fVar104 + fVar24 + fVar26 + fVar28 + fVar130 + fVar133 +
                             fVar8 + fVar10 + fVar12) /
                            (fVar109 + fVar102 + fVar25 + fVar27 + fVar29 + fVar132 + fVar7 + fVar9
                             + fVar11 + fVar13)) * *(double *)(lVar99 + 0x18);
          lVar80 = lVar80 + 1;
        } while (lVar80 < *(int *)(local_a8._0_8_ + 0xc));
      }
      if (0 < *(int *)((int64_t)puVar63 + 0xc)) {
        lVar61 = 0;
        do {
          lVar80 = *(int64_t *)(puVar63[2] + lVar61 * 8);
          if (lVar80 != 0) {
            FUN_00d50b00();
          }
          if (*(int *)(lVar80 + 0xc) != 0) {
            FUN_00d242c0();
            plVar91 = *(int64_t **)(lVar80 + 0x10);
            dVar14 = *(double *)(*plVar91 + 0x18);
            if ((g_02411158 <= dVar14) && (1 < *(int *)(lVar80 + 0xc))) {
              dVar15 = *(double *)(*plVar91 + 0x10);
              lVar99 = 2;
              while( true ) {
                pvVar66 = (void *)plVar91[lVar99 + -1];
                fVar109 = (float)((uint)(float)(dVar15 - *(double *)((int64_t)pvVar66 + 0x10)) &
                                 g_02390140);
                fVar101 = g_02390124;
                if (fVar109 < g_023942a8) {
                  fVar101 = fVar109 / g_023942a8;
                }
                if (SQRT((float)(*(double *)((int64_t)pvVar66 + 0x18) / dVar14)) * fVar101 <
                    g_02391094) {
                  FUN_00d50b00();
                  local_38 = '\0';
                  FUN_00d23f50();
                  FUN_00d50b20();
                  local_40 = pvVar66;
                }
                if (*(int *)(lVar80 + 0xc) <= lVar99) break;
                plVar91 = *(int64_t **)(lVar80 + 0x10);
                lVar99 = lVar99 + 1;
              }
            }
          }
          FUN_00d50b20();
          lVar61 = lVar61 + 1;
        } while (lVar61 < *(int *)((int64_t)puVar63 + 0xc));
      }
      if (0 < *(int *)((int64_t)puVar64 + 0xc)) {
        lVar61 = 0;
        do {
          lVar80 = *(int64_t *)(puVar64[2] + lVar61 * 8);
          if (lVar80 != 0) {
            FUN_00d50b00();
          }
          if (*(int *)(lVar80 + 0xc) != 0) {
            FUN_00d242c0();
            plVar91 = *(int64_t **)(lVar80 + 0x10);
            dVar14 = *(double *)(*plVar91 + 0x18);
            if ((g_02411158 <= dVar14) && (1 < *(int *)(lVar80 + 0xc))) {
              dVar15 = *(double *)(*plVar91 + 0x10);
              lVar99 = 2;
              while( true ) {
                pvVar66 = (void *)plVar91[lVar99 + -1];
                fVar109 = (float)((uint)(float)(dVar15 - *(double *)((int64_t)pvVar66 + 0x10)) &
                                 g_02390140);
                fVar101 = g_02390124;
                if (fVar109 < g_023942a8) {
                  fVar101 = fVar109 / g_023942a8;
                }
                if (SQRT((float)(*(double *)((int64_t)pvVar66 + 0x18) / dVar14)) * fVar101 <
                    g_02391094) {
                  FUN_00d50b00();
                  local_38 = '\0';
                  FUN_00d23f50();
                  FUN_00d50b20();
                  local_40 = pvVar66;
                }
                if (*(int *)(lVar80 + 0xc) <= lVar99) break;
                plVar91 = *(int64_t **)(lVar80 + 0x10);
                lVar99 = lVar99 + 1;
              }
            }
          }
          FUN_00d50b20();
          lVar61 = lVar61 + 1;
        } while (lVar61 < *(int *)((int64_t)puVar64 + 0xc));
      }
      pVar75 = (void*)puVar58;
      if (0 < *(int *)((int64_t)local_58 + 0xc)) {
        iVar85 = 0;
        do {
          lVar61 = *(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + (int64_t)iVar85 * 8);
          if (lVar61 != 0) {
            FUN_00d50b00();
          }
          uVar97 = FUN_00e7d850(*(void*)(lVar61 + 0x10));
          uVar90 = (uint64_t)uVar97;
          if (0 < *(int *)((int64_t)puVar58 + 0xc)) {
            iVar86 = 0x7fffffff;
            lVar80 = 0;
            local_50 = (int64_t *)0x0;
            bVar22 = false;
            do {
              plVar91 = *(int64_t **)(puVar58[2] + lVar80 * 8);
              puVar67 = puVar58;
              if (plVar91 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              pvVar66 = _pthread_getspecific((void*)puVar67);
              plVar83 = plVar91;
              if ((pvVar66 != (void *)0x0) && (lVar99 = FUN_00e8b990(), lVar99 != 0)) {
                plVar83 = (int64_t *)plVar91[(uint64_t)(*(uint *)(lVar99 + 0x154) & 1) + 4];
              }
              lVar99 = (**(code **)(*plVar83 + 0x3a0))();
              iVar55 = FUN_00e7d850((double)lVar99 / (double)param_4);
              iVar87 = (iVar55 - *(int *)(*(int64_t *)*plVar62 + 0xc)) + param_2;
              iVar56 = uVar97 - iVar87;
              iVar55 = -iVar56;
              if (0 < iVar56) {
                iVar55 = iVar56;
              }
              if ((((int)(uVar97 - 10) <= iVar87) && (iVar87 < (int)uVar97)) && (iVar55 < iVar86)) {
                iVar86 = iVar55;
                if (local_50 == plVar91) {
                  if ((!bVar22) && (local_50 != (int64_t *)0x0)) {
                    bVar22 = true;
                    auVar31._12_4_ = 0;
                    auVar31._0_12_ = stack0xfffffffffffffeec;
                    _local_118 = auVar31 << 0x20;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (plVar91 != (int64_t *)0x0) {
                    auVar34._12_4_ = 0;
                    auVar34._0_12_ = stack0xfffffffffffffeec;
                    _local_118 = auVar34 << 0x20;
                    FUN_00d50b00();
                  }
                  if ((bVar22) && (local_50 != (int64_t *)0x0)) {
                    auVar35._12_4_ = 0;
                    auVar35._0_12_ = stack0xfffffffffffffeec;
                    _local_118 = auVar35 << 0x20;
                    FUN_00d50b20();
                    bVar22 = true;
                    local_50 = plVar91;
                  }
                  else {
                    bVar22 = true;
                    local_50 = plVar91;
                  }
                }
              }
              if (((int)uVar97 <= iVar87) && (iVar87 < (int)(uVar97 + 5))) {
                if ((local_50 != (int64_t *)0x0) && (bVar22)) {
                  FUN_00d50b20();
                }
                if (plVar91 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                goto joined_r0x01207043;
              }
              if (plVar91 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              lVar80 = lVar80 + 1;
            } while (lVar80 < *(int *)((int64_t)puVar58 + 0xc));
            if (local_50 != (int64_t *)0x0) {
              pvVar66 = _pthread_getspecific(pVar75);
              if ((pvVar66 != (void *)0x0) && (lVar80 = FUN_00e8b990(), lVar80 != 0)) {
                local_50 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar80 + 0x154) & 1) + 4];
              }
              lVar80 = (**(code **)(*local_50 + 0x3a0))();
              iVar55 = FUN_00e7d850((double)lVar80 / (double)param_4);
              iVar86 = *(int *)(*(int64_t *)*plVar62 + 0xc);
              if (iVar85 < 1) {
                iVar56 = -1;
              }
              else {
                iVar56 = FUN_00e7d850(*(void*)
                                       (*(int64_t *)
                                         (*(int64_t *)((int64_t)local_58 + 0x10) +
                                         (uint64_t)(iVar85 - 1) * 8) + 0x10));
              }
              uVar92 = uVar90;
              if (0 < (int)uVar97) {
                while (uVar90 = uVar92, (int)((iVar55 + param_2) - iVar86) < (int)uVar97) {
                  if ((*(float *)(*puVar1 + uVar92 * 4) <= g_02391090) ||
                     (uVar97 = (int)uVar92 - 1,
                     *(float *)(*(int64_t *)(lVar17 + 0x10) + (uint64_t)uVar97 * 4) <=
                     g_0239424c)) {
                    uVar90 = uVar92 & 0xffffffff;
                    break;
                  }
                  if (iVar56 == -1) {
                    iVar56 = -1;
                  }
                  else if ((int)uVar97 <= iVar56) {
                    dVar14 = *(double *)
                              (*(int64_t *)
                                (*(int64_t *)((int64_t)local_58 + 0x10) + -8 +
                                (int64_t)iVar85 * 8) + 0x18);
                    if (*(double *)(lVar61 + 0x18) <= dVar14 && dVar14 != *(double *)(lVar61 + 0x18)
                       ) {
                      *(double *)(lVar61 + 0x18) = dVar14;
                    }
                    FUN_00d23620();
                    if (iVar85 < 2) {
                      iVar56 = -1;
                      iVar85 = iVar85 + -1;
                    }
                    else {
                      iVar56 = FUN_00e7d850(*(void*)
                                             (*(int64_t *)
                                               (*(int64_t *)((int64_t)local_58 + 0x10) +
                                               (uint64_t)(iVar85 - 2) * 8) + 0x10));
                      iVar85 = iVar85 + -1;
                    }
                  }
                  uVar90 = uVar92 - 1;
                  if ((int64_t)uVar92 < 2) break;
                  uVar92 = uVar92 - 1;
                }
              }
              *(double *)(lVar61 + 0x10) = (double)(int)uVar90;
              if (bVar22) {
                FUN_00d50b20();
              }
            }
          }
joined_r0x01207043:
          if (lVar61 != 0) {
            FUN_00d50b20();
          }
          iVar85 = iVar85 + 1;
        } while (iVar85 < *(int *)((int64_t)local_58 + 0xc));
      }
      local_b0._0_4_ = uVar76 - 1;
      iVar85 = (param_2 - 1) + uVar76;
      uVar90 = (uint64_t)*(uint *)(local_a8._0_8_ + 0xc);
      while (iVar86 = (int)uVar90, 0 < iVar86) {
        lVar61 = *(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + (uVar90 - 1) * 8);
        if (lVar61 != 0) {
          FUN_00d50b00();
        }
        iVar55 = FUN_00e7d850(*(void*)(lVar61 + 0x10));
        iVar56 = -1;
        if (iVar86 < *(int *)(local_a8._0_8_ + 0xc)) {
          iVar56 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + uVar90 * 8) +
                                 0x10));
        }
        iVar87 = iVar55;
        if (iVar55 < (int)(uVar98 - 1)) {
          lVar80 = (int64_t)iVar55;
          do {
            lVar80 = lVar80 + 1;
            iVar87 = iVar55;
            if ((*(float *)((*puVar1 - 4) + lVar80 * 4) <= g_02391090) ||
               (pfVar3 = (float *)(*(int64_t *)(lVar17 + 0x10) + lVar80 * 4),
               0.0 < *pfVar3 || *pfVar3 == 0.0)) break;
            if (iVar56 == -1) {
              iVar56 = -1;
            }
            else if (iVar56 <= lVar80) {
              dVar14 = *(double *)
                        (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + (int64_t)iVar86 * 8)
                        + 0x18);
              if (*(double *)(lVar61 + 0x18) <= dVar14 && dVar14 != *(double *)(lVar61 + 0x18)) {
                *(double *)(lVar61 + 0x18) = dVar14;
              }
              FUN_00d23620();
              iVar56 = -1;
              if (iVar86 < *(int *)(local_a8._0_8_ + 0xc)) {
                iVar56 = FUN_00e7d850(*(void*)
                                       (*(int64_t *)
                                         (*(int64_t *)(local_a8._0_8_ + 0x10) +
                                         (int64_t)iVar86 * 8) + 0x10));
              }
            }
            iVar55 = iVar55 + 1;
            iVar87 = iVar85;
          } while (lVar80 != iVar85);
        }
        *(double *)(lVar61 + 0x10) = (double)iVar87;
        FUN_00d50b20();
        uVar90 = uVar90 - 1;
      }
      uVar98 = *(uint *)((int64_t)local_58 + 0xc);
      if (0 < (int)uVar98) {
        lVar61 = (uint64_t)uVar98 + 1;
        do {
          uVar98 = uVar98 - 1;
          pdVar2 = (double *)
                   (*(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + (uint64_t)uVar98 * 8)
                   + 0x18);
          if (*pdVar2 <= g_0240de90 && g_0240de90 != *pdVar2) {
            FUN_00d23620();
          }
          lVar61 = lVar61 + -1;
        } while (1 < lVar61);
      }
      uVar98 = *(uint *)(local_a8._0_8_ + 0xc);
      if (0 < (int)uVar98) {
        lVar61 = (uint64_t)uVar98 + 1;
        do {
          uVar98 = uVar98 - 1;
          pdVar2 = (double *)
                   (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + (uint64_t)uVar98 * 8) +
                   0x18);
          if (*pdVar2 <= g_0240de98 && g_0240de98 != *pdVar2) {
            FUN_00d23620();
          }
          lVar61 = lVar61 + -1;
        } while (1 < lVar61);
      }
      iVar85 = *(int *)((int64_t)local_58 + 0xc);
      if (1 < iVar85) {
        iVar86 = 0;
        do {
          lVar61 = (int64_t)iVar86;
          iVar85 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)
                                   (*(int64_t *)((int64_t)local_58 + 0x10) + 8 + lVar61 * 8) +
                                 0x10));
          iVar56 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)
                                   (*(int64_t *)((int64_t)local_58 + 0x10) + lVar61 * 8) + 0x10));
          iVar55 = iVar86 + 1;
          if (iVar85 - iVar56 < 10) {
            dVar14 = *(double *)
                      (*(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + lVar61 * 8) + 0x18);
            dVar15 = *(double *)
                      (*(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + (lVar61 + 1) * 8) +
                      0x18);
            if ((((dVar14 < g_02411158) || (iVar85 - iVar56 < 6)) ||
                (fVar101 = (float)(dVar15 / dVar14), fVar101 < g_0241f370)) ||
               (g_02394244 < fVar101)) {
              iVar55 = iVar86;
              if (dVar14 <= dVar15) {
                FUN_00d23620();
              }
              else {
                FUN_00d23620();
              }
            }
          }
          iVar85 = *(int *)((int64_t)local_58 + 0xc);
          iVar86 = iVar55;
        } while (iVar55 < iVar85 + -1);
      }
      if (1 < *(int *)(local_a8._0_8_ + 0xc)) {
        iVar85 = 0;
        do {
          lVar61 = (int64_t)iVar85;
          iVar55 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)
                                   (*(int64_t *)(local_a8._0_8_ + 0x10) + 8 + lVar61 * 8) + 0x10));
          iVar56 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + lVar61 * 8) +
                                 0x10));
          iVar86 = iVar85 + 1;
          if (iVar55 - iVar56 < 5) {
            dVar14 = *(double *)
                      (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + lVar61 * 8) + 0x18);
            pdVar2 = (double *)
                     (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + (lVar61 + 1) * 8) + 0x18)
            ;
            iVar86 = iVar85;
            if (dVar14 < *pdVar2 || dVar14 == *pdVar2) {
              FUN_00d23620();
            }
            else {
              FUN_00d23620();
            }
          }
          iVar85 = iVar86;
        } while (iVar86 < *(int *)(local_a8._0_8_ + 0xc) + -1);
        iVar85 = *(int *)((int64_t)local_58 + 0xc);
      }
      if (iVar85 != 0) {
        iVar85 = FUN_00e7d850(*(void*)(**(int64_t **)((int64_t)local_58 + 0x10) + 0x10));
        if (iVar85 + *(int *)(*(int64_t *)*plVar62 + 0xc) < (int)param_2) {
          *(double *)(**(int64_t **)((int64_t)local_58 + 0x10) + 0x10) =
               (double)(int)(param_2 - *(int *)(*(int64_t *)*plVar62 + 0xc));
        }
      }
      puVar67 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar67 = &g_02572358;
      (*pcVar52)();
      plVar91 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar91 = (int64_t)&g_02572358;
      (*pcVar52)();
      if (0 < *(int *)((int64_t)local_58 + 0xc)) {
        lVar61 = 0;
        do {
          iVar85 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)
                                   (*(int64_t *)((int64_t)local_58 + 0x10) + lVar61 * 8) + 0x10));
          uVar98 = iVar85 - param_2;
          if ((int)uVar98 < 0) {
            lVar80 = *(int64_t *)*plVar62;
            if (lVar80 != 0) {
              FUN_00d50b00();
            }
            FUN_015f8590();
            if (local_40 == (void *)0x0) {
              local_40 = (void *)0x0;
              bVar22 = false;
            }
            else if (local_38 == '\0') {
              FUN_00d50b00();
              bVar22 = true;
            }
            else {
              bVar22 = true;
            }
            if (lVar80 != 0) {
              FUN_00d50b20();
            }
            *(uint *)((int64_t)local_40 + 0xc) = uVar98 + *(int *)(*(int64_t *)*plVar62 + 0xc);
LAB_0120768e:
            *(float *)((int64_t)local_40 + 0x50) =
                 (float)*(double *)
                         (*(int64_t *)(*(int64_t *)((int64_t)local_58 + 0x10) + lVar61 * 8) +
                         0x18);
            local_38 = '\0';
            FUN_00d21140();
            if (bVar22) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar66 = *(void **)(*plVar62 + (uint64_t)uVar98 * 8);
            fVar101 = *(float *)((int64_t)pvVar66 + 0x28);
            if ((fVar101 == g_0239424c) && (!NAN(fVar101) && !NAN(g_0239424c))) {
              bVar22 = true;
              FUN_00d50b00();
              local_40 = pvVar66;
              goto LAB_0120768e;
            }
          }
          lVar61 = lVar61 + 1;
        } while (lVar61 < *(int *)((int64_t)local_58 + 0xc));
      }
      if (0 < *(int *)(local_a8._0_8_ + 0xc)) {
        lVar61 = 0;
        do {
          iVar85 = FUN_00e7d850(*(void*)
                                 (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + lVar61 * 8) +
                                 0x10));
          if (-1 < (int)(iVar85 - param_2)) {
            pvVar66 = *(void **)(*plVar62 + (uint64_t)(iVar85 - param_2) * 8);
            if ((*(float *)((int64_t)pvVar66 + 0x28) == g_0239424c) &&
               (!NAN(*(float *)((int64_t)pvVar66 + 0x28)) && !NAN(g_0239424c))) {
              FUN_00d50b00();
              *(uint *)((int64_t)pvVar66 + 0x50) =
                   (uint)(float)*(double *)
                                 (*(int64_t *)(*(int64_t *)(local_a8._0_8_ + 0x10) + lVar61 * 8) +
                                 0x18) ^ g_023945e0;
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
              local_40 = pvVar66;
            }
          }
          lVar61 = lVar61 + 1;
        } while (lVar61 < *(int *)(local_a8._0_8_ + 0xc));
      }
      plVar83 = (int64_t *)local_a8._0_8_;
      if (*(int *)((int64_t)puVar58 + 0xc) != 0) {
        puVar68 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar68 = &g_02572358;
        (*pcVar52)();
        if (0 < *(int *)((int64_t)puVar67 + 0xc)) {
          lVar61 = 0;
          do {
            pvVar66 = *(void **)(puVar67[2] + lVar61 * 8);
            if (pvVar66 != (void *)0x0) {
              FUN_00d50b00();
            }
            lVar80 = (int64_t)(*(int *)((int64_t)pvVar66 + 0xc) * param_4);
            lVar99 = lVar80 - iVar30;
            local_50 = (int64_t *)(lVar88 + lVar80);
            plVar83 = (int64_t *)*plVar62;
            iVar86 = *(int *)((int64_t)pvVar66 + 0xc) - *(int *)(*plVar83 + 0xc);
            iVar85 = 3;
            if (3 < iVar86) {
              iVar85 = iVar86;
            }
            lVar65 = (int64_t)iVar86;
            do {
              if (lVar65 <= (int64_t)(uint64_t)(iVar85 - 3)) goto LAB_012078e3;
              lVar84 = lVar65 + -1;
              lVar65 = lVar65 + -1;
              pfVar3 = (float *)(plVar83[lVar84] + 0x50);
            } while (0.0 < *pfVar3 || *pfVar3 == 0.0);
            lVar99 = *(int *)(plVar83[lVar84] + 0xc) * lVar79;
LAB_012078e3:
            iVar85 = iVar86 + 5;
            if (iVar86 < 0) {
              iVar86 = -1;
            }
            if ((int)uVar76 <= iVar85) {
              iVar85 = (int)local_b0;
            }
            lVar65 = (int64_t)iVar86;
            do {
              if (iVar85 <= lVar65) goto LAB_01207937;
              lVar84 = lVar65 + 1;
              lVar65 = lVar65 + 1;
              pfVar3 = (float *)(plVar83[lVar84] + 0x50);
            } while (0.0 < *pfVar3 || *pfVar3 == 0.0);
            local_50 = (int64_t *)(*(int *)(plVar83[lVar84] + 0xc) * lVar79);
LAB_01207937:
            if (0 < *(int *)((int64_t)puVar58 + 0xc)) {
              fVar101 = 0.0;
              lVar65 = 0;
              local_80 = (int64_t *)0x0;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uStack_110;
              _local_118 = auVar32 << 0x40;
              do {
                plVar83 = *(int64_t **)(puVar58[2] + lVar65 * 8);
                puVar72 = puVar58;
                if (plVar83 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                pvVar69 = _pthread_getspecific((void*)puVar72);
                plVar73 = plVar83;
                if ((pvVar69 != (void *)0x0) && (lVar84 = FUN_00e8b990(), lVar84 != 0)) {
                  plVar73 = (int64_t *)plVar83[(uint64_t)(*(uint *)(lVar84 + 0x154) & 1) + 4];
                }
                lVar84 = (**(code **)(*plVar73 + 0x3a0))();
                if ((lVar99 < lVar84) && (lVar84 < (int64_t)local_50)) {
                  fVar109 = (float)iVar30;
                  if (lVar80 <= lVar84) {
                    fVar109 = (float)(param_4 * 5);
                  }
                  lVar70 = lVar84 - lVar80;
                  if (lVar84 < lVar80) {
                    lVar70 = -(lVar84 - lVar80);
                  }
                  fVar109 = g_02390124 - (float)lVar70 / fVar109;
                  if (fVar101 < fVar109) {
                    fVar101 = fVar109;
                    if (local_80 == plVar83) {
                      if ((local_118[0] == '\0') && (local_80 != (int64_t *)0x0)) {
                        local_118._1_7_ = (int7)((uint64_t)lVar70 >> 8);
                        local_118[0] = 1;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (plVar83 != (int64_t *)0x0) {
                        lVar70 = FUN_00d50b00();
                      }
                      if ((local_118[0] == '\0') || (local_80 == (int64_t *)0x0)) {
                        local_118._1_7_ = (int7)((uint64_t)lVar70 >> 8);
                        local_118[0] = 1;
                        local_80 = plVar83;
                      }
                      else {
                        uVar71 = FUN_00d50b20();
                        local_118._1_7_ = (int7)((uint64_t)uVar71 >> 8);
                        local_118[0] = 1;
                        local_80 = plVar83;
                      }
                    }
                  }
                }
                if (plVar83 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                lVar65 = lVar65 + 1;
              } while (lVar65 < *(int *)((int64_t)puVar58 + 0xc));
              if (local_80 != (int64_t *)0x0) {
                fVar109 = g_02390124;
                if (*(float *)((int64_t)pvVar66 + 0x50) <= g_02390124) {
                  fVar109 = *(float *)((int64_t)pvVar66 + 0x50);
                }
                pvVar69 = _pthread_getspecific(pVar75);
                if (pvVar69 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar102 = (float)FUN_014bae60();
                fVar104 = g_02390124;
                if (fVar102 <= g_02390124) {
                  fVar104 = fVar102;
                }
                uVar103 = _powf(fVar101 * fVar109 * fVar104);
                *(void*)((int64_t)pvVar66 + 0x54) = uVar103;
                *(int64_t **)((int64_t)pvVar66 + 0x88) = local_80;
                local_38 = '\0';
                FUN_00d21140();
                local_40 = pvVar66;
                if (local_118[0] != '\0') {
                  FUN_00d50b20();
                }
              }
            }
            if (pvVar66 != (void *)0x0) {
              FUN_00d50b20();
            }
            lVar61 = lVar61 + 1;
          } while (lVar61 < *(int *)((int64_t)puVar67 + 0xc));
        }
        if (0 < *(int *)((int64_t)puVar68 + 0xc)) {
          iVar85 = 0;
          do {
            lVar61 = *(int64_t *)(puVar68[2] + (int64_t)iVar85 * 8);
            if (lVar61 != 0) {
              FUN_00d50b00();
            }
            lVar80 = *(int64_t *)(lVar61 + 0x88);
            if (lVar80 != 0) {
              FUN_00d50b00();
            }
            if (iVar85 + 1 < *(int *)((int64_t)puVar68 + 0xc)) {
              lVar99 = (int64_t)(iVar85 + 1);
              puVar72 = (void*)0x0;
              bVar22 = false;
              do {
                pvVar66 = *(void **)(puVar68[2] + lVar99 * 8);
                if (pvVar66 != (void *)0x0) {
                  FUN_00d50b00();
                }
                if (*(int64_t *)((int64_t)pvVar66 + 0x88) == lVar80) {
                  if (puVar72 == (void*)0x0) {
                    puVar72 = (void*)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar72 = &g_02572358;
                    (*pcVar52)();
                    FUN_00d21140();
                    bVar22 = true;
                  }
                  local_38 = '\0';
                  FUN_00d21140();
                  local_40 = pvVar66;
                }
                FUN_00d50b20();
                lVar99 = lVar99 + 1;
              } while (lVar99 < *(int *)((int64_t)puVar68 + 0xc));
              if (puVar72 != (void*)0x0) {
                plVar83 = (int64_t *)puVar72[2];
                pvVar66 = (void *)*plVar83;
                if (pvVar66 == (void *)0x0) {
                  iVar86 = *(int *)((int64_t)puVar72 + 0xc);
                  lVar99 = 0;
                }
                else {
                  FUN_00d50b00();
                  plVar83 = (int64_t *)puVar72[2];
                  lVar99 = *plVar83;
                  iVar86 = *(int *)((int64_t)puVar72 + 0xc);
                }
                if (1 < iVar86) {
                  fVar101 = *(float *)(lVar99 + 0x54);
                  lVar99 = 2;
                  do {
                    pvVar69 = (void *)plVar83[lVar99 + -1];
                    fVar109 = *(float *)((int64_t)pvVar69 + 0x54);
                    if ((fVar109 <= fVar101) || (fVar101 = fVar109, pvVar66 == pvVar69)) {
LAB_01207e25:
                      iVar86 = *(int *)((int64_t)puVar72 + 0xc);
                    }
                    else {
                      FUN_00d50b00();
                      if (pvVar66 != (void *)0x0) {
                        FUN_00d50b20();
                        pvVar66 = pvVar69;
                        goto LAB_01207e25;
                      }
                      iVar86 = *(int *)((int64_t)puVar72 + 0xc);
                      pvVar66 = pvVar69;
                    }
                    if (iVar86 <= lVar99) break;
                    plVar83 = (int64_t *)puVar72[2];
                    lVar99 = lVar99 + 1;
                  } while( true );
                }
                if (0 < iVar86) {
                  lVar99 = 0;
                  do {
                    pvVar69 = *(void **)(puVar72[2] + lVar99 * 8);
                    if (pvVar69 == (void *)0x0) {
                      if (pvVar66 != (void *)0x0) goto LAB_01207ed6;
                    }
                    else {
                      FUN_00d50b00();
                      if (pvVar66 != pvVar69) {
LAB_01207ed6:
                        local_38 = '\0';
                        iVar86 = FUN_00d237a0();
                        *(void*)((int64_t)pvVar69 + 0x54) = 0;
                        *(void*)((int64_t)pvVar69 + 0x88) = 0;
                        FUN_00d23620();
                        iVar85 = iVar85 - (uint)(iVar86 <= iVar85);
                        local_40 = pvVar69;
                      }
                      FUN_00d50b20();
                    }
                    lVar99 = lVar99 + 1;
                  } while (lVar99 < *(int *)((int64_t)puVar72 + 0xc));
                }
                if (pvVar66 != (void *)0x0) {
                  FUN_00d50b20();
                }
                if (bVar22) {
                  FUN_00d50b20();
                }
              }
            }
            if (lVar80 != 0) {
              FUN_00d50b20();
            }
            if (lVar61 != 0) {
              FUN_00d50b20();
            }
            iVar85 = iVar85 + 1;
          } while (iVar85 < *(int *)((int64_t)puVar68 + 0xc));
        }
        puVar72 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar72 = &g_02572358;
        (*pcVar52)();
        if (0 < *(int *)((int64_t)puVar68 + 0xc)) {
          lVar61 = 0;
          do {
            lVar80 = *(int64_t *)(puVar68[2] + lVar61 * 8);
            if (lVar80 != 0) {
              FUN_00d50b00();
            }
            pvVar66 = *(void **)(lVar80 + 0x88);
            if (pvVar66 != (void *)0x0) {
              FUN_00d50b00();
              local_38 = '\0';
              FUN_00d235a0();
              FUN_00d50b20();
              local_40 = pvVar66;
            }
            FUN_00d50b20();
            lVar61 = lVar61 + 1;
          } while (lVar61 < *(int *)((int64_t)puVar68 + 0xc));
        }
        plVar73 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar73 = (int64_t)&g_02572358;
        (*pcVar52)();
        if (0 < *(int *)((int64_t)plVar91 + 0xc)) {
          lVar61 = 0;
          do {
            pvVar66 = *(void **)(plVar91[2] + lVar61 * 8);
            if (pvVar66 != (void *)0x0) {
              FUN_00d50b00();
            }
            lVar80 = *(int *)((int64_t)pvVar66 + 0xc) * lVar79;
            if (lVar80 <= lVar59 - lVar88) {
              puVar74 = (void*)(lVar80 - param_4 * 10);
              local_118 = (uint8_t  [8])puVar74;
              lVar99 = iVar30 + lVar80;
              bVar22 = true;
              if (*(int *)((int64_t)puVar72 + 0xc) < 1) {
                bVar36 = false;
                bVar37 = false;
                bVar100 = true;
                iVar85 = *(int *)((int64_t)puVar58 + 0xc);
              }
              else {
                lVar84 = 0;
                lVar65 = 0x7fffffffffffffff;
                local_60 = 0x7fffffffffffffff;
                bVar37 = false;
                local_b0 = (int64_t *)0x0;
                bVar36 = false;
                local_48 = (int64_t *)0x0;
                do {
                  plVar83 = *(int64_t **)(puVar72[2] + lVar84 * 8);
                  puVar82 = puVar72;
                  if (plVar83 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  pvVar69 = _pthread_getspecific((void*)puVar82);
                  plVar96 = plVar83;
                  if ((pvVar69 != (void *)0x0) && (lVar70 = FUN_00e8b990(), lVar70 != 0)) {
                    plVar96 = (int64_t *)plVar83[(uint64_t)(*(uint *)(lVar70 + 0x154) & 1) + 4];
                  }
                  lVar70 = (**(code **)(*plVar96 + 0x3a0))();
                  lVar70 = lVar80 - lVar70;
                  if ((lVar70 < 0) || (local_60 <= lVar70)) {
                    if ((lVar70 < 0) && (lVar70 = -lVar70, lVar70 < lVar65)) {
                      lVar65 = lVar70;
                      if (local_b0 == plVar83) {
                        if ((bVar37) || (local_b0 == (int64_t *)0x0)) goto joined_r0x012082e9;
                        FUN_00d50b00();
                        plVar96 = local_b0;
                      }
                      else {
                        if (plVar83 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        plVar96 = plVar83;
                        if ((bVar37) && (local_b0 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      local_b0 = plVar96;
                      bVar37 = true;
                    }
                  }
                  else {
                    local_60 = lVar70;
                    if (local_48 == plVar83) {
                      if ((!bVar36) && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b00();
                        bVar36 = true;
                      }
                    }
                    else {
                      if (plVar83 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      if ((bVar36) && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      bVar36 = true;
                      local_48 = plVar83;
                    }
                  }
joined_r0x012082e9:
                  if (plVar83 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  lVar84 = lVar84 + 1;
                } while (lVar84 < *(int *)((int64_t)puVar72 + 0xc));
                bVar100 = local_48 == (int64_t *)0x0;
                puVar82 = puVar72;
                if (!bVar100) {
                  pvVar69 = _pthread_getspecific((void*)puVar72);
                  if ((pvVar69 != (void *)0x0) && (lVar65 = FUN_00e8b990(), lVar65 != 0)) {
                    local_48 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar65 + 0x154) & 1) + 4];
                  }
                  lVar65 = (**(code **)(*local_48 + 0x3a0))();
                  if ((int64_t)puVar74 < lVar65 + lVar88) {
                    puVar74 = (void*)(lVar65 + lVar88);
                  }
                  local_118 = (uint8_t  [8])puVar74;
                  puVar82 = puVar74;
                }
                if (local_b0 == (int64_t *)0x0) {
                  iVar85 = *(int *)((int64_t)puVar58 + 0xc);
                }
                else {
                  pvVar69 = _pthread_getspecific((void*)puVar82);
                  if ((pvVar69 != (void *)0x0) && (lVar65 = FUN_00e8b990(), lVar65 != 0)) {
                    local_b0 = (int64_t *)local_b0[(uint64_t)(*(uint *)(lVar65 + 0x154) & 1) + 4];
                  }
                  lVar65 = (**(code **)(*local_b0 + 0x3a0))();
                  if (lVar65 - lVar88 < lVar99) {
                    lVar99 = lVar65 - lVar88;
                  }
                  bVar22 = false;
                  iVar85 = *(int *)((int64_t)puVar58 + 0xc);
                }
              }
              if (0 < iVar85) {
                fVar101 = 0.0;
                lVar65 = 0;
                bVar38 = false;
                local_f0 = (int64_t *)0x0;
                do {
                  plVar83 = *(int64_t **)(puVar58[2] + lVar65 * 8);
                  puVar74 = puVar58;
                  if (plVar83 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  pvVar69 = _pthread_getspecific((void*)puVar74);
                  plVar96 = plVar83;
                  if ((pvVar69 != (void *)0x0) && (lVar84 = FUN_00e8b990(), lVar84 != 0)) {
                    plVar96 = (int64_t *)plVar83[(uint64_t)(*(uint *)(lVar84 + 0x154) & 1) + 4];
                  }
                  lVar84 = (**(code **)(*plVar96 + 0x3a0))();
                  if (((int64_t)local_118 < lVar84) && (lVar84 < lVar99)) {
                    fVar109 = (float)(param_4 * 10);
                    if (lVar80 <= lVar84) {
                      fVar109 = (float)iVar30;
                    }
                    lVar70 = lVar84 - lVar80;
                    if (lVar84 < lVar80) {
                      lVar70 = -(lVar84 - lVar80);
                    }
                    fVar109 = g_02390124 - (float)lVar70 / fVar109;
                    if (fVar101 < fVar109) {
                      fVar101 = fVar109;
                      if (local_f0 == plVar83) {
                        if ((!bVar38) && (local_f0 != (int64_t *)0x0)) {
                          bVar38 = true;
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if (plVar83 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        if ((bVar38) && (local_f0 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                          bVar38 = true;
                          local_f0 = plVar83;
                        }
                        else {
                          bVar38 = true;
                          local_f0 = plVar83;
                        }
                      }
                    }
                  }
                  if (plVar83 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  lVar65 = lVar65 + 1;
                } while (lVar65 < *(int *)((int64_t)puVar58 + 0xc));
                if (local_f0 != (int64_t *)0x0) {
                  uVar76 = *(uint *)((int64_t)pvVar66 + 0x50);
                  _local_118 = ZEXT416(uVar76);
                  pvVar69 = _pthread_getspecific(pVar75);
                  if (pvVar69 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  fVar104 = (float)FUN_014bae60();
                  fVar102 = (float)(uVar76 & g_02390140);
                  fVar109 = g_02390124;
                  if (fVar102 <= g_02390124) {
                    fVar109 = fVar102;
                  }
                  fVar102 = g_02390124;
                  if (fVar104 <= g_02390124) {
                    fVar102 = fVar104;
                  }
                  uVar103 = _powf(fVar101 * fVar109 * fVar102);
                  *(void*)((int64_t)pvVar66 + 0x54) = uVar103;
                  *(int64_t **)((int64_t)pvVar66 + 0x88) = local_f0;
                  local_38 = '\0';
                  FUN_00d21140();
                  local_40 = pvVar66;
                  if (bVar38) {
                    FUN_00d50b20();
                  }
                }
              }
              if (bVar37 && !bVar22) {
                FUN_00d50b20();
              }
              if (bVar36 && !bVar100) {
                FUN_00d50b20();
              }
            }
            if (pvVar66 != (void *)0x0) {
              FUN_00d50b20();
            }
            lVar61 = lVar61 + 1;
          } while (lVar61 < *(int *)((int64_t)plVar91 + 0xc));
        }
        plVar83 = plVar91;
        if (0 < *(int *)((int64_t)plVar73 + 0xc)) {
          iVar85 = 0;
          do {
            lVar61 = *(int64_t *)(plVar73[2] + (int64_t)iVar85 * 8);
            if (lVar61 != 0) {
              FUN_00d50b00();
            }
            local_118 = (uint8_t  [8])lVar61;
            lVar80 = *(int64_t *)(lVar61 + 0x88);
            if (lVar80 != 0) {
              FUN_00d50b00();
            }
            plVar83 = plVar73;
            if (iVar85 + 1 < *(int *)((int64_t)plVar73 + 0xc)) {
              lVar59 = (int64_t)(iVar85 + 1);
              bVar22 = false;
              local_48 = (int64_t *)0x0;
              do {
                pvVar66 = *(void **)(plVar73[2] + lVar59 * 8);
                if (pvVar66 != (void *)0x0) {
                  FUN_00d50b00();
                }
                if (*(int64_t *)((int64_t)pvVar66 + 0x88) == lVar80) {
                  if (local_48 == (int64_t *)0x0) {
                    local_48 = (int64_t *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *local_48 = (int64_t)&g_02572358;
                    (*pcVar52)();
                    FUN_00d21140();
                    bVar22 = true;
                  }
                  local_38 = '\0';
                  FUN_00d21140();
                  local_40 = pvVar66;
                }
                FUN_00d50b20();
                lVar59 = lVar59 + 1;
              } while (lVar59 < *(int *)((int64_t)plVar73 + 0xc));
              if (local_48 != (int64_t *)0x0) {
                plVar83 = (int64_t *)local_48[2];
                pvVar66 = (void *)*plVar83;
                if (pvVar66 == (void *)0x0) {
                  iVar86 = *(int *)((int64_t)local_48 + 0xc);
                  lVar59 = 0;
                }
                else {
                  FUN_00d50b00();
                  plVar83 = (int64_t *)local_48[2];
                  lVar59 = *plVar83;
                  iVar86 = *(int *)((int64_t)local_48 + 0xc);
                }
                if (1 < iVar86) {
                  fVar101 = *(float *)(lVar59 + 0x54);
                  lVar59 = 2;
                  do {
                    pvVar69 = (void *)plVar83[lVar59 + -1];
                    fVar109 = *(float *)((int64_t)pvVar69 + 0x54);
                    if ((fVar109 <= fVar101) || (fVar101 = fVar109, pvVar66 == pvVar69)) {
LAB_012089c5:
                      iVar86 = *(int *)((int64_t)local_48 + 0xc);
                    }
                    else {
                      FUN_00d50b00();
                      if (pvVar66 != (void *)0x0) {
                        FUN_00d50b20();
                        pvVar66 = pvVar69;
                        goto LAB_012089c5;
                      }
                      iVar86 = *(int *)((int64_t)local_48 + 0xc);
                      pvVar66 = pvVar69;
                    }
                    plVar83 = local_48;
                    if (iVar86 <= lVar59) break;
                    plVar83 = (int64_t *)local_48[2];
                    lVar59 = lVar59 + 1;
                  } while( true );
                }
                if (0 < iVar86) {
                  lVar59 = 0;
                  do {
                    pvVar69 = *(void **)(local_48[2] + lVar59 * 8);
                    if (pvVar69 == (void *)0x0) {
                      if (pvVar66 != (void *)0x0) goto LAB_01208a65;
                    }
                    else {
                      FUN_00d50b00();
                      if (pvVar66 != pvVar69) {
LAB_01208a65:
                        local_38 = '\0';
                        iVar86 = FUN_00d237a0();
                        *(void*)((int64_t)pvVar69 + 0x54) = 0;
                        *(void*)((int64_t)pvVar69 + 0x88) = 0;
                        FUN_00d23620();
                        iVar85 = iVar85 - (uint)(iVar86 <= iVar85);
                        local_40 = pvVar69;
                      }
                      FUN_00d50b20();
                    }
                    lVar59 = lVar59 + 1;
                    plVar83 = local_48;
                  } while (lVar59 < *(int *)((int64_t)local_48 + 0xc));
                }
                if (pvVar66 != (void *)0x0) {
                  FUN_00d50b20();
                }
                if (bVar22) {
                  FUN_00d50b20();
                }
              }
            }
            if (lVar80 != 0) {
              FUN_00d50b20();
            }
            if (lVar61 != 0) {
              FUN_00d50b20();
            }
            iVar85 = iVar85 + 1;
          } while (iVar85 < *(int *)((int64_t)plVar73 + 0xc));
        }
        FUN_00d50b20();
        if (puVar72 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar68 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      iVar85 = FUN_00e7d850(param_1);
      if (*(int *)((int64_t)puVar67 + 0xc) != 0) {
        local_40 = *(void **)puVar67[2];
        uVar71 = extraout_XMM0_Qa;
        if (local_40 != (void *)0x0) {
          uVar71 = FUN_00d50b00();
        }
        iVar86 = *(int *)((int64_t)local_40 + 0xc);
        if (*(int *)((int64_t)local_40 + 0xc) < 0) {
          iVar86 = 0;
        }
        plVar73 = *(int64_t **)((int64_t)local_40 + 0x88);
        if (plVar73 != (int64_t *)0x0) {
          pvVar66 = _pthread_getspecific((void*)plVar83);
          if (pvVar66 != (void *)0x0) {
            plVar73 = *(int64_t **)((int64_t)local_40 + 0x88);
            lVar61 = FUN_00e8b990();
            if (lVar61 != 0) {
              plVar73 = (int64_t *)plVar73[(uint64_t)(*(uint *)(lVar61 + 0x154) & 1) + 4];
            }
          }
          lVar61 = (**(code **)(*plVar73 + 0x3a0))();
          iVar55 = FUN_00e7d780((float)(lVar61 - iVar85) / (float)param_4);
          if (iVar55 < iVar86) {
            iVar86 = iVar55;
          }
          uVar71 = extraout_XMM0_Qa_00;
          if (iVar86 < 0) {
            iVar86 = 0;
          }
        }
        if (iVar86 < *(int *)(*(int64_t *)*plVar62 + 0xc)) {
          FUN_015f9700(uVar71,*(void*)(*(int64_t *)*plVar62 + 0x10));
          local_178 = (uint64_t)*(uint *)((int64_t)pvVar53 + 0xc);
        }
        local_38 = '\0';
        iVar86 = FUN_00d237a0();
        if (iVar86 == -1) {
          plVar83 = (int64_t *)*plVar62;
          lVar61 = plVar83[(int64_t)*(int *)((int64_t)local_40 + 0xc) -
                           (int64_t)*(int *)(*plVar83 + 0xc)];
          if (lVar61 != 0) {
            FUN_00d50b00();
          }
          *(void*)(lVar61 + 0x50) = *(void*)((int64_t)local_40 + 0x50);
          *(void*)(lVar61 + 0x54) = *(void*)((int64_t)local_40 + 0x54);
          *(void*)(lVar61 + 0x88) = *(void*)((int64_t)local_40 + 0x88);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (0 < (int)local_178) {
        uVar90 = 0;
        do {
          pvVar66 = *(void **)(*plVar62 + uVar90 * 8);
          if (pvVar66 != (void *)0x0) {
            FUN_00d50b00();
          }
          plVar73 = *(int64_t **)((int64_t)pvVar66 + 0x88);
          if ((plVar73 != (int64_t *)0x0) && (g_0239424c < *(float *)((int64_t)pvVar66 + 0x50)))
          {
            iVar86 = *(int *)((int64_t)pvVar66 + 0xc);
            iVar55 = *(int *)(*(int64_t *)*plVar62 + 0xc);
            pvVar69 = _pthread_getspecific((void*)plVar83);
            if (pvVar69 != (void *)0x0) {
              plVar73 = *(int64_t **)((int64_t)pvVar66 + 0x88);
              lVar61 = FUN_00e8b990();
              if (lVar61 != 0) {
                plVar73 = (int64_t *)plVar73[(uint64_t)(*(uint *)(lVar61 + 0x154) & 1) + 4];
              }
            }
            lVar61 = (**(code **)(*plVar73 + 0x3a0))();
            iVar56 = FUN_00e7d780((float)(lVar61 - iVar85) / (float)param_4);
            uVar76 = iVar56 - *(int *)(*(int64_t *)*plVar62 + 0xc);
            plVar83 = (int64_t *)(uint64_t)uVar76;
            if ((int)uVar76 < 0) {
              plVar83 = (int64_t *)0x0;
            }
            if (((int)plVar83 < iVar86 - iVar55) && ((int)plVar83 < (int)local_178)) {
              pvVar69 = (void *)((int64_t *)*plVar62)[(int64_t)plVar83];
              if (pvVar69 != (void *)0x0) {
                FUN_00d50b00();
              }
              if (pvVar69 == pvVar66) {
LAB_01208ef0:
                if (pvVar69 == (void *)0x0) goto LAB_01208f00;
              }
              else {
                *(void*)((int64_t)pvVar69 + 0x50) =
                     *(void*)((int64_t)pvVar66 + 0x50);
                *(void*)((int64_t)pvVar69 + 0x54) =
                     *(void*)((int64_t)pvVar66 + 0x54);
                *(void*)((int64_t)pvVar69 + 0x88) =
                     *(void*)((int64_t)pvVar66 + 0x88);
                *(void*)((int64_t)pvVar66 + 0x50) = 0;
                *(void*)((int64_t)pvVar66 + 0x88) = 0;
                uVar76 = FUN_00d237a0();
                local_38 = '\0';
                iVar86 = FUN_00d237a0();
                local_40 = pvVar66;
                if ((int)uVar76 < iVar86) {
                  if ((int)(uVar76 + 1) < iVar86) {
                    lVar61 = *plVar62;
                    lVar80 = (int64_t)(int)uVar76;
                    if ((~uVar76 + iVar86 & 1) == 0) {
                      plVar83 = (int64_t *)(lVar80 + 1);
                    }
                    else {
                      pfVar3 = (float *)(*(int64_t *)(lVar61 + 8 + lVar80 * 8) + 0x50);
                      if (*pfVar3 <= 0.0 && *pfVar3 != 0.0) {
                        lVar59 = *(int64_t *)(*plVar62 + 8 + lVar80 * 8);
                        *(void*)(lVar59 + 0x50) = 0;
                        *(void*)(lVar59 + 0x88) = 0;
                      }
                      plVar83 = (int64_t *)(lVar80 + 2);
                    }
                    if (iVar86 - 2U != uVar76) {
                      do {
                        pfVar3 = (float *)(*(int64_t *)(lVar61 + (int64_t)plVar83 * 8) + 0x50);
                        if (0.0 < *pfVar3 || *pfVar3 == 0.0) {
                          pfVar3 = (float *)(*(int64_t *)(lVar61 + 8 + (int64_t)plVar83 * 8) +
                                            0x50);
                          if (*pfVar3 <= 0.0 && *pfVar3 != 0.0) goto LAB_01208f7e;
                        }
                        else {
                          lVar80 = *(int64_t *)(*plVar62 + (int64_t)plVar83 * 8);
                          *(void*)(lVar80 + 0x50) = 0;
                          *(void*)(lVar80 + 0x88) = 0;
                          pfVar3 = (float *)(*(int64_t *)(lVar61 + 8 + (int64_t)plVar83 * 8) +
                                            0x50);
                          if (*pfVar3 <= 0.0 && *pfVar3 != 0.0) {
LAB_01208f7e:
                            lVar80 = *(int64_t *)(*plVar62 + 8 + (int64_t)plVar83 * 8);
                            *(void*)(lVar80 + 0x50) = 0;
                            *(void*)(lVar80 + 0x88) = 0;
                          }
                        }
                        plVar83 = (int64_t *)((int64_t)plVar83 + 2);
                      } while (iVar86 != (int)plVar83);
                    }
                  }
                  goto LAB_01208ef0;
                }
              }
              FUN_00d50b20();
            }
          }
LAB_01208f00:
          if (pvVar66 != (void *)0x0) {
            FUN_00d50b20();
          }
          uVar90 = uVar90 + 1;
        } while (uVar90 != (local_178 & 0xffffffff));
        uVar90 = 0;
        do {
          lVar61 = *(int64_t *)(*plVar62 + uVar90 * 8);
          if (lVar61 != 0) {
            FUN_00d50b00();
          }
          if ((((*(float *)(lVar61 + 0x50) != g_0239424c) ||
               (NAN(*(float *)(lVar61 + 0x50)) || NAN(g_0239424c))) &&
              (g_0239424c < *(float *)(lVar61 + 0x44))) &&
             (*(float *)(lVar61 + 0x54) <= g_02394214 && g_02394214 != *(float *)(lVar61 + 0x54)
             )) {
            *(void*)(lVar61 + 0x50) = 0;
            *(void*)(lVar61 + 0x88) = 0;
          }
          FUN_00d50b20();
          uVar90 = uVar90 + 1;
        } while ((local_178 & 0xffffffff) != uVar90);
      }
      if (plVar91 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (puVar67 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (pvVar60 != (void *)0x0) {
        FUN_00d50b20();
      }
      if ((bVar39) && (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar40) && (local_d8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar64 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar63 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (!bVar41 && (int64_t *)local_a8._0_8_ != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar42 && local_58 != (void *)0x0) {
        FUN_00d50b20();
      }
      if (puVar58 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (pvVar53 != (void *)0x0) {
        FUN_00d50b20();
      }
      if (lVar57 != 0) {
        FUN_00d50b20();
      }
      lVar89 = lVar89 + 1;
      lVar57 = *this_ptr;
    } while (lVar89 < *(int *)(lVar57 + 0xc));
  }
  if (((char)lVar48 != '\0') && (lVar21 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar47 != '\0') && (lVar20 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar46 != '\0') && (lVar19 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar45 != '\0') && (lVar18 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar44 != '\0') && (lVar17 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar43 != '\0') && (lVar16 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01203460
// ============================================================
// Function: FUN_01203460
// Address: 01203460
// Size: 928 bytes
// Class: MUBarSignatureMapItem
// String references:
//   "MUBarSignatureMapItem"
// === MUBarSignatureMapItem properties ===
//                   _map
//                   _sourceSignature
//                   _targetSignature
//                   _mapsTipletsToBeats
//                   _mapsTipletsToSwing
//                   _mapsSwingToTriplets
//                   _nextMap
//                   _modeSequence
//                   _sourceStartQuarter
//                   _sourceEndQuarter
//                   _targetStartQuarter
//                   _targetEndQuarter
//                   _quarterAssigmentFactor


void FUN_01203460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025cf7e8;
  *(void*)((int64_t)this_ptr + 0xc) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_01203830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_012039a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_01203b10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bd523 == '\0') {
    FUN_01203c80();
    FUN_00e87980();
  }
  FUN_01203df0();
  return;
}

