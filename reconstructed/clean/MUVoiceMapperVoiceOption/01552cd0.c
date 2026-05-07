// Function: FUN_01552cd0
// Address: 01552cd0
// Size: 524 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


void FUN_01552cd0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*this_ptr;
  bool bVar5;
  
  plVar4 = g_028ad170;
  if ((g_028ad170 == (int64_t *)0x0) || (g_028ad179 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad170 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (g_028ad170 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028ad170 != (int64_t *)0x0;
        g_028ad170 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028ad178 == '\0') {
        g_028ad178 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f40;
      if (g_027c6f40 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f48;
      if (g_027c6f48 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f50;
      if (g_027c6f50 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f58;
      if (g_027c6f58 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = g_028ad170;
    *(void*)(this_ptr + 1) = 0;
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_01552ec2;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01552ec2:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

