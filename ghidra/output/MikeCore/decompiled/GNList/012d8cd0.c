// Function: FUN_012d8cd0
// Address: 012d8cd0
// Size: 2078 bytes
// Class: GNList
// String references:
//   "P_%02i.%02i.%02i_%02i.%02i.%02i.%02i.wav"


void FUN_012d8cd0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  
  if (DAT_028ac87a == '\0') goto LAB_012d9446;
  uVar6 = FUN_00ce6e90();
  plVar5 = local_80;
  local_120 = DAT_027bedd8;
  if (DAT_027bedd8 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_118 = '\x01';
  (**(code **)(*plVar5 + 0x400))(uVar6,&local_120);
  plVar5 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) goto LAB_012d9446;
  cVar1 = (**(code **)(*plVar5 + 0x3a0))();
  if (cVar1 == '\0') {
    (**(code **)(*plVar5 + 0x420))();
  }
  cVar1 = (**(code **)(*plVar5 + 0x3a0))();
  if ((cVar1 != '\0') && (*(int *)(*(longlong *)(unaff_RDI + 0x108) + 0xc) != 0)) {
    plVar4 = (longlong *)*unaff_RSI;
    FUN_00540c00();
    if (plVar4 == (longlong *)0x0) {
LAB_012d8df9:
      plVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = unaff_RSI;
      if (cVar1 == '\0') goto LAB_012d8df9;
    }
    if (*plVar4 != 0) {
      FUN_01311d20();
      plVar4 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 1000))();
        plVar4 = local_58;
        if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        if (0x1f < *(int *)((longlong)plVar4 + 0xc)) {
          FUN_00d242c0(uVar6,0);
        }
        while( true ) {
          if (*(int *)((longlong)plVar4 + 0xc) < 0x20) break;
          (**(code **)(**(longlong **)plVar4[2] + 0x408))();
          FUN_00d23620();
        }
        FUN_00e31650();
        FUN_00c94880();
        local_98 = local_58;
        if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar2 = FUN_00c938c0();
        local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar2);
        uVar2 = FUN_00c938a0();
        local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar2);
        uVar2 = FUN_00c93880();
        local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar2);
        local_b0 = FUN_00c938f0();
        local_ac = FUN_00c93910();
        local_38 = FUN_00c93930();
        local_34 = (DAT_028ac87c % 100 >> 0x1f & 100U) + DAT_028ac87c % 100;
        local_50 = 7;
        local_4c = local_70._0_4_;
        local_48 = local_60._0_4_;
        local_44 = local_68._0_4_;
        local_40 = local_b0;
        local_3c = local_ac;
        local_58 = (longlong *)&DAT_025df2e0;
        uVar6 = FUN_00d8cb40(local_ac,&local_58);
        local_90 = local_a8;
        local_88 = 0;
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        local_88 = '\x01';
        (**(code **)(*plVar5 + 0x400))(uVar6,&local_90);
        local_68 = local_80;
        if (local_78 == '\0') {
          if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
             (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_110 = local_68;
        local_108 = '\0';
        uVar2 = FUN_00b33590();
        FUN_00b335d0();
        local_f8 = '\0';
        local_100 = 0;
        FUN_00b82410(uVar2,2,0x40,0);
        local_60 = local_58;
        if ((char)local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_025c8348;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(undefined1 *)(puVar3 + 6) = 0;
        (*DAT_025c8360)();
        local_70 = puVar3;
        FUN_00b335d0();
        FUN_011edd50();
        FUN_011edcc0();
        FUN_00b86c20();
        FUN_011edd90();
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (longlong)&DAT_025de318;
        plVar5[2] = 0;
        plVar5[3] = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
        *(undefined8 *)((longlong)plVar5 + 0x2a) = 0;
        *(undefined8 *)((longlong)plVar5 + 0x32) = 0;
        plVar5[8] = 0;
        plVar5[9] = 0;
        plVar5[10] = 0;
        (*DAT_025de330)();
        local_f0 = local_60;
        local_e8 = '\0';
        (**(code **)(*plVar5 + 0x368))();
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_e0 = local_70;
        local_d8 = '\0';
        FUN_013fba30();
        if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_013fb690();
        FUN_00b335d0();
        FUN_013fbb90();
        local_c8 = '\0';
        local_d0 = plVar5;
        FUN_01311cc0();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar5 + 0x398))();
        FUN_00d50b20();
        FUN_00d50b20();
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_012d943e;
      }
    }
    plVar5 = (longlong *)*unaff_RSI;
    FUN_0119a990();
    if (plVar5 == (longlong *)0x0) {
LAB_012d8e6c:
      plVar5 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = unaff_RSI;
      if (cVar1 == '\0') goto LAB_012d8e6c;
    }
    if (*plVar5 != 0) {
      FUN_01311d20();
      plVar5 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_01311d20();
        FUN_013fb6a0();
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_b8 = '\0';
        local_c0 = 0;
        FUN_01311cc0();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_012d943e:
  FUN_00d50b20();
LAB_012d9446:
  local_58 = (longlong *)*unaff_RSI;
  local_50 = local_50 & 0xffffff00;
  FUN_00e323f0();
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


