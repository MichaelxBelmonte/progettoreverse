// Function: FUN_01aeb7b0
// Address: 01aeb7b0
// Size: 1329 bytes
// Class: Unknown
// String references:
//   "%@ %@"


undefined8 * FUN_01aeb7b0(pthread_key_t param_1,undefined4 param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  bool bVar9;
  longlong local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  longlong *local_38;
  
  FUN_01ad3cb0();
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01aeb8d2;
    local_38 = local_70;
    FUN_00d50b00();
  }
  else {
    local_38 = local_70;
    if (local_70 == (longlong *)0x0) {
LAB_01aeb8d2:
      FUN_00d8ede0();
      return unaff_RDI;
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (pthread_key_t)local_38;
  }
  FUN_0173b6f0();
  plVar1 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar1;
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (pthread_key_t)local_38;
  }
  uVar4 = FUN_01740240();
  plVar1 = local_70;
  local_90 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01aeb900;
    }
LAB_01aeb95b:
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    bVar9 = false;
  }
  else {
    if (local_70 == (longlong *)0x0) goto LAB_01aeb95b;
LAB_01aeb900:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736e30();
    bVar9 = plVar1 == local_70;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_3c = 0;
  }
  pvVar2 = _pthread_getspecific(param_1);
  lVar3 = DAT_026e3bc8;
  plVar1 = local_38;
  if ((pvVar2 != (void *)0x0) &&
     (lVar5 = FUN_00e8b990(), lVar3 = DAT_026e3bc8, plVar1 = local_38, lVar5 != 0)) {
    plVar1 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  DAT_026e3bc8 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  plVar7 = &local_d0;
  local_d0 = lVar3;
  (**(code **)(*plVar1 + 0x3c8))(plVar7,param_2,&local_c0);
  plVar8 = local_70;
  plVar1 = local_88;
  pVar6 = (pthread_key_t)plVar7;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    *unaff_RDI = plVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    goto joined_r0x01aebaa4;
  }
  FUN_016ab300();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736d70();
  local_80 = local_a0;
  local_78 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  plVar1 = local_88;
  local_78 = '\x01';
  FUN_016ac280();
  local_100 = local_f8;
  FUN_00083ea0(2,&local_100);
  FUN_00d8cb40();
  plVar7 = local_b0;
  if (plVar8 == local_b0) {
LAB_01aebbd9:
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar9 = plVar8 != (longlong *)0x0;
      plVar8 = plVar7;
      if (bVar9) {
        FUN_00d50b20();
      }
      goto LAB_01aebbd9;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_a8 = '\0';
    plVar8 = local_b0;
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x01aebaa4:
  if ((char)local_3c == '\0') {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


