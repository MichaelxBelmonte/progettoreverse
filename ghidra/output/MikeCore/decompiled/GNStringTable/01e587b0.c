// Function: FUN_01e587b0
// Address: 01e587b0
// Size: 1881 bytes
// Class: GNStringTable
// String references:
//   "frame"


/* WARNING: Removing unreachable block (ram,0x01e58ecc) */
/* WARNING: Removing unreachable block (ram,0x01e58ed5) */
/* WARNING: Removing unreachable block (ram,0x01e58e80) */
/* WARNING: Removing unreachable block (ram,0x01e58e89) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e587b0(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char unaff_SIL;
  longlong unaff_RDI;
  bool bVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 local_a8;
  longlong local_88;
  char local_80;
  char local_74;
  longlong in_stack_ffffffffffffff90;
  char local_68;
  double local_58;
  double local_40;
  double local_38;
  
  uVar11 = *(uint *)(unaff_RDI + 0x3c);
  if ((*(char *)(unaff_RDI + 0x38) == '\0') && (*(char *)(unaff_RDI + 0x39) == '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 9;
  }
  uVar10 = 0;
  if ((uVar11 & 0x180) == 0) {
    uVar10 = uVar11 * 2 & 4 | uVar11 >> 1 & 2 | uVar9;
  }
  local_74 = unaff_SIL;
  (*(code *)PTR__objc_msgSend_024a9998)();
  puVar3 = PTR__NSZeroPoint_0249c210;
  cVar5 = _NSEqualPoints(DAT_02802fa0,SUB84(DAT_02802fa8,0),*(undefined8 *)PTR__NSZeroPoint_0249c210
                         ,*(undefined8 *)(PTR__NSZeroPoint_0249c210 + 8));
  puVar4 = PTR__objc_msgSend_024a9998;
  if (cVar5 == '\0') {
    local_a8 = DAT_02802fa0;
    local_38 = (double)*(float *)(unaff_RDI + 0x8c);
  }
  else {
    uVar13 = (*(code *)PTR__objc_msgSend_024a9998)();
    lVar6 = (*(code *)puVar4)(uVar13,0);
    if (lVar6 == 0) {
      local_58 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
    }
    DAT_02802fa0 = 0x4069000000000000;
    local_38 = (double)*(float *)(unaff_RDI + 0x8c);
    DAT_02802fa8 = (local_58 + _DAT_02421cb8) - local_38;
    local_a8 = CONCAT44(_UNK_02421cd4,_DAT_02421cd0);
  }
  dVar20 = DAT_02802fa8;
  dVar14 = (double)*(float *)(unaff_RDI + 0x88);
  _objc_alloc();
  puVar4 = PTR__objc_msgSend_024a9998;
  dVar21 = dVar14;
  dVar22 = local_38;
  dVar18 = dVar14;
  uVar13 = (*(code *)PTR__objc_msgSend_024a9998)(2,(uVar11 << 0x1f) >> 0x1b & uVar11 * 2 | uVar10,1)
  ;
  *(undefined8 *)(unaff_RDI + 0xa0) = uVar13;
  DAT_02802fa0 = *(undefined8 *)puVar3;
  DAT_02802fa8 = *(double *)(puVar3 + 8);
  dVar15 = (double)FUN_01f25900(*(undefined8 *)(unaff_RDI + 0x40));
  dVar19 = dVar18;
  dVar16 = (double)FUN_01f25900(*(undefined8 *)(unaff_RDI + 0x48));
  local_40 = dVar14;
  if (*(char *)(unaff_RDI + 0x38) != '\0') {
    dVar14 = dVar15;
    local_40 = dVar16;
  }
  dVar15 = local_38;
  if (*(char *)(unaff_RDI + 0x39) != '\0') {
    local_38 = dVar18;
    dVar15 = dVar19;
  }
  (*(code *)puVar4)(dVar14,SUB84(local_38,0),local_38,dVar15,local_a8,dVar20,dVar21,dVar22);
  uVar13 = (*(code *)puVar4)(local_40,SUB84(dVar15,0));
  uVar11 = *(uint *)(unaff_RDI + 0x3c);
  if ((uVar11 & 0x400) != 0) {
    (*(code *)puVar4)(uVar13,0);
    uVar13 = (*(code *)puVar4)(DAT_0238fee8,(int)DAT_0240e410);
    uVar13 = (*(code *)puVar4)(extraout_XMM0_Qa_01,uVar13);
    uVar11 = *(uint *)(unaff_RDI + 0x3c);
  }
  if ((uVar11 & 8) != 0) {
    uVar13 = (*(code *)PTR__objc_msgSend_024a9998)(uVar13,3);
    uVar11 = *(uint *)(unaff_RDI + 0x3c);
  }
  if ((uVar11 & 0x100) != 0) {
    uVar13 = (*(code *)puVar4)(uVar13,1);
    uVar13 = (*(code *)puVar4)(uVar13,0x65);
    uVar11 = *(uint *)(unaff_RDI + 0x3c);
  }
  uVar13 = (*(code *)puVar4)(uVar13,2);
  uVar13 = (*(code *)puVar4)(uVar13,uVar11 >> 4 & 1);
  uVar13 = (*(code *)puVar4)(uVar13,2);
  (*(code *)puVar4)(uVar13,~(byte)(uVar11 >> 4) & 1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(ulonglong *)PTR__NSAppKitVersionNumber_0249c100;
  auVar17 = roundsd(auVar17,auVar17,9);
  if ((_DAT_02421cc0 < auVar17._0_8_) && ((*(byte *)(unaff_RDI + 0x3d) & 2) != 0)) {
    (*(code *)PTR__objc_msgSend_024a9998)(auVar17._0_8_,0x80);
  }
  _objc_alloc();
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar13 = FUN_00d50b00();
  uVar13 = (*(code *)PTR__objc_msgSend_024a9998)(uVar13,&stack0xffffffffffffffb0);
  if (unaff_RDI != 0) {
    uVar13 = FUN_00d50b20();
  }
  if (DAT_028b9e10 == 0) {
    _objc_alloc();
    DAT_028b9e10 = (*(code *)PTR__objc_msgSend_024a9998)();
    uVar13 = extraout_XMM0_Qa_00;
  }
  uVar13 = (*(code *)puVar4)(uVar13,*(undefined8 *)(unaff_RDI + 0xa0));
  uVar13 = (*(code *)puVar4)(uVar13,uVar7);
  uVar13 = (*(code *)puVar4)(uVar13,0);
  (*(code *)puVar4)(uVar13,1);
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    FUN_01e590a0();
    FUN_00d50b00();
    if (DAT_028b9df0 != (undefined8 *)0x0) goto LAB_01e58d2f;
LAB_01e58d3c:
    FUN_00e8cb50();
    if (DAT_028b9df0 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028b9df0 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar12 = DAT_028b9df0 != (undefined8 *)0x0;
        DAT_028b9df0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b9df8 == '\0') {
        DAT_028b9df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00e38130(0,0,1);
      DAT_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
  }
  else {
    if (local_74 != '\0') {
      FUN_01e59140();
    }
    FUN_00d50b00();
    if (DAT_028b9df0 == (undefined8 *)0x0) goto LAB_01e58d3c;
LAB_01e58d2f:
    if (DAT_028b9df9 == '\0') goto LAB_01e58d3c;
  }
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) goto LAB_01e58ee7;
  FUN_01e583a0();
  if (local_68 == '\0') {
    if (in_stack_ffffffffffffff90 != 0) {
      FUN_00d50b00();
      goto LAB_01e58e45;
    }
  }
  else if (in_stack_ffffffffffffff90 != 0) {
LAB_01e58e45:
    FUN_00d50b20();
    goto LAB_01e58ee7;
  }
  uVar13 = FUN_00dd6a00();
  if ((local_68 == '\0') && (in_stack_ffffffffffffff90 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  local_80 = '\0';
  local_88 = in_stack_ffffffffffffff90;
  FUN_01e5fa90(uVar13,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff90 != 0) {
    FUN_00d50b20();
  }
LAB_01e58ee7:
  FUN_00d50b20();
  FUN_01e594e0();
  return;
}


