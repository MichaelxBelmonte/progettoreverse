// Function: FUN_01f58aa0
// Address: 01f58aa0
// Size: 2322 bytes
// Class: Unknown
// String references:
//   "setEnabled:"
//   "frame"
//   "cell"
//   "bounds"


/* WARNING: Removing unreachable block (ram,0x01f59098) */
/* WARNING: Removing unreachable block (ram,0x01f590a8) */

void FUN_01f58aa0(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong in_RCX;
  int in_EDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined1 in_R8B;
  undefined1 uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 in_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qa_04;
  float fVar15;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined4 uVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  undefined1 local_res8;
  double local_148;
  double local_140;
  undefined1 local_d8 [16];
  undefined8 local_88;
  undefined4 uStack_80;
  double local_78;
  double dStack_70;
  double local_48;
  
  puVar4 = PTR__objc_msgSend_024a9998;
  fVar18 = (float)((ulonglong)param_2 >> 0x20);
  fVar17 = (float)param_2;
  if (0x1c < in_EDX - 8U) goto switchD_01f58b00_caseD_a;
  local_d8._8_8_ = in_XMM0_Qb;
  local_d8._0_8_ = param_1;
  switch(in_EDX) {
  case 8:
    lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(in_RCX,8);
    (*(code *)puVar4)((double)param_3);
    lVar8 = 8;
    break;
  case 9:
    if (fVar17 <= fVar18) goto switchD_01f58b00_caseD_24;
  case 0x23:
    lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(in_RCX,0x23);
    lVar8 = (*(code *)puVar4)();
    if (lVar8 != 0) {
      _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
    }
    lVar9 = (*(code *)PTR__objc_msgSend_024a9998)();
    dVar3 = 0.0;
    if (lVar9 != 0) {
      _objc_msgSend_stret();
      dVar3 = local_78;
    }
    auVar12._0_4_ = (float)dVar3 / param_4;
    auVar12._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar12._8_8_ = 0;
    roundss(auVar12,auVar12,9);
    (*(code *)puVar4)();
    lVar9 = (*(code *)puVar4)();
    local_48 = 0.0;
    uVar16 = 0;
    if (lVar9 != 0) {
      _objc_msgSend_stret();
      uVar16 = uStack_80;
    }
    if (param_4 < DAT_02390124) {
      if (lVar8 == 0) {
        local_78 = 0.0;
      }
      else {
        _objc_msgSend_stret();
      }
      lVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar8 == 0) {
        local_148 = 0.0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Qa_01,PTR_s_frame_026ca200);
      }
      auVar13 = ZEXT416((uint)((float)(local_78 - local_148) * param_3));
      auVar13 = roundss(auVar13,auVar13,9);
      local_48 = (double)auVar13._0_4_;
    }
    (*(code *)puVar4)();
    (*(code *)puVar4)(local_48,uVar16);
    uVar10 = (*(code *)puVar4)();
    (*(code *)puVar4)(extraout_XMM0_Qa_02,uVar10);
    lVar8 = 0x23;
    break;
  default:
    goto switchD_01f58b00_caseD_a;
  case 0xe:
    if (fVar17 <= fVar18) goto switchD_01f58b00_caseD_22;
  case 0x21:
    lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(in_RCX,0x21);
    (*(code *)puVar4)();
    lVar8 = 0x21;
    break;
  case 0xf:
    lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(in_RCX,0xf);
    if (param_3 <= DAT_0239011c) {
      fVar18 = DAT_0239426c * param_3 * DAT_02394298 + DAT_024112a0;
    }
    else {
      fVar18 = (DAT_02390118 + param_3) * DAT_0239426c * DAT_02394298;
    }
    (*(code *)PTR__objc_msgSend_024a9998)(fVar18);
    lVar8 = 0xf;
    break;
  case 0x22:
switchD_01f58b00_caseD_22:
    lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(in_RCX,0x22);
    (*(code *)puVar4)(DAT_02390124 - param_3);
    lVar8 = 0x22;
    break;
  case 0x24:
switchD_01f58b00_caseD_24:
    lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(in_RCX,0x24);
    lVar8 = (*(code *)puVar4)();
    puVar5 = PTR_s_frame_026ca200;
    if (lVar8 != 0) {
      _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_frame_026ca200);
    }
    lVar9 = (*(code *)PTR__objc_msgSend_024a9998)();
    dVar3 = 0.0;
    if (lVar9 != 0) {
      _objc_msgSend_stret();
      dVar3 = dStack_70;
    }
    auVar13._0_4_ = (float)dVar3 / param_4;
    auVar13._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar13._8_8_ = 0;
    roundss(auVar13,auVar13,9);
    (*(code *)puVar4)();
    lVar9 = (*(code *)puVar4)();
    local_48._0_4_ = 0;
    uVar10 = 0;
    if (lVar9 != 0) {
      _objc_msgSend_stret();
      uVar10 = local_88;
    }
    if (param_4 < DAT_02390124) {
      if (lVar8 == 0) {
        dStack_70 = 0.0;
      }
      else {
        _objc_msgSend_stret();
      }
      lVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar8 == 0) {
        local_140 = 0.0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Qa_03,puVar5);
      }
      auVar13 = roundss(ZEXT816(0),
                        ZEXT416((uint)((DAT_02390124 - param_3) * (float)(dStack_70 - local_140))),9
                       );
      local_48._0_4_ = SUB84((double)auVar13._0_4_,0);
    }
    (*(code *)puVar4)();
    (*(code *)puVar4)(uVar10,local_48._0_4_);
    uVar10 = (*(code *)puVar4)();
    (*(code *)puVar4)(extraout_XMM0_Qa_04,uVar10);
    lVar8 = 0x24;
  }
  if (lVar7 == 0) {
    in_RCX = in_RCX & 0xffffffff;
switchD_01f58b00_caseD_a:
    FUN_01cc0ca0(in_RCX,fVar17,param_3,param_4);
    return;
  }
  fVar15 = (float)((ulonglong)param_1 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  auVar1._4_4_ = fVar15;
  auVar1._0_4_ = fVar15 + DAT_02390124;
  auVar1._8_4_ = uVar16;
  auVar1._12_4_ = uVar16;
  auVar13 = insertps(local_d8,auVar1,0x10);
  fVar18 = DAT_02394298;
  uVar11 = 0;
  if ((uint)lVar8 < 0x25) {
    if ((0x60000c000U >> lVar8 & 1) == 0) {
      uVar11 = 0;
      if ((0x1800000000U >> lVar8 & 1) != 0) {
        auVar2._4_4_ = fVar15;
        auVar2._0_4_ = fVar15 + DAT_02390124 + DAT_02390d00;
        auVar2._8_4_ = uVar16;
        auVar2._12_4_ = uVar16;
        auVar13 = insertps(auVar13,auVar2,0x10);
        fVar18 = 0.0;
        uVar11 = 0;
      }
    }
    else {
      uVar11 = 1;
    }
  }
  if ((uint)lVar8 - 0x23 < 2) {
    if ((*(longlong *)(*unaff_RSI + 0x28) == 0) ||
       (lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(), lVar7 != 0)) goto LAB_01f592b9;
    lVar7 = *(longlong *)(unaff_RDI + 0x40);
    uVar10 = extraout_XMM0_Qa_05;
  }
  else {
    cVar6 = (*(code *)PTR__objc_msgSend_024a9998)(fVar18 + fVar18,PTR_s_setEnabled__026c97e8);
    uVar10 = extraout_XMM0_Qa_06;
    if (cVar6 != '\0') {
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa_06,in_R8B);
    }
    if (*(longlong *)(*unaff_RSI + 0x28) == 0) goto LAB_01f592b9;
  }
  (*(code *)PTR__objc_msgSend_024a9998)(uVar10,lVar7);
LAB_01f592b9:
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = auVar13._0_4_ - fVar18;
  cVar6 = (*(code *)PTR__objc_msgSend_024a9998)(auVar14._0_8_,PTR_s_cell_026ca280);
  puVar4 = PTR__objc_msgSend_024a9998;
  if (cVar6 != '\0') {
    uVar10 = (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)puVar4)(uVar10,1);
  }
  FUN_01f57b80(uVar11,fVar17 + fVar18 + fVar18,local_res8);
  lVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  if ((lVar7 != 0) || (lVar7 = (*(code *)PTR__objc_msgSend_024a9998)(), lVar7 != 0)) {
    (*(code *)PTR__objc_msgSend_024a9998)();
  }
  return;
}


