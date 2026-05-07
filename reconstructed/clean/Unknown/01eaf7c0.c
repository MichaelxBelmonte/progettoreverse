// Function: FUN_01eaf7c0
// Address: 01eaf7c0
// Size: 2465 bytes
// Class: Unknown

void FUN_01eaf7c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  int in_EDX;
  char cVar10;
  int64_t lVar11;
  int64_t *arg1;
  uint uVar12;
  int64_t *this_ptr;
  size_t sVar13;
  uint uVar14;
  char cVar15;
  int64_t lVar16;
  uint32_t uVar17;
  float fVar19;
  float fVar18;
  uint64_t uVar20;
  float fVar24;
  double dVar21;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar22 [16];
  double dVar25;
  uint8_t auVar23 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint64_t in_XMM3_Qb;
  float in_XMM4_Da;
  float local_198;
  float fStack_194;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t local_70;
  char local_68;
  int local_58;
  void *pvVar9;
  
  uStack_120 = (uint32_t)in_XMM3_Qb;
  uStack_11c = (uint32_t)((uint64_t)in_XMM3_Qb >> 0x20);
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
    lVar16 = *arg1;
    if (lVar16 == local_70) {
      if (((char)arg1[1] != '\0') || (local_70 == 0)) goto LAB_01eaf96c;
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_01eaf963;
      }
LAB_01eaf924:
      *(void*)(arg1 + 1) = 1;
      local_68 = '\0';
    }
    else {
      lVar7 = arg1[1];
      if (local_68 != '\0') {
        *arg1 = local_70;
        if (((char)lVar7 != '\0') && (lVar16 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01eaf924;
      }
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_70;
      if (((char)lVar7 != '\0') && (lVar16 != 0)) {
        FUN_00d50b20();
      }
LAB_01eaf963:
      *(void*)(arg1 + 1) = 1;
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
  lVar16 = *arg1;
  cVar15 = (char)arg1[1];
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
      lVar7 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) break;
      lVar7 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar7 * 8);
      uVar17 = FUN_01d533b0();
      local_88._0_4_ = uVar17;
      fVar18 = (float)(**(code **)(*this_ptr + 0x428))();
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
  lVar7 = *arg1;
  if (lVar7 == lVar16) {
    if (cVar15 == '\0') {
      cVar15 = '\0';
      goto LAB_01eafc28;
    }
    if (((char)arg1[1] != '\0') || (lVar16 == 0)) goto LAB_01eafc28;
    cVar10 = '\x01';
    FUN_00d50b00();
  }
  else {
    lVar4 = arg1[1];
    if ((cVar15 != '\0') && (lVar16 != 0)) {
      FUN_00d50b00();
    }
    *arg1 = lVar16;
    cVar10 = cVar15;
    if (((char)lVar4 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  *(char *)(arg1 + 1) = cVar10;
LAB_01eafc28:
  lVar7 = FUN_01d4e4f0();
  if (lVar7 != 0) {
    lVar4 = *(int64_t *)(this_ptr[2] + 8);
    if ((this_ptr[3] != 0) && (lVar7 = FUN_01d4abf0(), lVar7 == 0)) {
      local_88 = (uint8_t  [8])FUN_01d526f0();
      uStack_80 = extraout_XMM0_Qb;
      FUN_01d526f0();
      uVar8 = (uint)((float)(int)(float)local_88._0_4_ * fVar18);
      pvVar9 = (void *)(uint64_t)uVar8;
      local_88._0_4_ = (int)((float)(int)extraout_XMM0_Db * fVar18);
      auVar22 = _local_88;
      uVar6 = (int)((float)(int)extraout_XMM0_Db * fVar18) * uVar8;
      local_88._4_4_ = 0;
      local_88._0_4_ = uVar6;
      uVar5 = (uint64_t)local_88;
      _local_88 = auVar22;
      lVar7 = FUN_00e83010();
      _memset(pvVar9,uVar6 * 4,sVar13);
      uVar20 = _CGColorSpaceCreateDeviceRGB();
      _CGDataProviderCreateWithData(FUN_01eb0430,(int64_t)(int)(uVar6 * 4));
      _CGBitmapContextCreate(8,(int64_t)(int)local_88._0_4_,(int64_t)(int)(uVar8 * 4),uVar20);
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
          uVar6 = (*this_ptr[3])
                            ((uVar12 & 0xff) << 8 | (uVar14 & 0xff) << 0x10 | uVar6 & 0xff000000);
          *(uint *)(lVar7 + lVar11 * 4) =
               uVar6 >> 0x10 & 0xff | (uVar6 & 0xff) << 0x10 | uVar6 & 0xff00ff00;
          lVar11 = lVar11 + 1;
        } while (local_88 != (uint8_t  [8])lVar11);
      }
      lVar7 = _CGImageCreate(0x20,8,(int64_t)(int)(uVar8 * 4),uVar20,0);
      _CGColorSpaceRelease();
      uVar20 = _CGDataProviderRelease();
      FUN_01d4b0a0(uVar20,lVar7);
    }
    if ((lVar7 != 0) && (lVar4 != 0)) {
      local_88 = (uint8_t  [8])FUN_01d526f0();
      uStack_80 = extraout_XMM0_Qb_00;
      _CGContextSaveGState();
      _CGContextClipToRect();
      _CGContextTranslateCTM();
      _CGContextScaleCTM(g_0238fee8,(int)g_023b19a0);
      auVar3._8_4_ = uStack_120;
      auVar3._0_8_ = param_4;
      auVar3._12_4_ = uStack_11c;
      auVar22._4_4_ = (float)((uint64_t)param_2 >> 0x20) * fVar18;
      auVar22._0_4_ = (float)param_2 * fVar18;
      auVar22._8_4_ = in_XMM1_Dc * extraout_XMM0_Dc;
      auVar22._12_4_ = in_XMM1_Dd * extraout_XMM0_Dc;
      auVar22 = divps(auVar3,auVar22);
      fVar19 = auVar22._0_4_ * fVar18;
      fVar24 = auVar22._4_4_ * fVar18;
      dVar1 = (double)((float)local_88._4_4_ * fVar24);
      unique0x1000032c = SUB84(dVar1,0);
      local_88 = (uint8_t  [8])(double)((float)local_88._0_4_ * fVar19);
      unique0x10000330 = (int)((uint64_t)dVar1 >> 0x20);
      _CGContextTranslateCTM();
      if (in_EDX == 3) {
        _CGContextSetAlpha((double)(*(float *)(this_ptr[8] + 0xc) * in_XMM4_Da));
      }
      else {
        _CGContextSetAlpha((double)*(float *)(this_ptr[8] + 0xc));
      }
      local_198 = (float)param_1;
      fStack_194 = (float)((uint64_t)param_1 >> 0x20);
      dVar21 = (double)(fVar18 * local_198 * fVar19);
      dVar25 = (double)(fVar18 * fStack_194 * fVar24);
      dVar1 = 0.0 - dVar25;
      auVar23._0_8_ = dVar21 + 0.0;
      auVar23._8_8_ = dVar25 + 0.0;
      auVar2._8_4_ = SUB84(dVar1,0);
      auVar2._0_8_ = 0.0 - dVar21;
      auVar2._12_4_ = (int)((uint64_t)dVar1 >> 0x20);
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

