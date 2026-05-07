// Function: FUN_00e5e410
// Address: 00e5e410
// Size: 1525 bytes
// Class: GNBinaryArchiveTypeInfoContainer
// String references:
//   "1.2.13"


void FUN_00e5e410(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double dVar7;
  longlong in_stack_fffffffffffffea8;
  longlong lVar8;
  char in_stack_fffffffffffffeb0;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((((in_stack_fffffffffffffeb0 == '\0') && (in_stack_fffffffffffffea8 != 0)) &&
      (lVar8 = in_stack_fffffffffffffea8, FUN_00d50b00(), in_stack_fffffffffffffeb0 != '\0')) &&
     (lVar8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  uVar9 = (ulonglong)*(uint *)(*param_2 + 0x18);
  uVar10 = (ulonglong)*(uint *)(unaff_RSI + 0x14);
  uVar6 = 0xfffffff1;
  if (*(char *)(unaff_RSI + 0x18) == '\0') {
    uVar6 = 0xf;
  }
  iVar3 = FUN_00f43520(uVar6,8,*(undefined4 *)(unaff_RSI + 0x10),0,*(undefined8 *)(*param_2 + 0x10),
                       uVar9,0,*(undefined8 *)(in_stack_fffffffffffffea8 + 0x10),uVar10,0,0,0,0,0,0,
                       0,0,0);
  lVar8 = DAT_02787228;
  if (iVar3 == -4) {
    uVar6 = extraout_XMM0_Qa;
    if (DAT_02787228 != 0) {
      uVar6 = FUN_00d50b00();
    }
    lVar2 = DAT_02787230;
    if (DAT_02787230 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    FUN_00df3740(uVar6,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = extraout_XMM0_Qa;
    if (iVar3 == 0) {
      do {
        if ((int)uVar10 == 0) {
          FUN_00c8e340(uVar6,0);
          uVar10 = (ulonglong)*(uint *)(unaff_RSI + 0x14);
        }
        iVar3 = FUN_00f43ef0();
        lVar8 = DAT_02787228;
      } while ((iVar3 == 0) && (uVar6 = extraout_XMM0_Qa_00, (int)uVar9 != 0));
      uVar6 = extraout_XMM0_Qa_00;
      if (iVar3 == 0) {
        do {
          if ((int)uVar10 == 0) {
            FUN_00c8e340(uVar6,0);
            uVar10 = (ulonglong)*(uint *)(unaff_RSI + 0x14);
          }
          iVar3 = FUN_00f43ef0();
          uVar6 = extraout_XMM0_Qa_01;
        } while (iVar3 == 0);
        FUN_00c8e340(extraout_XMM0_Qa_01,0);
        uVar6 = FUN_00f438b0();
        lVar8 = DAT_02787228;
        if (iVar3 == 1) {
          if (*(char *)(unaff_RSI + 0x18) == '\0') {
            *unaff_RDI = in_stack_fffffffffffffea8;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return;
          }
          FUN_00c8e690();
          lVar8 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          puVar1 = *(undefined4 **)(lVar8 + 0x10);
          *puVar1 = 0x88b1f;
          local_48 = lVar8;
          dVar7 = (double)FUN_00e7d6f0();
          *(longlong *)(puVar1 + 2) = (longlong)dVar7;
          cVar5 = '\x04';
          if (*(int *)(unaff_RSI + 0xc) != 1) {
            cVar5 = (*(int *)(unaff_RSI + 0xc) == 9) * '\x02';
          }
          *(char *)(puVar1 + 4) = cVar5;
          *(undefined1 *)((longlong)puVar1 + 0x11) = 0x13;
          local_60 = '\0';
          local_68 = in_stack_fffffffffffffea8;
          FUN_00c8e5b0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          FUN_00c8e690();
          lVar8 = local_40;
          if (((local_38 == '\0') && (local_40 != 0)) &&
             ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
            FUN_00d50b20();
          }
          uVar6 = FUN_00c92170();
          puVar1 = *(undefined4 **)(lVar8 + 0x10);
          uVar4 = FUN_00f43510(uVar6,*(undefined4 *)(*param_2 + 0x18));
          *puVar1 = uVar4;
          puVar1[1] = *(undefined4 *)(*param_2 + 0x18);
          local_58 = lVar8;
          local_50 = '\0';
          FUN_00c8e5b0();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          *unaff_RDI = local_48;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00d50b20();
          goto LAB_00e5e776;
        }
        if (DAT_02787228 != 0) {
          uVar6 = FUN_00d50b00();
        }
        lVar2 = DAT_02787240;
        local_88 = lVar8;
        local_80 = '\x01';
        if (DAT_02787240 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_78 = lVar2;
        local_70 = '\x01';
        FUN_00df3740(uVar6,&local_78);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_02787228 != 0) {
          uVar6 = FUN_00d50b00();
        }
        lVar2 = DAT_02787240;
        local_a8 = lVar8;
        local_a0 = '\x01';
        if (DAT_02787240 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_98 = lVar2;
        local_90 = '\x01';
        FUN_00df3740(uVar6,&local_98);
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (DAT_02787228 != 0) {
        uVar6 = FUN_00d50b00();
      }
      lVar2 = DAT_02787238;
      local_c8 = lVar8;
      local_c0 = '\x01';
      if (DAT_02787238 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      FUN_00df3740(uVar6,&local_b8);
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00e5e776:
  if (in_stack_fffffffffffffea8 != 0) {
    FUN_00d50b20();
  }
  return;
}


