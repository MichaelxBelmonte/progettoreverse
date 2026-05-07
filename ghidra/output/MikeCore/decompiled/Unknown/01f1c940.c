// Function: FUN_01f1c940
// Address: 01f1c940
// Size: 5681 bytes
// Class: Unknown
// String references:
//   "convertRectToScreen:"
//   "frame"


/* WARNING: Removing unreachable block (ram,0x01f1cf3a) */
/* WARNING: Removing unreachable block (ram,0x01f1cf43) */
/* WARNING: Removing unreachable block (ram,0x01f1cdde) */
/* WARNING: Removing unreachable block (ram,0x01f1cdeb) */
/* WARNING: Removing unreachable block (ram,0x01f1df0b) */
/* WARNING: Removing unreachable block (ram,0x01f1df14) */
/* WARNING: Removing unreachable block (ram,0x01f1d192) */
/* WARNING: Removing unreachable block (ram,0x01f1d19b) */
/* WARNING: Removing unreachable block (ram,0x01f1ce42) */
/* WARNING: Removing unreachable block (ram,0x01f1ce4f) */
/* WARNING: Removing unreachable block (ram,0x01f1ceaf) */
/* WARNING: Removing unreachable block (ram,0x01f1cebc) */
/* WARNING: Removing unreachable block (ram,0x01f1cbda) */
/* WARNING: Removing unreachable block (ram,0x01f1cbe7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_01f1c940(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_var;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint extraout_var_00;
  uint extraout_var_01;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  double *unaff_RDI;
  byte bVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar17;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  double local_a0;
  char local_98;
  ulonglong local_90;
  undefined8 local_88;
  double local_78;
  double local_68;
  double local_58;
  char local_50;
  undefined7 uStack_4f;
  double local_40;
  uint local_34;
  
  puVar3 = PTR__objc_msgSend_024a9998;
  uVar19 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined4)param_2;
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar8 = (*(code *)puVar3)();
  uVar9 = (*(code *)puVar3)();
  (*(code *)puVar3)();
  (*(code *)puVar3)();
  uVar15 = extraout_var_00 & 0x20 |
           extraout_var & 8 |
           (uint)(uVar9 >> 0xe) & 0x10 | (uint)(uVar8 >> 0x13) & 2 | (uint)(uVar7 >> 0xf) & 4;
  (*(code *)puVar3)();
  uVar7 = (*(code *)puVar3)();
  uVar1 = (extraout_var_01 & 0x40) + 0x80 + uVar15;
  uVar15 = uVar15 + (extraout_var_01 & 0x40);
  if ((uVar7 & 0x800000) != 0) {
    uVar15 = uVar1;
  }
  uVar10 = (*(code *)puVar3)();
  puVar3 = PTR__objc_msgSend_024a9998;
  iVar14 = 6;
  switch(uVar10) {
  case 1:
    iVar14 = 1;
    break;
  case 2:
  case 4:
    break;
  case 5:
  case 6:
  case 7:
  case 0x1b:
    iVar14 = 5;
    break;
  default:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0.0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  case 10:
    (*(code *)PTR__objc_msgSend_024a9998)();
  case 0xb:
    uVar10 = _CGEventSourceCreate();
    uVar16 = (*(code *)PTR__objc_msgSend_024a9998)();
    uVar7 = _CGEventCreateKeyboardEvent(uVar16,1);
    if (uVar7 == 0) {
      local_34 = 0;
    }
    else {
      local_90 = uVar7;
      lVar11 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa,uVar7);
      puVar3 = PTR__objc_msgSend_024a9998;
      if (lVar11 == 0) {
        local_34 = 0;
      }
      else {
        local_88 = uVar10;
        (*(code *)PTR__objc_msgSend_024a9998)();
        lVar11 = (*(code *)puVar3)();
        if (lVar11 == 0) {
          local_34 = 0;
        }
        else {
          uVar10 = (*(code *)puVar3)();
          sVar4 = (*(code *)puVar3)(uVar10,0);
          uVar10 = (*(code *)puVar3)();
          if (sVar4 != 0xdf) {
            uVar10 = (*(code *)PTR__objc_msgSend_024a9998)();
          }
          local_34 = (*(code *)PTR__objc_msgSend_024a9998)(uVar10,0);
        }
      }
      _CFRelease();
    }
    _CFRelease();
    lVar11 = (*(code *)PTR__objc_msgSend_024a9998)();
    puVar3 = PTR__objc_msgSend_024a9998;
    if (lVar11 == 10) {
      uVar10 = extraout_XMM0_Qa_01;
      if (DAT_028ba7e8 == 0) {
        _objc_alloc();
        DAT_028ba7e8 = (*(code *)PTR__objc_msgSend_024a9998)();
        uVar10 = extraout_XMM0_Qa_02;
      }
      (*(code *)puVar3)(uVar10,1);
      (*(code *)puVar3)(0,0);
      uVar10 = (*(code *)puVar3)();
      uVar10 = (*(code *)puVar3)(extraout_XMM0_Qa_03,uVar10);
      (*(code *)puVar3)(uVar10,&cf___);
    }
    (*(code *)puVar3)();
    lVar11 = (*(code *)puVar3)();
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar10 = (*(code *)puVar3)();
      uVar6 = (*(code *)puVar3)(uVar10,0);
      uVar7 = (ulonglong)uVar6;
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_00e1ccf0();
    dVar17 = local_58;
    if (local_58 == 0.0) {
      bVar13 = 1;
      bVar2 = false;
      dVar17 = 0.0;
    }
    else if (local_50 == '\0') {
      FUN_00d50b00();
      bVar13 = 0;
      bVar2 = true;
    }
    else {
      bVar13 = 0;
      bVar2 = true;
    }
    sVar4 = (short)uVar7;
    switch((int)uVar7 + 0x900U & 0xffff) {
    case 0:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dcda;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1dcc6:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1dcc6;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dcda:
      uVar15 = uVar15 & 0x1e | 0x400;
      break;
    case 1:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dd01;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1dced:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1dced;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dd01:
      uVar15 = uVar15 & 0x1e | 0x800;
      break;
    case 2:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dd28;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1dd14:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1dd14;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dd28:
      uVar15 = uVar15 & 0x1e | 0x100;
      break;
    case 3:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dd4f;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1dd3b:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1dd3b;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dd4f:
      uVar15 = uVar15 & 0x1e | 0x200;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x2a:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
switchD_01f1d1c3_caseD_4:
      if ((ushort)(sVar4 + 0x8fcU) < 0x23) {
        FUN_00d8ede0();
        local_90 = uVar7;
        if (local_58 == dVar17) {
          if ((bool)(bVar13 & dVar17 != 0.0)) {
            bVar2 = true;
            if (local_50 != '\0') goto LAB_01f1df57;
            bVar2 = true;
            FUN_00d50b00();
          }
LAB_01f1df43:
          if ((local_50 != '\0') && (local_58 != 0.0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0.0) {
              FUN_00d50b00();
            }
            bVar12 = (bool)(bVar2 & dVar17 != 0.0);
            bVar2 = true;
            dVar17 = local_58;
            if (bVar12) {
              FUN_00d50b20();
            }
            goto LAB_01f1df43;
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
LAB_01f1df57:
        local_34 = (int)local_90 + 0x8fd;
        uVar15 = uVar1;
      }
      break;
    case 0x27:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dd76;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1dd62:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1dd62;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dd76:
      uVar15 = uVar15 & 0x1e | 0x2000;
      break;
    case 0x28:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dd9d;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1dd89:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1dd89;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dd9d:
      uVar15 = uVar15 & 0x1e | 0x1000;
      break;
    case 0x29:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1de12;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1ddfe:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1ddfe;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1de12:
      uVar15 = uVar15 & 0x1e | 0x8000;
      break;
    case 0x2b:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1ddc4;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1ddb0:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1ddb0;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1ddc4:
      uVar15 = uVar15 & 0x1e | 0x10000;
      break;
    case 0x2c:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1de39;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1de25:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1de25;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1de39:
      uVar15 = uVar15 & 0x1e | 0x20000;
      break;
    case 0x2d:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1ddeb;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1ddd7:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1ddd7;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1ddeb:
      uVar15 = uVar15 & 0x1e | 0x40000;
      break;
    case 0x39:
      FUN_00d8ede0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & local_58 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1de5d;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1de49:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1de49;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1de5d:
      uVar15 = uVar15 & 0x1e | 0x80000;
      break;
    default:
      if (sVar4 != 3) {
        if (sVar4 != 0x7f) goto switchD_01f1d1c3_caseD_4;
        FUN_00d8ede0();
        if (local_58 == dVar17) {
          if ((bool)(bVar13 & dVar17 != 0.0)) {
            bVar2 = true;
            if (local_50 != '\0') goto LAB_01f1de81;
            bVar2 = true;
            FUN_00d50b00();
          }
LAB_01f1de6d:
          if ((local_50 != '\0') && (local_58 != 0.0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0.0) {
              FUN_00d50b00();
            }
            bVar12 = (bool)(bVar2 & dVar17 != 0.0);
            bVar2 = true;
            dVar17 = local_58;
            if (bVar12) {
              FUN_00d50b20();
            }
            goto LAB_01f1de6d;
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
LAB_01f1de81:
        uVar15 = uVar15 & 0x1e | 0x4000;
        break;
      }
      FUN_00d934d0();
      if (local_58 == dVar17) {
        if ((bool)(bVar13 & dVar17 != 0.0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01f1dea5;
          bVar2 = true;
          FUN_00d50b00();
        }
LAB_01f1de91:
        if ((local_50 != '\0') && (local_58 != 0.0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != 0.0) {
            FUN_00d50b00();
          }
          bVar12 = (bool)(bVar2 & dVar17 != 0.0);
          bVar2 = true;
          dVar17 = local_58;
          if (bVar12) {
            FUN_00d50b20();
          }
          goto LAB_01f1de91;
        }
        bVar12 = (bool)(bVar2 & dVar17 != 0.0);
        bVar2 = true;
        dVar17 = local_58;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
LAB_01f1dea5:
      uVar15 = uVar15 & 0x1e | 0x20;
      local_34 = 0xd;
    }
    local_98 = '\0';
    local_a0 = dVar17;
    FUN_01d3c780(uVar15,&local_a0,local_34 & 0xffff);
    if (local_58 == 0.0) {
      bVar12 = false;
    }
    else if (local_50 == '\0') {
      FUN_00d50b00();
      bVar12 = true;
    }
    else {
      bVar12 = true;
    }
    if ((local_98 != '\0') && (local_a0 != 0.0)) {
      FUN_00d50b20();
    }
    goto LAB_01f1cf53;
  case 0xc:
    FUN_01d3cad0();
    if (local_58 == 0.0) goto LAB_01f1cf4a;
    bVar12 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    goto LAB_01f1cf4d;
  case 0x12:
    iVar14 = 0x10;
    break;
  case 0x16:
    iVar14 = 7;
    break;
  case 0x19:
  case 3:
    iVar14 = 1;
    break;
  case 0x1a:
    break;
  case 0x1e:
    iVar14 = 0xf;
  }
  local_78 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
  local_68 = (double)CONCAT44(uVar19,uVar5);
  lVar11 = (*(code *)puVar3)();
  if (lVar11 != 0) {
    _objc_msgSend_stret();
    local_78 = local_58;
    local_68 = (double)CONCAT71(uStack_4f,local_50);
  }
  uVar10 = (*(code *)puVar3)();
  lVar11 = (*(code *)puVar3)(uVar10,0);
  if (lVar11 == 0) {
    local_40 = 0.0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_frame_026ca200);
  }
  auVar18._0_8_ = (double)(_DAT_023945b0 & (ulonglong)local_78 | _DAT_023945c0) + local_78;
  auVar18._8_8_ =
       (double)(_UNK_023945b8 & (ulonglong)(local_40 - local_68) | _UNK_023945c8) +
       (local_40 - local_68);
  auVar18 = roundpd(auVar18,auVar18,0xb);
  uVar10 = CONCAT44((float)auVar18._8_8_,(float)auVar18._0_8_);
  if (iVar14 == 0x10) {
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_01d3c8f0();
    if (local_58 == 0.0) goto LAB_01f1cf4a;
    bVar12 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (iVar14 == 0xf) {
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_01d3c860();
    if (local_58 == 0.0) goto LAB_01f1cf4a;
    bVar12 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (iVar14 == 7) {
    dVar17 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
    if ((dVar17 != 0.0) || (NAN(dVar17))) {
      local_68 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
    }
    else {
      local_68 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_01d3ca30(uVar10,(float)(local_68 * DAT_023b3bc0),0);
    if (local_58 == 0.0) {
LAB_01f1cf4a:
      bVar12 = false;
    }
    else {
      bVar12 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_01d3c980(uVar10,uVar5,uVar15);
    if (local_58 == 0.0) goto LAB_01f1cf4a;
    bVar12 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_01f1cf4d:
  dVar17 = 0.0;
  bVar2 = false;
LAB_01f1cf53:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (bVar12) {
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else if (local_58 == 0.0) {
    *unaff_RDI = 0.0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_00d50b00();
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((bVar2) && (dVar17 != 0.0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


