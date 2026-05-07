// Function: FUN_0120b150
// Address: 0120b150
// Size: 7835 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0120cec8) */
/* WARNING: Removing unreachable block (ram,0x0120ced1) */
/* WARNING: Removing unreachable block (ram,0x0120b423) */
/* WARNING: Removing unreachable block (ram,0x0120b42c) */
/* WARNING: Removing unreachable block (ram,0x0120b30e) */
/* WARNING: Removing unreachable block (ram,0x0120b317) */
/* WARNING: Removing unreachable block (ram,0x0120cfbf) */
/* WARNING: Removing unreachable block (ram,0x0120cf6d) */
/* WARNING: Removing unreachable block (ram,0x0120cf76) */
/* WARNING: Removing unreachable block (ram,0x0120cfd0) */
/* WARNING: Removing unreachable block (ram,0x0120c0d9) */
/* WARNING: Removing unreachable block (ram,0x0120c0e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0120b150(double param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  code *pcVar34;
  longlong lVar35;
  char cVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  undefined8 *puVar43;
  ulonglong *puVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined8 uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  int iVar50;
  uint uVar51;
  longlong *in_RCX;
  longlong lVar52;
  int iVar53;
  int iVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  int iVar58;
  longlong lVar59;
  ulonglong uVar60;
  uint uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  float *pfVar64;
  uint uVar65;
  uint uVar66;
  longlong *unaff_RDI;
  ulonglong uVar67;
  longlong lVar68;
  int iVar69;
  ulonglong *puVar70;
  uint uVar71;
  ulonglong uVar72;
  char cVar73;
  int *piVar74;
  longlong lVar75;
  longlong lVar76;
  int *piVar77;
  bool bVar78;
  bool bVar79;
  undefined4 uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar85;
  float fVar86;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_168;
  char local_160;
  longlong local_78;
  longlong *local_38;
  
  lVar7 = *param_2;
  lVar28 = param_2[1];
  if (((char)lVar28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  lVar8 = *in_RCX;
  lVar29 = in_RCX[1];
  if (((char)lVar29 != '\0') && (lVar8 != 0)) {
    FUN_00d50b00();
  }
  lVar9 = *param_3;
  lVar30 = param_3[1];
  if (((char)lVar30 != '\0') && (lVar9 != 0)) {
    FUN_00d50b00();
  }
  lVar59 = *param_4;
  cVar73 = (char)param_4[1];
  if ((cVar73 != '\0') && (lVar59 != 0)) {
    FUN_00d50b00();
  }
  lVar10 = *local_res8;
  lVar31 = local_res8[1];
  if (((char)lVar31 != '\0') && (lVar10 != 0)) {
    FUN_00d50b00();
  }
  lVar11 = *local_res10;
  lVar32 = local_res10[1];
  if (((char)lVar32 != '\0') && (lVar11 != 0)) {
    FUN_00d50b00();
  }
  iVar37 = FUN_00e7d780(DAT_023b36a0);
  iVar38 = FUN_00e7d780(DAT_02390d28);
  iVar39 = FUN_00e7d850(SUB84(_DAT_023b3498 / param_1,0));
  iVar40 = FUN_00e7d850(SUB84(DAT_023934c8 / param_1,0));
  puVar43 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar43 = &DAT_02572358;
  uVar80 = (*DAT_02572370)();
  local_78 = *unaff_RDI;
  FUN_00d214d0(uVar80,*(undefined4 *)((longlong)puVar43 + 0xc));
  FUN_00d216c0();
  pcVar34 = DAT_025683d8;
  if (*(int *)((longlong)puVar43 + 0xc) != 0) {
    puVar44 = (ulonglong *)(lVar7 + 0x10);
    puVar1 = (ulonglong *)(lVar8 + 0x10);
    fVar81 = (float)iVar37;
    lVar76 = lVar59;
    do {
      lVar35 = local_78;
      lVar12 = *(longlong *)puVar43[2];
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      FUN_00d23620();
      FUN_015f8890();
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      uVar6 = *(uint *)(local_78 + 0xc);
      lVar75 = (longlong)(int)uVar6;
      uVar72 = (ulonglong)uVar6;
      if (0 < lVar75) {
        lVar59 = *(longlong *)(local_78 + 0x10);
        uVar57 = *puVar44;
        uVar63 = *puVar1;
        lVar52 = *(longlong *)(lVar9 + 0x10);
        if (uVar6 == 1) {
          uVar62 = 0;
        }
        else {
          uVar62 = 0;
          do {
            lVar68 = *(longlong *)(lVar59 + uVar62 * 8);
            fVar82 = (float)*(int *)(lVar68 + 0x10);
            *(float *)(uVar57 + uVar62 * 4) = fVar82;
            *(float *)(uVar63 + uVar62 * 4) = fVar82;
            *(float *)(lVar52 + uVar62 * 4) = fVar82;
            *(undefined4 *)(lVar68 + 0x2c) = 0;
            lVar68 = *(longlong *)(lVar59 + 8 + uVar62 * 8);
            fVar82 = (float)*(int *)(lVar68 + 0x10);
            *(float *)(uVar57 + 4 + uVar62 * 4) = fVar82;
            *(float *)(uVar63 + 4 + uVar62 * 4) = fVar82;
            *(float *)(lVar52 + 4 + uVar62 * 4) = fVar82;
            *(undefined4 *)(lVar68 + 0x2c) = 0;
            uVar62 = uVar62 + 2;
          } while ((uVar6 & 0xfffffffe) != uVar62);
        }
        if ((uVar6 & 1) != 0) {
          lVar59 = *(longlong *)(lVar59 + uVar62 * 8);
          fVar82 = (float)*(int *)(lVar59 + 0x10);
          *(float *)(uVar57 + uVar62 * 4) = fVar82;
          *(float *)(uVar63 + uVar62 * 4) = fVar82;
          *(float *)(lVar52 + uVar62 * 4) = fVar82;
          *(undefined4 *)(lVar59 + 0x2c) = 0;
        }
      }
      FUN_015c15b0(DAT_0240cda0,uVar6);
      FUN_015c15b0(DAT_02411440,uVar6);
      if (0 < (int)uVar6) {
        uVar57 = *puVar1;
        uVar63 = *(ulonglong *)(lVar11 + 0x10);
        if ((uVar6 < 8) || ((uVar63 < uVar57 + uVar72 * 4 && (uVar57 < uVar63 + uVar72 * 4)))) {
          uVar62 = 0;
        }
        else {
          uVar62 = (ulonglong)(uVar6 & 0xfffffff8);
          uVar55 = (uVar62 - 8 >> 3) + 1;
          uVar67 = (ulonglong)((uint)uVar55 & 3);
          if (uVar62 - 8 < 0x18) {
            lVar59 = 0;
          }
          else {
            lVar52 = -(uVar55 & 0xfffffffffffffffc);
            lVar59 = 0;
            do {
              puVar45 = (undefined8 *)(uVar57 + lVar59 * 4);
              uVar47 = puVar45[1];
              puVar46 = (undefined8 *)(uVar57 + 0x10 + lVar59 * 4);
              uVar26 = *puVar46;
              uVar27 = puVar46[1];
              puVar46 = (undefined8 *)(uVar63 + lVar59 * 4);
              *puVar46 = *puVar45;
              puVar46[1] = uVar47;
              puVar45 = (undefined8 *)(uVar63 + 0x10 + lVar59 * 4);
              *puVar45 = uVar26;
              puVar45[1] = uVar27;
              puVar45 = (undefined8 *)(uVar57 + 0x20 + lVar59 * 4);
              uVar47 = puVar45[1];
              puVar46 = (undefined8 *)(uVar57 + 0x30 + lVar59 * 4);
              uVar26 = *puVar46;
              uVar27 = puVar46[1];
              puVar46 = (undefined8 *)(uVar63 + 0x20 + lVar59 * 4);
              *puVar46 = *puVar45;
              puVar46[1] = uVar47;
              puVar45 = (undefined8 *)(uVar63 + 0x30 + lVar59 * 4);
              *puVar45 = uVar26;
              puVar45[1] = uVar27;
              puVar45 = (undefined8 *)(uVar57 + 0x40 + lVar59 * 4);
              uVar47 = puVar45[1];
              puVar46 = (undefined8 *)(uVar57 + 0x50 + lVar59 * 4);
              uVar26 = *puVar46;
              uVar27 = puVar46[1];
              puVar46 = (undefined8 *)(uVar63 + 0x40 + lVar59 * 4);
              *puVar46 = *puVar45;
              puVar46[1] = uVar47;
              puVar45 = (undefined8 *)(uVar63 + 0x50 + lVar59 * 4);
              *puVar45 = uVar26;
              puVar45[1] = uVar27;
              puVar45 = (undefined8 *)(uVar57 + 0x60 + lVar59 * 4);
              uVar47 = puVar45[1];
              puVar2 = (undefined4 *)(uVar57 + 0x70 + lVar59 * 4);
              uVar80 = *puVar2;
              uVar14 = puVar2[1];
              uVar15 = puVar2[2];
              uVar16 = puVar2[3];
              puVar46 = (undefined8 *)(uVar63 + 0x60 + lVar59 * 4);
              *puVar46 = *puVar45;
              puVar46[1] = uVar47;
              puVar2 = (undefined4 *)(uVar63 + 0x70 + lVar59 * 4);
              *puVar2 = uVar80;
              puVar2[1] = uVar14;
              puVar2[2] = uVar15;
              puVar2[3] = uVar16;
              lVar59 = lVar59 + 0x20;
              lVar52 = lVar52 + 4;
            } while (lVar52 != 0);
          }
          if (uVar67 != 0) {
            lVar52 = uVar63 + lVar59 * 4;
            lVar59 = uVar57 + lVar59 * 4;
            lVar68 = 0;
            do {
              puVar45 = (undefined8 *)(lVar59 + lVar68);
              uVar47 = puVar45[1];
              puVar2 = (undefined4 *)(lVar59 + 0x10 + lVar68);
              uVar80 = *puVar2;
              uVar14 = puVar2[1];
              uVar15 = puVar2[2];
              uVar16 = puVar2[3];
              puVar46 = (undefined8 *)(lVar52 + lVar68);
              *puVar46 = *puVar45;
              puVar46[1] = uVar47;
              puVar2 = (undefined4 *)(lVar52 + 0x10 + lVar68);
              *puVar2 = uVar80;
              puVar2[1] = uVar14;
              puVar2[2] = uVar15;
              puVar2[3] = uVar16;
              lVar68 = lVar68 + 0x20;
            } while (uVar67 << 5 != lVar68);
          }
          if (uVar62 == uVar72) goto LAB_0120b700;
        }
        uVar55 = ~uVar62;
        uVar67 = uVar72 & 3;
        if ((uVar6 & 3) != 0) {
          do {
            *(undefined4 *)(uVar63 + uVar62 * 4) = *(undefined4 *)(uVar57 + uVar62 * 4);
            uVar62 = uVar62 + 1;
            uVar67 = uVar67 - 1;
          } while (uVar67 != 0);
        }
        if (2 < uVar55 + uVar72) {
          do {
            *(undefined4 *)(uVar63 + uVar62 * 4) = *(undefined4 *)(uVar57 + uVar62 * 4);
            *(undefined4 *)(uVar63 + 4 + uVar62 * 4) = *(undefined4 *)(uVar57 + 4 + uVar62 * 4);
            *(undefined4 *)(uVar63 + 8 + uVar62 * 4) = *(undefined4 *)(uVar57 + 8 + uVar62 * 4);
            *(undefined4 *)(uVar63 + 0xc + uVar62 * 4) = *(undefined4 *)(uVar57 + 0xc + uVar62 * 4);
            uVar62 = uVar62 + 4;
          } while (uVar72 != uVar62);
        }
      }
LAB_0120b700:
      FUN_015c1480(DAT_0240cda4,uVar6);
      fVar84 = DAT_02391094;
      fVar82 = DAT_02390124;
      dVar33 = DAT_0238fee8;
      if (0 < (int)uVar6) {
        lVar59 = *(longlong *)(local_78 + 0x10);
        uVar57 = *puVar1;
        lVar52 = *(longlong *)(lVar11 + 0x10);
        uVar63 = 0;
        do {
          fVar83 = *(float *)(*(longlong *)(lVar59 + uVar63 * 8) + 0x28) / fVar84;
          fVar85 = 0.0;
          if (0.0 <= fVar83) {
            fVar85 = fVar83;
          }
          fVar83 = fVar82;
          if (fVar85 <= fVar82) {
            fVar83 = fVar85;
          }
          *(float *)(uVar57 + uVar63 * 4) =
               (float)((double)(fVar83 * *(float *)(lVar52 + uVar63 * 4)) +
                      (double)*(float *)(uVar57 + uVar63 * 4) * (dVar33 - (double)fVar83));
          uVar63 = uVar63 + 1;
        } while (uVar72 != uVar63);
      }
      FUN_015c15b0(DAT_023b2c88);
      fVar82 = DAT_02391078;
      if ((int)uVar6 < 1) {
        fVar84 = 0.0;
      }
      else {
        uVar57 = *puVar1;
        if (uVar72 - 1 < 3) {
          fVar84 = 0.0;
          uVar63 = 0;
        }
        else {
          fVar84 = 0.0;
          uVar63 = 0;
          do {
            fVar85 = *(float *)(uVar57 + uVar63 * 4);
            fVar83 = *(float *)(uVar57 + 4 + uVar63 * 4);
            fVar86 = fVar85;
            if (fVar82 <= fVar85) {
              fVar86 = fVar82;
            }
            if (fVar85 <= fVar84) {
              fVar85 = fVar84;
            }
            fVar82 = fVar83;
            if (fVar86 <= fVar83) {
              fVar82 = fVar86;
            }
            if (fVar83 <= fVar85) {
              fVar83 = fVar85;
            }
            fVar85 = *(float *)(uVar57 + 8 + uVar63 * 4);
            fVar86 = fVar85;
            if (fVar82 <= fVar85) {
              fVar86 = fVar82;
            }
            if (fVar85 <= fVar83) {
              fVar85 = fVar83;
            }
            fVar84 = *(float *)(uVar57 + 0xc + uVar63 * 4);
            fVar82 = fVar84;
            if (fVar86 <= fVar84) {
              fVar82 = fVar86;
            }
            if (fVar84 <= fVar85) {
              fVar84 = fVar85;
            }
            uVar63 = uVar63 + 4;
          } while ((uVar6 & 0xfffffffc) != uVar63);
        }
        if ((ulonglong)(uVar6 & 3) != 0) {
          uVar62 = 0;
          do {
            fVar85 = *(float *)(uVar57 + uVar63 * 4 + uVar62 * 4);
            fVar83 = fVar85;
            if (fVar82 <= fVar85) {
              fVar83 = fVar82;
            }
            fVar82 = fVar83;
            if (fVar85 <= fVar84) {
              fVar85 = fVar84;
            }
            fVar84 = fVar85;
            uVar62 = uVar62 + 1;
          } while ((uVar6 & 3) != uVar62);
        }
      }
      lVar52 = *param_4;
      cVar36 = (char)param_4[1];
      if (lVar52 == lVar76) {
        lVar59 = lVar76;
        if (((cVar36 != '\0') && (cVar73 == '\0')) && (lVar52 != 0)) {
          FUN_00d50b00();
          cVar73 = '\x01';
        }
      }
      else {
        if ((cVar36 != '\0') && (lVar52 != 0)) {
          FUN_00d50b00();
        }
        bVar78 = cVar73 != '\0';
        lVar59 = lVar52;
        cVar73 = cVar36;
        if ((bVar78) && (lVar76 != 0)) {
          FUN_00d50b20();
        }
      }
      puVar45 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar45 = &DAT_025683c0;
      (*pcVar34)();
      FUN_00c92170();
      FUN_00c92160();
      if (fVar81 < (float)((uint)(fVar84 - fVar82) & _DAT_02390140)) {
        uVar71 = uVar6 - 1;
        uVar57 = (ulonglong)uVar71;
        if ((int)uVar6 < 2) {
          uVar63 = *(ulonglong *)(lVar59 + 0x10);
        }
        else {
          uVar62 = *puVar1;
          uVar63 = *(ulonglong *)(lVar59 + 0x10);
          if ((uVar71 < 8) || ((uVar63 < uVar62 + uVar57 * 4 + 4 && (uVar62 < uVar63 + uVar57 * 4)))
             ) {
            uVar55 = 0;
          }
          else {
            uVar55 = (ulonglong)(uVar71 & 0xfffffff8);
            uVar67 = (uVar55 - 8 >> 3) + 1;
            if (uVar55 - 8 == 0) {
              lVar76 = 0;
LAB_0120bd4a:
              uVar67 = lVar76 * 4 | 4;
              pfVar64 = (float *)(uVar62 + uVar67);
              fVar82 = pfVar64[1];
              fVar84 = pfVar64[2];
              fVar85 = pfVar64[3];
              pfVar3 = (float *)(uVar62 + 0x10 + uVar67);
              fVar83 = *pfVar3;
              fVar86 = pfVar3[1];
              fVar17 = pfVar3[2];
              fVar18 = pfVar3[3];
              pfVar3 = (float *)(uVar62 + lVar76 * 4);
              fVar19 = pfVar3[1];
              fVar20 = pfVar3[2];
              fVar21 = pfVar3[3];
              pfVar4 = (float *)(uVar62 + 0x10 + lVar76 * 4);
              fVar22 = *pfVar4;
              fVar23 = pfVar4[1];
              fVar24 = pfVar4[2];
              fVar25 = pfVar4[3];
              pfVar4 = (float *)(uVar63 + lVar76 * 4);
              *pfVar4 = *pfVar64 - *pfVar3;
              pfVar4[1] = fVar82 - fVar19;
              pfVar4[2] = fVar84 - fVar20;
              pfVar4[3] = fVar85 - fVar21;
              pfVar64 = (float *)(uVar63 + 0x10 + lVar76 * 4);
              *pfVar64 = fVar83 - fVar22;
              pfVar64[1] = fVar86 - fVar23;
              pfVar64[2] = fVar17 - fVar24;
              pfVar64[3] = fVar18 - fVar25;
            }
            else {
              lVar52 = -(uVar67 & 0xfffffffffffffffe);
              lVar76 = 0;
              do {
                pfVar64 = (float *)(uVar62 + lVar76 * 4);
                fVar82 = pfVar64[1];
                fVar84 = pfVar64[2];
                fVar85 = pfVar64[3];
                pfVar4 = (float *)(uVar62 + 4 + lVar76 * 4);
                fVar83 = pfVar4[1];
                fVar86 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar3 = (float *)(uVar62 + 0x10 + lVar76 * 4);
                fVar18 = *pfVar3;
                fVar19 = pfVar3[1];
                fVar20 = pfVar3[2];
                fVar21 = pfVar3[3];
                pfVar3 = (float *)(uVar62 + 0x14 + lVar76 * 4);
                fVar22 = *pfVar3;
                fVar23 = pfVar3[1];
                fVar24 = pfVar3[2];
                fVar25 = pfVar3[3];
                pfVar3 = (float *)(uVar63 + lVar76 * 4);
                *pfVar3 = *pfVar4 - *pfVar64;
                pfVar3[1] = fVar83 - fVar82;
                pfVar3[2] = fVar86 - fVar84;
                pfVar3[3] = fVar17 - fVar85;
                pfVar64 = (float *)(uVar63 + 0x10 + lVar76 * 4);
                *pfVar64 = fVar22 - fVar18;
                pfVar64[1] = fVar23 - fVar19;
                pfVar64[2] = fVar24 - fVar20;
                pfVar64[3] = fVar25 - fVar21;
                pfVar64 = (float *)(uVar62 + 0x20 + lVar76 * 4);
                fVar82 = pfVar64[1];
                fVar84 = pfVar64[2];
                fVar85 = pfVar64[3];
                pfVar3 = (float *)(uVar62 + 0x24 + lVar76 * 4);
                fVar83 = pfVar3[1];
                fVar86 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar4 = (float *)(uVar62 + 0x30 + lVar76 * 4);
                fVar18 = *pfVar4;
                fVar19 = pfVar4[1];
                fVar20 = pfVar4[2];
                fVar21 = pfVar4[3];
                pfVar4 = (float *)(uVar62 + 0x34 + lVar76 * 4);
                fVar22 = *pfVar4;
                fVar23 = pfVar4[1];
                fVar24 = pfVar4[2];
                fVar25 = pfVar4[3];
                pfVar4 = (float *)(uVar63 + 0x20 + lVar76 * 4);
                *pfVar4 = *pfVar3 - *pfVar64;
                pfVar4[1] = fVar83 - fVar82;
                pfVar4[2] = fVar86 - fVar84;
                pfVar4[3] = fVar17 - fVar85;
                pfVar64 = (float *)(uVar63 + 0x30 + lVar76 * 4);
                *pfVar64 = fVar22 - fVar18;
                pfVar64[1] = fVar23 - fVar19;
                pfVar64[2] = fVar24 - fVar20;
                pfVar64[3] = fVar25 - fVar21;
                lVar76 = lVar76 + 0x10;
                lVar52 = lVar52 + 2;
              } while (lVar52 != 0);
              if ((uVar67 & 1) != 0) goto LAB_0120bd4a;
            }
            if (uVar55 == uVar57) goto LAB_0120bad7;
          }
          uVar60 = ~uVar55;
          uVar56 = uVar57 & 3;
          uVar67 = uVar55;
          if ((uVar71 & 3) != 0) {
            do {
              uVar67 = uVar55 + 1;
              *(float *)(uVar63 + uVar55 * 4) =
                   *(float *)(uVar62 + 4 + uVar55 * 4) - *(float *)(uVar62 + uVar55 * 4);
              uVar56 = uVar56 - 1;
              uVar55 = uVar67;
            } while (uVar56 != 0);
          }
          if (2 < uVar60 + uVar57) {
            do {
              *(float *)(uVar63 + uVar67 * 4) =
                   *(float *)(uVar62 + 4 + uVar67 * 4) - *(float *)(uVar62 + uVar67 * 4);
              *(float *)(uVar63 + 4 + uVar67 * 4) =
                   *(float *)(uVar62 + 8 + uVar67 * 4) - *(float *)(uVar62 + 4 + uVar67 * 4);
              *(float *)(uVar63 + 8 + uVar67 * 4) =
                   *(float *)(uVar62 + 0xc + uVar67 * 4) - *(float *)(uVar62 + 8 + uVar67 * 4);
              *(float *)(uVar63 + 0xc + uVar67 * 4) =
                   *(float *)(uVar62 + 0x10 + uVar67 * 4) - *(float *)(uVar62 + 0xc + uVar67 * 4);
              uVar67 = uVar67 + 4;
            } while (uVar57 != uVar67);
          }
        }
LAB_0120bad7:
        *(undefined4 *)(uVar63 + (longlong)(int)uVar71 * 4) =
             *(undefined4 *)((uVar63 - 8) + lVar75 * 4);
        if (1 < (int)uVar6) {
          uVar57 = 0;
          do {
            fVar84 = (float)(*(uint *)(uVar63 + uVar57 * 4) & _DAT_02390140);
            fVar82 = DAT_02394298;
            if (fVar84 <= DAT_02394298) {
              fVar82 = fVar84;
            }
            if (DAT_0241f36c < fVar82) {
              fVar82 = (fVar82 + _DAT_0239422c) / _DAT_0240cda8;
              *(float *)(*puVar1 + uVar57 * 4) =
                   fVar82 * *(float *)(*puVar44 + uVar57 * 4) +
                   (DAT_02390124 - fVar82) * *(float *)(*puVar1 + uVar57 * 4);
            }
            uVar57 = uVar57 + 1;
          } while (uVar71 != uVar57);
        }
        FUN_015c15b0(DAT_023b2c88,uVar6);
        if ((int)uVar6 < 2) {
          uVar57 = *(ulonglong *)(lVar59 + 0x10);
        }
        else {
          uVar63 = *puVar1;
          uVar57 = *(ulonglong *)(lVar59 + 0x10);
          uVar62 = (ulonglong)uVar71;
          if ((uVar71 < 8) || ((uVar57 < uVar63 + uVar62 * 4 + 4 && (uVar63 < uVar57 + uVar62 * 4)))
             ) {
            uVar55 = 0;
          }
          else {
            uVar55 = (ulonglong)(uVar71 & 0xfffffff8);
            uVar67 = (uVar55 - 8 >> 3) + 1;
            if (uVar55 - 8 == 0) {
              lVar76 = 0;
LAB_0120be16:
              uVar67 = lVar76 * 4 | 4;
              pfVar64 = (float *)(uVar63 + uVar67);
              fVar82 = pfVar64[1];
              fVar84 = pfVar64[2];
              fVar85 = pfVar64[3];
              pfVar3 = (float *)(uVar63 + 0x10 + uVar67);
              fVar83 = *pfVar3;
              fVar86 = pfVar3[1];
              fVar17 = pfVar3[2];
              fVar18 = pfVar3[3];
              pfVar3 = (float *)(uVar63 + lVar76 * 4);
              fVar19 = pfVar3[1];
              fVar20 = pfVar3[2];
              fVar21 = pfVar3[3];
              pfVar4 = (float *)(uVar63 + 0x10 + lVar76 * 4);
              fVar22 = *pfVar4;
              fVar23 = pfVar4[1];
              fVar24 = pfVar4[2];
              fVar25 = pfVar4[3];
              pfVar4 = (float *)(uVar57 + lVar76 * 4);
              *pfVar4 = *pfVar64 - *pfVar3;
              pfVar4[1] = fVar82 - fVar19;
              pfVar4[2] = fVar84 - fVar20;
              pfVar4[3] = fVar85 - fVar21;
              pfVar64 = (float *)(uVar57 + 0x10 + lVar76 * 4);
              *pfVar64 = fVar83 - fVar22;
              pfVar64[1] = fVar86 - fVar23;
              pfVar64[2] = fVar17 - fVar24;
              pfVar64[3] = fVar18 - fVar25;
            }
            else {
              lVar52 = -(uVar67 & 0xfffffffffffffffe);
              lVar76 = 0;
              do {
                pfVar64 = (float *)(uVar63 + lVar76 * 4);
                fVar82 = pfVar64[1];
                fVar84 = pfVar64[2];
                fVar85 = pfVar64[3];
                pfVar4 = (float *)(uVar63 + 4 + lVar76 * 4);
                fVar83 = pfVar4[1];
                fVar86 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar3 = (float *)(uVar63 + 0x10 + lVar76 * 4);
                fVar18 = *pfVar3;
                fVar19 = pfVar3[1];
                fVar20 = pfVar3[2];
                fVar21 = pfVar3[3];
                pfVar3 = (float *)(uVar63 + 0x14 + lVar76 * 4);
                fVar22 = *pfVar3;
                fVar23 = pfVar3[1];
                fVar24 = pfVar3[2];
                fVar25 = pfVar3[3];
                pfVar3 = (float *)(uVar57 + lVar76 * 4);
                *pfVar3 = *pfVar4 - *pfVar64;
                pfVar3[1] = fVar83 - fVar82;
                pfVar3[2] = fVar86 - fVar84;
                pfVar3[3] = fVar17 - fVar85;
                pfVar64 = (float *)(uVar57 + 0x10 + lVar76 * 4);
                *pfVar64 = fVar22 - fVar18;
                pfVar64[1] = fVar23 - fVar19;
                pfVar64[2] = fVar24 - fVar20;
                pfVar64[3] = fVar25 - fVar21;
                pfVar64 = (float *)(uVar63 + 0x20 + lVar76 * 4);
                fVar82 = pfVar64[1];
                fVar84 = pfVar64[2];
                fVar85 = pfVar64[3];
                pfVar3 = (float *)(uVar63 + 0x24 + lVar76 * 4);
                fVar83 = pfVar3[1];
                fVar86 = pfVar3[2];
                fVar17 = pfVar3[3];
                pfVar4 = (float *)(uVar63 + 0x30 + lVar76 * 4);
                fVar18 = *pfVar4;
                fVar19 = pfVar4[1];
                fVar20 = pfVar4[2];
                fVar21 = pfVar4[3];
                pfVar4 = (float *)(uVar63 + 0x34 + lVar76 * 4);
                fVar22 = *pfVar4;
                fVar23 = pfVar4[1];
                fVar24 = pfVar4[2];
                fVar25 = pfVar4[3];
                pfVar4 = (float *)(uVar57 + 0x20 + lVar76 * 4);
                *pfVar4 = *pfVar3 - *pfVar64;
                pfVar4[1] = fVar83 - fVar82;
                pfVar4[2] = fVar86 - fVar84;
                pfVar4[3] = fVar17 - fVar85;
                pfVar64 = (float *)(uVar57 + 0x30 + lVar76 * 4);
                *pfVar64 = fVar22 - fVar18;
                pfVar64[1] = fVar23 - fVar19;
                pfVar64[2] = fVar24 - fVar20;
                pfVar64[3] = fVar25 - fVar21;
                lVar76 = lVar76 + 0x10;
                lVar52 = lVar52 + 2;
              } while (lVar52 != 0);
              if ((uVar67 & 1) != 0) goto LAB_0120be16;
            }
            if (uVar55 == uVar62) goto LAB_0120be50;
          }
          uVar60 = ~uVar55;
          uVar56 = uVar62 & 3;
          uVar67 = uVar55;
          if ((uVar71 & 3) != 0) {
            do {
              uVar55 = uVar67 + 1;
              *(float *)(uVar57 + uVar67 * 4) =
                   *(float *)(uVar63 + 4 + uVar67 * 4) - *(float *)(uVar63 + uVar67 * 4);
              uVar56 = uVar56 - 1;
              uVar67 = uVar55;
            } while (uVar56 != 0);
          }
          if (2 < uVar60 + uVar62) {
            do {
              *(float *)(uVar57 + uVar55 * 4) =
                   *(float *)(uVar63 + 4 + uVar55 * 4) - *(float *)(uVar63 + uVar55 * 4);
              *(float *)(uVar57 + 4 + uVar55 * 4) =
                   *(float *)(uVar63 + 8 + uVar55 * 4) - *(float *)(uVar63 + 4 + uVar55 * 4);
              *(float *)(uVar57 + 8 + uVar55 * 4) =
                   *(float *)(uVar63 + 0xc + uVar55 * 4) - *(float *)(uVar63 + 8 + uVar55 * 4);
              *(float *)(uVar57 + 0xc + uVar55 * 4) =
                   *(float *)(uVar63 + 0x10 + uVar55 * 4) - *(float *)(uVar63 + 0xc + uVar55 * 4);
              uVar55 = uVar55 + 4;
            } while (uVar62 != uVar55);
          }
        }
LAB_0120be50:
        *(undefined4 *)(uVar57 + (longlong)(int)uVar71 * 4) =
             *(undefined4 *)((uVar57 - 8) + lVar75 * 4);
        puVar46 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar46 = &DAT_025683c0;
        (*pcVar34)();
        FUN_00c92170();
        FUN_00c92160();
        if (-1 < (int)uVar6) {
          iVar69 = -1;
          uVar57 = 0;
          bVar78 = false;
          do {
            if ((uVar72 == uVar57) ||
               ((float)(*(uint *)(*(longlong *)(lVar59 + 0x10) + uVar57 * 4) & _DAT_02390140) <
                DAT_0241f36c)) {
              if (bVar78) {
                if ((int)uVar57 - iVar69 < 3) {
                  bVar78 = false;
                  iVar69 = -1;
                }
                else {
                  uVar47 = FUN_00e7b4e0();
                  iVar69 = *(int *)(puVar46 + 3);
                  FUN_00c8e340(extraout_XMM0_Da,1);
                  *(undefined8 *)(puVar46[2] + (longlong)iVar69) = uVar47;
                  bVar78 = false;
                  iVar69 = -1;
                }
              }
            }
            else if (!bVar78) {
              bVar78 = true;
              iVar69 = (int)uVar57;
            }
            uVar57 = uVar57 + 1;
          } while (uVar72 + 1 != uVar57);
        }
        puVar48 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar48 = &DAT_025683c0;
        (*pcVar34)();
        FUN_00c92170();
        uVar80 = FUN_00c92160();
        iVar69 = *(int *)(puVar48 + 3);
        FUN_00c8e340(uVar80,1);
        *(undefined4 *)(puVar48[2] + (longlong)iVar69) = 0;
        if (7 < *(int *)(puVar46 + 3)) {
          lVar76 = 0;
          do {
            iVar69 = *(int *)(puVar46[2] + lVar76 * 8);
            lVar75 = (longlong)iVar69;
            uVar41 = *(uint *)(puVar46[2] + 4 + lVar76 * 8);
            uVar72 = (ulonglong)uVar41;
            iVar58 = (int)(iVar69 + uVar41 + iVar69) / 2;
            if (0 < (int)uVar41) {
              uVar72 = *(ulonglong *)(lVar59 + 0x10);
              fVar82 = 0.0;
              do {
                fVar84 = *(float *)(uVar72 + lVar75 * 4);
                iVar54 = (int)lVar75;
                if (fVar84 <= fVar82) {
                  fVar84 = fVar82;
                  iVar54 = iVar58;
                }
                iVar58 = iVar54;
                fVar82 = fVar84;
                lVar75 = lVar75 + 1;
              } while (lVar75 < (int)(uVar41 + iVar69));
            }
            iVar69 = *(int *)(puVar48 + 3);
            FUN_00c8e340(uVar72,1);
            *(int *)(puVar48[2] + (longlong)iVar69) = iVar58;
            lVar76 = lVar76 + 1;
            iVar69 = *(int *)(puVar46 + 3);
            iVar58 = iVar69 + 7;
            if (-1 < iVar69) {
              iVar58 = iVar69;
            }
          } while (lVar76 < iVar58 >> 3);
        }
        FUN_00c8e690();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        iVar69 = *(int *)(puVar48 + 3);
        iVar58 = iVar69 + 3;
        if (-1 < iVar69) {
          iVar58 = iVar69;
        }
        if (3 < iVar69) {
          uVar57 = (ulonglong)(uint)(iVar58 >> 2);
          lVar76 = puVar48[2];
          lVar75 = *(longlong *)(local_78 + 0x10);
          uVar72 = 0;
          do {
            while( true ) {
              uVar41 = uVar6;
              if ((longlong)uVar72 < (longlong)(int)((iVar58 >> 2) - 1)) {
                uVar41 = *(uint *)(lVar76 + 4 + uVar72 * 4);
              }
              iVar54 = *(int *)(lVar76 + uVar72 * 4);
              iVar50 = uVar41 - iVar54;
              iVar53 = 10;
              if (iVar50 < 0x14) {
                iVar53 = iVar50 / 2;
              }
              if (iVar54 < (int)uVar41) break;
LAB_0120c170:
              *(undefined4 *)(lVar75 + uVar72 * 4) =
                   *(undefined4 *)(*puVar1 + (longlong)((int)(uVar41 + iVar54) / 2) * 4);
              uVar72 = uVar72 + 1;
              if (uVar72 == uVar57) goto LAB_0120c2ad;
            }
            lVar52 = (longlong)iVar54 * 4;
            fVar84 = 0.0;
            lVar68 = 0;
            fVar82 = 0.0;
            do {
              fVar83 = DAT_02394298 -
                       (float)(*(uint *)(*(longlong *)(lVar59 + 0x10) + lVar52 + lVar68 * 4) &
                              _DAT_02390140);
              fVar85 = DAT_0239425c;
              if (DAT_0239425c <= fVar83) {
                fVar85 = fVar83;
              }
              puVar70 = puVar44;
              if (lVar68 < iVar50 - iVar53) {
                puVar70 = puVar1;
              }
              fVar84 = fVar84 + fVar85;
              if (lVar68 <= iVar53) {
                puVar70 = puVar44;
              }
              fVar82 = fVar82 + fVar85 * *(float *)(*puVar70 + lVar52 + lVar68 * 4);
              lVar68 = lVar68 + 1;
            } while ((longlong)(int)uVar41 - (longlong)iVar54 != lVar68);
            if (fVar84 < DAT_02394274) goto LAB_0120c170;
            *(float *)(lVar75 + uVar72 * 4) = fVar82 / fVar84;
            uVar72 = uVar72 + 1;
          } while (uVar72 != uVar57);
LAB_0120c2ad:
          if (7 < iVar69) {
            lVar76 = 1;
            bVar78 = false;
            do {
              if (lVar76 < (int)uVar57 + -1) {
                lVar75 = puVar48[2];
                uVar41 = *(uint *)(lVar75 + 4 + lVar76 * 4);
              }
              else {
                lVar75 = puVar48[2];
                uVar41 = uVar6;
              }
              piVar77 = (int *)(lVar75 + lVar76 * 4);
              iVar69 = *(int *)(lVar75 + lVar76 * 4);
              piVar74 = (int *)(lVar75 + lVar76 * 4 + -4);
              lVar52 = *(longlong *)(local_78 + 0x10);
              fVar82 = *(float *)(lVar52 + -4 + lVar76 * 4);
              fVar84 = *(float *)(lVar52 + lVar76 * 4);
              fVar85 = (float)((uint)(fVar82 - fVar84) & _DAT_02390140);
              if ((fVar85 <= fVar81) ||
                 ((iVar69 - *piVar74 <= iVar40 && ((int)(uVar41 - iVar69) <= iVar40)))) {
                bVar79 = true;
                if ((bVar78) &&
                   ((fVar83 = *(float *)(lVar52 + -8 + lVar76 * 4),
                    fVar81 < (float)((uint)(fVar83 - fVar84) & _DAT_02390140) &&
                    ((iVar58 = iVar69 - *(int *)(lVar75 + -8 + lVar76 * 4), iVar40 < iVar58 ||
                     (iVar40 < (int)(uVar41 - iVar69))))))) {
                  iVar54 = *(int *)(puVar45 + 3);
                  if ((float)((uint)(fVar82 - fVar83) & _DAT_02390140) <= fVar85) {
                    piVar74 = piVar77;
                  }
                  FUN_00c8e340(iVar58,1);
                  piVar77 = piVar74;
                  goto LAB_0120c2e6;
                }
              }
              else {
                iVar54 = *(int *)(puVar45 + 3);
                FUN_00c8e340(iVar69,1);
LAB_0120c2e6:
                *(int *)(puVar45[2] + (longlong)iVar54) = *piVar77;
                bVar79 = false;
              }
              bVar78 = bVar79;
              lVar76 = lVar76 + 1;
              iVar69 = *(int *)(puVar48 + 3);
              iVar58 = iVar69 + 3;
              if (-1 < iVar69) {
                iVar58 = iVar69;
              }
              uVar57 = (ulonglong)(uint)(iVar58 >> 2);
            } while (lVar76 < iVar58 >> 2);
          }
        }
        local_38 = puVar45 + 2;
        iVar69 = *(int *)(puVar45 + 3);
        iVar58 = iVar69 + 3;
        if (-1 < iVar69) {
          iVar58 = iVar69;
        }
        uVar41 = iVar58 >> 2;
        if (3 < iVar69) {
          uVar72 = 0;
          do {
            lVar76 = *local_38;
            uVar65 = *(uint *)(lVar76 + uVar72 * 4);
            lVar75 = (longlong)(int)uVar65;
            bVar78 = DAT_0239424c < *(float *)(*(longlong *)(lVar59 + 0x10) + lVar75 * 4);
            if ((10 < lVar75) && ((int)uVar65 < (int)(uVar6 - 10))) {
              uVar51 = uVar65;
              if (uVar72 != 0) {
                uVar51 = uVar65 - *(int *)(lVar76 + -4 + uVar72 * 4);
              }
              uVar66 = uVar6;
              if (uVar72 != uVar41 - 1) {
                uVar66 = *(uint *)(lVar76 + 4 + uVar72 * 4);
              }
              uVar42 = FUN_00e7d780((float)(int)uVar51 / DAT_023b1d84 + (float)(int)uVar65);
              iVar58 = FUN_00e7d780((float)(int)(uVar66 - uVar65) / DAT_02394298 +
                                    (float)(int)uVar65);
              iVar54 = (uint)bVar78 * 2 + -1;
              uVar51 = uVar65;
              if (uVar65 != uVar42 - 1) {
                fVar82 = *(float *)(*(longlong *)(lVar59 + 0x10) + lVar75 * 4);
                if (((uint)(DAT_0239424c < fVar82) * 2 + -1 == iVar54) &&
                   (_DAT_0240cdac < (float)((uint)fVar82 & _DAT_02390140))) {
                  pfVar64 = (float *)(*(longlong *)(lVar59 + 0x10) + lVar75 * 4);
                  uVar66 = uVar65;
                  do {
                    uVar51 = uVar66;
                    pfVar64 = pfVar64 + -1;
                    if ((uVar42 == uVar51) || ((uint)(DAT_0239424c < *pfVar64) * 2 + -1 != iVar54))
                    break;
                    uVar66 = uVar51 - 1;
                  } while (_DAT_0240cdac < (float)((uint)*pfVar64 & _DAT_02390140));
                }
              }
              if (uVar65 != iVar58 + 1U) {
                fVar82 = *(float *)(*(longlong *)(lVar59 + 0x10) + lVar75 * 4);
                if (((uint)(DAT_0239424c < fVar82) * 2 + -1 == iVar54) &&
                   (_DAT_0240cdac < (float)((uint)fVar82 & _DAT_02390140))) {
                  pfVar64 = (float *)(*(longlong *)(lVar59 + 0x10) + lVar75 * 4);
                  uVar65 = -uVar65;
                  do {
                    pfVar64 = pfVar64 + 1;
                    if (-iVar58 == uVar65) {
                      uVar65 = -uVar65;
                      goto LAB_0120c6d0;
                    }
                    uVar65 = uVar65 - 1;
                  } while (((uint)(DAT_0239424c < *pfVar64) * 2 + -1 == iVar54) &&
                          (_DAT_0240cdac < (float)((uint)*pfVar64 & _DAT_02390140)));
                  uVar65 = ~uVar65;
                }
              }
LAB_0120c6d0:
              lVar76 = *(longlong *)(local_78 + 0x10);
              lVar75 = *(longlong *)(lVar76 + (longlong)(int)uVar51 * 8);
              iVar54 = *(int *)(lVar75 + 0x10) -
                       *(int *)(*(longlong *)(lVar76 + (longlong)(int)uVar65 * 8) + 0x10);
              iVar58 = -iVar54;
              if (0 < iVar54) {
                iVar58 = iVar54;
              }
              if ((iVar37 < iVar58) && ((int)uVar51 <= (int)uVar65)) {
                *(undefined4 *)(lVar75 + 0x2c) = 0x3f800000;
                lVar75 = (longlong)(int)uVar51 + 1;
                if (uVar65 + 1 != (int)lVar75) {
                  for (uVar66 = uVar65 - uVar51 & 7; uVar66 != 0; uVar66 = uVar66 - 1) {
                    *(undefined4 *)(*(longlong *)(lVar76 + lVar75 * 8) + 0x2c) = 0x3f800000;
                    lVar75 = lVar75 + 1;
                  }
                  if (6 < uVar65 + ~uVar51) {
                    do {
                      *(undefined4 *)(*(longlong *)(lVar76 + lVar75 * 8) + 0x2c) = 0x3f800000;
                      *(undefined4 *)(*(longlong *)(lVar76 + 8 + lVar75 * 8) + 0x2c) = 0x3f800000;
                      *(undefined4 *)(*(longlong *)(lVar76 + 0x10 + lVar75 * 8) + 0x2c) = 0x3f800000
                      ;
                      *(undefined4 *)(*(longlong *)(lVar76 + 0x18 + lVar75 * 8) + 0x2c) = 0x3f800000
                      ;
                      *(undefined4 *)(*(longlong *)(lVar76 + 0x20 + lVar75 * 8) + 0x2c) = 0x3f800000
                      ;
                      *(undefined4 *)(*(longlong *)(lVar76 + 0x28 + lVar75 * 8) + 0x2c) = 0x3f800000
                      ;
                      *(undefined4 *)(*(longlong *)(lVar76 + 0x30 + lVar75 * 8) + 0x2c) = 0x3f800000
                      ;
                      *(undefined4 *)(*(longlong *)(lVar76 + 0x38 + lVar75 * 8) + 0x2c) = 0x3f800000
                      ;
                      lVar75 = lVar75 + 8;
                    } while (uVar65 + 1 != (int)lVar75);
                  }
                }
              }
            }
            uVar72 = uVar72 + 1;
          } while (uVar72 != uVar41);
        }
        puVar49 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar49 = &DAT_025683c0;
        (*pcVar34)();
        FUN_00c92170();
        fVar82 = (float)FUN_00c92160();
        if (-4 < iVar69) {
          uVar72 = 0xffffffff;
          do {
            uVar42 = _UNK_0239014c;
            uVar66 = _UNK_02390148;
            uVar51 = _UNK_02390144;
            uVar65 = _DAT_02390140;
            iVar69 = (int)uVar72;
            if (iVar69 < 0) {
              iVar58 = 0;
            }
            else {
              iVar58 = *(int *)(*local_38 + uVar72 * 4);
            }
            uVar61 = uVar6;
            if (iVar69 < (int)(uVar41 - 1)) {
              uVar61 = *(uint *)(*local_38 + 4 + (longlong)iVar69 * 4);
            }
            if ((int)uVar6 <= (int)uVar61) {
              uVar61 = uVar71;
            }
            if (iVar58 < (int)uVar61) {
              lVar76 = *(longlong *)(lVar9 + 0x10);
              lVar75 = *(longlong *)(lVar10 + 0x10);
              uVar62 = (ulonglong)iVar58;
              uVar63 = (ulonglong)(int)uVar61;
              uVar57 = uVar63 - uVar62;
              uVar72 = uVar62;
              if ((uVar57 < 8) ||
                 ((lVar75 + uVar62 * 4 < lVar76 + uVar63 * 4 + 4 &&
                  (lVar76 + uVar62 * 4 < lVar75 + uVar63 * 4)))) {
LAB_0120c960:
                uVar57 = uVar72;
                if ((uVar61 - (int)uVar72 & 1) != 0) {
                  uVar57 = uVar72 + 1;
                  *(uint *)(lVar75 + uVar72 * 4) =
                       (uint)(*(float *)(lVar76 + 4 + uVar72 * 4) - *(float *)(lVar76 + uVar72 * 4))
                       & _DAT_02390140;
                }
                uVar65 = _DAT_02390140;
                if (~uVar72 + uVar63 != 0) {
                  do {
                    *(uint *)(lVar75 + uVar57 * 4) =
                         (uint)(*(float *)(lVar76 + 4 + uVar57 * 4) -
                               *(float *)(lVar76 + uVar57 * 4)) & uVar65;
                    *(uint *)(lVar75 + 4 + uVar57 * 4) =
                         (uint)(*(float *)(lVar76 + 8 + uVar57 * 4) -
                               *(float *)(lVar76 + 4 + uVar57 * 4)) & uVar65;
                    uVar57 = uVar57 + 2;
                  } while (uVar63 != uVar57);
                }
              }
              else {
                uVar67 = uVar57 & 0xfffffffffffffff8;
                uVar72 = uVar67 + uVar62;
                lVar52 = lVar76 + uVar62 * 4;
                lVar68 = lVar75 + uVar62 * 4;
                uVar55 = 0;
                do {
                  pfVar3 = (float *)(lVar52 + uVar55 * 4);
                  fVar82 = pfVar3[1];
                  fVar84 = pfVar3[2];
                  fVar85 = pfVar3[3];
                  pfVar4 = (float *)(lVar52 + 4 + uVar55 * 4);
                  fVar83 = pfVar4[1];
                  fVar86 = pfVar4[2];
                  fVar17 = pfVar4[3];
                  pfVar64 = (float *)(lVar52 + 0x10 + uVar55 * 4);
                  fVar18 = *pfVar64;
                  fVar19 = pfVar64[1];
                  fVar20 = pfVar64[2];
                  fVar21 = pfVar64[3];
                  pfVar64 = (float *)(lVar52 + 0x14 + uVar55 * 4);
                  fVar22 = *pfVar64;
                  fVar23 = pfVar64[1];
                  fVar24 = pfVar64[2];
                  fVar25 = pfVar64[3];
                  puVar5 = (uint *)(lVar68 + uVar55 * 4);
                  *puVar5 = (uint)(*pfVar4 - *pfVar3) & uVar65;
                  puVar5[1] = (uint)(fVar83 - fVar82) & uVar51;
                  puVar5[2] = (uint)(fVar86 - fVar84) & uVar66;
                  puVar5[3] = (uint)(fVar17 - fVar85) & uVar42;
                  puVar5 = (uint *)(lVar68 + 0x10 + uVar55 * 4);
                  *puVar5 = (uint)(fVar22 - fVar18) & uVar65;
                  puVar5[1] = (uint)(fVar23 - fVar19) & uVar51;
                  puVar5[2] = (uint)(fVar24 - fVar20) & uVar66;
                  puVar5[3] = (uint)(fVar25 - fVar21) & uVar42;
                  uVar55 = uVar55 + 8;
                } while (uVar67 != uVar55);
                if (uVar57 != uVar67) goto LAB_0120c960;
              }
              bVar79 = iVar69 != -1;
              lVar76 = uVar62 - 1;
              iVar54 = -1;
              fVar84 = 0.0;
              lVar75 = 0;
              bVar78 = false;
              iVar50 = -1;
              do {
                fVar82 = *(float *)(*(longlong *)(lVar10 + 0x10) + uVar62 * 4);
                if (fVar82 < DAT_02391090) {
                  if (bVar78) {
                    fVar84 = 0.0;
                    if ((iVar54 != -1) && (iVar50 != -1)) {
                      lVar52 = (longlong)iVar54;
                      fVar82 = (float)((uint)(*(float *)(*(longlong *)(lVar9 + 0x10) + lVar52 * 4) -
                                             *(float *)(*(longlong *)(lVar9 + 0x10) + uVar62 * 4)) &
                                      _DAT_02390140);
                      bVar78 = false;
                      if (((float)iVar38 < fVar82) && (iVar39 < iVar50 - iVar58)) {
                        if (iVar39 < (int)(uVar61 - iVar50)) {
                          iVar53 = *(int *)(puVar49 + 3);
                          FUN_00c8e340(0,1);
                          *(int *)(puVar49[2] + (longlong)iVar53) = iVar50;
                          iVar53 = FUN_00e7d780((float)(iVar50 - iVar58) / DAT_023b1d84 +
                                                (float)iVar50);
                          iVar50 = FUN_00e7d780((float)(int)(uVar61 - iVar50) / DAT_02394298 +
                                                (float)iVar50);
                          fVar84 = 0.0;
                          fVar82 = extraout_XMM0_Da_00;
                          if (lVar52 < (longlong)uVar62) {
                            lVar13 = *(longlong *)(lVar10 + 0x10);
                            lVar68 = lVar52;
                            if (((iVar58 + (int)lVar75) - iVar54 & 1U) != 0) {
                              fVar82 = *(float *)(lVar13 + lVar52 * 4);
                              if (((DAT_02394288 < fVar82) && (iVar53 <= iVar54)) &&
                                 (iVar54 <= iVar50)) {
                                *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(local_78 + 0x10) + lVar52 * 8) + 0x2c)
                                     = 0x3f800000;
                              }
                              lVar68 = lVar52 + 1;
                            }
                            if (lVar76 + lVar75 != lVar52) {
                              do {
                                if (((DAT_02394288 < *(float *)(lVar13 + lVar68 * 4)) &&
                                    (iVar53 <= lVar68)) && (lVar68 <= iVar50)) {
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(local_78 + 0x10) + lVar68 * 8) +
                                   0x2c) = 0x3f800000;
                                }
                                fVar82 = *(float *)(lVar13 + 4 + lVar68 * 4);
                                if (((DAT_02394288 < fVar82) && ((longlong)iVar53 <= lVar68 + 1)) &&
                                   (lVar68 < iVar50)) {
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar68 * 8) +
                                   0x2c) = 0x3f800000;
                                }
                                lVar68 = lVar68 + 2;
                                bVar78 = false;
                              } while (lVar68 < (longlong)uVar62);
                              iVar50 = -1;
                              bVar79 = false;
                              iVar54 = -1;
                              goto LAB_0120ca27;
                            }
                          }
                          bVar79 = false;
                          bVar78 = false;
                          iVar50 = -1;
                          iVar54 = -1;
                        }
                        else {
                          iVar50 = -1;
                          bVar79 = false;
                          iVar54 = -1;
                        }
                        goto LAB_0120ca27;
                      }
                    }
                    bVar78 = false;
                    iVar50 = -1;
                    bVar79 = false;
                    iVar54 = -1;
                  }
                  else {
                    bVar79 = false;
                  }
                }
                else if (!bVar79) {
                  iVar53 = (int)uVar62;
                  if (bVar78) {
                    if (fVar84 < fVar82) {
LAB_0120cc31:
                      fVar84 = fVar82;
                      iVar50 = iVar53;
                    }
                  }
                  else {
                    fVar84 = 0.0;
                    bVar78 = true;
                    iVar50 = -1;
                    iVar54 = iVar53;
                    if (0.0 < fVar82) goto LAB_0120cc31;
                  }
                }
LAB_0120ca27:
                uVar62 = uVar62 + 1;
                lVar75 = lVar75 + 1;
              } while (uVar61 != (uint)uVar62);
            }
            uVar72 = (ulonglong)(iVar69 + 1U);
          } while (iVar69 + 1U != uVar41);
        }
        if (3 < *(int *)(puVar49 + 3)) {
          lVar76 = 0;
          do {
            lVar75 = puVar49[2];
            iVar69 = *(int *)(puVar45 + 3);
            fVar82 = (float)FUN_00c8e340(fVar82,1);
            *(undefined4 *)(*local_38 + (longlong)iVar69) = *(undefined4 *)(lVar75 + lVar76 * 4);
            lVar76 = lVar76 + 1;
            iVar69 = *(int *)(puVar49 + 3);
            iVar58 = iVar69 + 3;
            if (-1 < iVar69) {
              iVar58 = iVar69;
            }
          } while (lVar76 < iVar58 >> 2);
        }
        FUN_00d50b20();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if (puVar48 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (puVar46 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((*(int *)(puVar45 + 3) + 3U < 7) || (*(int *)(puVar45 + 3) < 4)) {
LAB_0120cea0:
        FUN_00d21140();
        local_78 = lVar12;
      }
      else {
        lVar76 = 0;
        bVar78 = false;
        do {
          lVar75 = *(longlong *)
                    (*(longlong *)(local_78 + 0x10) +
                    (longlong)*(int *)(puVar45[2] + lVar76 * 4) * 8);
          if (lVar75 != 0) {
            FUN_00d50b00();
          }
          cVar36 = FUN_015fa960(1,4);
          if (cVar36 != '\0') {
            bVar78 = true;
          }
          if (lVar75 != 0) {
            FUN_00d50b20();
          }
          lVar76 = lVar76 + 1;
          iVar69 = *(int *)(puVar45 + 3);
          iVar58 = iVar69 + 3;
          if (-1 < iVar69) {
            iVar58 = iVar69;
          }
        } while (lVar76 < iVar58 >> 2);
        if (!bVar78) goto LAB_0120cea0;
        lVar76 = *unaff_RDI;
        uVar80 = FUN_015fab90();
        if (local_160 == '\0') {
          if (local_168 != 0) {
            uVar80 = FUN_00d50b00();
          }
        }
        else {
          local_160 = '\0';
        }
        local_78 = local_168;
        FUN_00d214d0(uVar80,*(undefined4 *)(lVar76 + 0xc));
        if (local_168 != 0) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (lVar35 != 0) {
        FUN_00d50b20();
      }
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      lVar76 = lVar59;
    } while (*(int *)((longlong)puVar43 + 0xc) != 0);
  }
  FUN_00d50b20();
  if (((char)lVar32 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar31 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar73 != '\0') && (lVar59 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar30 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar29 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)lVar28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}


