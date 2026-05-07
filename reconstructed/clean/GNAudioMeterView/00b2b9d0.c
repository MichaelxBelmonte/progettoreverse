// Function: FUN_00b2b9d0
// Address: 00b2b9d0
// Size: 2215 bytes
// Class: GNAudioMeterView
// String references:
//   "%0.1f dB "
//   " RMS %0.1f dB"
// === GNAudioMeterView properties ===
//                   _drawsSliderShadow
//                   _showsPeakBorder
//                   _isOutputSlot
//                   _isDefaultSlot
//                   _stereoItemCount
//                   _ioObserver
//                   _ioConfig


void FUN_00b2b9d0(uint32_t param_1,float param_2,float param_3,uint32_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void*arg1;
  int64_t *this_ptr;
  float fVar7;
  uint32_t uVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM4_Qb;
  int64_t *local_50;
  uint32_t local_48;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((int64_t)this_ptr + 0x17c) == '\0') &&
     (*(char *)((int64_t)this_ptr + 0x17b) != '\0')) {
    (**(code **)(*plVar2 + 0x3f0))(param_4,0x27,(char)this_ptr[0x2f],1);
  }
  FUN_00aea630(*(float *)(this_ptr + 0x2a) * param_2);
  fVar7 = (float)FUN_00aea610();
  if ((fVar7 <= 0.0) || (*(char *)((int64_t)this_ptr + 0x17d) == '\0')) {
    FUN_01cc0c20(param_4,0x27,param_1,param_2);
  }
  else {
    FUN_01cc0c20(param_4,0x27,param_1,param_2);
  }
  if (((g_02391038 < (double)param_2) &&
      (*(float *)(this_ptr + 0x23) < *(float *)((int64_t)this_ptr + 0x114) ||
       *(float *)(this_ptr + 0x23) == *(float *)((int64_t)this_ptr + 0x114))) &&
     (*(char *)((int64_t)this_ptr + 0x17c) == '\0')) {
    if (fVar7 <= 0.0) {
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cfbee0(g_023d59f0);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar1 = (int64_t *)*arg1;
    local_48 = 1;
    local_50 = &g_024d0b28;
    local_44 = fVar7;
    FUN_00d8cb40(fVar7,&local_50);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x3f8))(param_4,1);
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = g_028a4db8;
    lVar4 = g_028a4da8;
    lVar3 = g_028a4d98;
    if (fVar7 <= 0.0) {
      if (fVar7 <= g_023b8b2c) {
        if (g_028a4da8 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_028a4db8 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (g_028a4d98 != 0) {
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
    auVar10 = blendps(auVar9,g_024215a0,0xd);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))
              (fVar7 + g_02390d00 + auVar9._0_4_,auVar10._0_8_);
  }
  if ((double)param_3 <= g_02391038) {
    if (plVar2 == (int64_t *)0x0) {
      return;
    }
  }
  else {
    uVar8 = (**(code **)(*plVar2 + 0x560))(param_4);
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_50 + 0x398))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(uVar8);
    if ((*(float *)(this_ptr + 0x23) < *(float *)((int64_t)this_ptr + 0x114) ||
         *(float *)(this_ptr + 0x23) == *(float *)((int64_t)this_ptr + 0x114)) &&
       (*(char *)((int64_t)this_ptr + 0x17c) == '\0')) {
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = (int64_t *)*arg1;
      FUN_00aea630(param_3 * *(float *)(this_ptr + 0x2a));
      local_44 = (float)FUN_00aea610();
      local_48 = 1;
      local_50 = &g_024d0b28;
      FUN_00d8cb40(local_44,&local_50);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar2 + 0x3f8))(param_4,0);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}

