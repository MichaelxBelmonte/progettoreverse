// Function: FUN_01eaf7c0
// Address: 01eaf7c0
// Size: 2465 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01eafcb8) */
/* WARNING: Removing unreachable block (ram,0x01eafcc4) */
/* WARNING: Removing unreachable block (ram,0x01eafb1b) */
/* WARNING: Removing unreachable block (ram,0x01eafb20) */
/* WARNING: Removing unreachable block (ram,0x01eafb25) */
/* WARNING: Removing unreachable block (ram,0x01eafb48) */
/* WARNING: Removing unreachable block (ram,0x01eafb4b) */
/* WARNING: Removing unreachable block (ram,0x01eafc51) */
/* WARNING: Removing unreachable block (ram,0x01eafc5d) */
/* WARNING: Removing unreachable block (ram,0x01eaffa9) */
/* WARNING: Removing unreachable block (ram,0x01eaffb5) */
/* WARNING: Removing unreachable block (ram,0x01eafa4e) */
/* WARNING: Removing unreachable block (ram,0x01eafa57) */
/* WARNING: Removing unreachable block (ram,0x01eafaa0) */
/* WARNING: Removing unreachable block (ram,0x01eafac0) */
/* WARNING: Removing unreachable block (ram,0x01eafaa2) */
/* WARNING: Removing unreachable block (ram,0x01eafac2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eaf7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int in_EDX;
  char cVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  uint uVar12;
  longlong *unaff_RDI;
  size_t sVar13;
  uint uVar14;
  char cVar15;
  longlong lVar16;
  undefined4 uVar17;
  float fVar19;
  float fVar18;
  undefined8 uVar20;
  float fVar24;
  double dVar21;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined8 in_XMM3_Qb;
  float in_XMM4_Da;
  float local_198;
  float fStack_194;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  longlong local_70;
  char local_68;
  int local_58;
  void *pvVar9;
  
  uStack_120 = (undefined4)in_XMM3_Qb;
  uStack_11c = (undefined4)((ulonglong)in_XMM3_Qb >> 0x20);
  if (in_EDX == 5) {
    FUN_01d48990();
    local_90 = 0;
    if (local_c0 == '\0') {
      if (local_c8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c0 = '\0';
    }
    local_90 = '\x01';
    local_98 = local_c8;
    uVar20 = FUN_01d553b0();
    local_a0 = 0;
    if (local_d0 == '\0') {
      if (local_d8 != 0) {
        uVar20 = FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_d8;
    FUN_01d534b0(uVar20,&local_a8);
    lVar16 = *unaff_RSI;
    if (lVar16 == local_70) {
      if (((char)unaff_RSI[1] != '\0') || (local_70 == 0)) goto LAB_01eaf96c;
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_01eaf963;
      }
LAB_01eaf924:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      local_68 = '\0';
    }
    else {
      lVar7 = unaff_RSI[1];
      if (local_68 != '\0') {
        *unaff_RSI = local_70;
        if (((char)lVar7 != '\0') && (lVar16 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01eaf924;
      }
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_70;
      if (((char)lVar7 != '\0') && (lVar16 != 0)) {
        FUN_00d50b20();
      }
LAB_01eaf963:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01eaf96c:
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    in_EDX = 3;
  }
  lVar16 = *unaff_RSI;
  cVar15 = (char)unaff_RSI[1];
  if ((cVar15 != '\0') && (lVar16 != 0)) {
    FUN_00d50b00();
  }
  FUN_01d53380();
  sVar13 = (size_t)param_3;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_01eafa5c;
    }
  }
  else if (local_70 != 0) {
LAB_01eafa5c:
    local_58 = -1;
    while( true ) {
      sVar13 = (size_t)param_3;
      lVar7 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) break;
      lVar7 = *(longlong *)(*(longlong *)(local_70 + 0x10) + 8 + lVar7 * 8);
      uVar17 = FUN_01d533b0();
      local_88._0_4_ = uVar17;
      fVar18 = (float)(**(code **)(*unaff_RDI + 0x428))();
      if (((float)local_88._0_4_ == fVar18) && (!NAN((float)local_88._0_4_) && !NAN(fVar18))) {
        if (lVar7 == lVar16) {
          if ((cVar15 == '\0') && (lVar7 != 0)) {
            cVar15 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          if ((cVar15 == '\0') || (lVar16 == 0)) {
            lVar16 = lVar7;
            cVar15 = '\x01';
          }
          else {
            FUN_00d50b20();
            lVar16 = lVar7;
            cVar15 = '\x01';
          }
        }
      }
    }
    FUN_01d565a0();
    FUN_00d50b20();
  }
  fVar18 = (float)FUN_01d533b0();
  lVar7 = *unaff_RSI;
  if (lVar7 == lVar16) {
    if (cVar15 == '\0') {
      cVar15 = '\0';
      goto LAB_01eafc28;
    }
    if (((char)unaff_RSI[1] != '\0') || (lVar16 == 0)) goto LAB_01eafc28;
    cVar10 = '\x01';
    FUN_00d50b00();
  }
  else {
    lVar4 = unaff_RSI[1];
    if ((cVar15 != '\0') && (lVar16 != 0)) {
      FUN_00d50b00();
    }
    *unaff_RSI = lVar16;
    cVar10 = cVar15;
    if (((char)lVar4 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  *(char *)(unaff_RSI + 1) = cVar10;
LAB_01eafc28:
  lVar7 = FUN_01d4e4f0();
  if (lVar7 != 0) {
    lVar4 = *(longlong *)(unaff_RDI[2] + 8);
    if ((unaff_RDI[3] != 0) && (lVar7 = FUN_01d4abf0(), lVar7 == 0)) {
      local_88 = (undefined1  [8])FUN_01d526f0();
      uStack_80 = extraout_XMM0_Qb;
      FUN_01d526f0();
      uVar8 = (uint)((float)(int)(float)local_88._0_4_ * fVar18);
      pvVar9 = (void *)(ulonglong)uVar8;
      local_88._0_4_ = (int)((float)(int)extraout_XMM0_Db * fVar18);
      auVar22 = _local_88;
      uVar6 = (int)((float)(int)extraout_XMM0_Db * fVar18) * uVar8;
      local_88._4_4_ = 0;
      local_88._0_4_ = uVar6;
      uVar5 = (ulonglong)local_88;
      _local_88 = auVar22;
      lVar7 = FUN_00e83010();
      _memset(pvVar9,uVar6 * 4,sVar13);
      uVar20 = _CGColorSpaceCreateDeviceRGB();
      _CGDataProviderCreateWithData(FUN_01eb0430,(longlong)(int)(uVar6 * 4));
      _CGBitmapContextCreate(8,(longlong)(int)local_88._0_4_,(longlong)(int)(uVar8 * 4),uVar20);
      _CGContextSetAllowsAntialiasing();
      _CGContextSetBlendMode();
      _CGContextSetInterpolationQuality();
      _CGContextDrawImage();
      _CGContextRelease();
      if (0 < (int)uVar6) {
        _local_88 = CONCAT88(uStack_80,uVar5);
        lVar11 = 0;
        do {
          uVar6 = *(uint *)(lVar7 + lVar11 * 4);
          uVar12 = uVar6 >> 8;
          uVar14 = uVar6;
          if (0xffffff < uVar6) {
            uVar12 = ((uVar12 & 0xff) * 0xff) / (uVar6 >> 0x18);
            uVar14 = ((uVar6 & 0xff) * 0xff) / (uVar6 >> 0x18);
          }
          uVar6 = (*(code *)unaff_RDI[3])
                            ((uVar12 & 0xff) << 8 | (uVar14 & 0xff) << 0x10 | uVar6 & 0xff000000);
          *(uint *)(lVar7 + lVar11 * 4) =
               uVar6 >> 0x10 & 0xff | (uVar6 & 0xff) << 0x10 | uVar6 & 0xff00ff00;
          lVar11 = lVar11 + 1;
        } while (local_88 != (undefined1  [8])lVar11);
      }
      lVar7 = _CGImageCreate(0x20,8,(longlong)(int)(uVar8 * 4),uVar20,0);
      _CGColorSpaceRelease();
      uVar20 = _CGDataProviderRelease();
      FUN_01d4b0a0(uVar20,lVar7);
    }
    if ((lVar7 != 0) && (lVar4 != 0)) {
      local_88 = (undefined1  [8])FUN_01d526f0();
      uStack_80 = extraout_XMM0_Qb_00;
      _CGContextSaveGState();
      _CGContextClipToRect();
      _CGContextTranslateCTM();
      _CGContextScaleCTM(DAT_0238fee8,(int)DAT_023b19a0);
      auVar3._8_4_ = uStack_120;
      auVar3._0_8_ = param_4;
      auVar3._12_4_ = uStack_11c;
      auVar22._4_4_ = (float)((ulonglong)param_2 >> 0x20) * fVar18;
      auVar22._0_4_ = (float)param_2 * fVar18;
      auVar22._8_4_ = in_XMM1_Dc * extraout_XMM0_Dc;
      auVar22._12_4_ = in_XMM1_Dd * extraout_XMM0_Dc;
      auVar22 = divps(auVar3,auVar22);
      fVar19 = auVar22._0_4_ * fVar18;
      fVar24 = auVar22._4_4_ * fVar18;
      dVar1 = (double)((float)local_88._4_4_ * fVar24);
      unique0x1000032c = SUB84(dVar1,0);
      local_88 = (undefined1  [8])(double)((float)local_88._0_4_ * fVar19);
      unique0x10000330 = (int)((ulonglong)dVar1 >> 0x20);
      _CGContextTranslateCTM();
      if (in_EDX == 3) {
        _CGContextSetAlpha((double)(*(float *)(unaff_RDI[8] + 0xc) * in_XMM4_Da));
      }
      else {
        _CGContextSetAlpha((double)*(float *)(unaff_RDI[8] + 0xc));
      }
      local_198 = (float)param_1;
      fStack_194 = (float)((ulonglong)param_1 >> 0x20);
      dVar21 = (double)(fVar18 * local_198 * fVar19);
      dVar25 = (double)(fVar18 * fStack_194 * fVar24);
      dVar1 = 0.0 - dVar25;
      auVar23._0_8_ = dVar21 + 0.0;
      auVar23._8_8_ = dVar25 + 0.0;
      auVar2._8_4_ = SUB84(dVar1,0);
      auVar2._0_8_ = 0.0 - dVar21;
      auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      blendpd(auVar23,auVar2,1);
      _CGContextDrawImage();
      _CGContextRestoreGState();
    }
  }
  if ((cVar15 != '\0') && (lVar16 != 0)) {
    FUN_00d50b20();
  }
  return;
}


