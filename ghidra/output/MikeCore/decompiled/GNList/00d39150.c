// Function: FUN_00d39150
// Address: 00d39150
// Size: 3454 bytes
// Class: GNList
// String references:
//   "%I"
//   "%@"
//   "%f"
//   "%c"
//   "%@->%s("
//   ", %@"
//   ");"


undefined8 * FUN_00d39150(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_78;
  uint local_70;
  float local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  char local_50;
  undefined8 local_48;
  ulonglong local_40;
  byte local_31;
  
  if ((((*(longlong *)(unaff_RSI + 0x10) == 0) || (*(longlong *)(unaff_RSI + 0x18) == 0)) ||
      (*(longlong *)(unaff_RSI + 0x20) == 0)) || (*(longlong *)(unaff_RSI + 0x28) == 0)) {
    FUN_00d4ffd0();
  }
  else {
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_025795a8;
    (*DAT_025795c0)();
    uVar23 = (**(code **)(**(longlong **)(unaff_RSI + 0x20) + 0x198))();
    local_58 = local_78;
    local_60 = 2;
    local_68 = &DAT_024c5048;
    local_50 = 0;
    if (local_78 != (undefined8 *)0x0) {
      uVar23 = FUN_00d50b00();
    }
    local_50 = '\x01';
    local_68 = (undefined8 *)&DAT_024c59c8;
    local_48 = *(undefined8 *)(unaff_RSI + 0x10);
    uVar23 = FUN_00d94d80(uVar23,&local_68);
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      uVar23 = FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      uVar23 = FUN_00d50b20();
    }
    lVar12 = *(longlong *)(unaff_RSI + 0x28);
    if (*(int *)(lVar12 + 0x18) < 0x30) {
      local_40 = 0;
      puVar17 = (undefined8 *)0x0;
    }
    else {
      lVar21 = 1;
      lVar20 = 0x18;
      local_40 = 0;
      puVar19 = (undefined8 *)0x0;
      do {
        puVar9 = DAT_027e3c48;
        puVar18 = DAT_02787960;
        puVar8 = DAT_0277d7e8;
        puVar7 = DAT_0277d7e0;
        puVar6 = DAT_0277d7d8;
        puVar5 = DAT_02772530;
        puVar4 = DAT_02772528;
        puVar3 = DAT_02772518;
        puVar2 = DAT_02772510;
        puVar1 = DAT_02772508;
        lVar12 = *(longlong *)(lVar12 + 0x10);
        iVar15 = (int)*(char *)(lVar12 + 0x10 + lVar20);
        uVar16 = iVar15 - 0x40;
        puVar17 = puVar19;
        if (0x33 < uVar16) {
switchD_00d392e1_caseD_41:
          if (DAT_0277d7e8 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa;
          }
          if (puVar19 == puVar8) {
            uVar14 = local_40 & 0xff;
            if (puVar8 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar8 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar8;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          goto LAB_00d39d0b;
        }
        switch(iVar15) {
        case 0x40:
          if (*(longlong **)(lVar12 + lVar20) == (longlong *)0x0) {
            if (DAT_0277d7d8 != (undefined8 *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_90 = puVar6;
            local_88 = '\x01';
          }
          else {
            uVar23 = (**(code **)(**(longlong **)(lVar12 + lVar20) + 0x198))();
          }
          local_60 = 1;
          local_68 = &DAT_024c5048;
          local_50 = 0;
          if (local_90 != (undefined8 *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = local_90;
          uVar13 = FUN_00d8cb40(uVar23,&local_68);
          puVar17 = local_78;
          uVar23 = extraout_XMM0_Qa_07;
          if (local_78 == puVar19) {
            puVar17 = puVar19;
            bVar10 = (byte)local_40;
            if (((byte)local_40 == 0) && (bVar10 = (byte)local_40, local_78 != (undefined8 *)0x0)) {
              if ((char)local_70 != '\0') goto LAB_00d39a74;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
              bVar10 = local_31;
            }
LAB_00d39df7:
            local_31 = bVar10;
            if (((char)local_70 == '\0') || (local_78 == (undefined8 *)0x0)) {
              local_40 = (ulonglong)local_31;
            }
            else {
              uVar23 = FUN_00d50b20();
              local_40 = (ulonglong)local_31;
            }
          }
          else {
            if ((char)local_70 == '\0') {
              if (local_78 != (undefined8 *)0x0) {
                uVar23 = FUN_00d50b00();
              }
              local_31 = 1;
              bVar10 = local_31;
              if (((byte)local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
                uVar23 = FUN_00d50b20();
                bVar10 = local_31;
              }
              goto LAB_00d39df7;
            }
            if (((byte)local_40 != 0) && (puVar19 != (undefined8 *)0x0)) {
              uVar13 = FUN_00d50b20();
              uVar23 = extraout_XMM0_Qa_08;
            }
LAB_00d39a74:
            local_70 = local_70 & 0xffffff00;
            local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
          }
          local_68 = &DAT_024c5048;
          if ((local_50 != '\0') && (local_68 = &DAT_024c5048, local_58 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          uVar14 = local_40;
          if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
            uVar14 = local_40;
          }
          break;
        default:
          goto switchD_00d392e1_caseD_41;
        case 0x43:
          if (DAT_02772508 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_00;
          }
          if (puVar19 == puVar1) {
            uVar14 = local_40 & 0xff;
            if (puVar1 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar1 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar1;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x45:
          if (DAT_02772530 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_01;
          }
          if (puVar19 == puVar5) {
            uVar14 = local_40 & 0xff;
            if (puVar5 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar5 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar5;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x49:
          local_6c = *(float *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &DAT_024cc6f0;
          uVar23 = FUN_00d8cb40(&DAT_024cc6f0,&local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (undefined8 *)0x0)) {
              if ((char)local_60 != '\0') {
LAB_00d39a48:
                local_31 = 1;
                puVar17 = puVar19;
                goto LAB_00d39d00;
              }
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (undefined8 *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (undefined8 *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 0x50:
          if (DAT_02772518 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_02;
          }
          if (puVar19 == puVar3) {
            uVar14 = local_40 & 0xff;
            if (puVar3 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar3 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar3;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x52:
          if (DAT_02772528 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_03;
          }
          if (puVar19 == puVar4) {
            uVar14 = local_40 & 0xff;
            if (puVar4 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar4 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar4;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x5e:
          if (DAT_0277d7e0 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_05;
          }
          if (puVar19 == puVar7) {
            uVar14 = local_40 & 0xff;
            if (puVar7 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar7 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar7;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x62:
          if (*(char *)(lVar12 + lVar20) == '\0') {
            if (DAT_02787960 != (undefined8 *)0x0) {
              lVar12 = FUN_00d50b00();
              uVar23 = extraout_XMM0_Qa_09;
              goto LAB_00d397e5;
            }
            puVar18 = (undefined8 *)0x0;
            if (puVar19 != (undefined8 *)0x0) goto LAB_00d397ee;
LAB_00d39aa6:
            if (((byte)local_40 == '\0') && (puVar18 != (undefined8 *)0x0)) {
              uVar14 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            }
            else {
              uVar14 = local_40;
              if (puVar18 != (undefined8 *)0x0) {
                uVar23 = FUN_00d50b20();
                uVar14 = local_40;
              }
            }
          }
          else {
            if (DAT_027e3c48 == (undefined8 *)0x0) {
              puVar18 = (undefined8 *)0x0;
              if (puVar19 == (undefined8 *)0x0) goto LAB_00d39aa6;
            }
            else {
              lVar12 = FUN_00d50b00();
              puVar18 = puVar9;
              uVar23 = extraout_XMM0_Qa_06;
LAB_00d397e5:
              if (puVar19 == puVar18) goto LAB_00d39aa6;
            }
LAB_00d397ee:
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar18;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 99:
          local_70 = 1;
          local_78 = (undefined8 *)&DAT_025732e0;
          local_6c = (float)CONCAT31(local_6c._1_3_,*(undefined1 *)(lVar12 + lVar20));
          uVar23 = FUN_00d8cb40(&DAT_025732e0,&local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (undefined8 *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (undefined8 *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (undefined8 *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 100:
          local_6c = (float)*(double *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &DAT_024d0b28;
          uVar23 = FUN_00d8cb40((longlong)&switchD_00d392e1::switchdataD_00d3a3d4 +
                                (longlong)(int)(&switchD_00d392e1::switchdataD_00d3a3d4)[uVar16],
                                &local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (undefined8 *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (undefined8 *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (undefined8 *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 0x66:
          local_6c = *(float *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &DAT_024d0b28;
          uVar23 = FUN_00d8cb40((longlong)&switchD_00d392e1::switchdataD_00d3a3d4 +
                                (longlong)(int)(&switchD_00d392e1::switchdataD_00d3a3d4)[uVar16],
                                &local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (undefined8 *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (undefined8 *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (undefined8 *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 0x71:
          if (DAT_02772510 != (undefined8 *)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_04;
          }
          if (puVar19 == puVar2) {
            uVar14 = local_40 & 0xff;
            if (puVar2 != (undefined8 *)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar2 != (undefined8 *)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
            puVar17 = puVar2;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x73:
          local_6c = (float)(int)*(short *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &DAT_024cc6f0;
          uVar23 = FUN_00d8cb40(&DAT_024cc6f0,&local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (undefined8 *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (undefined8 *)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (undefined8 *)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
LAB_00d39d00:
          uVar14 = (ulonglong)local_31;
        }
LAB_00d39d0b:
        local_40 = uVar14;
        if (lVar21 == 1) {
          local_60 = 1;
          local_68 = &DAT_024c5048;
          local_50 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = puVar17;
          uVar23 = FUN_00d94d80(uVar23,&local_68);
          local_68 = &DAT_024c5048;
          if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
        }
        else {
          local_60 = 1;
          local_68 = &DAT_024c5048;
          local_50 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = puVar17;
          uVar23 = FUN_00d94d80(uVar23,&local_68);
          local_68 = &DAT_024c5048;
          if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
        }
        lVar21 = lVar21 + 1;
        lVar12 = *(longlong *)(unaff_RSI + 0x28);
        lVar20 = lVar20 + 0x18;
        puVar19 = puVar17;
      } while (lVar21 < *(int *)(lVar12 + 0x18) / 0x18);
    }
    FUN_00d94d80(uVar23,DAT_025908a0);
    *unaff_RDI = puVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (((byte)local_40 != '\0') && (puVar17 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


