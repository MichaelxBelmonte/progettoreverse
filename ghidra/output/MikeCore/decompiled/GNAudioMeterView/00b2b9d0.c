// Function: FUN_00b2b9d0
// Address: 00b2b9d0
// Size: 2215 bytes
// Class: GNAudioMeterView
// String references:
//   "%0.1f dB "
//   " RMS %0.1f dB"


/* WARNING: Removing unreachable block (ram,0x00b2bc69) */
/* WARNING: Removing unreachable block (ram,0x00b2bc79) */
/* WARNING: Removing unreachable block (ram,0x00b2bade) */
/* WARNING: Removing unreachable block (ram,0x00b2baea) */
/* WARNING: Removing unreachable block (ram,0x00b2bb4b) */
/* WARNING: Removing unreachable block (ram,0x00b2bb57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b2b9d0(undefined4 param_1,float param_2,float param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM4_Qb;
  longlong *local_50;
  undefined4 local_48;
  float local_44;
  longlong *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x17c) == '\0') &&
     (*(char *)((longlong)unaff_RDI + 0x17b) != '\0')) {
    (**(code **)(*plVar2 + 0x3f0))(param_4,0x27,(char)unaff_RDI[0x2f],1);
  }
  FUN_00aea630(*(float *)(unaff_RDI + 0x2a) * param_2);
  fVar7 = (float)FUN_00aea610();
  if ((fVar7 <= 0.0) || (*(char *)((longlong)unaff_RDI + 0x17d) == '\0')) {
    FUN_01cc0c20(param_4,0x27,param_1,param_2);
  }
  else {
    FUN_01cc0c20(param_4,0x27,param_1,param_2);
  }
  if (((_DAT_02391038 < (double)param_2) &&
      (*(float *)(unaff_RDI + 0x23) < *(float *)((longlong)unaff_RDI + 0x114) ||
       *(float *)(unaff_RDI + 0x23) == *(float *)((longlong)unaff_RDI + 0x114))) &&
     (*(char *)((longlong)unaff_RDI + 0x17c) == '\0')) {
    if (fVar7 <= 0.0) {
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cfbee0(DAT_023d59f0);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024d0b28;
    local_44 = fVar7;
    FUN_00d8cb40(fVar7,&local_50);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x3f8))(param_4,1);
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = DAT_028a4db8;
    lVar4 = DAT_028a4da8;
    lVar3 = DAT_028a4d98;
    if (fVar7 <= 0.0) {
      if (fVar7 <= DAT_023b8b2c) {
        if (DAT_028a4da8 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_028a4db8 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (DAT_028a4d98 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    auVar9._8_8_ = in_XMM4_Qb;
    auVar9._0_8_ = in_XMM4_Qa;
    fVar7 = (float)(**(code **)(*plVar2 + 0x560))(param_4);
    auVar10 = blendps(auVar9,_DAT_024215a0,0xd);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))
              (fVar7 + DAT_02390d00 + auVar9._0_4_,auVar10._0_8_);
  }
  if ((double)param_3 <= _DAT_02391038) {
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
  else {
    uVar8 = (**(code **)(*plVar2 + 0x560))(param_4);
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_50 + 0x398))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(uVar8);
    if ((*(float *)(unaff_RDI + 0x23) < *(float *)((longlong)unaff_RDI + 0x114) ||
         *(float *)(unaff_RDI + 0x23) == *(float *)((longlong)unaff_RDI + 0x114)) &&
       (*(char *)((longlong)unaff_RDI + 0x17c) == '\0')) {
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = (longlong *)*unaff_RSI;
      FUN_00aea630(param_3 * *(float *)(unaff_RDI + 0x2a));
      local_44 = (float)FUN_00aea610();
      local_48 = 1;
      local_50 = &DAT_024d0b28;
      FUN_00d8cb40(local_44,&local_50);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar2 + 0x3f8))(param_4,0);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}


