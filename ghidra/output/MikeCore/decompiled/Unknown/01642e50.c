// Function: FUN_01642e50
// Address: 01642e50
// Size: 6284 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01643a2b) */
/* WARNING: Removing unreachable block (ram,0x01643a37) */
/* WARNING: Removing unreachable block (ram,0x0164406b) */
/* WARNING: Removing unreachable block (ram,0x01644074) */
/* WARNING: Removing unreachable block (ram,0x01643b7f) */
/* WARNING: Removing unreachable block (ram,0x01643b8c) */
/* WARNING: Removing unreachable block (ram,0x016437dc) */
/* WARNING: Removing unreachable block (ram,0x016437e5) */
/* WARNING: Removing unreachable block (ram,0x01643722) */
/* WARNING: Removing unreachable block (ram,0x0164372b) */
/* WARNING: Removing unreachable block (ram,0x01643508) */
/* WARNING: Removing unreachable block (ram,0x01643511) */
/* WARNING: Removing unreachable block (ram,0x016432be) */
/* WARNING: Removing unreachable block (ram,0x016432c7) */
/* WARNING: Removing unreachable block (ram,0x01642ffd) */
/* WARNING: Removing unreachable block (ram,0x01643006) */
/* WARNING: Removing unreachable block (ram,0x01642ec2) */
/* WARNING: Removing unreachable block (ram,0x01642ecb) */
/* WARNING: Removing unreachable block (ram,0x016431a0) */
/* WARNING: Removing unreachable block (ram,0x016431a9) */
/* WARNING: Removing unreachable block (ram,0x016433f2) */
/* WARNING: Removing unreachable block (ram,0x016433fb) */
/* WARNING: Removing unreachable block (ram,0x0164363b) */
/* WARNING: Removing unreachable block (ram,0x01643644) */
/* WARNING: Removing unreachable block (ram,0x0164377c) */
/* WARNING: Removing unreachable block (ram,0x01643785) */
/* WARNING: Removing unreachable block (ram,0x0164391a) */
/* WARNING: Removing unreachable block (ram,0x01643923) */
/* WARNING: Removing unreachable block (ram,0x01643ff3) */
/* WARNING: Removing unreachable block (ram,0x01643ffc) */
/* WARNING: Removing unreachable block (ram,0x016442fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01642e50(double param_1,longlong *param_2,size_t param_3)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  void *pvVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  int iVar35;
  longlong *in_RCX;
  void *pvVar36;
  ulonglong uVar37;
  longlong lVar38;
  float *pfVar39;
  longlong lVar40;
  ulonglong uVar41;
  int iVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  float *pfVar46;
  uint uVar47;
  uint uVar49;
  longlong *unaff_RSI;
  longlong lVar50;
  undefined8 *unaff_RDI;
  ulonglong uVar51;
  ulonglong uVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  float fVar57;
  float fVar58;
  undefined4 extraout_XMM0_Da;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  void *local_60;
  void *local_58;
  char local_50;
  ulonglong uVar48;
  
  uVar2 = *(uint *)(*unaff_RSI + 0x18);
  pvVar36 = (void *)(ulonglong)uVar2;
  uVar47 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar47 = uVar2;
  }
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (_DAT_0241eeb8 <= param_1) {
    uVar47 = (int)uVar47 >> 2;
    uVar48 = (ulonglong)uVar47;
    dVar7 = DAT_0240de90 * param_1;
    if (dVar7 <= (double)(int)uVar47) {
      iVar26 = FUN_00e7d850((int)DAT_024113d0);
      if ((DAT_028ad788 == (void *)0x0) || (DAT_028ad791 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028ad788 == (void *)0x0) {
          iVar56 = FUN_00e7d850((int)DAT_024113d8);
          iVar42 = FUN_00e7d850((int)DAT_024113e0);
          FUN_00c8e690();
          if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          if (3 < (int)*(uint *)((longlong)local_58 + 0x18)) {
            _memset_pattern16(pvVar36,(void *)((ulonglong)
                                               ((*(uint *)((longlong)local_58 + 0x18) >> 2) - 1) * 4
                                              + 4),param_3);
          }
          pvVar36 = DAT_028ad788;
          if ((DAT_028ad788 != local_58) && (DAT_028ad788 = local_58, pvVar36 != (void *)0x0)) {
            FUN_00d50b20();
          }
          if (DAT_028ad790 == '\0') {
            DAT_028ad790 = '\x01';
            FUN_00e8cb90();
          }
          if (local_58 != (void *)0x0 && pvVar36 == local_58) {
            FUN_00d50b20();
          }
          ___bzero();
          FUN_00e84250();
          pvVar36 = DAT_028ad788;
          _memcpy(DAT_028ad788,(void *)((longlong)(iVar56 - iVar26) << 2),param_3);
          if (iVar42 < 0x80) {
            FUN_00e84250();
            pvVar36 = DAT_028ad788;
            _memcpy(DAT_028ad788,(void *)((longlong)(0x80 - iVar42) << 2),param_3);
          }
          DAT_028ad791 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad791 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((DAT_028ad798 == (void *)0x0) || (DAT_028ad7a1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028ad798 == (void *)0x0) {
          FUN_00c8e690();
          if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          pvVar25 = DAT_028ad798;
          if ((DAT_028ad798 != local_58) && (DAT_028ad798 = local_58, pvVar25 != (void *)0x0)) {
            FUN_00d50b20();
          }
          if (local_58 != (void *)0x0) {
            if (DAT_028ad7a0 == '\0') {
              DAT_028ad7a0 = '\x01';
              FUN_00e8cb90();
            }
            if (local_58 != (void *)0x0 && pvVar25 == local_58) {
              FUN_00d50b20();
            }
          }
          FUN_00e83da0();
          _memcpy(pvVar36,&segment_command_000003d8.fileoff,param_3);
          FUN_00e83070();
          DAT_028ad7a1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad7a1 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((DAT_028ad7a8 == (void *)0x0) || (DAT_028ad7b1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028ad7a8 == (void *)0x0) {
          FUN_00c8e690();
          if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          pvVar25 = DAT_028ad7a8;
          if (DAT_028ad7a8 == local_58) {
            bVar24 = false;
          }
          else {
            DAT_028ad7a8 = local_58;
            bVar24 = true;
            if (pvVar25 != (void *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad7b0 == '\0') {
            DAT_028ad7b0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar24) {
            FUN_00d50b20();
          }
          FUN_00e83da0();
          _memcpy(pvVar36,section_000001f8.sectname + 8,param_3);
          FUN_00e83070();
          DAT_028ad7b1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad7b1 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((DAT_028ad7b8 == (void *)0x0) || (DAT_028ad7c1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028ad7b8 == (void *)0x0) {
          FUN_00e83da0();
          FUN_00c8e690();
          if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          pvVar25 = DAT_028ad7b8;
          if ((DAT_028ad7b8 != local_58) && (DAT_028ad7b8 = local_58, pvVar25 != (void *)0x0)) {
            FUN_00d50b20();
          }
          if (local_58 != (void *)0x0) {
            if (DAT_028ad7c0 == '\0') {
              DAT_028ad7c0 = '\x01';
              FUN_00e8cb90();
            }
            if (local_58 != (void *)0x0 && pvVar25 == local_58) {
              FUN_00d50b20();
            }
          }
          _memcpy(pvVar36,&section_00000470.flags,param_3);
          FUN_00e83070();
          DAT_028ad7c1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad7c1 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((DAT_028ad7c8 == (void *)0x0) || (DAT_028ad7d1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028ad7c8 == (void *)0x0) {
          FUN_00c8e690();
          if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          pvVar36 = DAT_028ad7c8;
          if (DAT_028ad7c8 == local_58) {
            bVar24 = false;
          }
          else {
            DAT_028ad7c8 = local_58;
            bVar24 = true;
            if (pvVar36 != (void *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad7d0 == '\0') {
            DAT_028ad7d0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar24) {
            FUN_00d50b20();
          }
          FUN_00e84250();
          _memcpy(DAT_028ad7c8,&section_00000158.reloff,param_3);
          DAT_028ad7d1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad7d1 = '\x01';
          FUN_00e8cb70();
        }
      }
      uVar27 = FUN_00e7d850((int)DAT_024113e8);
      uVar41 = (ulonglong)uVar27;
      if ((DAT_028ad7d8 == (void *)0x0) || (DAT_028ad7e1 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028ad7d8 == (void *)0x0) {
          FUN_00c8e690();
          if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          pvVar36 = DAT_028ad7d8;
          if ((DAT_028ad7d8 != local_58) && (DAT_028ad7d8 = local_58, pvVar36 != (void *)0x0)) {
            FUN_00d50b20();
          }
          if (local_58 != (void *)0x0) {
            if (DAT_028ad7e0 == '\0') {
              DAT_028ad7e0 = '\x01';
              FUN_00e8cb90();
            }
            if (local_58 != (void *)0x0 && pvVar36 == local_58) {
              FUN_00d50b20();
            }
          }
          FUN_00e84250();
          _memcpy(DAT_028ad7d8,(void *)((longlong)(int)(uVar27 * 2) << 2),param_3);
          DAT_028ad7e1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028ad7e1 = '\x01';
          FUN_00e8cb70();
        }
      }
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar3 = *(longlong *)((longlong)local_58 + 0x10);
      lVar4 = *(longlong *)((longlong)local_58 + 0x10);
      lVar5 = *(longlong *)((longlong)local_58 + 0x10);
      puVar29 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar29 = &DAT_024c1200;
      *(undefined8 *)((longlong)puVar29 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar29 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar29 + 0x1c) = 0;
      FUN_00d500e0();
      FUN_00e3d400();
      puVar30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar30 = &DAT_025f0d98;
      puVar30[2] = 0;
      puVar30[3] = 0;
      puVar30[4] = 0;
      puVar30[5] = 0;
      puVar30[6] = 0;
      puVar30[7] = 0;
      (*DAT_025f0db0)();
      fVar57 = (float)(param_1 / DAT_024113f0);
      uVar28 = FUN_00e7d850(SUB84((double)(int)uVar47 / (double)fVar57,0));
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      iVar56 = uVar47 - 1;
      uVar52 = (ulonglong)uVar28;
      if (0 < (int)uVar28) {
        uVar37 = 0;
        do {
          while( true ) {
            fVar58 = (float)(int)uVar37 * fVar57;
            iVar42 = (int)fVar58;
            if (iVar56 <= iVar42) break;
            fVar59 = *(float *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)iVar42 * 4);
            *(float *)(*(longlong *)((longlong)local_58 + 0x10) + uVar37 * 4) =
                 (*(float *)(*(longlong *)(*unaff_RSI + 0x10) + 4 + (longlong)iVar42 * 4) - fVar59)
                 * (fVar58 - (float)iVar42) + fVar59;
            uVar37 = uVar37 + 1;
            if (uVar52 == uVar37) goto LAB_016439ee;
          }
          *(undefined4 *)(*(longlong *)((longlong)local_58 + 0x10) + uVar37 * 4) =
               *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)iVar56 * 4);
          uVar37 = uVar37 + 1;
        } while (uVar52 != uVar37);
      }
LAB_016439ee:
      FUN_00c8e4f0();
      if (local_50 == '\0') {
        if (local_58 != (void *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_015c15b0(DAT_02411488,uVar28);
      if (0 < (int)uVar28) {
        uVar37 = *(ulonglong *)((longlong)local_58 + 0x10);
        uVar6 = *(ulonglong *)((longlong)local_58 + 0x10);
        if ((uVar28 < 8) || ((uVar6 < uVar37 + uVar52 * 4 && (uVar37 < uVar6 + uVar52 * 4)))) {
          uVar51 = 0;
        }
        else {
          uVar51 = (ulonglong)(uVar28 & 0xfffffff8);
          uVar31 = (uVar51 - 8 >> 3) + 1;
          if (uVar51 - 8 == 0) {
            lVar32 = 0;
          }
          else {
            lVar44 = -(uVar31 & 0xfffffffffffffffe);
            lVar32 = 0;
            do {
              pfVar46 = (float *)(uVar37 + lVar32 * 4);
              fVar58 = pfVar46[1];
              fVar59 = pfVar46[2];
              fVar61 = pfVar46[3];
              pfVar39 = (float *)(uVar37 + 0x10 + lVar32 * 4);
              fVar60 = *pfVar39;
              fVar62 = pfVar39[1];
              fVar63 = pfVar39[2];
              fVar8 = pfVar39[3];
              pfVar39 = (float *)(uVar6 + lVar32 * 4);
              fVar9 = pfVar39[1];
              fVar10 = pfVar39[2];
              fVar11 = pfVar39[3];
              pfVar1 = (float *)(uVar6 + 0x10 + lVar32 * 4);
              fVar12 = *pfVar1;
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar1 = (float *)(uVar6 + 0x20 + lVar32 * 4);
              fVar16 = *pfVar1;
              fVar17 = pfVar1[1];
              fVar18 = pfVar1[2];
              fVar19 = pfVar1[3];
              pfVar1 = (float *)(uVar6 + 0x30 + lVar32 * 4);
              fVar20 = *pfVar1;
              fVar21 = pfVar1[1];
              fVar22 = pfVar1[2];
              fVar23 = pfVar1[3];
              pfVar1 = (float *)(uVar6 + lVar32 * 4);
              *pfVar1 = *pfVar39 - *pfVar46;
              pfVar1[1] = fVar9 - fVar58;
              pfVar1[2] = fVar10 - fVar59;
              pfVar1[3] = fVar11 - fVar61;
              pfVar46 = (float *)(uVar6 + 0x10 + lVar32 * 4);
              *pfVar46 = fVar12 - fVar60;
              pfVar46[1] = fVar13 - fVar62;
              pfVar46[2] = fVar14 - fVar63;
              pfVar46[3] = fVar15 - fVar8;
              pfVar46 = (float *)(uVar37 + 0x20 + lVar32 * 4);
              auVar64._0_4_ = fVar16 - *pfVar46;
              auVar64._4_4_ = fVar17 - pfVar46[1];
              auVar64._8_4_ = fVar18 - pfVar46[2];
              auVar64._12_4_ = fVar19 - pfVar46[3];
              pfVar46 = (float *)(uVar37 + 0x30 + lVar32 * 4);
              fVar58 = *pfVar46;
              fVar59 = pfVar46[1];
              fVar61 = pfVar46[2];
              fVar60 = pfVar46[3];
              *(undefined1 (*) [16])(uVar6 + 0x20 + lVar32 * 4) = auVar64;
              pfVar46 = (float *)(uVar6 + 0x30 + lVar32 * 4);
              *pfVar46 = fVar20 - fVar58;
              pfVar46[1] = fVar21 - fVar59;
              pfVar46[2] = fVar22 - fVar61;
              pfVar46[3] = fVar23 - fVar60;
              lVar32 = lVar32 + 0x10;
              lVar44 = lVar44 + 2;
            } while (lVar44 != 0);
          }
          if ((uVar31 & 1) != 0) {
            pfVar46 = (float *)(uVar37 + lVar32 * 4);
            fVar58 = pfVar46[1];
            fVar59 = pfVar46[2];
            fVar61 = pfVar46[3];
            auVar64 = *(undefined1 (*) [16])(uVar37 + 0x10 + lVar32 * 4);
            pfVar39 = (float *)(uVar6 + lVar32 * 4);
            fVar60 = pfVar39[1];
            fVar62 = pfVar39[2];
            fVar63 = pfVar39[3];
            pfVar1 = (float *)(uVar6 + 0x10 + lVar32 * 4);
            fVar8 = *pfVar1;
            fVar9 = pfVar1[1];
            fVar10 = pfVar1[2];
            fVar11 = pfVar1[3];
            pfVar1 = (float *)(uVar6 + lVar32 * 4);
            *pfVar1 = *pfVar39 - *pfVar46;
            pfVar1[1] = fVar60 - fVar58;
            pfVar1[2] = fVar62 - fVar59;
            pfVar1[3] = fVar63 - fVar61;
            pfVar46 = (float *)(uVar6 + 0x10 + lVar32 * 4);
            *pfVar46 = fVar8 - auVar64._0_4_;
            pfVar46[1] = fVar9 - auVar64._4_4_;
            pfVar46[2] = fVar10 - auVar64._8_4_;
            pfVar46[3] = fVar11 - auVar64._12_4_;
          }
          if (uVar51 == uVar52) goto LAB_01643c43;
        }
        uVar31 = ~uVar51;
        uVar43 = uVar52 & 3;
        if ((uVar28 & 3) != 0) {
          do {
            *(float *)(uVar6 + uVar51 * 4) =
                 *(float *)(uVar6 + uVar51 * 4) - *(float *)(uVar37 + uVar51 * 4);
            uVar51 = uVar51 + 1;
            uVar43 = uVar43 - 1;
          } while (uVar43 != 0);
        }
        if (2 < uVar31 + uVar52) {
          do {
            *(float *)(uVar6 + uVar51 * 4) =
                 *(float *)(uVar6 + uVar51 * 4) - *(float *)(uVar37 + uVar51 * 4);
            *(float *)(uVar6 + 4 + uVar51 * 4) =
                 *(float *)(uVar6 + 4 + uVar51 * 4) - *(float *)(uVar37 + 4 + uVar51 * 4);
            *(float *)(uVar6 + 8 + uVar51 * 4) =
                 *(float *)(uVar6 + 8 + uVar51 * 4) - *(float *)(uVar37 + 8 + uVar51 * 4);
            *(float *)(uVar6 + 0xc + uVar51 * 4) =
                 *(float *)(uVar6 + 0xc + uVar51 * 4) - *(float *)(uVar37 + 0xc + uVar51 * 4);
            uVar51 = uVar51 + 4;
          } while (uVar52 != uVar51);
        }
      }
LAB_01643c43:
      if (0 < (int)uVar27) {
        lVar32 = *(longlong *)((longlong)DAT_028ad7d8 + 0x10);
        lVar44 = *(longlong *)((longlong)local_58 + 0x10);
        uVar52 = 0;
        uVar49 = uVar28;
        do {
          uVar49 = uVar49 - 1;
          *(float *)(lVar44 + uVar52 * 4) =
               *(float *)(lVar32 + uVar52 * 4) * *(float *)(lVar44 + uVar52 * 4);
          *(float *)(lVar44 + (longlong)(int)uVar49 * 4) =
               *(float *)(lVar32 + uVar52 * 4) * *(float *)(lVar44 + (longlong)(int)uVar49 * 4);
          uVar52 = uVar52 + 1;
        } while (uVar41 != uVar52);
      }
      if (*param_2 != 0) {
        puVar33 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar33 = &DAT_025683c0;
        (*DAT_025683d8)();
        FUN_00c92170();
        FUN_00c92160();
        if (0 < (int)uVar28) {
          uVar49 = 0xffffffff;
          uVar55 = 0;
          do {
            iVar42 = FUN_00e7d780((float)(int)uVar55 * fVar57);
            if ((int)uVar47 <= iVar42) {
              iVar42 = iVar56;
            }
            fVar58 = *(float *)(*(longlong *)(*param_2 + 0x10) + (longlong)iVar42 * 4);
            uVar53 = uVar49;
            if (((fVar58 < DAT_023b4df0) && (uVar49 == 0xffffffff)) &&
               (uVar53 = uVar55, 0xe < *(int *)(puVar33 + 3) + 7U)) {
              uVar34 = *(undefined8 *)((longlong)*(int *)(puVar33 + 3) + -8 + puVar33[2]);
              uVar49 = (uint)uVar34;
              iVar42 = uVar55 - ((int)((ulonglong)uVar34 >> 0x20) + uVar49);
              if (iVar42 < 0x69) {
                FUN_00c8e340(iVar42,0);
                uVar53 = uVar49;
              }
            }
            if (((DAT_023b4df0 <= fVar58) || (uVar49 = uVar53, uVar55 - uVar28 == -1)) &&
               ((uVar49 = 0xffffffff, uVar53 != 0xffffffff && (0x1e < (int)(uVar55 - uVar53))))) {
              uVar34 = FUN_00e7b4e0();
              iVar42 = *(int *)(puVar33 + 3);
              FUN_00c8e340(extraout_XMM0_Da,1);
              *(undefined8 *)(puVar33[2] + (longlong)iVar42) = uVar34;
            }
            uVar55 = uVar55 + 1;
          } while (uVar55 != uVar28);
        }
        iVar56 = *(int *)(puVar33 + 3);
        iVar42 = iVar56 + 7;
        if (-1 < iVar56) {
          iVar42 = iVar56;
        }
        if (7 < iVar56) {
          iVar56 = (int)uVar27 / 2;
          lVar32 = puVar33[2];
          if ((int)uVar27 < 1) {
            uVar41 = 0;
            do {
              iVar35 = *(int *)(lVar32 + uVar41 * 8);
              iVar54 = iVar35 + iVar56 + *(int *)(lVar32 + 4 + uVar41 * 8);
              iVar35 = iVar35 - iVar56;
              if (iVar35 < 0) {
                iVar35 = 0;
              }
              if ((int)uVar28 <= iVar54) {
                iVar54 = uVar28 - 1;
              }
              if ((int)(iVar35 + uVar27) < (int)(iVar54 - uVar27)) {
                ___bzero();
              }
              uVar41 = uVar41 + 1;
            } while ((uint)(iVar42 >> 3) != uVar41);
          }
          else {
            uVar52 = 0;
            do {
              iVar35 = *(int *)(lVar32 + uVar52 * 8);
              iVar54 = iVar35 + iVar56 + *(int *)(lVar32 + 4 + uVar52 * 8);
              uVar47 = iVar35 - iVar56;
              if ((int)uVar47 < 0) {
                uVar47 = 0;
              }
              if ((int)uVar28 <= iVar54) {
                iVar54 = uVar28 - 1;
              }
              if ((int)(uVar47 + uVar27) < (int)(iVar54 - uVar27)) {
                ___bzero();
              }
              lVar38 = *(longlong *)((longlong)local_58 + 0x10);
              lVar44 = lVar38 + (ulonglong)uVar47 * 4;
              lVar45 = uVar41 * 4 + *(longlong *)((longlong)DAT_028ad7d8 + 0x10);
              uVar37 = 0;
              do {
                iVar54 = iVar54 + -1;
                *(float *)(lVar44 + uVar37 * 4) =
                     *(float *)(lVar45 + uVar37 * 4) * *(float *)(lVar44 + uVar37 * 4);
                *(float *)(lVar38 + (longlong)iVar54 * 4) =
                     *(float *)(lVar45 + uVar37 * 4) * *(float *)(lVar38 + (longlong)iVar54 * 4);
                uVar37 = uVar37 + 1;
              } while (uVar41 != uVar37);
              uVar52 = uVar52 + 1;
            } while (uVar52 != (uint)(iVar42 >> 3));
          }
        }
        FUN_00d50b20();
      }
      uVar47 = FUN_00e7d780((float)(int)uVar28 / _DAT_0241148c);
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      lVar32 = *in_RCX;
      if (lVar32 == 0) {
        local_60 = (void *)0x0;
      }
      else {
        FUN_00c8e690();
        if ((local_50 == '\0') && (local_58 != (void *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_60 = local_58;
      }
      if (0 < (int)uVar47) {
        lVar38 = (longlong)iVar26;
        lVar44 = lVar5 + lVar38 * 4;
        uVar41 = 0;
        do {
          iVar56 = FUN_00e7d780((float)(int)uVar41 * _DAT_0241148c);
          if (iVar56 < (int)(uVar28 - 1)) {
            pfVar46 = (float *)(*(longlong *)((longlong)local_58 + 0x10) + (longlong)iVar56 * 4);
            pfVar39 = (float *)(*(longlong *)((longlong)local_58 + 0x10) + (longlong)iVar56 * 4 + 4)
            ;
          }
          else {
            pfVar46 = (float *)(*(longlong *)((longlong)local_58 + 0x10) +
                               (longlong)(int)(uVar28 - 1) * 4);
            pfVar39 = (float *)(*(longlong *)((longlong)local_58 + 0x10) +
                               (longlong)(int)(uVar28 - 2) * 4);
          }
          iVar42 = (int)((double)(float)((uint)(*pfVar46 - *pfVar39) & _DAT_02390140) * DAT_024113f0
                        );
          fVar58 = DAT_02390124;
          if ((299 < iVar42) && (fVar58 = 0.0, iVar42 < 600)) {
            fVar58 = *(float *)(*(longlong *)((longlong)DAT_028ad7b8 + 0x10) +
                               (ulonglong)(iVar42 - 300) * 4);
          }
          lVar45 = *(longlong *)((longlong)DAT_028ad7a8 + 0x10);
          lVar40 = *(longlong *)((longlong)DAT_028ad798 + 0x10);
          fVar59 = 0.0;
          fVar61 = 0.0;
          lVar50 = 0;
          do {
            uVar52 = (ulonglong)(iVar56 - 0x80) + lVar50;
            fVar60 = 0.0;
            iVar42 = (int)uVar52;
            if ((-1 < iVar42) && (iVar42 < (int)uVar28)) {
              fVar60 = *(float *)(*(longlong *)((longlong)local_58 + 0x10) +
                                 (uVar52 & 0xffffffff) * 4);
            }
            auVar64 = insertps(ZEXT416(*(uint *)(lVar40 + lVar50 * 4)),
                               *(undefined4 *)(lVar45 + lVar50 * 4),0x10);
            fVar62 = auVar64._0_4_ * fVar60;
            fVar60 = auVar64._4_4_ * fVar60;
            *(float *)(lVar4 + lVar50 * 4) = fVar62;
            *(float *)(lVar3 + lVar50 * 4) = fVar62;
            fVar59 = fVar59 + fVar62 * fVar62;
            fVar61 = fVar61 + fVar60 * fVar60;
            lVar50 = lVar50 + 1;
          } while (lVar50 != 0x100);
          if (DAT_02394274 <= fVar59) {
            FUN_00e3daa0(lVar45,lVar5);
            if (iVar26 < 0x80) {
              if (iVar26 == 0x7f) {
                fVar60 = 0.0;
                iVar56 = -1;
                lVar40 = 0x7f;
              }
              else {
                lVar45 = *(longlong *)((longlong)DAT_028ad788 + 0x10) + (lVar38 + 1) * 4;
                fVar60 = 0.0;
                iVar56 = -1;
                lVar40 = 0;
                do {
                  fVar63 = *(float *)(lVar44 + lVar40 * 4) * *(float *)(lVar45 + -4 + lVar40 * 4);
                  fVar62 = fVar63;
                  if (fVar63 <= fVar60) {
                    fVar62 = fVar60;
                  }
                  iVar42 = iVar26 + (int)lVar40;
                  if (fVar63 <= fVar60) {
                    iVar42 = iVar56;
                  }
                  fVar60 = *(float *)(lVar44 + 4 + lVar40 * 4) * *(float *)(lVar45 + lVar40 * 4);
                  iVar56 = iVar26 + 1 + (int)lVar40;
                  if (fVar60 <= fVar62) {
                    fVar60 = fVar62;
                    iVar56 = iVar42;
                  }
                  lVar40 = lVar40 + 2;
                } while ((0x80U - iVar26 & 0xfffffffe) != (uint)lVar40);
                lVar40 = lVar40 + lVar38;
                if ((0x80U - iVar26 & 1) == 0) goto LAB_016443af;
              }
              fVar62 = *(float *)(lVar5 + lVar40 * 4) *
                       *(float *)(*(longlong *)((longlong)DAT_028ad788 + 0x10) + lVar40 * 4);
              if (fVar60 < fVar62) {
                iVar56 = (int)lVar40;
                fVar60 = fVar62;
              }
            }
            else {
              iVar56 = -1;
              fVar60 = 0.0;
            }
LAB_016443af:
            fVar58 = fVar58 * (fVar60 / fVar59) * (fVar60 / fVar59);
            fVar61 = SQRT(fVar61 * DAT_023d4ff8) * _DAT_02411490;
            fVar59 = fVar58;
            if ((fVar61 < DAT_023942a8) && (fVar59 = 0.0, DAT_023908ec <= fVar61)) {
              iVar42 = FUN_00e7d780((DAT_023908ec - (fVar61 + DAT_02394248)) * DAT_023908ec);
              fVar59 = fVar58 * *(float *)(*(longlong *)((longlong)DAT_028ad7c8 + 0x10) +
                                          (longlong)iVar42 * 4);
            }
            *(float *)(*(longlong *)((longlong)local_58 + 0x10) + uVar41 * 4) = fVar59;
            if ((local_60 != (void *)0x0) && (0 < iVar56)) {
              *(float *)(*(longlong *)((longlong)local_60 + 0x10) + uVar41 * 4) =
                   (float)(DAT_024113f0 / (double)iVar56);
            }
          }
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar47);
      }
      if (3 < (int)uVar2) {
        fVar57 = DAT_02390124 / (fVar57 * _DAT_0241148c);
        iVar26 = uVar47 - 1;
        uVar41 = 0;
        do {
          while( true ) {
            fVar58 = (float)(int)uVar41 * fVar57;
            iVar56 = (int)fVar58;
            if (iVar26 <= iVar56) break;
            fVar59 = *(float *)(*(longlong *)((longlong)local_58 + 0x10) + (longlong)iVar56 * 4);
            *(float *)(*(longlong *)((longlong)local_58 + 0x10) + uVar41 * 4) =
                 (*(float *)(*(longlong *)((longlong)local_58 + 0x10) + 4 + (longlong)iVar56 * 4) -
                 fVar59) * (fVar58 - (float)iVar56) + fVar59;
            uVar41 = uVar41 + 1;
            if (uVar48 == uVar41) goto LAB_0164455a;
          }
          *(undefined4 *)(*(longlong *)((longlong)local_58 + 0x10) + uVar41 * 4) =
               *(undefined4 *)(*(longlong *)((longlong)local_58 + 0x10) + (longlong)iVar26 * 4);
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
LAB_0164455a:
        if (*in_RCX != 0) {
          uVar41 = 0;
          do {
            iVar56 = FUN_00e7d780((float)(int)uVar41 * fVar57);
            if ((int)uVar47 <= iVar56) {
              iVar56 = iVar26;
            }
            *(undefined4 *)(*(longlong *)(*in_RCX + 0x10) + uVar41 * 4) =
                 *(undefined4 *)(*(longlong *)((longlong)local_60 + 0x10) + (longlong)iVar56 * 4);
            uVar41 = uVar41 + 1;
          } while (uVar48 != uVar41);
        }
      }
      FUN_015c1480((float)dVar7,uVar48);
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((lVar32 != 0) && (local_60 != (void *)0x0)) {
        FUN_00d50b20();
      }
      if (local_58 != (void *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if (puVar30 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar29 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 == (void *)0x0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


