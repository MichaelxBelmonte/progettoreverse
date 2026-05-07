// Function: FUN_01e4d640
// Address: 01e4d640
// Size: 1503 bytes
// Class: Unknown


undefined8 FUN_01e4d640(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar4;
  float fVar5;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  double local_48;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_027f1420;
  plVar1 = (longlong *)*param_2;
  if (DAT_027f1420 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703fb0;
  if (cVar3 != '\0') {
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_150 = *param_2;
    local_148 = '\0';
    local_140 = 0;
    local_138 = '\0';
    local_130 = 0;
    local_128 = '\0';
    (**(code **)(*unaff_RSI + 0x640))();
    (**(code **)(*local_40 + 0x3e0))();
    FUN_01f981c0(&local_140,&local_150,&local_130,3);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RSI == (longlong *)0x0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  plVar1 = (longlong *)*param_2;
  if (DAT_02703fb0 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3cb0;
  if (cVar3 != '\0') {
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_110 = *param_2;
    local_108 = '\0';
    local_100 = 0;
    local_f8 = '\0';
    local_f0 = 0;
    local_e8 = '\0';
    (**(code **)(*unaff_RSI + 0x640))();
    (**(code **)(*local_40 + 0x3e0))();
    FUN_01f981c0(&local_100,&local_110,&local_f0,1);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RSI == (longlong *)0x0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  plVar1 = (longlong *)*param_2;
  if (DAT_027f3cb0 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_a0 = *param_2;
    local_98 = '\0';
    local_90 = *param_1;
    local_88 = '\0';
    FUN_01d84870(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 == '\0') {
      return unaff_RDI;
    }
    if (local_a0 == 0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  (**(code **)(*unaff_RSI + 0x640))();
  local_48 = (double)(**(code **)(*local_40 + 1000))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*param_1;
  FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_01e4da03:
    param_1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01e4da03;
  }
  lVar2 = param_1[1];
  if (((char)lVar2 == '\0') || (*param_1 == 0)) {
    if (*param_1 == 0) {
      uVar4 = 1;
      goto LAB_01e4db32;
    }
  }
  else {
    FUN_00d50b00();
  }
  fVar5 = (float)FUN_00d459e0();
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    uVar4 = 1;
  }
  else {
    (**(code **)(*unaff_RSI + 0x640))();
    local_48 = (double)(**(code **)(*local_40 + 1000))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_48 = local_48 / DAT_023b3bc0;
    uVar4 = 0;
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_01e4db32:
  FUN_00d50b00();
  local_d0 = *param_2;
  local_c8 = '\0';
  local_c0 = 0;
  local_b8 = '\0';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_01f981c0(local_48,&local_d0,&local_b0,uVar4);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


