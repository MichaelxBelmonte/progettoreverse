// Function: FUN_013c4cd0
// Address: 013c4cd0
// Size: 9704 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013c73be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013c4cd0(float param_1,undefined4 param_2,ulonglong param_3,longlong *param_4,
                 undefined8 param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                 longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                 longlong *param_13,uint param_14,uint param_15,uint param_16,undefined4 param_17,
                 int param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                 void *param_22,float *param_23,longlong param_24,undefined8 param_25,
                 undefined8 param_26,byte param_27,byte param_28,byte param_29)

{
  void *pvVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  void *pvVar8;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  char cVar33;
  int iVar34;
  void *pvVar35;
  longlong lVar36;
  undefined7 uVar40;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  undefined4 in_ECX;
  pthread_key_t pVar41;
  ulonglong uVar42;
  longlong *plVar43;
  void *pvVar44;
  float *pfVar45;
  uint uVar46;
  char *pcVar47;
  int unaff_ESI;
  ulonglong uVar48;
  ulonglong uVar49;
  int iVar50;
  ulonglong uVar51;
  size_t sVar52;
  longlong lVar53;
  ulonglong uVar54;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar55;
  float extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  longlong *local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  uint local_18c;
  void *local_188;
  void *local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  void *local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  void *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  char local_c8;
  char local_c0;
  longlong local_b8;
  longlong *local_b0;
  char local_a8 [8];
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong *local_60;
  char local_58;
  char local_50;
  char local_48;
  char local_40 [8];
  char local_38;
  
  local_168 = CONCAT44(local_168._4_4_,in_ECX);
  local_130 = CONCAT44(local_130._4_4_,param_2);
  local_40[0] = '\0';
  local_50 = '\0';
  local_d0 = '\0';
  local_80 = '\0';
  local_c8 = '\0';
  local_c0 = '\0';
  local_48 = '\0';
  local_58 = '\0';
  local_38 = '\0';
  uVar46 = *(uint *)(*param_4 + 0xc);
  local_e8 = (ulonglong)uVar46;
  local_e0 = CONCAT44(local_e0._4_4_,unaff_ESI);
  local_110 = (longlong)unaff_ESI;
  pvVar35 = (void *)(param_3 & 0xffffffff);
  uVar54 = (ulonglong)param_16;
  local_170 = CONCAT44(local_170._4_4_,(int)param_3);
  local_120 = param_4;
  local_68 = uVar54;
  if ((int)param_3 < 1) {
    local_88 = 0;
    local_98 = 0;
    local_100 = 0;
    local_78 = 0;
    local_60 = (longlong *)0x0;
    plVar43 = (longlong *)0x0;
    local_b8 = 0;
  }
  else {
    local_180 = (void *)CONCAT71(local_180._1_7_,param_27 | param_28);
    local_188 = (void *)(longlong)(int)(param_16 * 4);
    local_178 = CONCAT71(local_178._1_7_,0 < (int)uVar46 & param_29);
    local_108 = (ulonglong)(param_16 & 0xfffffff8);
    local_128 = local_108 - 8;
    local_140 = (local_128 >> 3) + 1;
    local_160 = (ulonglong)(param_16 & 0xfffffffe);
    uVar38 = (ulonglong)(uVar46 & 3);
    local_148 = (ulonglong)(uVar46 & 0xfffffffc);
    local_150 = (void *)(ulonglong)(uVar46 & 0xfffffffe);
    local_158 = -uVar54;
    local_138 = -(local_140 & 0xfffffffffffffffe);
    local_d8 = uVar54 - 1;
    local_118 = local_e8 - 1;
    pvVar44 = (void *)0x0;
    local_60 = (longlong *)0x0;
    local_78 = 0;
    local_100 = 0;
    local_98 = 0;
    local_b8 = 0;
    local_88 = 0;
    local_a0 = (longlong *)0x0;
    local_f0 = uVar38;
    do {
      lVar36 = *(longlong *)
                (*(longlong *)(*(longlong *)(*param_8 + 0x10) + (longlong)pvVar44 * 8) + 0x10);
      lVar39 = *(longlong *)(lVar36 + local_110 * 8);
      local_f8 = pvVar44;
      cVar33 = local_38;
      if (local_100 != lVar39) {
        if ((local_d0 != '\0') && (local_100 != 0)) {
          lVar36 = FUN_00d50b20();
          param_1 = extraout_XMM0_Da;
        }
        local_d0 = '\0';
        local_100 = lVar39;
        cVar33 = local_38;
      }
      if (0 < (int)param_16) {
        lVar39 = *(longlong *)(local_100 + 0x10);
        lVar36 = *(longlong *)(*param_13 + 0x10);
        if (local_d8 == 0) {
          uVar54 = 0;
        }
        else {
          uVar54 = 0;
          do {
            fVar56 = *(float *)(lVar39 + uVar54 * 4);
            param_1 = 0.0;
            if (DAT_02394274 <= fVar56) {
              *(float *)(lVar36 + uVar54 * 4) = DAT_02390124 / fVar56;
              fVar56 = *(float *)(lVar39 + 4 + uVar54 * 4);
              if (DAT_02394274 <= fVar56) goto LAB_013c4f90;
            }
            else {
              *(undefined4 *)(lVar36 + uVar54 * 4) = 0;
              fVar56 = *(float *)(lVar39 + 4 + uVar54 * 4);
              if (DAT_02394274 <= fVar56) {
LAB_013c4f90:
                param_1 = DAT_02390124 / fVar56;
              }
            }
            *(float *)(lVar36 + 4 + uVar54 * 4) = param_1;
            uVar54 = uVar54 + 2;
          } while (local_160 != uVar54);
        }
        if ((local_68 & 1) != 0) {
          fVar56 = *(float *)(lVar39 + uVar54 * 4);
          param_1 = 0.0;
          if (DAT_02394274 <= fVar56) {
            param_1 = DAT_02390124 / fVar56;
          }
          *(float *)(lVar36 + uVar54 * 4) = param_1;
        }
      }
      uVar42 = local_70 >> 0x20;
      uVar54 = (ulonglong)local_90 >> 0x20;
      lVar39 = local_98;
      plVar43 = local_a0;
      lVar53 = local_b8;
      local_38 = cVar33;
      if ((char)local_180 == '\0') {
LAB_013c54b9:
        local_70 = lVar53;
        local_90 = plVar43;
        local_98 = lVar39;
        iVar34 = (int)local_e8;
        uVar54 = local_68;
joined_r0x013c54cb:
        local_68 = uVar54;
        cVar33 = local_58;
        if (0 < iVar34) {
LAB_013c6490:
          uVar42 = 0;
          cVar33 = local_58;
          do {
            plVar43 = *(longlong **)(*(longlong *)(*local_120 + 0x10) + uVar42 * 8);
            if (local_90 != plVar43) {
              if ((local_38 != '\0') && (local_90 != (longlong *)0x0)) {
                param_1 = (float)FUN_00d50b20();
              }
              local_38 = '\0';
              local_90 = plVar43;
            }
            local_1b8 = '\0';
            local_1c0 = local_90;
            FUN_013bf7d0(param_1,&local_1c0);
            pvVar44 = local_f8;
            iVar34 = FUN_00d45870();
            uVar55 = extraout_XMM0_Da_04;
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              uVar55 = FUN_00d50b20();
            }
            if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
              uVar55 = FUN_00d50b20();
            }
            local_1b0 = local_90;
            local_1a8 = '\0';
            fVar56 = (float)FUN_013bfb40(uVar55,&local_1b0);
            plVar43 = local_b0;
            if (local_b0 == local_60) {
              if (((local_40[0] == '\0') && (local_b0 != (longlong *)0x0)) &&
                 (plVar43 = local_60, local_a8[0] != '\0')) goto LAB_013c661d;
            }
            else {
              if (local_a8[0] == '\0') {
                pcVar47 = local_40;
                if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                  fVar56 = (float)FUN_00d50b20();
                  pcVar47 = local_40;
                }
              }
              else {
                if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                  fVar56 = (float)FUN_00d50b20();
                }
LAB_013c661d:
                local_40[0] = '\x01';
                pcVar47 = local_a8;
              }
              *pcVar47 = '\0';
              local_60 = plVar43;
            }
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              fVar56 = (float)FUN_00d50b20();
            }
            if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
              fVar56 = (float)FUN_00d50b20();
            }
            lVar36 = (longlong)((int)local_e0 - iVar34);
            lVar39 = *(longlong *)
                      (*(longlong *)(*(longlong *)(local_60[2] + (longlong)pvVar44 * 8) + 0x10) +
                      lVar36 * 8);
            if (local_78 != lVar39) {
              if ((local_50 != '\0') && (local_78 != 0)) {
                fVar56 = (float)FUN_00d50b20();
              }
              local_50 = '\0';
              local_78 = lVar39;
            }
            lVar39 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*param_12 + 0x10) + (longlong)pvVar44 * 8) +
                        0x10) + uVar42 * 8);
            if (local_88 != lVar39) {
              if ((cVar33 != '\0') && (local_88 != 0)) {
                fVar56 = (float)FUN_00d50b20();
              }
              cVar33 = '\0';
              local_88 = lVar39;
            }
            uVar54 = local_68;
            if ((int)param_16 < 1) {
              fVar58 = 0.0;
            }
            else {
              lVar39 = *(longlong *)(local_78 + 0x10);
              lVar53 = *(longlong *)(*param_13 + 0x10);
              lVar5 = *(longlong *)(local_88 + 0x10);
              if (local_d8 == 0) {
                fVar58 = 0.0;
                uVar38 = 0;
              }
              else {
                fVar58 = 0.0;
                uVar38 = 0;
                do {
                  fVar59 = *(float *)(lVar39 + uVar38 * 4) * *(float *)(lVar53 + uVar38 * 4);
                  fVar56 = 0.0;
                  if (0.0 <= fVar59) {
                    fVar56 = fVar59;
                  }
                  *(float *)(lVar5 + uVar38 * 4) = fVar56;
                  fVar59 = *(float *)(lVar39 + uVar38 * 4);
                  fVar56 = *(float *)(lVar39 + 4 + uVar38 * 4) * *(float *)(lVar53 + 4 + uVar38 * 4)
                  ;
                  fVar57 = 0.0;
                  if (0.0 <= fVar56) {
                    fVar57 = fVar56;
                  }
                  *(float *)(lVar5 + 4 + uVar38 * 4) = fVar57;
                  fVar58 = fVar58 + fVar59 + *(float *)(lVar39 + 4 + uVar38 * 4);
                  uVar38 = uVar38 + 2;
                } while (local_160 != uVar38);
              }
              if ((local_68 & 1) != 0) {
                fVar56 = *(float *)(lVar39 + uVar38 * 4) * *(float *)(lVar53 + uVar38 * 4);
                fVar59 = 0.0;
                if (0.0 <= fVar56) {
                  fVar59 = fVar56;
                }
                *(float *)(lVar5 + uVar38 * 4) = fVar59;
                fVar58 = fVar58 + *(float *)(lVar39 + uVar38 * 4);
              }
            }
            local_a0 = (longlong *)CONCAT44(local_a0._4_4_,fVar58);
            local_1a0 = local_90;
            local_198 = '\0';
            FUN_013c7ec0(fVar56,&local_1a0);
            param_1 = local_a0._0_4_ + *(float *)(local_b0[2] + lVar36 * 4);
            *(float *)(local_b0[2] + lVar36 * 4) = param_1;
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              param_1 = (float)FUN_00d50b20();
            }
            if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
              param_1 = (float)FUN_00d50b20();
            }
            uVar42 = uVar42 + 1;
            uVar38 = local_f0;
          } while (uVar42 != local_e8);
        }
      }
      else {
        uVar40 = (undefined7)((ulonglong)lVar36 >> 8);
        local_90 = (longlong *)CONCAT44((int)uVar54,(int)CONCAT71(uVar40,local_50));
        local_70 = CONCAT44((int)uVar42,(int)CONCAT71(uVar40,local_48));
        if (0 < (int)local_e8) {
          uVar54 = 0;
          do {
            plVar43 = *(longlong **)(*(longlong *)(*local_120 + 0x10) + uVar54 * 8);
            if (local_a0 != plVar43) {
              if ((cVar33 != '\0') && (local_a0 != (longlong *)0x0)) {
                param_1 = (float)FUN_00d50b20();
              }
              cVar33 = '\0';
              local_a0 = plVar43;
            }
            local_228 = '\0';
            local_230 = local_a0;
            FUN_013bf7d0(param_1,&local_230);
            iVar34 = FUN_00d45870();
            uVar55 = extraout_XMM0_Da_00;
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              uVar55 = FUN_00d50b20();
            }
            if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
              uVar55 = FUN_00d50b20();
            }
            local_220 = local_a0;
            local_218 = '\0';
            FUN_013bfb40(uVar55,&local_220);
            plVar43 = local_b0;
            if (local_b0 == local_60) {
              if (((local_40[0] == '\0') && (local_b0 != (longlong *)0x0)) &&
                 (plVar43 = local_60, local_a8[0] != '\0')) goto LAB_013c515d;
            }
            else {
              if (local_a8[0] == '\0') {
                pcVar47 = local_40;
                if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                  FUN_00d50b20();
                  pcVar47 = local_40;
                }
              }
              else {
                if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                  FUN_00d50b20();
                }
LAB_013c515d:
                local_40[0] = '\x01';
                pcVar47 = local_a8;
              }
              *pcVar47 = '\0';
              local_60 = plVar43;
            }
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar38 = local_f0;
            pvVar44 = *(void **)(*(longlong *)(local_60[2] + (longlong)local_f8 * 8) + 0x10);
            lVar39 = *(longlong *)((longlong)pvVar44 + (longlong)((int)local_e0 - iVar34) * 8);
            if (local_78 != lVar39) {
              if (((char)local_90 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
              local_78 = lVar39;
            }
            lVar39 = *(longlong *)(*(longlong *)(*param_11 + 0x10) + uVar54 * 8);
            lVar36 = local_b8;
            if (local_b8 != lVar39) {
              if (((char)local_70 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              local_70 = local_70 & 0xffffffff00000000;
              lVar36 = lVar39;
            }
            _memcpy(pvVar44,local_188,(size_t)param_3);
            local_b8 = lVar36;
            param_1 = (float)FUN_015c1480(DAT_023908d8);
            if (0 < (int)param_16) {
              lVar39 = *(longlong *)(local_b8 + 0x10);
              uVar42 = 0;
              if (7 < param_16) {
                do {
                  pfVar45 = (float *)(lVar39 + uVar42 * 4);
                  fVar56 = pfVar45[1];
                  fVar58 = pfVar45[2];
                  fVar59 = pfVar45[3];
                  if (*pfVar45 < DAT_02394274) {
                    *(undefined4 *)(lVar39 + uVar42 * 4) = 0x800000;
                  }
                  if (fVar56 < _UNK_02411094) {
                    *(undefined4 *)(lVar39 + 4 + uVar42 * 4) = 0x800000;
                  }
                  if (_UNK_02411098 <= fVar58) {
                    if (fVar59 < _UNK_0241109c) goto LAB_013c53c7;
LAB_013c5340:
                    pfVar45 = (float *)(lVar39 + 0x10 + uVar42 * 4);
                    fVar56 = *pfVar45;
                    fVar58 = pfVar45[1];
                    fVar59 = pfVar45[2];
                    fVar57 = pfVar45[3];
                    if (fVar56 < DAT_02394274) {
LAB_013c5352:
                      *(undefined4 *)(lVar39 + 0x10 + uVar42 * 4) = 0x800000;
                    }
                  }
                  else {
                    *(undefined4 *)(lVar39 + 8 + uVar42 * 4) = 0x800000;
                    if (_UNK_0241109c <= fVar59) goto LAB_013c5340;
LAB_013c53c7:
                    *(undefined4 *)(lVar39 + 0xc + uVar42 * 4) = 0x800000;
                    pfVar45 = (float *)(lVar39 + 0x10 + uVar42 * 4);
                    fVar56 = *pfVar45;
                    fVar58 = pfVar45[1];
                    fVar59 = pfVar45[2];
                    fVar57 = pfVar45[3];
                    if (fVar56 < DAT_02394274) goto LAB_013c5352;
                  }
                  if (fVar58 < _UNK_02411094) {
                    *(undefined4 *)(lVar39 + 0x14 + uVar42 * 4) = 0x800000;
                  }
                  if (fVar59 < _UNK_02411098) {
                    *(undefined4 *)(lVar39 + 0x18 + uVar42 * 4) = 0x800000;
                  }
                  param_1 = (float)-(uint)(fVar56 < _DAT_02411090);
                  if (fVar57 < _UNK_0241109c) {
                    *(undefined4 *)(lVar39 + 0x1c + uVar42 * 4) = 0x800000;
                  }
                  uVar42 = uVar42 + 8;
                } while (local_108 != uVar42);
                uVar42 = local_108;
                if (local_108 == local_68) goto LAB_013c5000;
              }
              do {
                param_1 = DAT_02394274;
                pfVar45 = (float *)(lVar39 + uVar42 * 4);
                if (*pfVar45 <= DAT_02394274 && DAT_02394274 != *pfVar45) {
                  *(undefined4 *)(lVar39 + uVar42 * 4) = 0x800000;
                }
                uVar42 = uVar42 + 1;
              } while (local_68 != uVar42);
            }
LAB_013c5000:
            uVar54 = uVar54 + 1;
          } while (uVar54 != local_e8);
        }
        uVar54 = local_e8;
        local_50 = (char)local_90;
        local_48 = (char)local_70;
        lVar39 = local_98;
        plVar43 = local_a0;
        local_38 = cVar33;
        if (param_27 != 0) {
          lVar36 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(*param_6 + 0x10) + (longlong)local_f8 * 8) + 0x10
                      ) + local_110 * 8);
          iVar34 = (int)local_e8;
          if (local_98 != lVar36) {
            if ((local_80 != '\0') && (local_98 != 0)) {
              param_1 = (float)FUN_00d50b20();
            }
            local_80 = '\0';
            lVar39 = lVar36;
          }
          plVar43 = local_a0;
          if (0 < (int)param_16) {
            if (iVar34 < 1) goto joined_r0x013c640e;
            lVar36 = *(longlong *)(*param_11 + 0x10);
            uVar42 = 0;
            do {
              if (local_118 < 3) {
                param_1 = 0.0;
                uVar37 = 0;
              }
              else {
                param_1 = 0.0;
                uVar37 = 0;
                do {
                  param_1 = param_1 + *(float *)(*(longlong *)
                                                  (*(longlong *)(lVar36 + uVar37 * 8) + 0x10) +
                                                uVar42 * 4) +
                            *(float *)(*(longlong *)(*(longlong *)(lVar36 + 8 + uVar37 * 8) + 0x10)
                                      + uVar42 * 4) +
                            *(float *)(*(longlong *)
                                        (*(longlong *)(lVar36 + 0x10 + uVar37 * 8) + 0x10) +
                                      uVar42 * 4) +
                            *(float *)(*(longlong *)
                                        (*(longlong *)(lVar36 + 0x18 + uVar37 * 8) + 0x10) +
                                      uVar42 * 4);
                  uVar37 = uVar37 + 4;
                } while (local_148 != uVar37);
              }
              if (uVar38 != 0) {
                uVar49 = 0;
                do {
                  param_1 = param_1 + *(float *)(*(longlong *)
                                                  (*(longlong *)(lVar36 + uVar37 * 8 + uVar49 * 8) +
                                                  0x10) + uVar42 * 4);
                  uVar49 = uVar49 + 1;
                } while (uVar38 != uVar49);
              }
              fVar56 = DAT_02390124 / param_1;
              if (local_118 == 0) {
                pvVar44 = (void *)0x0;
              }
              else {
                pvVar44 = (void *)0x0;
                do {
                  lVar53 = *(longlong *)(*(longlong *)(lVar36 + (longlong)pvVar44 * 8) + 0x10);
                  *(float *)(lVar53 + uVar42 * 4) = *(float *)(lVar53 + uVar42 * 4) * fVar56;
                  lVar53 = *(longlong *)(*(longlong *)(lVar36 + 8 + (longlong)pvVar44 * 8) + 0x10);
                  param_1 = *(float *)(lVar53 + uVar42 * 4) * fVar56;
                  *(float *)(lVar53 + uVar42 * 4) = param_1;
                  pvVar44 = (void *)((longlong)pvVar44 + 2);
                } while (local_150 != pvVar44);
              }
              if ((uVar54 & 1) != 0) {
                lVar53 = *(longlong *)(*(longlong *)(lVar36 + (longlong)pvVar44 * 8) + 0x10);
                *(float *)(lVar53 + uVar42 * 4) = fVar56 * *(float *)(lVar53 + uVar42 * 4);
              }
              uVar42 = uVar42 + 1;
            } while (uVar42 != local_68);
          }
          if (0 < iVar34) {
            uVar42 = 0;
            do {
              pvVar44 = local_f8;
              plVar43 = *(longlong **)(*(longlong *)(*local_120 + 0x10) + uVar42 * 8);
              if (local_a0 != plVar43) {
                if ((local_38 != '\0') && (local_a0 != (longlong *)0x0)) {
                  param_1 = (float)FUN_00d50b20();
                }
                local_38 = '\0';
                local_a0 = plVar43;
              }
              local_208 = '\0';
              local_210 = local_a0;
              FUN_013bf7d0(param_1,&local_210);
              iVar34 = FUN_00d45870();
              uVar55 = extraout_XMM0_Da_03;
              if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
                uVar55 = FUN_00d50b20();
              }
              if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
                uVar55 = FUN_00d50b20();
              }
              local_200 = local_a0;
              local_1f8 = '\0';
              param_1 = (float)FUN_013bfb40(uVar55,&local_200);
              plVar43 = local_b0;
              if (local_b0 == local_60) {
                if (((local_40[0] == '\0') && (local_b0 != (longlong *)0x0)) &&
                   (plVar43 = local_60, local_a8[0] != '\0')) goto LAB_013c611d;
              }
              else {
                if (local_a8[0] == '\0') {
                  pcVar47 = local_40;
                  if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                    param_1 = (float)FUN_00d50b20();
                    pcVar47 = local_40;
                  }
                }
                else {
                  if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                    param_1 = (float)FUN_00d50b20();
                  }
LAB_013c611d:
                  local_40[0] = '\x01';
                  pcVar47 = local_a8;
                }
                *pcVar47 = '\0';
                local_60 = plVar43;
              }
              if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
                param_1 = (float)FUN_00d50b20();
              }
              if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
                param_1 = (float)FUN_00d50b20();
              }
              uVar38 = local_f0;
              lVar36 = *(longlong *)
                        (*(longlong *)(*(longlong *)(local_60[2] + (longlong)pvVar44 * 8) + 0x10) +
                        (longlong)((int)local_e0 - iVar34) * 8);
              if (local_78 != lVar36) {
                if ((local_50 != '\0') && (local_78 != 0)) {
                  param_1 = (float)FUN_00d50b20();
                }
                local_50 = '\0';
                local_78 = lVar36;
              }
              lVar36 = *(longlong *)(*(longlong *)(*param_11 + 0x10) + uVar42 * 8);
              if (local_b8 != lVar36) {
                if ((local_48 != '\0') && (local_b8 != 0)) {
                  param_1 = (float)FUN_00d50b20();
                }
                local_48 = '\0';
                local_b8 = lVar36;
              }
              if (0 < (int)param_16) {
                uVar54 = *(ulonglong *)(lVar39 + 0x10);
                uVar37 = *(ulonglong *)(local_b8 + 0x10);
                uVar49 = *(ulonglong *)(local_78 + 0x10);
                if (param_16 < 8) {
                  uVar51 = 0;
                }
                else {
                  uVar48 = uVar49 + local_68 * 4;
                  param_3 = CONCAT71((int7)(param_3 >> 8),uVar54 < uVar48);
                  if (uVar49 < uVar54 + local_68 * 4 && uVar54 < uVar48) {
                    uVar51 = 0;
                  }
                  else {
                    uVar51 = 0;
                    if (uVar37 + local_68 * 4 <= uVar49 || uVar48 <= uVar37) {
                      if (local_128 == 0) {
                        lVar36 = 0;
                      }
                      else {
                        lVar36 = 0;
                        uVar48 = local_138;
                        do {
                          pfVar45 = (float *)(uVar54 + lVar36 * 4);
                          fVar56 = pfVar45[1];
                          fVar58 = pfVar45[2];
                          fVar59 = pfVar45[3];
                          pfVar2 = (float *)(uVar54 + 0x10 + lVar36 * 4);
                          fVar57 = *pfVar2;
                          fVar9 = pfVar2[1];
                          fVar10 = pfVar2[2];
                          fVar11 = pfVar2[3];
                          pfVar2 = (float *)(uVar37 + lVar36 * 4);
                          fVar12 = pfVar2[1];
                          fVar13 = pfVar2[2];
                          fVar14 = pfVar2[3];
                          pfVar3 = (float *)(uVar37 + 0x10 + lVar36 * 4);
                          fVar15 = *pfVar3;
                          fVar16 = pfVar3[1];
                          fVar17 = pfVar3[2];
                          fVar18 = pfVar3[3];
                          pfVar3 = (float *)(uVar49 + lVar36 * 4);
                          fVar19 = pfVar3[1];
                          fVar20 = pfVar3[2];
                          fVar21 = pfVar3[3];
                          pfVar4 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                          fVar22 = *pfVar4;
                          fVar23 = pfVar4[1];
                          fVar24 = pfVar4[2];
                          fVar25 = pfVar4[3];
                          pfVar4 = (float *)(uVar49 + 0x20 + lVar36 * 4);
                          fVar26 = *pfVar4;
                          fVar27 = pfVar4[1];
                          fVar28 = pfVar4[2];
                          fVar29 = pfVar4[3];
                          pfVar4 = (float *)(uVar49 + 0x30 + lVar36 * 4);
                          param_1 = *pfVar4;
                          fVar30 = pfVar4[1];
                          fVar31 = pfVar4[2];
                          fVar32 = pfVar4[3];
                          pfVar4 = (float *)(uVar49 + lVar36 * 4);
                          *pfVar4 = *pfVar3 + *pfVar2 * *pfVar45;
                          pfVar4[1] = fVar19 + fVar12 * fVar56;
                          pfVar4[2] = fVar20 + fVar13 * fVar58;
                          pfVar4[3] = fVar21 + fVar14 * fVar59;
                          pfVar45 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                          *pfVar45 = fVar22 + fVar15 * fVar57;
                          pfVar45[1] = fVar23 + fVar16 * fVar9;
                          pfVar45[2] = fVar24 + fVar17 * fVar10;
                          pfVar45[3] = fVar25 + fVar18 * fVar11;
                          pfVar45 = (float *)(uVar54 + 0x20 + lVar36 * 4);
                          fVar56 = pfVar45[1];
                          fVar58 = pfVar45[2];
                          fVar59 = pfVar45[3];
                          pfVar2 = (float *)(uVar54 + 0x30 + lVar36 * 4);
                          fVar57 = pfVar2[1];
                          fVar9 = pfVar2[2];
                          fVar10 = pfVar2[3];
                          pfVar3 = (float *)(uVar37 + 0x20 + lVar36 * 4);
                          fVar11 = pfVar3[1];
                          fVar12 = pfVar3[2];
                          fVar13 = pfVar3[3];
                          pfVar4 = (float *)(uVar37 + 0x30 + lVar36 * 4);
                          fVar14 = pfVar4[1];
                          fVar15 = pfVar4[2];
                          fVar16 = pfVar4[3];
                          param_1 = *pfVar4 * *pfVar2 + param_1;
                          pfVar2 = (float *)(uVar49 + 0x20 + lVar36 * 4);
                          *pfVar2 = *pfVar3 * *pfVar45 + fVar26;
                          pfVar2[1] = fVar11 * fVar56 + fVar27;
                          pfVar2[2] = fVar12 * fVar58 + fVar28;
                          pfVar2[3] = fVar13 * fVar59 + fVar29;
                          pfVar45 = (float *)(uVar49 + 0x30 + lVar36 * 4);
                          *pfVar45 = param_1;
                          pfVar45[1] = fVar14 * fVar57 + fVar30;
                          pfVar45[2] = fVar15 * fVar9 + fVar31;
                          pfVar45[3] = fVar16 * fVar10 + fVar32;
                          lVar36 = lVar36 + 0x10;
                          uVar48 = uVar48 + 2;
                        } while (uVar48 != 0);
                      }
                      if ((local_140 & 1) != 0) {
                        pfVar45 = (float *)(uVar54 + lVar36 * 4);
                        fVar56 = pfVar45[1];
                        fVar58 = pfVar45[2];
                        fVar59 = pfVar45[3];
                        pfVar3 = (float *)(uVar54 + 0x10 + lVar36 * 4);
                        fVar57 = pfVar3[1];
                        fVar9 = pfVar3[2];
                        fVar10 = pfVar3[3];
                        pfVar2 = (float *)(uVar37 + lVar36 * 4);
                        fVar11 = pfVar2[1];
                        fVar12 = pfVar2[2];
                        fVar13 = pfVar2[3];
                        pfVar4 = (float *)(uVar37 + 0x10 + lVar36 * 4);
                        fVar14 = pfVar4[1];
                        fVar15 = pfVar4[2];
                        fVar16 = pfVar4[3];
                        param_1 = *pfVar4 * *pfVar3;
                        pfVar3 = (float *)(uVar49 + lVar36 * 4);
                        fVar17 = pfVar3[1];
                        fVar18 = pfVar3[2];
                        fVar19 = pfVar3[3];
                        pfVar4 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                        fVar20 = *pfVar4;
                        fVar21 = pfVar4[1];
                        fVar22 = pfVar4[2];
                        fVar23 = pfVar4[3];
                        pfVar4 = (float *)(uVar49 + lVar36 * 4);
                        *pfVar4 = *pfVar3 + *pfVar2 * *pfVar45;
                        pfVar4[1] = fVar17 + fVar11 * fVar56;
                        pfVar4[2] = fVar18 + fVar12 * fVar58;
                        pfVar4[3] = fVar19 + fVar13 * fVar59;
                        pfVar45 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                        *pfVar45 = fVar20 + param_1;
                        pfVar45[1] = fVar21 + fVar14 * fVar57;
                        pfVar45[2] = fVar22 + fVar15 * fVar9;
                        pfVar45[3] = fVar23 + fVar16 * fVar10;
                      }
                      uVar51 = local_108;
                      if (local_108 == local_68) goto LAB_013c5fa0;
                    }
                  }
                }
                uVar48 = uVar51;
                if ((local_68 & 1) != 0) {
                  param_1 = *(float *)(uVar54 + uVar51 * 4) * *(float *)(uVar37 + uVar51 * 4) +
                            *(float *)(uVar49 + uVar51 * 4);
                  *(float *)(uVar49 + uVar51 * 4) = param_1;
                  uVar48 = uVar51 | 1;
                }
                if (~uVar51 != local_158) {
                  do {
                    *(float *)(uVar49 + uVar48 * 4) =
                         *(float *)(uVar54 + uVar48 * 4) * *(float *)(uVar37 + uVar48 * 4) +
                         *(float *)(uVar49 + uVar48 * 4);
                    param_1 = *(float *)(uVar54 + 4 + uVar48 * 4) *
                              *(float *)(uVar37 + 4 + uVar48 * 4) +
                              *(float *)(uVar49 + 4 + uVar48 * 4);
                    *(float *)(uVar49 + 4 + uVar48 * 4) = param_1;
                    uVar48 = uVar48 + 2;
                  } while (local_68 != uVar48);
                }
              }
LAB_013c5fa0:
              uVar42 = uVar42 + 1;
              uVar54 = local_e8;
              plVar43 = local_a0;
            } while (uVar42 != local_e8);
          }
        }
joined_r0x013c640e:
        local_98 = lVar39;
        local_a0 = plVar43;
        if (param_28 == 0) {
          iVar34 = (int)uVar54;
          local_90 = plVar43;
          local_70 = local_b8;
          uVar54 = local_68;
          goto joined_r0x013c54cb;
        }
        if ((char)local_178 != '\0') {
          uVar38 = 0;
LAB_013c55ca:
          while( true ) {
            plVar6 = *(longlong **)(*(longlong *)(*local_120 + 0x10) + uVar38 * 8);
            if (plVar43 != plVar6) {
              if ((local_38 != '\0') && (plVar43 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_38 = '\0';
              plVar43 = plVar6;
            }
            local_1e8 = '\0';
            local_1f0 = plVar43;
            FUN_013bf7d0();
            iVar34 = FUN_00d45870();
            param_1 = extraout_XMM0_Da_01;
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              param_1 = (float)FUN_00d50b20();
            }
            if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
              param_1 = (float)FUN_00d50b20();
            }
            lVar39 = *(longlong *)(*(longlong *)(*param_11 + 0x10) + uVar38 * 8);
            lVar36 = local_b8;
            if (local_b8 != lVar39) {
              if ((local_48 != '\0') && (local_b8 != 0)) {
                param_1 = (float)FUN_00d50b20();
              }
              local_48 = '\0';
              lVar36 = lVar39;
            }
            if (2 < (int)local_e0 - iVar34) {
              _powf(DAT_02390124 / (float)(((int)local_e0 - iVar34) + -1));
              param_1 = (float)(**(code **)(DAT_02786500 + 0x20))();
            }
            local_b8 = lVar36;
            if ((int)param_16 < 1) goto LAB_013c5720;
            lVar39 = *(longlong *)(lVar36 + 0x10);
            uVar42 = 0;
            if (7 < param_16) break;
            do {
              pfVar45 = (float *)(lVar39 + uVar42 * 4);
              if (*pfVar45 <= DAT_02394274 && DAT_02394274 != *pfVar45) {
                *(undefined4 *)(lVar39 + uVar42 * 4) = 0x800000;
              }
              uVar37 = uVar42 + 1;
joined_r0x013c58cd:
              uVar42 = uVar37;
            } while (uVar42 != local_68);
            uVar38 = uVar38 + 1;
            if (uVar38 == uVar54) {
              lVar39 = *(longlong *)(*param_11 + 0x10);
              uVar38 = 0;
              do {
                if (local_118 < 3) {
                  param_1 = 0.0;
                  uVar42 = 0;
                }
                else {
                  param_1 = 0.0;
                  uVar42 = 0;
                  do {
                    param_1 = param_1 + *(float *)(*(longlong *)
                                                    (*(longlong *)(lVar39 + uVar42 * 8) + 0x10) +
                                                  uVar38 * 4) +
                              *(float *)(*(longlong *)
                                          (*(longlong *)(lVar39 + 8 + uVar42 * 8) + 0x10) +
                                        uVar38 * 4) +
                              *(float *)(*(longlong *)
                                          (*(longlong *)(lVar39 + 0x10 + uVar42 * 8) + 0x10) +
                                        uVar38 * 4) +
                              *(float *)(*(longlong *)
                                          (*(longlong *)(lVar39 + 0x18 + uVar42 * 8) + 0x10) +
                                        uVar38 * 4);
                    uVar42 = uVar42 + 4;
                  } while (local_148 != uVar42);
                }
                if ((uVar54 & 3) != 0) {
                  uVar37 = 0;
                  do {
                    param_1 = param_1 + *(float *)(*(longlong *)
                                                    (*(longlong *)(lVar39 + uVar42 * 8 + uVar37 * 8)
                                                    + 0x10) + uVar38 * 4);
                    uVar37 = uVar37 + 1;
                  } while (local_f0 != uVar37);
                }
                fVar56 = DAT_02390124 / param_1;
                if (local_118 == 0) {
                  pvVar44 = (void *)0x0;
                }
                else {
                  pvVar44 = (void *)0x0;
                  do {
                    lVar36 = *(longlong *)(*(longlong *)(lVar39 + (longlong)pvVar44 * 8) + 0x10);
                    *(float *)(lVar36 + uVar38 * 4) = *(float *)(lVar36 + uVar38 * 4) * fVar56;
                    lVar36 = *(longlong *)(*(longlong *)(lVar39 + 8 + (longlong)pvVar44 * 8) + 0x10)
                    ;
                    param_1 = *(float *)(lVar36 + uVar38 * 4) * fVar56;
                    *(float *)(lVar36 + uVar38 * 4) = param_1;
                    pvVar44 = (void *)((longlong)pvVar44 + 2);
                  } while (local_150 != pvVar44);
                }
                if ((uVar54 & 1) != 0) {
                  lVar36 = *(longlong *)(*(longlong *)(lVar39 + (longlong)pvVar44 * 8) + 0x10);
                  *(float *)(lVar36 + uVar38 * 4) = fVar56 * *(float *)(lVar36 + uVar38 * 4);
                }
                uVar38 = uVar38 + 1;
                param_3 = local_148;
              } while (uVar38 != local_68);
              goto LAB_013c5912;
            }
          }
          goto LAB_013c5771;
        }
LAB_013c5912:
        uVar54 = local_68;
        lVar36 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(*param_7 + 0x10) + (longlong)local_f8 * 8) + 0x10)
                  + local_110 * 8);
        local_90 = plVar43;
        uVar38 = local_f0;
        local_70 = local_b8;
        lVar39 = local_98;
        lVar53 = local_98;
        if (local_98 != lVar36) {
          if ((local_80 != '\0') && (local_98 != 0)) {
            param_1 = (float)FUN_00d50b20();
          }
          local_80 = '\0';
          uVar38 = local_f0;
          lVar39 = lVar36;
          lVar53 = local_98;
        }
        local_f0 = uVar38;
        cVar33 = local_58;
        if (lVar39 == 0) {
          local_98 = 0;
          if ((int)local_e8 < 1) goto LAB_013c6887;
          goto LAB_013c6490;
        }
        local_98 = lVar39;
        if (0 < (int)local_e8) {
          uVar54 = 0;
          local_98 = lVar53;
          do {
            plVar43 = *(longlong **)(*(longlong *)(*local_120 + 0x10) + uVar54 * 8);
            if (local_90 != plVar43) {
              if ((local_38 != '\0') && (local_90 != (longlong *)0x0)) {
                param_1 = (float)FUN_00d50b20();
              }
              local_38 = '\0';
              local_90 = plVar43;
            }
            local_1d8 = '\0';
            local_1e0 = local_90;
            FUN_013bf7d0(param_1,&local_1e0);
            pvVar44 = local_f8;
            iVar34 = FUN_00d45870();
            uVar55 = extraout_XMM0_Da_02;
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              uVar55 = FUN_00d50b20();
            }
            if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
              uVar55 = FUN_00d50b20();
            }
            local_1d0 = local_90;
            local_1c8 = '\0';
            param_1 = (float)FUN_013bfb40(uVar55,&local_1d0);
            plVar43 = local_b0;
            if (local_b0 == local_60) {
              if (((local_40[0] == '\0') && (local_b0 != (longlong *)0x0)) &&
                 (plVar43 = local_60, local_a8[0] != '\0')) goto LAB_013c5b1d;
            }
            else {
              if (local_a8[0] == '\0') {
                pcVar47 = local_40;
                if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                  param_1 = (float)FUN_00d50b20();
                  pcVar47 = local_40;
                }
              }
              else {
                if (local_60 != (longlong *)0x0 && local_40[0] != '\0') {
                  param_1 = (float)FUN_00d50b20();
                }
LAB_013c5b1d:
                local_40[0] = '\x01';
                pcVar47 = local_a8;
              }
              *pcVar47 = '\0';
              local_60 = plVar43;
            }
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              param_1 = (float)FUN_00d50b20();
            }
            if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
              param_1 = (float)FUN_00d50b20();
            }
            lVar53 = local_70;
            uVar38 = local_f0;
            lVar36 = *(longlong *)
                      (*(longlong *)(*(longlong *)(local_60[2] + (longlong)pvVar44 * 8) + 0x10) +
                      (longlong)((int)local_e0 - iVar34) * 8);
            if (local_78 != lVar36) {
              if ((local_50 != '\0') && (local_78 != 0)) {
                param_1 = (float)FUN_00d50b20();
              }
              local_50 = '\0';
              local_78 = lVar36;
            }
            local_b8 = *(longlong *)(*(longlong *)(*param_11 + 0x10) + uVar54 * 8);
            if (lVar53 != local_b8) {
              if ((local_48 != '\0') && (lVar53 != 0)) {
                param_1 = (float)FUN_00d50b20();
              }
              local_48 = '\0';
              lVar53 = local_b8;
            }
            if (0 < (int)param_16) {
              uVar42 = *(ulonglong *)(lVar39 + 0x10);
              uVar37 = *(ulonglong *)(lVar53 + 0x10);
              uVar49 = *(ulonglong *)(local_78 + 0x10);
              if (param_16 < 8) {
LAB_013c5c2f:
                uVar51 = 0;
              }
              else {
                uVar48 = uVar49 + local_68 * 4;
                param_3 = CONCAT71((int7)(param_3 >> 8),uVar42 < uVar48);
                if (uVar49 < uVar42 + local_68 * 4 && uVar42 < uVar48) goto LAB_013c5c2f;
                uVar51 = 0;
                if (uVar37 + local_68 * 4 <= uVar49 || uVar48 <= uVar37) {
                  if (local_128 == 0) {
                    lVar36 = 0;
                  }
                  else {
                    lVar36 = 0;
                    uVar48 = local_138;
                    do {
                      pfVar45 = (float *)(uVar42 + lVar36 * 4);
                      fVar56 = pfVar45[1];
                      fVar58 = pfVar45[2];
                      fVar59 = pfVar45[3];
                      pfVar2 = (float *)(uVar42 + 0x10 + lVar36 * 4);
                      fVar57 = *pfVar2;
                      fVar9 = pfVar2[1];
                      fVar10 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar2 = (float *)(uVar37 + lVar36 * 4);
                      fVar12 = pfVar2[1];
                      fVar13 = pfVar2[2];
                      fVar14 = pfVar2[3];
                      pfVar3 = (float *)(uVar37 + 0x10 + lVar36 * 4);
                      fVar15 = *pfVar3;
                      fVar16 = pfVar3[1];
                      fVar17 = pfVar3[2];
                      fVar18 = pfVar3[3];
                      pfVar3 = (float *)(uVar49 + lVar36 * 4);
                      fVar19 = pfVar3[1];
                      fVar20 = pfVar3[2];
                      fVar21 = pfVar3[3];
                      pfVar4 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                      fVar22 = *pfVar4;
                      fVar23 = pfVar4[1];
                      fVar24 = pfVar4[2];
                      fVar25 = pfVar4[3];
                      pfVar4 = (float *)(uVar49 + 0x20 + lVar36 * 4);
                      fVar26 = *pfVar4;
                      fVar27 = pfVar4[1];
                      fVar28 = pfVar4[2];
                      fVar29 = pfVar4[3];
                      pfVar4 = (float *)(uVar49 + 0x30 + lVar36 * 4);
                      param_1 = *pfVar4;
                      fVar30 = pfVar4[1];
                      fVar31 = pfVar4[2];
                      fVar32 = pfVar4[3];
                      pfVar4 = (float *)(uVar49 + lVar36 * 4);
                      *pfVar4 = *pfVar3 + *pfVar2 * *pfVar45;
                      pfVar4[1] = fVar19 + fVar12 * fVar56;
                      pfVar4[2] = fVar20 + fVar13 * fVar58;
                      pfVar4[3] = fVar21 + fVar14 * fVar59;
                      pfVar45 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                      *pfVar45 = fVar22 + fVar15 * fVar57;
                      pfVar45[1] = fVar23 + fVar16 * fVar9;
                      pfVar45[2] = fVar24 + fVar17 * fVar10;
                      pfVar45[3] = fVar25 + fVar18 * fVar11;
                      pfVar45 = (float *)(uVar42 + 0x20 + lVar36 * 4);
                      fVar56 = pfVar45[1];
                      fVar58 = pfVar45[2];
                      fVar59 = pfVar45[3];
                      pfVar2 = (float *)(uVar42 + 0x30 + lVar36 * 4);
                      fVar57 = pfVar2[1];
                      fVar9 = pfVar2[2];
                      fVar10 = pfVar2[3];
                      pfVar3 = (float *)(uVar37 + 0x20 + lVar36 * 4);
                      fVar11 = pfVar3[1];
                      fVar12 = pfVar3[2];
                      fVar13 = pfVar3[3];
                      pfVar4 = (float *)(uVar37 + 0x30 + lVar36 * 4);
                      fVar14 = pfVar4[1];
                      fVar15 = pfVar4[2];
                      fVar16 = pfVar4[3];
                      param_1 = *pfVar4 * *pfVar2 + param_1;
                      pfVar2 = (float *)(uVar49 + 0x20 + lVar36 * 4);
                      *pfVar2 = *pfVar3 * *pfVar45 + fVar26;
                      pfVar2[1] = fVar11 * fVar56 + fVar27;
                      pfVar2[2] = fVar12 * fVar58 + fVar28;
                      pfVar2[3] = fVar13 * fVar59 + fVar29;
                      pfVar45 = (float *)(uVar49 + 0x30 + lVar36 * 4);
                      *pfVar45 = param_1;
                      pfVar45[1] = fVar14 * fVar57 + fVar30;
                      pfVar45[2] = fVar15 * fVar9 + fVar31;
                      pfVar45[3] = fVar16 * fVar10 + fVar32;
                      lVar36 = lVar36 + 0x10;
                      uVar48 = uVar48 + 2;
                    } while (uVar48 != 0);
                  }
                  if ((local_140 & 1) != 0) {
                    pfVar45 = (float *)(uVar42 + lVar36 * 4);
                    fVar56 = pfVar45[1];
                    fVar58 = pfVar45[2];
                    fVar59 = pfVar45[3];
                    pfVar3 = (float *)(uVar42 + 0x10 + lVar36 * 4);
                    fVar57 = pfVar3[1];
                    fVar9 = pfVar3[2];
                    fVar10 = pfVar3[3];
                    pfVar2 = (float *)(uVar37 + lVar36 * 4);
                    fVar11 = pfVar2[1];
                    fVar12 = pfVar2[2];
                    fVar13 = pfVar2[3];
                    pfVar4 = (float *)(uVar37 + 0x10 + lVar36 * 4);
                    fVar14 = pfVar4[1];
                    fVar15 = pfVar4[2];
                    fVar16 = pfVar4[3];
                    param_1 = *pfVar4 * *pfVar3;
                    pfVar3 = (float *)(uVar49 + lVar36 * 4);
                    fVar17 = pfVar3[1];
                    fVar18 = pfVar3[2];
                    fVar19 = pfVar3[3];
                    pfVar4 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                    fVar20 = *pfVar4;
                    fVar21 = pfVar4[1];
                    fVar22 = pfVar4[2];
                    fVar23 = pfVar4[3];
                    pfVar4 = (float *)(uVar49 + lVar36 * 4);
                    *pfVar4 = *pfVar3 + *pfVar2 * *pfVar45;
                    pfVar4[1] = fVar17 + fVar11 * fVar56;
                    pfVar4[2] = fVar18 + fVar12 * fVar58;
                    pfVar4[3] = fVar19 + fVar13 * fVar59;
                    pfVar45 = (float *)(uVar49 + 0x10 + lVar36 * 4);
                    *pfVar45 = fVar20 + param_1;
                    pfVar45[1] = fVar21 + fVar14 * fVar57;
                    pfVar45[2] = fVar22 + fVar15 * fVar9;
                    pfVar45[3] = fVar23 + fVar16 * fVar10;
                  }
                  uVar51 = local_108;
                  if (local_108 == local_68) goto LAB_013c59a0;
                }
              }
              uVar48 = uVar51;
              if ((local_68 & 1) != 0) {
                param_1 = *(float *)(uVar42 + uVar51 * 4) * *(float *)(uVar37 + uVar51 * 4) +
                          *(float *)(uVar49 + uVar51 * 4);
                *(float *)(uVar49 + uVar51 * 4) = param_1;
                uVar48 = uVar51 | 1;
              }
              if (~uVar51 != local_158) {
                do {
                  *(float *)(uVar49 + uVar48 * 4) =
                       *(float *)(uVar42 + uVar48 * 4) * *(float *)(uVar37 + uVar48 * 4) +
                       *(float *)(uVar49 + uVar48 * 4);
                  param_1 = *(float *)(uVar42 + 4 + uVar48 * 4) *
                            *(float *)(uVar37 + 4 + uVar48 * 4) +
                            *(float *)(uVar49 + 4 + uVar48 * 4);
                  *(float *)(uVar49 + 4 + uVar48 * 4) = param_1;
                  uVar48 = uVar48 + 2;
                } while (local_68 != uVar48);
              }
            }
LAB_013c59a0:
            uVar54 = uVar54 + 1;
            plVar43 = local_90;
            local_70 = lVar53;
          } while (uVar54 != local_e8);
          goto LAB_013c54b9;
        }
      }
LAB_013c6887:
      local_58 = cVar33;
      pvVar44 = (void *)((longlong)local_f8 + 1);
      local_b8 = local_70;
      local_a0 = local_90;
      plVar43 = local_90;
    } while (pvVar44 != pvVar35);
  }
  if ((int)local_e0 != 0) {
    param_20 = param_19;
  }
  local_f0 = param_20;
  if ((int)local_130 + -1 == (int)local_e0) {
    local_f0 = param_21;
  }
  if ((int)local_170 < 1) {
    lVar39 = 0;
    local_70 = 0;
  }
  else {
    uVar38 = (ulonglong)param_15;
    local_160 = (int)local_168 * local_110 - (longlong)param_18;
    iVar50 = param_15 * param_14;
    local_138 = (ulonglong)(param_15 >> 1);
    local_178 = (longlong)(int)(param_14 - 1);
    iVar34 = (param_14 - 1) * param_15 + (param_15 >> 1);
    local_150 = (void *)((longlong)(int)param_14 * 4);
    local_108 = CONCAT44(local_108._4_4_,DAT_02390124 / (float)(int)param_15);
    local_170 = (ulonglong)param_14;
    uVar42 = (ulonglong)((uint)uVar54 & 0xfffffffc);
    uVar49 = (uVar42 - 4 >> 2) + 1;
    local_188 = (void *)CONCAT44(local_188._4_4_,iVar50);
    local_128 = (ulonglong)iVar50;
    local_158 = CONCAT44(local_158._4_4_,iVar34);
    local_130 = (ulonglong)iVar34;
    uVar37 = ~local_130 + local_128;
    local_118 = -uVar54;
    local_168 = (ulonglong)(iVar50 - iVar34 & 3);
    local_148 = local_128 * 4;
    local_180 = (void *)((longlong)param_22 + uVar54 * 8);
    local_18c = param_15 - 1;
    local_90 = (longlong *)(ulonglong)param_15;
    local_140 = local_138 + 1;
    pvVar44 = (void *)0x0;
    local_70 = 0;
    lVar39 = 0;
    do {
      lVar36 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*param_9 + 0x10) + (longlong)pvVar44 * 8) + 0x10) +
                local_110 * 8);
      local_e0 = local_88;
      if (local_70 != lVar36) {
        if ((local_c8 != '\0') && (local_70 != 0)) {
          local_70 = lVar36;
          FUN_00d50b20();
          lVar36 = local_70;
        }
        local_70 = lVar36;
        local_c8 = '\0';
      }
      local_d8 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(*param_10 + 0x10) + (longlong)pvVar44 * 8) + 0x10)
                  + local_110 * 8);
      if (lVar39 == local_d8) {
        local_d8 = lVar39;
        if (0 < (int)local_e8) goto LAB_013c6d1b;
LAB_013c6c00:
        local_88 = local_e0;
        local_f8 = pvVar44;
      }
      else {
        if ((local_c0 != '\0') && (lVar39 != 0)) {
          FUN_00d50b20();
        }
        local_c0 = '\0';
        if ((int)local_e8 < 1) goto LAB_013c6c00;
LAB_013c6d1b:
        uVar54 = 0;
        local_f8 = pvVar44;
        do {
          plVar6 = *(longlong **)(*(longlong *)(*local_120 + 0x10) + uVar54 * 8);
          if (plVar43 != plVar6) {
            if ((local_38 != '\0') && (plVar43 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_38 = '\0';
            plVar43 = plVar6;
          }
          local_a8[0] = '\0';
          local_b0 = plVar43;
          local_a0 = plVar43;
          cVar33 = FUN_00d23d70();
          lVar39 = local_e0;
          fVar56 = extraout_XMM0_Da_05;
          if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
            fVar56 = (float)FUN_00d50b20();
          }
          sVar52 = (size_t)uVar38;
          if (cVar33 == '\0') {
            local_88 = lVar39;
          }
          else {
            local_88 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(*param_12 + 0x10) + (longlong)local_f8 * 8) +
                          0x10) + uVar54 * 8);
            pvVar44 = local_f8;
            if (lVar39 != local_88) {
              if ((local_58 != '\0') && (local_e0 != 0)) {
                fVar56 = (float)FUN_00d50b20();
              }
              local_58 = '\0';
              lVar39 = local_88;
            }
            local_88 = lVar39;
            if (0 < (int)param_16) {
              pvVar7 = *(void **)(local_70 + 0x10);
              pvVar44 = *(void **)(local_88 + 0x10);
              pvVar8 = *(void **)(local_d8 + 0x10);
              if (param_16 < 4) {
LAB_013c6e6a:
                uVar38 = 0;
              }
              else {
                pvVar1 = (void *)((longlong)pvVar8 + local_68 * 4);
                sVar52 = (size_t)CONCAT71((int7)((ulonglong)pvVar1 >> 8),pvVar8 < local_180);
                if ((param_22 < (void *)((longlong)pvVar7 + local_68 * 4) && pvVar7 < local_180) ||
                   (param_22 < (void *)((longlong)pvVar44 + local_68 * 4) && pvVar44 < local_180))
                goto LAB_013c6e6a;
                uVar38 = 0;
                if (pvVar1 <= param_22 || pvVar8 >= local_180) {
                  if (uVar42 - 4 == 0) {
                    lVar39 = 0;
LAB_013c6ff7:
                    pfVar45 = (float *)((longlong)pvVar7 + lVar39 * 4);
                    fVar58 = *pfVar45;
                    fVar59 = pfVar45[1];
                    fVar57 = pfVar45[3];
                    pfVar2 = (float *)((longlong)pvVar44 + lVar39 * 4);
                    fVar9 = *pfVar2;
                    fVar10 = pfVar2[1];
                    fVar11 = pfVar2[2];
                    fVar12 = pfVar2[3];
                    fVar56 = pfVar45[2] * fVar11;
                    pfVar45 = (float *)((longlong)pvVar8 + lVar39 * 4);
                    fVar13 = *pfVar45;
                    fVar14 = pfVar45[1];
                    fVar15 = pfVar45[2];
                    fVar16 = pfVar45[3];
                    pfVar45 = (float *)((longlong)param_22 + lVar39 * 8 + 0x10);
                    *pfVar45 = fVar56;
                    pfVar45[1] = fVar15 * fVar11;
                    pfVar45[2] = fVar57 * fVar12;
                    pfVar45[3] = fVar16 * fVar12;
                    pfVar45 = (float *)((longlong)param_22 + lVar39 * 8);
                    *pfVar45 = fVar58 * fVar9;
                    pfVar45[1] = fVar13 * fVar9;
                    pfVar45[2] = fVar59 * fVar10;
                    pfVar45[3] = fVar14 * fVar10;
                  }
                  else {
                    lVar39 = 0;
                    lVar36 = -(uVar49 & 0xfffffffffffffffe);
                    do {
                      pfVar45 = (float *)((longlong)pvVar7 + lVar39 * 4);
                      fVar56 = *pfVar45;
                      fVar58 = pfVar45[1];
                      fVar59 = pfVar45[3];
                      pfVar2 = (float *)((longlong)pvVar44 + lVar39 * 4);
                      fVar57 = *pfVar2;
                      fVar9 = pfVar2[1];
                      fVar10 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar2 = (float *)((longlong)pvVar8 + lVar39 * 4);
                      fVar12 = *pfVar2;
                      fVar13 = pfVar2[1];
                      fVar14 = pfVar2[2];
                      fVar15 = pfVar2[3];
                      pfVar2 = (float *)((longlong)param_22 + lVar39 * 8 + 0x10);
                      *pfVar2 = pfVar45[2] * fVar10;
                      pfVar2[1] = fVar14 * fVar10;
                      pfVar2[2] = fVar59 * fVar11;
                      pfVar2[3] = fVar15 * fVar11;
                      pfVar45 = (float *)((longlong)param_22 + lVar39 * 8);
                      *pfVar45 = fVar56 * fVar57;
                      pfVar45[1] = fVar12 * fVar57;
                      pfVar45[2] = fVar58 * fVar9;
                      pfVar45[3] = fVar13 * fVar9;
                      pfVar45 = (float *)((longlong)pvVar7 + lVar39 * 4 + 0x10);
                      fVar58 = *pfVar45;
                      fVar59 = pfVar45[1];
                      fVar57 = pfVar45[3];
                      pfVar2 = (float *)((longlong)pvVar44 + lVar39 * 4 + 0x10);
                      fVar9 = *pfVar2;
                      fVar10 = pfVar2[1];
                      fVar11 = pfVar2[2];
                      fVar12 = pfVar2[3];
                      fVar56 = pfVar45[2] * fVar11;
                      pfVar45 = (float *)((longlong)pvVar8 + lVar39 * 4 + 0x10);
                      fVar13 = *pfVar45;
                      fVar14 = pfVar45[1];
                      fVar15 = pfVar45[2];
                      fVar16 = pfVar45[3];
                      pfVar45 = (float *)((longlong)param_22 + lVar39 * 8 + 0x30);
                      *pfVar45 = fVar56;
                      pfVar45[1] = fVar15 * fVar11;
                      pfVar45[2] = fVar57 * fVar12;
                      pfVar45[3] = fVar16 * fVar12;
                      pfVar45 = (float *)((longlong)param_22 + lVar39 * 8 + 0x20);
                      *pfVar45 = fVar58 * fVar9;
                      pfVar45[1] = fVar13 * fVar9;
                      pfVar45[2] = fVar59 * fVar10;
                      pfVar45[3] = fVar14 * fVar10;
                      lVar39 = lVar39 + 8;
                      lVar36 = lVar36 + 2;
                    } while (lVar36 != 0);
                    if ((uVar49 & 1) != 0) goto LAB_013c6ff7;
                  }
                  uVar38 = uVar42;
                  if (uVar42 == local_68) goto LAB_013c7030;
                }
              }
              uVar48 = uVar38;
              if ((local_68 & 1) != 0) {
                *(float *)((longlong)param_22 + uVar38 * 8) =
                     *(float *)((longlong)pvVar7 + uVar38 * 4) *
                     *(float *)((longlong)pvVar44 + uVar38 * 4);
                fVar56 = *(float *)((longlong)pvVar8 + uVar38 * 4) *
                         *(float *)((longlong)pvVar44 + uVar38 * 4);
                *(float *)((longlong)param_22 + uVar38 * 8 + 4) = fVar56;
                uVar48 = uVar38 | 1;
              }
              if (~uVar38 != local_118) {
                do {
                  *(float *)((longlong)param_22 + uVar48 * 8) =
                       *(float *)((longlong)pvVar7 + uVar48 * 4) *
                       *(float *)((longlong)pvVar44 + uVar48 * 4);
                  *(float *)((longlong)param_22 + uVar48 * 8 + 4) =
                       *(float *)((longlong)pvVar8 + uVar48 * 4) *
                       *(float *)((longlong)pvVar44 + uVar48 * 4);
                  *(float *)((longlong)param_22 + uVar48 * 8 + 8) =
                       *(float *)((longlong)pvVar7 + uVar48 * 4 + 4) *
                       *(float *)((longlong)pvVar44 + uVar48 * 4 + 4);
                  fVar56 = *(float *)((longlong)pvVar8 + uVar48 * 4 + 4) *
                           *(float *)((longlong)pvVar44 + uVar48 * 4 + 4);
                  *(float *)((longlong)param_22 + uVar48 * 8 + 0xc) = fVar56;
                  uVar48 = uVar48 + 2;
                } while (local_68 != uVar48);
              }
            }
LAB_013c7030:
            FUN_00e83640(fVar56,param_23);
            if ((int)param_15 < 2) {
              _memcpy(pvVar44,local_150,sVar52);
              pVar41 = (pthread_key_t)pvVar44;
            }
            else {
              ___bzero();
              fVar56 = *param_23;
              if ((int)param_14 < 2) {
LAB_013c71c6:
                fVar58 = (float)local_108 * fVar56;
                uVar38 = local_140;
                do {
                  fVar56 = fVar56 - fVar58;
                  pfVar45 = (float *)(ulonglong)((int)uVar38 - 2);
                  *(float *)(param_24 + (longlong)pfVar45 * 4) = fVar56;
                  uVar38 = uVar38 - 1;
                } while (1 < (longlong)uVar38);
              }
              else {
                pfVar45 = (float *)(param_24 + local_138 * 4);
                uVar38 = 1;
                do {
                  fVar58 = param_23[uVar38];
                  fVar59 = (fVar58 - fVar56) * (float)local_108;
                  uVar46 = param_15;
                  if ((param_15 & 7) != 0) {
                    uVar46 = 0;
                    do {
                      *pfVar45 = fVar56;
                      pfVar45 = pfVar45 + 1;
                      fVar56 = fVar56 + fVar59;
                      uVar46 = uVar46 + 1;
                    } while ((param_15 & 7) != uVar46);
                    uVar46 = (int)local_90 - uVar46;
                  }
                  if (6 < local_18c) {
                    do {
                      *pfVar45 = fVar56;
                      pfVar45[1] = fVar56 + fVar59;
                      fVar56 = fVar56 + fVar59 + fVar59;
                      pfVar45[2] = fVar56;
                      fVar56 = fVar56 + fVar59;
                      pfVar45[3] = fVar56;
                      fVar56 = fVar56 + fVar59;
                      pfVar45[4] = fVar56;
                      fVar56 = fVar56 + fVar59;
                      pfVar45[5] = fVar56;
                      fVar56 = fVar56 + fVar59;
                      pfVar45[6] = fVar56;
                      fVar56 = fVar56 + fVar59;
                      pfVar45[7] = fVar56;
                      pfVar45 = pfVar45 + 8;
                      fVar56 = fVar56 + fVar59;
                      uVar46 = uVar46 - 8;
                    } while (uVar46 != 0);
                  }
                  uVar38 = uVar38 + 1;
                  fVar56 = fVar58;
                } while (uVar38 != local_170);
                if (1 < param_15) {
                  fVar56 = *param_23;
                  goto LAB_013c71c6;
                }
              }
              pVar41 = (pthread_key_t)pfVar45;
              if ((int)local_158 < (int)local_188) {
                fVar56 = param_23[local_178];
                fVar58 = (float)local_108 * fVar56;
                uVar48 = local_130;
                for (uVar38 = local_168; uVar38 != 0; uVar38 = uVar38 - 1) {
                  *(float *)(param_24 + uVar48 * 4) = fVar56;
                  fVar56 = fVar56 - fVar58;
                  uVar48 = uVar48 + 1;
                }
                pVar41 = 0;
                if (2 < uVar37) {
                  do {
                    pVar41 = 0;
                    *(float *)(param_24 + uVar48 * 4) = fVar56;
                    *(float *)(param_24 + 4 + uVar48 * 4) = fVar56 - fVar58;
                    fVar56 = (fVar56 - fVar58) - fVar58;
                    *(float *)(param_24 + 8 + uVar48 * 4) = fVar56;
                    fVar56 = fVar56 - fVar58;
                    *(float *)(param_24 + 0xc + uVar48 * 4) = fVar56;
                    fVar56 = fVar56 - fVar58;
                    uVar48 = uVar48 + 4;
                  } while (local_128 != uVar48);
                }
              }
            }
            (**(code **)(DAT_02786500 + 0x38))();
            pvVar44 = _pthread_getspecific(pVar41);
            if ((pvVar44 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
              pVar41 = (pthread_key_t)local_a0;
            }
            FUN_014bc000();
            plVar43 = local_b0;
            pvVar44 = _pthread_getspecific(pVar41);
            plVar6 = local_b0;
            if ((pvVar44 != (void *)0x0) && (lVar39 = FUN_00e8b990(), plVar43 = plVar6, lVar39 != 0)
               ) {
              plVar43 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar39 + 0x154) & 1) + 4];
            }
            uVar38 = local_160;
            (**(code **)(*plVar43 + 0x410))(1,local_f8,local_160,param_17);
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_e0 = local_88;
          }
          uVar54 = uVar54 + 1;
          plVar43 = local_a0;
        } while (uVar54 != local_e8);
      }
      pvVar44 = (void *)((longlong)local_f8 + 1);
      local_e0 = local_88;
      lVar39 = local_d8;
    } while (pvVar44 != pvVar35);
  }
  lVar36 = local_88;
  if ((local_38 != '\0') && (plVar43 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar43 = local_60;
  lVar5 = local_78;
  lVar53 = local_98;
  if ((local_58 != '\0') && (lVar36 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (lVar39 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (lVar53 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar43 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_013c5720:
  uVar38 = uVar38 + 1;
  if (uVar38 == uVar54) goto LAB_013c5912;
  goto LAB_013c55ca;
LAB_013c5771:
  pfVar45 = (float *)(lVar39 + uVar42 * 4);
  fVar56 = pfVar45[1];
  fVar58 = pfVar45[2];
  fVar59 = pfVar45[3];
  if (*pfVar45 < DAT_02394274) {
    *(undefined4 *)(lVar39 + uVar42 * 4) = 0x800000;
  }
  if (fVar56 < _UNK_02411094) {
    *(undefined4 *)(lVar39 + 4 + uVar42 * 4) = 0x800000;
  }
  if (_UNK_02411098 <= fVar58) {
    if (fVar59 < _UNK_0241109c) goto LAB_013c5867;
LAB_013c57e0:
    pfVar45 = (float *)(lVar39 + 0x10 + uVar42 * 4);
    fVar56 = pfVar45[1];
    fVar58 = pfVar45[2];
    fVar59 = pfVar45[3];
    if (*pfVar45 < DAT_02394274) {
LAB_013c57f2:
      *(undefined4 *)(lVar39 + 0x10 + uVar42 * 4) = 0x800000;
    }
  }
  else {
    *(undefined4 *)(lVar39 + 8 + uVar42 * 4) = 0x800000;
    if (_UNK_0241109c <= fVar59) goto LAB_013c57e0;
LAB_013c5867:
    *(undefined4 *)(lVar39 + 0xc + uVar42 * 4) = 0x800000;
    pfVar45 = (float *)(lVar39 + 0x10 + uVar42 * 4);
    fVar56 = pfVar45[1];
    fVar58 = pfVar45[2];
    fVar59 = pfVar45[3];
    if (*pfVar45 < DAT_02394274) goto LAB_013c57f2;
  }
  if (fVar56 < _UNK_02411094) {
    *(undefined4 *)(lVar39 + 0x14 + uVar42 * 4) = 0x800000;
  }
  if (fVar58 < _UNK_02411098) {
    *(undefined4 *)(lVar39 + 0x18 + uVar42 * 4) = 0x800000;
  }
  if (fVar59 < _UNK_0241109c) {
    *(undefined4 *)(lVar39 + 0x1c + uVar42 * 4) = 0x800000;
  }
  uVar42 = uVar42 + 8;
  uVar37 = local_108;
  if (local_108 == uVar42) goto joined_r0x013c58cd;
  goto LAB_013c5771;
}


