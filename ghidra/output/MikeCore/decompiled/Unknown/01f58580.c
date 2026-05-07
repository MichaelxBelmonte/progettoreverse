// Function: FUN_01f58580
// Address: 01f58580
// Size: 1150 bytes
// Class: Unknown
// String references:
//   "setEnabled:"
//   "setState:"
//   "cell"
//   "setBezelStyle:"


/* WARNING: Removing unreachable block (ram,0x01f586ff) */
/* WARNING: Removing unreachable block (ram,0x01f5870f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f58580(undefined8 param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int in_ECX;
  uint uVar8;
  ulonglong in_RDX;
  longlong *unaff_RSI;
  undefined4 uVar9;
  undefined1 auVar11 [12];
  undefined8 extraout_XMM0_Qa_03;
  undefined8 in_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar18 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 local_res10;
  undefined1 local_98 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  uVar8 = (uint)in_RDX;
  if ((uVar8 < 0x25) && ((0x1e0000c300U >> (in_RDX & 0x3f) & 1) != 0)) {
    return;
  }
  local_78._8_8_ = in_XMM0_Qb;
  local_78._0_8_ = param_1;
  local_68._8_8_ = in_XMM1_Qb;
  local_68._0_8_ = param_2;
  uVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
  puVar2 = PTR__objc_msgSend_024a9998;
  if (uVar4 <= (ulonglong)(longlong)(int)uVar8) {
LAB_01f586a8:
    FUN_01cbadc0(in_ECX,in_RDX & 0xffffffff,param_3,param_4);
    return;
  }
  lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
  lVar6 = (*(code *)puVar2)();
  if (lVar5 == lVar6) goto LAB_01f586a8;
  uVar9 = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  fVar21 = (float)((ulonglong)param_1 >> 0x20);
  auVar20._4_4_ = fVar21;
  auVar20._0_4_ = fVar21;
  auVar20._8_4_ = uVar9;
  auVar20._12_4_ = uVar9;
  auVar12._4_12_ = auVar20._4_12_;
  auVar12._0_4_ = fVar21 + DAT_02390124;
  auVar19 = insertps(local_78,auVar12,0x10);
  local_98 = ZEXT416(DAT_02394298);
  uVar9 = 0;
  switch(uVar8) {
  case 1:
    if (in_ECX != 5) {
      if (in_ECX != 7) goto switchD_01f5869e_caseD_11;
      auVar11._4_8_ = 0;
      auVar11._0_4_ = DAT_023908d8;
      goto LAB_01f58745;
    }
    break;
  case 2:
    auVar14._0_4_ = auVar12._0_4_ + DAT_02390124;
    auVar14._4_12_ = auVar12._4_12_;
    auVar19 = insertps(auVar19,auVar14,0x10);
    break;
  case 3:
    auVar15._0_4_ = auVar12._0_4_ + DAT_02390d00;
    auVar15._4_12_ = auVar12._4_12_;
    auVar19 = insertps(auVar19,auVar15,0x10);
    uVar9 = 1;
  default:
    goto switchD_01f5869e_caseD_4;
  case 6:
    auVar20 = insertps(local_78,auVar12,0x10);
    auVar19._4_4_ = auVar20._4_4_ + _UNK_024238e4;
    auVar19._0_4_ = auVar20._0_4_ + _DAT_024238e0;
    uVar9 = 0;
    auVar19._8_4_ = auVar20._8_4_ + _UNK_024238e8;
    auVar19._12_4_ = auVar20._12_4_ + _UNK_024238ec;
    goto switchD_01f5869e_caseD_4;
  case 0xe:
  case 0xf:
    uVar9 = 1;
    goto switchD_01f5869e_caseD_4;
  case 0x11:
  case 0x16:
switchD_01f5869e_caseD_11:
    auVar13._0_4_ = auVar12._0_4_ + DAT_02390d00;
    auVar13._4_12_ = auVar12._4_12_;
    auVar19 = insertps(auVar19,auVar13,0x10);
    auVar11 = ZEXT812(0);
LAB_01f58745:
    local_98._12_4_ = 0;
    local_98._0_12_ = auVar11;
    break;
  case 0x18:
    auVar16._0_4_ = auVar12._0_4_ + DAT_02390d00;
    auVar16._4_12_ = auVar12._4_12_;
    auVar19 = insertps(auVar19,auVar16,0x10);
    blendps(local_68,_DAT_024238f0,0xe);
  }
  uVar9 = 0;
switchD_01f5869e_caseD_4:
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar10 = extraout_XMM0_Qa;
  if (*(longlong *)(*unaff_RSI + 0x28) != 0) {
    uVar10 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa,uVar7);
  }
  cVar3 = (*(code *)PTR__objc_msgSend_024a9998)(uVar10,PTR_s_cell_026ca280);
  puVar2 = PTR__objc_msgSend_024a9998;
  uVar10 = extraout_XMM0_Qa_00;
  if (cVar3 != '\0') {
    uVar10 = (*(code *)PTR__objc_msgSend_024a9998)();
    uVar10 = (*(code *)puVar2)(uVar10,1);
  }
  cVar3 = (*(code *)PTR__objc_msgSend_024a9998)(uVar10,PTR_s_setEnabled__026c97e8);
  if (cVar3 != '\0') {
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa_01,param_4);
  }
  fVar21 = local_98._0_4_;
  auVar17._4_12_ = local_98._4_12_;
  auVar17._0_4_ = fVar21 + fVar21;
  cVar3 = (*(code *)PTR__objc_msgSend_024a9998)(auVar17._0_8_,PTR_s_setState__026c9818);
  if (cVar3 != '\0') {
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa_02,(longlong)param_3);
  }
  auVar18._4_12_ = auVar19._4_12_;
  auVar18._0_4_ = auVar19._0_4_ - fVar21;
  cVar3 = (*(code *)PTR__objc_msgSend_024a9998)(auVar18._0_8_,PTR_s_setBezelStyle__026ca290);
  if (cVar3 == '\0') {
    uVar10 = 1;
    bVar1 = false;
  }
  else {
    uVar10 = 1;
    lVar5 = 1;
    if ((uVar8 & 0xfffffffe) != 4) {
      lVar5 = 1;
      if (in_ECX - 1U < 7) {
        lVar5 = *(longlong *)(&DAT_02423908 + (longlong)(int)(in_ECX - 1U) * 8);
      }
    }
    lVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
    puVar2 = PTR__objc_msgSend_024a9998;
    if (lVar6 == lVar5) {
      bVar1 = false;
    }
    else {
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)puVar2)(extraout_XMM0_Qa_03,lVar5);
      bVar1 = true;
    }
  }
  uVar7 = FUN_01f57b80(uVar9,uVar7,local_res10);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_024a9998)(uVar7,uVar10);
  }
  lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar5 == 0) {
    return;
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  return;
}


