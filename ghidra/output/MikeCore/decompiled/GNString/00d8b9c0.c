// Function: FUN_00d8b9c0
// Address: 00d8b9c0
// Size: 1417 bytes
// Class: GNString
// String references:
//   "GNString has no data!"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d8b9c0(void)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *unaff_RSI;
  longlong lVar8;
  longlong unaff_RDI;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  short local_42;
  int local_40;
  undefined4 uStack_3c;
  char local_38;
  
  cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  local_58 = DAT_027815c0;
  lVar5 = DAT_027648d0;
  if (cVar2 != '\0') {
    plVar9 = (longlong *)*unaff_RSI;
    uVar13 = extraout_XMM0_Qa;
    if (DAT_027648d0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_98 = lVar5;
    local_90 = '\x01';
    uVar13 = (**(code **)(*plVar9 + 0x580))(uVar13,&local_98);
    lVar5 = CONCAT44(uStack_3c,local_40);
    if (local_38 == '\0') {
      if (((lVar5 != 0) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
         (CONCAT44(uStack_3c,local_40) != 0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar7 = DAT_027815b0;
    lVar8 = DAT_027815a8;
    if (lVar5 == 0) {
      if (DAT_027815a8 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_88 = lVar8;
      local_80 = '\x01';
      FUN_00cc7b40(uVar13,DAT_025908a0);
      if (local_80 == '\0') {
        return;
      }
      if (local_88 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    plVar9 = (longlong *)*unaff_RSI;
    if (DAT_027815b0 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar7;
    local_70 = '\x01';
    iVar4 = (**(code **)(*plVar9 + 0x520))();
    uVar13 = extraout_XMM0_Qa_00;
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (iVar4 == 5) {
      iVar4 = *(int *)(lVar5 + 0x18);
      *(int *)(unaff_RDI + 0x20) = iVar4 / 2 + -1;
      uVar13 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x18) = uVar13;
      FUN_00e7dbc0(extraout_XMM0_Qa_02,(longlong)iVar4);
      local_68 = DAT_027815b8;
      plVar9 = (longlong *)*unaff_RSI;
      if (DAT_027815b8 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      iVar4 = (**(code **)(*plVar9 + 0x520))();
      uVar13 = extraout_XMM0_Qa_03;
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (iVar4 == 1) {
        FUN_00e7d230(uVar13,3);
      }
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) &&
         (*(longlong *)(unaff_RDI + 0x10) != unaff_RDI + 0x28)) {
        FUN_00e83070();
      }
    }
    else {
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar5 + 0x18);
        if ((longlong)iVar4 < 0x19) {
          lVar5 = unaff_RDI + 0x28;
        }
        else {
          lVar5 = FUN_00e83010();
          uVar13 = extraout_XMM0_Qa_04;
        }
        *(longlong *)(unaff_RDI + 0x10) = lVar5;
        FUN_00e7dbc0(uVar13,(longlong)iVar4);
        goto LAB_00d8be13;
      }
      iVar6 = *(int *)(lVar5 + 0x18);
      uVar13 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x18) = uVar13;
      iVar4 = FUN_00da3950(iVar6 + -1,iVar4);
      *(int *)(unaff_RDI + 0x20) = iVar4;
      *(undefined2 *)(*(longlong *)(unaff_RDI + 0x18) + (longlong)iVar4 * 2) = 0;
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) &&
         (*(longlong *)(unaff_RDI + 0x10) != unaff_RDI + 0x28)) {
        FUN_00e83070();
      }
    }
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
LAB_00d8be13:
    *(byte *)(unaff_RDI + 0x24) = *(byte *)(unaff_RDI + 0x24) & 0xfe;
    FUN_00d50b20();
    return;
  }
  plVar9 = (longlong *)*unaff_RSI;
  if (DAT_027815c0 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  iVar4 = (**(code **)(*plVar9 + 0x598))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)*unaff_RSI;
  if (1 < iVar4) {
    iVar4 = (**(code **)(*plVar9 + 0x428))();
    if (iVar4 == 5) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x478))(extraout_XMM0_Qa_01,2);
      lVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x480))();
      *(longlong *)(unaff_RDI + 0x18) = lVar5;
      auVar14 = _DAT_023de250;
      iVar4 = local_40 / 2 + -1;
      if ((local_42 == -2) && (3 < local_40)) {
        iVar6 = 1;
        if (1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 - 1U < 0xf) {
          uVar11 = 0;
        }
        else {
          uVar12 = (ulonglong)(iVar6 - 1U) + 1;
          uVar11 = uVar12 & 0xfffffffffffffff0;
          uVar10 = (uVar11 - 0x10 >> 4) + 1;
          if (uVar11 - 0x10 == 0) {
            lVar8 = 0;
          }
          else {
            lVar7 = -(uVar10 & 0xfffffffffffffffe);
            lVar8 = 0;
            do {
              auVar15 = pshufb(*(undefined1 (*) [16])(lVar5 + lVar8 * 2),auVar14);
              auVar16 = pshufb(*(undefined1 (*) [16])(lVar5 + 0x10 + lVar8 * 2),auVar14);
              *(undefined1 (*) [16])(lVar5 + lVar8 * 2) = auVar15;
              *(undefined1 (*) [16])(lVar5 + 0x10 + lVar8 * 2) = auVar16;
              auVar15 = pshufb(*(undefined1 (*) [16])(lVar5 + 0x20 + lVar8 * 2),auVar14);
              auVar16 = pshufb(*(undefined1 (*) [16])(lVar5 + 0x30 + lVar8 * 2),auVar14);
              *(undefined1 (*) [16])(lVar5 + 0x20 + lVar8 * 2) = auVar15;
              *(undefined1 (*) [16])(lVar5 + 0x30 + lVar8 * 2) = auVar16;
              lVar8 = lVar8 + 0x20;
              lVar7 = lVar7 + 2;
            } while (lVar7 != 0);
          }
          if ((uVar10 & 1) != 0) {
            auVar14 = pshufb(*(undefined1 (*) [16])(lVar5 + lVar8 * 2),_DAT_023de250);
            auVar15 = pshufb(*(undefined1 (*) [16])(lVar5 + 0x10 + lVar8 * 2),_DAT_023de250);
            *(undefined1 (*) [16])(lVar5 + lVar8 * 2) = auVar14;
            *(undefined1 (*) [16])(lVar5 + 0x10 + lVar8 * 2) = auVar15;
          }
          if (uVar12 == uVar11) goto LAB_00d8befd;
          lVar5 = lVar5 + uVar11 * 2;
        }
        lVar8 = 0;
        do {
          puVar1 = (ushort *)(lVar5 + lVar8 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar8 = lVar8 + 1;
        } while (iVar6 - (int)uVar11 != (int)lVar8);
      }
LAB_00d8befd:
      *(int *)(unaff_RDI + 0x20) = iVar4;
      local_40 = iVar4;
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) &&
         (*(longlong *)(unaff_RDI + 0x10) != unaff_RDI + 0x28)) {
        FUN_00e83070();
      }
      *(undefined8 *)(unaff_RDI + 0x10) = 0;
      goto LAB_00d8bf20;
    }
    if (iVar4 != 0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x480))();
      local_40 = local_40 + -1;
      uVar13 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x18) = uVar13;
      local_40 = FUN_00da3950(local_40,iVar4);
      *(undefined2 *)(*(longlong *)(unaff_RDI + 0x18) + (longlong)local_40 * 2) = 0;
      *(int *)(unaff_RDI + 0x20) = local_40;
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) &&
         (*(longlong *)(unaff_RDI + 0x10) != unaff_RDI + 0x28)) {
        FUN_00e83070();
      }
      *(undefined8 *)(unaff_RDI + 0x10) = 0;
      FUN_00e83070();
      goto LAB_00d8bf20;
    }
    plVar9 = (longlong *)*unaff_RSI;
  }
  uVar13 = (**(code **)(*plVar9 + 0x480))();
  *(undefined8 *)(unaff_RDI + 0x10) = uVar13;
  if (local_40 < 0x19) {
    FUN_00e7dbc0();
    FUN_00e83070();
    *(longlong *)(unaff_RDI + 0x10) = unaff_RDI + 0x28;
  }
LAB_00d8bf20:
  bVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(byte *)(unaff_RDI + 0x24) = *(byte *)(unaff_RDI + 0x24) & 0xfe | bVar3;
  return;
}


