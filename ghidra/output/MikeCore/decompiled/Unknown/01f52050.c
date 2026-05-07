// Function: FUN_01f52050
// Address: 01f52050
// Size: 4073 bytes
// Class: Unknown
// String references:
//   "fileTypeChanged:"
//   "frame"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01f52050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double *pdVar10;
  longlong *unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  cfstringStruct *pcVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 uVar15;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  double local_158;
  char local_150;
  undefined4 local_144;
  undefined8 local_140;
  longlong local_128;
  char local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  char local_100;
  double local_f8;
  char local_f0;
  double local_e8;
  char local_e0;
  double local_d8;
  char local_d0;
  double local_c8;
  char local_c0;
  double local_b8;
  char local_b0;
  double local_a8;
  char local_a0;
  double local_98;
  undefined *local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  char local_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  _objc_alloc();
  puVar6 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  local_110 = (*(code *)puVar6)();
  local_68 = (*(code *)puVar6)();
  uVar14 = extraout_XMM0_Da;
  if (unaff_RDI != (longlong *)0x0) {
    uVar14 = FUN_00d50b00();
  }
  uVar14 = (*(code *)PTR__objc_msgSend_024a9998)(uVar14,&stack0xfffffffffffffec8);
  if (unaff_RDI != (longlong *)0x0) {
    uVar14 = FUN_00d50b20();
  }
  puVar6 = PTR__objc_msgSend_024a9998;
  uVar14 = (*(code *)PTR__objc_msgSend_024a9998)(uVar14,local_110);
  uVar14 = (*(code *)puVar6)(uVar14,1);
  uVar14 = (*(code *)puVar6)(uVar14,1);
  uVar14 = (*(code *)puVar6)(uVar14,1);
  uVar14 = (*(code *)puVar6)(uVar14,0);
  (*(code *)puVar6)(uVar14,0);
  FUN_01f4fff0();
  if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0.0) {
    FUN_01f4fff0();
    local_100 = 0;
    if (dStack_50._0_1_ == '\0') {
      if (local_58 != 0.0) {
        FUN_00d50b00();
      }
    }
    else {
      dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
    }
    local_100 = '\x01';
    local_108 = local_58;
    uVar5 = FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar5);
    if ((local_100 != '\0') && (local_108 != 0.0)) {
      FUN_00d50b20();
    }
    if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
  }
  local_140 = 0;
  local_80 = 0.0;
  local_88 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (unaff_RDI[2] != 0) {
    local_140 = 0;
    local_80 = 0.0;
    puVar6 = (undefined *)_objc_alloc();
    local_120 = 0;
    local_128 = unaff_RDI[2];
    uVar14 = extraout_XMM0_Da_01;
    if (local_128 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_120 = '\x01';
    (*(code *)PTR__objc_msgSend_024a9998)(uVar14,&local_128);
    uVar5 = _objc_autorelease();
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_02,uVar5);
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x370))();
  if (local_58 == 0.0) {
    local_144 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    dVar9 = 0.0;
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    dVar9 = local_58;
    if (dStack_50._0_1_ == '\0') {
      FUN_00d50b00();
      local_144 = 0;
      if ((dStack_50._0_1_ == '\0') || (local_58 == 0.0)) goto LAB_01f52372;
      FUN_00d50b20();
    }
    local_144 = 0;
  }
LAB_01f52372:
  local_140 = uVar5;
  local_80 = dVar9;
  if (*(int *)((longlong)dVar9 + 0xc) < 2) {
    lVar7 = 0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)(0,0,param_3,param_4,0,0,_DAT_02423850,_UNK_02423858);
    lVar7 = _objc_autorelease();
    uVar14 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_03,local_110);
    (*(code *)PTR__objc_msgSend_024a9998)(uVar14,PTR_s_fileTypeChanged__026ca1e0);
    if (0 < *(int *)((longlong)local_80 + 0xc)) {
      lVar11 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)((longlong)local_80 + 0x10) + lVar11 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00df1990();
        local_f0 = 0;
        if (dStack_50._0_1_ == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
        }
        else {
          dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
        }
        local_f0 = '\x01';
        local_f8 = local_58;
        uVar5 = FUN_00e1cfc0();
        (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_04,uVar5);
        if ((local_f0 != '\0') && (local_f8 != 0.0)) {
          FUN_00d50b20();
        }
        if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)((longlong)local_80 + 0xc));
    }
    uVar14 = (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)(uVar14,lVar7);
  }
  dVar9 = (double)unaff_RDI[8];
  if ((dVar9 == 0.0) && ((longlong *)unaff_RDI[5] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)unaff_RDI[5] + 0x370))();
    if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0.0) {
      dVar9 = (double)unaff_RDI[8];
      goto LAB_01f5254a;
    }
    (**(code **)(*(longlong *)unaff_RDI[5] + 0x370))();
    dVar9 = (double)CONCAT71(local_78._1_7_,local_78._0_1_);
    if (local_70 != '\0') goto LAB_01f5255b;
    if (dVar9 == 0.0) goto LAB_01f52564;
    FUN_00d50b00();
    if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,local_78._0_1_) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01f5254a:
    local_70 = '\0';
    if (dVar9 != 0.0) {
      FUN_00d50b00();
    }
LAB_01f5255b:
    if (dVar9 == 0.0) {
LAB_01f52564:
      FUN_00d23310();
      pdVar10 = &local_78;
      if (dStack_50._0_1_ != '\0') {
        pdVar10 = &dStack_50;
      }
      local_78._0_1_ = dStack_50._0_1_;
      *(undefined1 *)pdVar10 = 0;
      if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_58 != 0.0) && (dVar9 = local_58, local_78._0_1_ == '\0')) {
        FUN_00d50b00();
      }
    }
  }
  if (dVar9 != 0.0) {
    FUN_00df1af0();
    if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0.0) {
      FUN_00df1af0();
      local_e0 = 0;
      if (dStack_50._0_1_ == '\0') {
        if (local_58 != 0.0) {
          FUN_00d50b00();
        }
      }
      else {
        dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
      }
      local_e0 = '\x01';
      local_e8 = local_58;
      uVar5 = FUN_00e1cfc0();
      uVar5 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_05,uVar5);
      (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_06,uVar5);
      if ((local_e0 != '\0') && (local_e8 != 0.0)) {
        FUN_00d50b20();
      }
      if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
        iVar4 = FUN_00d237a0();
        uVar14 = extraout_XMM0_Da_07;
        if ((dStack_50._0_1_ != '\0') && (dVar9 != 0.0)) {
          uVar14 = FUN_00d50b20();
        }
        local_58 = dVar9;
        if (iVar4 != -1) {
          (*(code *)PTR__objc_msgSend_024a9998)(uVar14,(longlong)iVar4);
        }
      }
    }
    FUN_00d50b20();
  }
  lVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar7 != 0) {
    local_90 = (undefined *)0x0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = 0;
    while( true ) {
      local_118 = (double)CONCAT44(uVar15,uVar14);
      uVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (uVar8 <= uVar12) break;
      lVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar7 == 0) {
        local_48 = 0.0;
        dStack_40 = 0.0;
        local_58 = 0.0;
        if (uVar12 == 0) goto LAB_01f5285f;
LAB_01f5281b:
        dStack_50 = (double)local_90 + DAT_02423860;
        local_90 = (undefined *)(dStack_50 + dStack_40);
      }
      else {
        _objc_msgSend_stret();
        if (uVar12 != 0) goto LAB_01f5281b;
LAB_01f5285f:
        dStack_50 = 0.0;
        local_90 = (undefined *)dStack_40;
      }
      local_98 = local_48;
      (*(code *)PTR__objc_msgSend_024a9998)();
      uVar14 = SUB84(local_98,0);
      uVar15 = (undefined4)((ulonglong)local_98 >> 0x20);
      if (local_98 <= local_118) {
        uVar14 = SUB84(local_118,0);
        uVar15 = (undefined4)((ulonglong)local_118 >> 0x20);
      }
      uVar12 = uVar12 + 1;
    }
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)();
    dVar9 = (double)_objc_autorelease();
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_08,0);
    local_90 = PTR_s_frame_026ca200;
    local_98 = dVar9;
    for (uVar12 = 0; uVar8 = (*(code *)PTR__objc_msgSend_024a9998)(), uVar12 < uVar8;
        uVar12 = uVar12 + 1) {
      lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_09,uVar12);
      if (lVar7 == 0) {
        dStack_50 = 0.0;
        local_48 = 0.0;
        dStack_40 = 0.0;
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Da_10,local_90);
        uVar14 = SUB84(local_48,0);
        uVar15 = (undefined4)((ulonglong)local_48 >> 0x20);
      }
      local_58 = (local_118 - (double)CONCAT44(uVar15,uVar14)) * DAT_023942d0;
      uVar14 = (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)(uVar14,lVar7);
    }
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_09,local_98);
  }
  lVar7 = DAT_027f3318;
  if ((longlong *)unaff_RDI[5] == (longlong *)0x0) {
    if (unaff_RDI[9] == 0) {
      if (DAT_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar11 = DAT_02800600;
      if (DAT_02800600 != 0) {
        FUN_00d50b00();
      }
      local_188 = lVar11;
      local_180 = '\x01';
      local_178 = 0;
      local_170 = '\0';
      FUN_00d31230(&local_178,&local_188);
      local_a0 = 0;
      if (dStack_50._0_1_ == '\0') {
        if (local_58 != 0.0) {
          FUN_00d50b00();
        }
      }
      else {
        dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
      }
      local_a0 = '\x01';
      local_a8 = local_58;
      FUN_00e1cfc0();
      if ((local_a0 != '\0') && (local_a8 != 0.0)) {
        FUN_00d50b20();
      }
      if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      pcVar13 = (cfstringStruct *)(*(code *)PTR__objc_msgSend_024a9998)();
      uVar14 = extraout_XMM0_Da_14;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      local_168 = unaff_RDI[9];
      if (local_168 != 0) {
        FUN_00d50b00();
      }
      local_160 = '\x01';
      pcVar13 = (cfstringStruct *)FUN_00e1cfc0();
      lVar7 = 0;
      uVar14 = extraout_XMM0_Da_11;
      if ((local_160 == '\0') || (local_168 == 0)) goto LAB_01f52e68;
      uVar14 = FUN_00d50b20();
    }
    lVar7 = 0;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x3a0))();
    if (cVar3 == '\0') {
      (**(code **)(*(longlong *)unaff_RDI[5] + 0x368))();
      FUN_00d8a060();
      local_c0 = 0;
      if (dStack_50._0_1_ == '\0') {
        if (local_58 != 0.0) {
          FUN_00d50b00();
        }
      }
      else {
        dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
      }
      local_c0 = '\x01';
      local_c8 = local_58;
      FUN_00e1cfc0();
      if ((local_c0 != '\0') && (local_c8 != 0.0)) {
        FUN_00d50b20();
      }
      if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,local_78._0_1_) != 0)) {
        FUN_00d50b20();
      }
      pcVar13 = (cfstringStruct *)(*(code *)PTR__objc_msgSend_024a9998)();
      (**(code **)(*(longlong *)unaff_RDI[5] + 0x3f0))();
      (**(code **)(*(longlong *)CONCAT71(local_78._1_7_,local_78._0_1_) + 0x368))();
      local_b0 = 0;
      if (dStack_50._0_1_ == '\0') {
        if (local_58 != 0.0) {
          FUN_00d50b00();
        }
      }
      else {
        dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
      }
      local_b0 = '\x01';
      local_b8 = local_58;
      lVar7 = FUN_00e1cfc0();
      uVar14 = extraout_XMM0_Da_13;
      if ((local_b0 != '\0') && (local_b8 != 0.0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,local_78._0_1_) != 0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[5] + 0x368))();
      local_d0 = 0;
      if (dStack_50._0_1_ == '\0') {
        if (local_58 != 0.0) {
          FUN_00d50b00();
        }
      }
      else {
        dStack_50 = (double)((ulonglong)dStack_50 & 0xffffffffffffff00);
      }
      local_d0 = '\x01';
      local_d8 = local_58;
      lVar7 = FUN_00e1cfc0();
      uVar14 = extraout_XMM0_Da_12;
      if ((local_d0 != '\0') && (local_d8 != 0.0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
        uVar14 = FUN_00d50b20();
      }
      pcVar13 = &cf___;
    }
  }
LAB_01f52e68:
  uVar14 = (*(code *)PTR__objc_msgSend_024a9998)(uVar14,pcVar13);
  if (lVar7 == 0) {
    (*(code *)PTR__objc_msgSend_024a9998)(uVar14,0);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_024a9998)(1,lVar7);
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_15,uVar5);
  }
  FUN_01f27fe0();
  *(int *)((longlong)local_58 + 0xdc) = *(int *)((longlong)local_58 + 0xdc) + 1;
  if (dStack_50._0_1_ != '\0') {
    FUN_00d50b20();
  }
  lVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar14 = FUN_01f27fe0();
  *(int *)((longlong)local_58 + 0xdc) = *(int *)((longlong)local_58 + 0xdc) + -1;
  if (dStack_50._0_1_ != '\0') {
    uVar14 = FUN_00d50b20();
  }
  uVar14 = (*(code *)PTR__objc_msgSend_024a9998)(uVar14,0);
  (*(code *)PTR__objc_msgSend_024a9998)(uVar14,0);
  if (lVar7 == 1) {
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_00e1d1d0();
    if (local_58 == 0.0) {
      local_58 = 0.0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (dStack_50._0_1_ == '\0') {
        FUN_00d50b00();
        if ((dStack_50._0_1_ != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    bVar2 = false;
    local_58 = 0.0;
  }
  (*(code *)PTR__objc_release_024a99a0)();
  (*(code *)PTR__objc_release_024a99a0)();
  local_150 = '\0';
  local_158 = local_58;
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_150 != '\0') && (local_158 != 0.0)) {
    FUN_00d50b20();
  }
  if ((char)local_144 == '\0' && local_80 != 0.0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_58 != 0.0)) {
    FUN_00d50b20();
  }
  return local_58 == 0.0;
}


