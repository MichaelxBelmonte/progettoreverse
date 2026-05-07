// Function: FUN_0024e680
// Address: 0024e680
// Size: 10293 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x0024ee11) */
/* WARNING: Removing unreachable block (ram,0x0024ffc9) */
/* WARNING: Removing unreachable block (ram,0x0024fc0a) */
/* WARNING: Removing unreachable block (ram,0x0024fa1c) */
/* WARNING: Removing unreachable block (ram,0x0024f68a) */
/* WARNING: Removing unreachable block (ram,0x0024f4a2) */
/* WARNING: Removing unreachable block (ram,0x0024f110) */
/* WARNING: Removing unreachable block (ram,0x0024ef28) */
/* WARNING: Removing unreachable block (ram,0x0024ecb7) */
/* WARNING: Removing unreachable block (ram,0x0024f1e5) */
/* WARNING: Removing unreachable block (ram,0x0024f3cd) */
/* WARNING: Removing unreachable block (ram,0x0024f75f) */
/* WARNING: Removing unreachable block (ram,0x0024f947) */
/* WARNING: Removing unreachable block (ram,0x0024fceb) */
/* WARNING: Removing unreachable block (ram,0x0024fed9) */
/* WARNING: Removing unreachable block (ram,0x00250219) */
/* WARNING: Removing unreachable block (ram,0x0025040b) */
/* WARNING: Removing unreachable block (ram,0x002504ed) */
/* WARNING: Removing unreachable block (ram,0x002506d3) */
/* WARNING: Removing unreachable block (ram,0x002507b5) */
/* WARNING: Removing unreachable block (ram,0x0025099b) */
/* WARNING: Removing unreachable block (ram,0x00250a7d) */
/* WARNING: Removing unreachable block (ram,0x00250c63) */
/* WARNING: Removing unreachable block (ram,0x00250d3f) */
/* WARNING: Removing unreachable block (ram,0x0024e7df) */
/* WARNING: Removing unreachable block (ram,0x0024e7e8) */
/* WARNING: Removing unreachable block (ram,0x0024e6e7) */
/* WARNING: Removing unreachable block (ram,0x0024e6f0) */
/* WARNING: Removing unreachable block (ram,0x0024e913) */
/* WARNING: Removing unreachable block (ram,0x0024e91c) */
/* WARNING: Removing unreachable block (ram,0x0024e9a3) */
/* WARNING: Removing unreachable block (ram,0x0024e9ac) */

void FUN_0024e680(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  if (unaff_ESI != 1) {
    if (unaff_ESI != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    plVar2 = DAT_02804690;
    if (DAT_02804690 == (longlong *)0x0) {
      FUN_0027c9f0();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar2 + 0x18))();
      bVar6 = DAT_02804690 == (longlong *)0x0;
      DAT_02804690 = plVar2;
      if (((bVar6) || (FUN_00d50b20(), DAT_02804690 != (longlong *)0x0)) && (DAT_02804698 == '\0'))
      {
        DAT_02804698 = '\x01';
        FUN_00e8cb90();
      }
      lVar1 = DAT_026f6f10;
      if (DAT_026f6f10 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      lVar4 = local_48;
      if (local_48 == 0) {
        bVar5 = 1;
        lVar4 = 0;
        bVar6 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar5 = 0;
        bVar6 = true;
      }
      else {
        local_40 = '\0';
        bVar6 = true;
        bVar5 = 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = DAT_026dec58;
      if (DAT_026dec58 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar4) {
        if ((bool)(bVar5 & local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024ec9d;
          bVar6 = true;
          FUN_00d50b00();
        }
LAB_0024eea2:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar7 = (bool)(bVar6 & lVar4 != 0);
          bVar6 = true;
          lVar4 = local_48;
          if (bVar7) {
            FUN_00d50b20();
          }
          goto LAB_0024eea2;
        }
        bVar7 = lVar4 != 0;
        lVar4 = local_48;
        if ((bool)(bVar6 & bVar7)) {
          FUN_00d50b20();
        }
LAB_0024ec9d:
        local_40 = '\0';
        bVar6 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = DAT_026f6f20;
      if (DAT_026f6f20 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar4) {
        lVar3 = lVar4;
        bVar7 = bVar6;
        if ((!bVar6) && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024f0f6;
          FUN_00d50b00();
          bVar7 = true;
        }
LAB_0024f41c:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar7 = true;
          if ((bVar6) && (lVar4 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024f41c;
        }
        if ((bVar6) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_0024f0f6:
        local_40 = '\0';
        bVar7 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = DAT_026dec60;
      if (DAT_026dec60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar3) {
        lVar4 = lVar3;
        bVar6 = bVar7;
        if ((!bVar7) && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024f670;
          FUN_00d50b00();
          bVar6 = true;
        }
LAB_0024f996:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar4 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar6 = true;
          if ((bVar7) && (lVar3 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024f996;
        }
        if ((bVar7) && (lVar3 != 0)) {
          FUN_00d50b20();
        }
LAB_0024f670:
        local_40 = '\0';
        bVar6 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = DAT_026f6f30;
      if (DAT_026f6f30 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar4) {
        lVar3 = lVar4;
        bVar7 = bVar6;
        if ((!bVar6) && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024fbf0;
          FUN_00d50b00();
          bVar7 = true;
        }
LAB_0024ff3d:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar7 = true;
          if ((bVar6) && (lVar4 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
          }
          goto LAB_0024ff3d;
        }
        if ((bVar6) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_0024fbf0:
        local_40 = '\0';
        bVar7 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      plVar2 = DAT_02804690;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
        plVar2 = DAT_02804690;
      }
    }
LAB_0025014a:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    goto joined_r0x00250eaa;
  }
  plVar2 = DAT_02804680;
  if (DAT_02804680 != (longlong *)0x0) goto LAB_0025014a;
  FUN_0027c9f0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  bVar6 = DAT_02804680 == (longlong *)0x0;
  DAT_02804680 = plVar2;
  if (((bVar6) || (FUN_00d50b20(), DAT_02804680 != (longlong *)0x0)) && (DAT_02804688 == '\0')) {
    DAT_02804688 = '\x01';
    FUN_00e8cb90();
  }
  lVar1 = DAT_026f6f10;
  if (DAT_026f6f10 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  lVar4 = local_48;
  if (local_48 == 0) {
    bVar5 = 1;
    lVar4 = 0;
    bVar6 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar5 = 0;
    bVar6 = true;
  }
  else {
    local_40 = '\0';
    bVar6 = true;
    bVar5 = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026dec58;
  if (DAT_026dec58 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    if ((bool)(bVar5 & local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024edf7;
      bVar6 = true;
      FUN_00d50b00();
    }
LAB_0024f15f:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = (bool)(bVar6 & lVar4 != 0);
      bVar6 = true;
      lVar4 = local_48;
      if (bVar7) {
        FUN_00d50b20();
      }
      goto LAB_0024f15f;
    }
    bVar7 = lVar4 != 0;
    lVar4 = local_48;
    if ((bool)(bVar6 & bVar7)) {
      FUN_00d50b20();
    }
LAB_0024edf7:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026f6f20;
  if (DAT_026f6f20 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024f3b3;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_0024f6d9:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0024f6d9;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_0024f3b3:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026dec60;
  if (DAT_026dec60 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar3) {
    lVar4 = lVar3;
    bVar6 = bVar7;
    if ((!bVar7) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024f92d;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_0024fc65:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0024fc65;
    }
    if ((bVar7) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_0024f92d:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026f6f30;
  if (DAT_026f6f30 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024febf;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_0025018d:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
        bVar7 = true;
      }
      goto LAB_0025018d;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_0024febf:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d5dc80();
  lVar1 = DAT_026f6f38;
  if (DAT_026f6f38 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar3) {
    lVar4 = lVar3;
    bVar6 = bVar7;
    if ((!bVar7) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_002503f5;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_00250461:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
        bVar6 = true;
      }
      goto LAB_00250461;
    }
    if ((bVar7) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_002503f5:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026f6f40;
  if (DAT_026f6f40 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_002506bd;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_00250729:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
        bVar7 = true;
      }
      goto LAB_00250729;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_002506bd:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026f6f48;
  if (DAT_026f6f48 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar3) {
    lVar4 = lVar3;
    bVar6 = bVar7;
    if ((!bVar7) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_00250985;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_002509f1:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
        bVar6 = true;
      }
      goto LAB_002509f1;
    }
    if ((bVar7) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00250985:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026f6f50;
  if (DAT_026f6f50 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_00250c4d;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_00250cb9:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
        bVar7 = true;
      }
      goto LAB_00250cb9;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_00250c4d:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((bVar7) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_02804680;
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x00250eaa:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


