// Function: FUN_01f1c940
// Address: 01f1c940
// Size: 5681 bytes
// Class: Unknown
// String references:
//   "convertRectToScreen:"
//   "frame"

double * FUN_01f1c940(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  bool bVar2;
  void*puVar3;
  short sVar4;
  uint32_t uVar5;
  uint uVar6;
  uint extraout_var;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint extraout_var_00;
  uint extraout_var_01;
  uint64_t uVar10;
  int64_t lVar11;
  bool bVar12;
  double *this_ptr;
  byte bVar13;
  int iVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar17;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint8_t auVar18 [16];
  uint32_t uVar19;
  double local_a0;
  char local_98;
  uint64_t local_90;
  uint64_t local_88;
  double local_78;
  double local_68;
  double local_58;
  char local_50;
  undefined7 uStack_4f;
  double local_40;
  uint local_34;
  
  puVar3 = PTR__objc_msgSend_024a9998;
  uVar19 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar5 = (uint32_t)param_2;
  uVar7 = (*PTR__objc_msgSend_024a9998)();
  uVar8 = (*puVar3)();
  uVar9 = (*puVar3)();
  (*puVar3)();
  (*puVar3)();
  uVar15 = extraout_var_00 & 0x20 |
           extraout_var & 8 |
           (uint)(uVar9 >> 0xe) & 0x10 | (uint)(uVar8 >> 0x13) & 2 | (uint)(uVar7 >> 0xf) & 4;
  (*puVar3)();
  uVar7 = (*puVar3)();
  uVar1 = (extraout_var_01 & 0x40) + 0x80 + uVar15;
  uVar15 = uVar15 + (extraout_var_01 & 0x40);
  if ((uVar7 & 0x800000) != 0) {
    uVar15 = uVar1;
  }
  uVar10 = (*puVar3)();
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
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0.0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  case 10:
    (*PTR__objc_msgSend_024a9998)();
  case 0xb:
    uVar10 = _CGEventSourceCreate();
    uVar16 = (*PTR__objc_msgSend_024a9998)();
    uVar7 = _CGEventCreateKeyboardEvent(uVar16,1);
    if (uVar7 == 0) {
      local_34 = 0;
    }
    else {
      local_90 = uVar7;
      lVar11 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa,uVar7);
      puVar3 = PTR__objc_msgSend_024a9998;
      if (lVar11 == 0) {
        local_34 = 0;
      }
      else {
        local_88 = uVar10;
        (*PTR__objc_msgSend_024a9998)();
        lVar11 = (*puVar3)();
        if (lVar11 == 0) {
          local_34 = 0;
        }
        else {
          uVar10 = (*puVar3)();
          sVar4 = (*puVar3)(uVar10,0);
          uVar10 = (*puVar3)();
          if (sVar4 != 0xdf) {
            uVar10 = (*PTR__objc_msgSend_024a9998)();
          }
          local_34 = (*PTR__objc_msgSend_024a9998)(uVar10,0);
        }
      }
      _CFRelease();
    }
    _CFRelease();
    lVar11 = (*PTR__objc_msgSend_024a9998)();
    puVar3 = PTR__objc_msgSend_024a9998;
    if (lVar11 == 10) {
      uVar10 = extraout_XMM0_Qa_01;
      if (g_028ba7e8 == 0) {
        _objc_alloc();
        g_028ba7e8 = (*PTR__objc_msgSend_024a9998)();
        uVar10 = extraout_XMM0_Qa_02;
      }
      (*puVar3)(uVar10,1);
      (*puVar3)(0,0);
      uVar10 = (*puVar3)();
      uVar10 = (*puVar3)(extraout_XMM0_Qa_03,uVar10);
      (*puVar3)(uVar10,&cf___);
    }
    (*puVar3)();
    lVar11 = (*puVar3)();
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar10 = (*puVar3)();
      uVar6 = (*puVar3)(uVar10,0);
      uVar7 = (uint64_t)uVar6;
    }
    (*PTR__objc_msgSend_024a9998)();
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
  local_78 = (double)(*PTR__objc_msgSend_024a9998)();
  local_68 = (double)CONCAT44(uVar19,uVar5);
  lVar11 = (*puVar3)();
  if (lVar11 != 0) {
    _objc_msgSend_stret();
    local_78 = local_58;
    local_68 = (double)CONCAT71(uStack_4f,local_50);
  }
  uVar10 = (*puVar3)();
  lVar11 = (*puVar3)(uVar10,0);
  if (lVar11 == 0) {
    local_40 = 0.0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_frame_026ca200);
  }
  auVar18._0_8_ = (double)(g_023945b0 & (uint64_t)local_78 | g_023945c0) + local_78;
  auVar18._8_8_ =
       (double)(_UNK_023945b8 & (uint64_t)(local_40 - local_68) | _UNK_023945c8) +
       (local_40 - local_68);
  auVar18 = roundpd(auVar18,auVar18,0xb);
  uVar10 = CONCAT44((float)auVar18._8_8_,(float)auVar18._0_8_);
  if (iVar14 == 0x10) {
    (*PTR__objc_msgSend_024a9998)();
    FUN_01d3c8f0();
    if (local_58 == 0.0) goto LAB_01f1cf4a;
    bVar12 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (iVar14 == 0xf) {
    (*PTR__objc_msgSend_024a9998)();
    FUN_01d3c860();
    if (local_58 == 0.0) goto LAB_01f1cf4a;
    bVar12 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (iVar14 == 7) {
    dVar17 = (double)(*PTR__objc_msgSend_024a9998)();
    if ((dVar17 != 0.0) || (NAN(dVar17))) {
      local_68 = (double)(*PTR__objc_msgSend_024a9998)();
    }
    else {
      local_68 = (double)(*PTR__objc_msgSend_024a9998)();
    }
    (*PTR__objc_msgSend_024a9998)();
    FUN_01d3ca30(uVar10,(float)(local_68 * g_023b3bc0),0);
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
    uVar5 = (*PTR__objc_msgSend_024a9998)();
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
  *(void*)(this_ptr + 1) = 0;
  if (bVar12) {
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  else if (local_58 == 0.0) {
    *this_ptr = 0.0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00d50b00();
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((bVar2) && (dVar17 != 0.0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

