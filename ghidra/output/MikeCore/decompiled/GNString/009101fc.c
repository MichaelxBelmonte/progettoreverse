// Function: FUN_009101fc
// Address: 009101fc
// Size: 5644 bytes
// Class: GNString


int FUN_009101fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x210;
  lVar8 = unaff_RDI + 0x1ac;
  do {
    psVar4 = local_46;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar3 = (int)local_46[0];
    iVar1 = iVar3 + -1;
    switch(iVar1) {
    case 0:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 8) = local_34;
      *(undefined1 *)(unaff_RDI + 0x214) = 1;
      break;
    case 1:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x215) = 1;
      break;
    case 2:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x10) = local_34;
      *(undefined1 *)(unaff_RDI + 0x216) = 1;
      break;
    case 3:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x20) = *(undefined8 *)(unaff_RDI + 0x18);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x20) - *(longlong *)(unaff_RDI + 0x18);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x20) = *(longlong *)(unaff_RDI + 0x18) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x217) = 1;
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
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
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
    case 0x39:
    case 0x3a:
switchD_009103db_caseD_4:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_00911066:
      iVar3 = iVar3 + iVar2;
      break;
    case 0x13:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x30) = local_34;
      *(undefined1 *)(unaff_RDI + 0x218) = 1;
      break;
    case 0x14:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x219) = 1;
      break;
    case 0x15:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x40) = *(undefined8 *)(unaff_RDI + 0x38);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x40) - *(longlong *)(unaff_RDI + 0x38);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x40) = *(longlong *)(unaff_RDI + 0x38) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x21a) = 1;
      break;
    case 0x16:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(unaff_RDI + 0x50);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x58) - *(longlong *)(unaff_RDI + 0x50);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x58) = *(longlong *)(unaff_RDI + 0x50) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x21b) = 1;
      break;
    case 0x17:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x70) = *(undefined8 *)(unaff_RDI + 0x68);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x70) - *(longlong *)(unaff_RDI + 0x68);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x70) = *(longlong *)(unaff_RDI + 0x68) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x21c) = 1;
      break;
    case 0x18:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x88) = *(undefined8 *)(unaff_RDI + 0x80);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x88) - *(longlong *)(unaff_RDI + 0x80);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x88) = *(longlong *)(unaff_RDI + 0x80) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x21d) = 1;
      break;
    case 0x1d:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x98) = local_34;
      *(undefined1 *)(unaff_RDI + 0x21e) = 1;
      break;
    case 0x1e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0xa8) = *(undefined8 *)(unaff_RDI + 0xa0);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0xa8) - *(longlong *)(unaff_RDI + 0xa0);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0xa8) = *(longlong *)(unaff_RDI + 0xa0) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x21f) = 1;
      break;
    case 0x1f:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0xc0) = *(undefined8 *)(unaff_RDI + 0xb8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0xc0) - *(longlong *)(unaff_RDI + 0xb8);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0xc0) = *(longlong *)(unaff_RDI + 0xb8) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x220) = 1;
      break;
    case 0x20:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0xd8) = *(undefined8 *)(unaff_RDI + 0xd0);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0xd8) - *(longlong *)(unaff_RDI + 0xd0);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0xd8) = *(longlong *)(unaff_RDI + 0xd0) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x221) = 1;
      break;
    case 0x27:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0xe8) = local_34;
      *(undefined1 *)(unaff_RDI + 0x222) = 1;
      break;
    case 0x28:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x223) = 1;
      break;
    case 0x29:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0xf8) = *(undefined8 *)(unaff_RDI + 0xf0);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0xf8) - *(longlong *)(unaff_RDI + 0xf0);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0xf8) = *(longlong *)(unaff_RDI + 0xf0) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x224) = 1;
      break;
    case 0x2a:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x110) = *(undefined8 *)(unaff_RDI + 0x108);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x110) - *(longlong *)(unaff_RDI + 0x108);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x110) = *(longlong *)(unaff_RDI + 0x108) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x225) = 1;
      break;
    case 0x2b:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x128) = *(undefined8 *)(unaff_RDI + 0x120);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x128) - *(longlong *)(unaff_RDI + 0x120);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x128) = *(longlong *)(unaff_RDI + 0x120) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x226) = 1;
      break;
    case 0x2c:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x140) = *(undefined8 *)(unaff_RDI + 0x138);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x140) - *(longlong *)(unaff_RDI + 0x138);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x140) = *(longlong *)(unaff_RDI + 0x138) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x227) = 1;
      break;
    case 0x2d:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x150) = local_34;
      *(undefined1 *)(unaff_RDI + 0x228) = 1;
      break;
    case 0x2e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x160) = *(undefined8 *)(unaff_RDI + 0x158);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x160) - *(longlong *)(unaff_RDI + 0x158);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x160) = *(longlong *)(unaff_RDI + 0x158) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x229) = 1;
      break;
    case 0x3b:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x170) = local_34;
      *(undefined1 *)(unaff_RDI + 0x22a) = 1;
      break;
    case 0x3c:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x22b) = 1;
      break;
    case 0x3d:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x180) = *(undefined8 *)(unaff_RDI + 0x178);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x180) - *(longlong *)(unaff_RDI + 0x178);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x180) = *(longlong *)(unaff_RDI + 0x178) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x22c) = 1;
      break;
    case 0x3e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00911066;
      }
      *(undefined8 *)(unaff_RDI + 0x198) = *(undefined8 *)(unaff_RDI + 400);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x198) = *(longlong *)(unaff_RDI + 400) + uVar6;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x22d) = 1;
      break;
    default:
      iVar1 = iVar3 + -0x50;
      switch(iVar1) {
      case 0:
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x1a8) = local_34;
        *(undefined1 *)(unaff_RDI + 0x22e) = 1;
        break;
      case 1:
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x22f) = 1;
        break;
      case 2:
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        *(undefined8 *)(unaff_RDI + 0x1b8) = *(undefined8 *)(unaff_RDI + 0x1b0);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x1b8) - *(longlong *)(unaff_RDI + 0x1b0);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x1b8) = *(longlong *)(unaff_RDI + 0x1b0) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x230) = 1;
        break;
      case 3:
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        *(undefined8 *)(unaff_RDI + 0x1d0) = *(undefined8 *)(unaff_RDI + 0x1c8);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x1d0) - *(longlong *)(unaff_RDI + 0x1c8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x1d0) = *(longlong *)(unaff_RDI + 0x1c8) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x231) = 1;
        break;
      case 4:
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        *(undefined8 *)(unaff_RDI + 0x1e8) = *(undefined8 *)(unaff_RDI + 0x1e0);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x1e8) - *(longlong *)(unaff_RDI + 0x1e0);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x1e8) = *(longlong *)(unaff_RDI + 0x1e0) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x232) = 1;
        break;
      case 5:
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        *(undefined8 *)(unaff_RDI + 0x200) = *(undefined8 *)(unaff_RDI + 0x1f8);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x200) - *(longlong *)(unaff_RDI + 0x1f8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x200) = *(longlong *)(unaff_RDI + 0x1f8) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x233) = 1;
        break;
      default:
        if (iVar3 != 100) goto switchD_009103db_caseD_4;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_00911066;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x234) = 1;
      }
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


